`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:09:00 11/08/2023 
// Design Name: 
// Module Name:    mips 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
/*
	 assign option = instruction[31:26];
	 assign func = instruction[5:0];
	 assign rs = instruction[25:21];
	 assign rt = instruction[20:16];
	 assign rd = instruction[15:11];
	 assign shamt = instruction[10:6];
	 assign immediate = instruction[15:0];
	 assign instr_index = instruction[25:0];
*/
//`default_nettype none
`define option 31:26
`define func 5:0
`define c0code 25:21
`define rs 25:21
`define rt 20:16
`define rd 15:11 
`define shamt 10:6
`define imm 15:0
`define instr 25:0 

`define Int 5'd0
// 中断请求，来源于计时器与外部中断。
`define AdEL 5'd4
`define AdES 5'd5
`define Syscall 5'd8
`define RI 5'd10
`define Ov 5'd12

//`default_nettype none

module CPU(
    input clk,
    input reset,
    input [31:0] i_inst_rdata, // i_inst_addr 对应的 32 位指令  ~
    input [31:0] m_data_rdata, // m_data_addr 对应的 32 位数据  ~
	 input [5:0] HWInt,
	 output [31:0] macroscopic_pc, 
    output [31:0] i_inst_addr, // 需要进行取指操作的流水级 PC（一般为 F 级） ~
    output [31:0] m_data_addr, // 数据存储器待写入地址  ~
    output [31:0] m_data_wdata, // 数据存储器待写入数据  ~
    output [3:0] m_data_byteen, // 字节使能信号  ~
    output [31:0] m_inst_addr, // M 级 PC  ~
    output w_grf_we, // GRF 写使能信号  ~
    output [4:0] w_grf_addr, // GRF 中待写入寄存器编号  ~
    output [31:0] w_grf_wdata, // GRF 中待写入数据  ~
    output [31:0] w_inst_addr // W 级 PC  ~
);
	 
	 /*--------------------------取指阶段（Fetch）-------------------------*/
	 /*从指令存储器中读取指令*/
	 
	 wire [31:0] _F_NPC;
	 wire [31:0] _F_PC;
	 wire [31:0] _F_instruction;
	 
	 assign _F_NPC = Req ? 32'h4180 : 
						frozen ? _F_NPC : /*优先级？*/
						_D_eret ? _M_EPC: 
						_D_NPCop == 2'b01 && _D_cmp_result ? _F_PC + _D_offset :
						_D_NPCop == 2'b10 && _D_cmp_result ? {{_F_PC[31:28]}, {_D_instruction[`instr]}, {2{1'b0}}} :
						_D_NPCop == 2'b11 && _D_cmp_result ? _D_rs_data : 
										_F_PC + 4;
	 
	 ProgramCounter _F_PCmodule(.data_in(_F_NPC), .clk(clk), .reset(reset), .data_out(_F_PC));
	 
	 //InstructionRegister _F_IM(.address(_F_PC), .data_out(_F_instruction));
	 
	 assign i_inst_addr = _F_PC;
	 
	 assign _F_instruction = i_inst_rdata === 32'hx || _F_exc_PC ? 0 : i_inst_rdata; // 异常，则插入nop
	 
	 // ................异常.................
	 
	 wire _F_exc_PC = _F_PC[1:0] != 2'b00 || _F_PC <  32'h3000 || _F_PC > 32'h6ffc;
	 
	 wire [4:0] _F_exc_code;
	 assign _F_exc_code = _F_exc_PC ? `AdEL : 5'd31;
	 wire _F_BD = _D_BDinst;
	 
	 /*---------------------译码阶段（Decode）----------------------------*/
	 /*从寄存器文件中读取源操作数*/
	 
	 wire [31:0] _D_instruction;
	 wire [31:0] _D_PC;
	 wire [1:0] _D_NPCop;
	 wire [2:0] _D_cmp_option;
	 wire _D_ext_option;
	 wire [31:0] _D_offset;
	 wire [31:0] _D_imm32;
	 wire [15:0] _D_imm16 = _D_instruction[`imm];
	 wire _D_reg_write_enable;
	 wire [31:0] _D_reg_read_data1; // rs
	 wire [31:0] _D_reg_read_data2; // rt
	 wire _D_cmp_result;
	 
	 
	 wire [4:0] _D_rt = _D_instruction[`rt];
	 wire [4:0] _D_rs = _D_instruction[`rs];
	 wire [1:0] _D_rt_Tuse;
	 wire [1:0] _D_rs_Tuse;
	 wire _D_mult_div;
	 
	 /*暂停信号的考虑*/
	 
	 // 考虑rs是否产生冒险
	 // ex. rsTuse = 0, ETnew = 2
	 wire frozen_rs0_E2 = _D_rs_Tuse == 2'b00 && _E_Tnew == 2'b10 && _D_rs == _E_fw_address && _D_rs != 0 && _E_reg_write_enable;
	 wire frozen_rs0_E1 = _D_rs_Tuse == 2'b00 && _E_Tnew == 2'b01 && _D_rs == _E_fw_address && _D_rs != 0 && _E_reg_write_enable;
	 wire frozen_rs0_M1 = _D_rs_Tuse == 2'b00 && _M_Tnew == 2'b01 && _D_rs == _M_fw_address && _D_rs != 0 && _M_reg_write_enable;
	 wire frozen_rs1_E2 = _D_rs_Tuse == 2'b01 && _E_Tnew == 2'b10 && _D_rs == _E_fw_address && _D_rs != 0 && _E_reg_write_enable;
	 
	 wire frozen_rs = frozen_rs0_E2 || frozen_rs0_E1 || frozen_rs0_M1 || frozen_rs1_E2;
	 
	 // 考虑rt是否产生冒险
	 // ex. rtTuse = 0, ETnew = 2
	 wire frozen_rt0_E2 = _D_rt_Tuse == 2'b00 && _E_Tnew == 2'b10 && _D_rt == _E_fw_address && _D_rt != 0 && _E_reg_write_enable;
	 wire frozen_rt0_E1 = _D_rt_Tuse == 2'b00 && _E_Tnew == 2'b01 && _D_rt == _E_fw_address && _D_rt != 0 && _E_reg_write_enable;
	 wire frozen_rt0_M1 = _D_rt_Tuse == 2'b00 && _M_Tnew == 2'b01 && _D_rt == _M_fw_address && _D_rt != 0 && _M_reg_write_enable;
	 wire frozen_rt1_E2 = _D_rt_Tuse == 2'b01 && _E_Tnew == 2'b10 && _D_rt == _E_fw_address && _D_rt != 0 && _E_reg_write_enable;
	 
	 wire frozen_rt = frozen_rt0_E2 || frozen_rt0_E1 || frozen_rt0_M1 || frozen_rt1_E2;
	 
	 // 考虑乘除单元
	 
	 wire frozen_mult_div = _D_mult_div && (_E_busy != 0 || _E_start != 0);
	 
	 wire frozen = frozen_rs || frozen_rt || frozen_mult_div || (_D_eret && (_E_mtc0 || _M_mtc0));
	 
	 /*-----------*/
	 
	 wire _D_eret;
	 wire _D_BDinst;
	 
	 Register_D _D_RegD(.clk(clk), .reset(Req || reset || (_D_eret && !frozen)), .frozen(frozen), 
								.instruction_in(/*_D_eret ? 0 : */_F_instruction), .pc_in(/*_D_eret ? 0 : */_F_PC), .exc_code_in(_F_exc_code), .BD_in(_F_BD), 
								.instruction_out(_D_instruction), .pc_out(_D_PC), .exc_code_out(_D_reg_exc_code), .BD_out(_D_BD));
								
	 ControlUnit_D _D_CU(.option(_D_instruction[`option]), 
									.func(_D_instruction[`func]), 
									.c0code(_D_instruction[`c0code]), 
									.NPCop(_D_NPCop), 
									.cmp_option(_D_cmp_option), 
									.ext_option(_D_ext_option), 
									.reg_write_enable(_D_reg_write_enable), 
									.rt_Tuse(_D_rt_Tuse), 
									.rs_Tuse(_D_rs_Tuse), 
									.mult_div(_D_mult_div), 
									.eret_out(_D_eret), 
									.BDinst_out(_D_BDinst), 
									.syscall_out(_D_syscall), 
									.ri_out(_D_ri));
									
	 assign _D_imm32 = _D_ext_option ? {{16{_D_imm16[15]}}, _D_imm16} : {{16{1'b0}}, _D_imm16};
	 
	 assign _D_offset = {{14{_D_imm16[15]}}, _D_imm16, {2{1'b0}}}; 
	 
	 GRF _GRF(.clk(clk), .reset(reset), .read_address1(_D_instruction[`rs]), 
													.read_address2(_D_instruction[`rt]), 
													.read_data1(_D_reg_read_data1), 
													.read_data2(_D_reg_read_data2), 
													.PC(_W_PC), 
													.write_address(_W_reg_write_address), 
													.write_data(_W_reg_write_data), 
													.write_enable(_W_reg_write_enable));
	 
	 assign w_grf_we = _W_reg_write_enable;
	 assign w_grf_addr = _W_reg_write_address;
	 assign w_grf_wdata = _W_reg_write_data;
	 assign w_inst_addr = _W_PC;
	 
	 //............异常............
	 
	 wire _D_syscall;
	 wire _D_ri;
	 wire _D_BD;
	 wire [4:0] _D_reg_exc_code; // 从 D 寄存器中读出来的 exc_code
	 wire [4:0] _D_exc_code;
	 
	 
	 assign _D_exc_code = _D_reg_exc_code != 5'd31 ? _D_reg_exc_code :
									_D_syscall ? `Syscall :
									_D_ri ? `RI : 5'd31;
	 

	 //---------------考虑转发----------------	
	 
	 wire [1:0] _D_fw_rs_sel = _D_rs == _E_fw_address && _D_rs != 5'd0 && _E_reg_write_enable && _E_Tnew == 2'b00 ? 2'b11 :
									_D_rs == _M_fw_address && _D_rs != 5'd0 && _M_reg_write_enable && _M_Tnew == 2'b00 ? 2'b10 :
									_D_rs == _W_fw_address && _D_rs != 5'd0 && _W_reg_write_enable && _W_Tnew == 2'b00 ? 2'b01 :
									2'b00;
	 wire [31:0] _D_rs_data = _D_fw_rs_sel == 2'b11 ? _E_fw_data :
									_D_fw_rs_sel == 2'b10 ? _M_fw_data :
									_D_fw_rs_sel == 2'b01 ? _W_fw_data :
									_D_reg_read_data1;
									
	 wire [1:0] _D_fw_rt_sel = _D_rt == _E_fw_address && _D_rt != 5'd0 && _E_reg_write_enable && _E_Tnew == 2'b00 ? 2'b11 :
									_D_rt == _M_fw_address && _D_rt != 5'd0 && _M_reg_write_enable && _M_Tnew == 2'b00 ? 2'b10 :
									_D_rt == _W_fw_address && _D_rt != 5'd0 && _W_reg_write_enable && _W_Tnew == 2'b00 ? 2'b01 :
									2'b00;
	 wire [31:0] _D_rt_data = _D_fw_rt_sel == 2'b11 ? _E_fw_data :
									_D_fw_rt_sel == 2'b10 ? _M_fw_data :
									_D_fw_rt_sel == 2'b01 ? _W_fw_data :
									_D_reg_read_data2;
	 
	 //--------------------------------------
	 
	 CMP _D_CMP(.input1(_D_rs_data), .input2(_D_rt_data), .option(_D_cmp_option), .res(_D_cmp_result));
								
								
								
	 
	 
	 /*---------------------执行阶段（Execute）----------------------------*/
	 /*使用 ALU 执行计算*/
	 
	 wire [31:0] _E_instruction;
	 wire [31:0] _E_PC;
	 wire [31:0] _E_imm32;
	 wire [31:0] _E_reg_read_data1;
	 wire [31:0] _E_reg_read_data2;
	 wire _E_reg_write_enable;
	 wire [2:0] _E_ALUoption;
	 wire _E_ALUsrc;
	 wire [31:0] _E_ALUinput2;
	 wire [31:0] _E_ALUresult;
	 wire [2:0] _E_start;
	 wire [3:0] _E_busy;
	 wire [31:0] _E_MDresult;
	 wire _E_MDaddress;
	 wire _E_ALUresult_src;
	 wire _E_MDwrite_enable;
	 
	 wire _E_mtc0;
	 
	 wire [4:0] _E_rs = _E_instruction[`rs];
	 wire [4:0] _E_rt = _E_instruction[`rt];
	 
	 wire [1:0] _E_Tnew;
	 wire [1:0] _E_fw_ad_op;
	 wire [4:0] _E_fw_address; // 写入的寄存器编号
	 
	 assign _E_fw_address = _E_fw_ad_op == 2'b00 ? _E_instruction[`rd] :
									_E_fw_ad_op == 2'b01 ? _E_instruction[`rt] :
									_E_fw_ad_op == 2'b10 ? 5'b11111 :
									5'b00000;
	 
	 wire [1:0] _E_fw_data_op;
	 wire [31:0] _E_fw_data; // 如果可以转发，转发的数据
	 
	 assign _E_fw_data = _E_PC + 8; // E 级流水线可供转发的数据仅有 PC + 8
	 
	 Register_E _E_RegE(.clk(clk), .reset(reset || Req), .instruction_in(frozen ? 0 : _D_instruction), 
																	.pc_in(_D_PC), 
																	.reg_data1_in(frozen ? 0 : _D_rs_data),
																	.reg_data2_in(frozen ? 0 : _D_rt_data), 
																	.imm32_in(frozen ? 0 : _D_imm32), 
																	.reg_write_enable_in(frozen ? 0 : (_D_reg_write_enable && _D_cmp_result)), 
																	.exc_code_in(frozen ? 5'd31 : _D_exc_code), 
																	.BD_in(_D_BD), 
																	.pc_out(_E_PC), 
																	.instruction_out(_E_instruction), 
																	.reg_data1_out(_E_reg_read_data1),
																	.reg_data2_out(_E_reg_read_data2), 
																	.imm32_out(_E_imm32), 
																	.reg_write_enable_out(_E_reg_write_enable), 
																	.exc_code_out(_E_reg_exc_code), 
																	.BD_out(_E_BD)
																	);
	 
	 ControlUnit_E _E_CU(.option(_E_instruction[`option]), .func(_E_instruction[`func]), .c0code(_E_instruction[`c0code]), 
																	.ALUoption(_E_ALUoption), .ALUsrc(_E_ALUsrc), .start(_E_start), 
																	.Tnew(_E_Tnew), .fw_ad_op(_E_fw_ad_op), .fw_data_op(_E_fw_data_op), 
																	.calc_result_src(_E_ALUresult_src), .MDaddress(_E_MDaddress), 
																	.MD_write_enable(_E_MDwrite_enable), 
																	.load_out(_E_load), .store_out(_E_store), .add_addi_sub_out(_E_add_addi_sub), 
																	.mtc0_out(_E_mtc0));
																	

	 
	 //-------------考虑转发-----------------
	 wire [1:0] _E_fw_rs_sel = _E_rs == _M_fw_address && _E_rs != 5'd0 && _M_reg_write_enable && _M_Tnew == 2'b00 ? 2'b10 :
									_E_rs == _W_fw_address && _E_rs != 5'd0 && _W_reg_write_enable && _W_Tnew == 2'b00 ? 2'b01 :
									2'b00;
	 wire [31:0] _E_rs_data = _E_fw_rs_sel == 2'b10 ? _M_fw_data :
									_E_fw_rs_sel == 2'b01 ? _W_fw_data :
									_E_reg_read_data1;
									
	 wire [1:0] _E_fw_rt_sel = _E_rt == _M_fw_address && _E_rt != 5'd0 && _M_reg_write_enable && _M_Tnew == 2'b00 ? 2'b10 :
									_E_rt == _W_fw_address && _E_rt != 5'd0 && _W_reg_write_enable && _W_Tnew == 2'b00 ? 2'b01 :
									2'b00;
	 wire [31:0] _E_rt_data = _E_fw_rt_sel == 2'b10 ? _M_fw_data :
									_E_fw_rt_sel == 2'b01 ? _W_fw_data :
									_E_reg_read_data2;
	 
	 //-------------------------------------
	 
	 
	 assign _E_ALUinput2 = _E_ALUsrc == 1'b1 ? _E_imm32 : _E_rt_data;
	 
	 ALU _E_ALU(.input1(_E_rs_data), .input2(_E_ALUinput2), .option(_E_ALUoption), .result(_E_ALUresult), .overflow(_E_overflow));
	 
	 wire [2:0] _E_start_plus;
	 assign _E_start_plus = _E_start & {3{~Req}};
	 
	 MultDiv _E_MD(.clk(clk), .reset(reset), .start(_E_start_plus), .input1(_E_rs_data), .input2(_E_rt_data), .busy(_E_busy), 
							.data_out(_E_MDresult), .data_in(_E_rs_data), .address(_E_MDaddress), .write_enable(_E_MDwrite_enable));
							
	 wire [31:0] _E_calc_result = _E_ALUresult_src ? _E_MDresult : _E_ALUresult;
	 
	 //............异常.............
	 
	 wire _E_BD;
	 wire [4:0] _E_reg_exc_code;
	 wire [4:0] _E_exc_code;
	 wire _E_overflow;
	 wire _E_load;
	 wire _E_store;
	 wire _E_add_addi_sub;
	 
	 assign _E_exc_code = _E_reg_exc_code != 5'd31 ? _E_reg_exc_code :
									_E_overflow && _E_load ? `AdEL : 
									_E_overflow && _E_store ? `AdES :
									_E_overflow && _E_add_addi_sub ? `Ov : 5'd31;
	 
	 
	 
	 
	 /*---------------------存储阶段（Memory）----------------------------*/
	 /*读或写数据存储器*/
	 
	 wire [31:0] _M_PC;
	 wire [31:0] _M_instruction;
	 wire [31:0] _M_ALUresult;
	 wire [31:0] _M_reg_read_data2;
	 wire [31:0] _M_mem_read_data;
	 wire [2:0] _M_mem_write_op;
	 wire [2:0] _M_mem_load_op;
	 wire _M_reg_write_enable;
	 
	 wire [4:0] _M_rt = _M_instruction[`rt];
	 wire [1:0] _M_Tnew;
	 wire [1:0] _M_fw_ad_op;
	 wire [4:0] _M_fw_address; // 写入的寄存器编号
	 wire _M_mfc0;
	 wire _M_mtc0;
	 wire [31:0] _M_CP0_out;
	 wire [31:0] _M_EPC;
	 wire Req;
	 wire _M_eret;
	 
	 assign _M_fw_address = _M_fw_ad_op == 2'b00 ? _M_instruction[`rd] :
									_M_fw_ad_op == 2'b01 ? _M_instruction[`rt] :
									_M_fw_ad_op == 2'b10 ? 5'b11111 :
									5'b00000;
	 
	 
	 wire [1:0] _M_fw_data_op;
	 wire [31:0] _M_fw_data; // 如果可以转发，转发的数据
	 
	 assign _M_fw_data = _M_fw_data_op == 2'b00 ? _M_ALUresult :
								_M_fw_data_op == 2'b10 ? _M_PC + 8 : 
								0;
	 //-------------考虑转发------------------
	 
	 wire [1:0] _M_fw_rt_sel = _M_rt == _W_fw_address && _M_rt != 5'd0 && _W_reg_write_enable && _W_Tnew == 2'b00 ? 2'b01 :
									2'b00;
	 wire [31:0] _M_rt_data = _M_fw_rt_sel == 2'b01 ? _W_fw_data :
									_M_reg_read_data2;
									
	 //--------------------------------------
	 
	 Register_M _M_RegM(.clk(clk), .reset(reset || Req), .pc_in(_E_PC), .instruction_in(_E_instruction), .reg_write_enable_in(_E_reg_write_enable), 
																	.ALUresult_in(_E_calc_result), .reg_read_data2_in(_E_rt_data/*_E_rt_data*/), // ? 以前是_E_reg_read_data2，改一下试试
																	.pc_out(_M_PC), .instruction_out(_M_instruction), .reg_write_enable_out(_M_reg_write_enable), 
																	.ALUresult_out(_M_ALUresult), .reg_read_data2_out(_M_reg_read_data2), 
																	.exc_code_in(_E_exc_code), .BD_in(_E_BD), .exc_code_out(_M_reg_exc_code), .BD_out(_M_BD));
	 
	 ControlUnit_M _M_CU(.option(_M_instruction[`option]), .func(_M_instruction[`func]), .c0code(_M_instruction[`c0code]), .mem_write_op(_M_mem_write_op), 
									.Tnew(_M_Tnew), .fw_ad_op(_M_fw_ad_op), .fw_data_op(_M_fw_data_op), .mem_load_op(_M_mem_load_op), 
									.mfc0_out(_M_mfc0), .mtc0_out(_M_mtc0), .eret_out(_M_eret));
	 
	 wire [3:0] _M_m_data_byteen;
	 assign m_data_byteen = Req ? 0 : _M_m_data_byteen; 
	 
	 ByteExtendForStore _M_BES(.inst_op(_M_mem_write_op), .addr_low2bit(_M_ALUresult[1:0]), .data_byteen(_M_m_data_byteen), 
											.data_in(_M_rt_data), .data_out(m_data_wdata));
	 
	 ByteExtendForLoad _M_BEL(.addr_low2bit(_M_ALUresult[1:0]), .data_in(m_data_rdata), .option(_M_mem_load_op), .data_out(_M_mem_read_data));
	 
//	 DataMemory _M_DM(.clk(clk), .reset(reset), .PC(_M_PC), .write_enable(_M_mem_write_enable), .address(_M_ALUresult), 
//																.data_in(_M_rt_data), .data_out(_M_mem_read_data));
	 
	 
	 CP0 _M_CP0(.clk(clk), .reset(reset), .write_enable(_M_mtc0), .CP0_address(_M_instruction[`rd]),
						.CP0_in(_M_rt_data), .CP0_out(_M_CP0_out), .VPC(_M_PC), .BDIn(_M_BD), .ExcCodeIn(_M_exc_code), 
						.HWInt(HWInt), .EXLClr(_M_eret), .EPCOut(_M_EPC), .Req(Req));
	 
	 assign m_data_addr = _M_ALUresult;
	 assign m_inst_addr = _M_PC;
	 
	 wire [31:0] _M_mem_data; // 进入流水寄存器的那个（选择一下是 cp0 还是 mem_read_data）
	 assign _M_mem_data = _M_mfc0 ? _M_CP0_out : _M_mem_read_data;
	 
	 //...........异常............
	 
	 wire [4:0] _M_reg_exc_code;
	 wire [4:0] _M_exc_code;
	 wire _M_BD;
	 
	 wire _M_out_of_range;
	 
	 assign macroscopic_pc = _M_PC;
	 
	 assign _M_out_of_range = !((_M_ALUresult >= 32'h0 && _M_ALUresult <= 32'h2fff) || (_M_ALUresult >= 32'h7f00 && _M_ALUresult <= 32'h7f0b) || (_M_ALUresult >= 32'h7f10 && _M_ALUresult <= 32'h7f1b) || (_M_ALUresult >= 32'h7f20 && _M_ALUresult <= 32'h7f23));
	 
	 assign _M_exc_code = _M_reg_exc_code != 5'd31 ? _M_reg_exc_code : 
									(_M_mem_write_op == 3'b010 && _M_ALUresult[0] != 1'b0) ||
									(_M_mem_write_op == 3'b011 && _M_ALUresult[1:0] != 2'b00) ||
									((_M_mem_write_op == 3'b001 || _M_mem_write_op == 3'b010) && ((_M_ALUresult >= 32'h7f00 && _M_ALUresult <= 32'h7f0b) || (_M_ALUresult >= 32'h7f10 && _M_ALUresult <= 32'h7f1b))) ||
									(_M_mem_write_op != 3'b000 && (_M_out_of_range || (_M_ALUresult >= 32'h7f08 && _M_ALUresult <= 32'h7f0b) || (_M_ALUresult >= 32'h7f18 && _M_ALUresult <= 32'h7f1b))) ? `AdES :
									(_M_mem_load_op == 3'b100 && _M_ALUresult[0] != 1'b0) ||
									(_M_mem_load_op == 3'b000 && _M_ALUresult[1:0] != 2'b00) ||
									((_M_mem_load_op == 3'b100 || _M_mem_load_op == 3'b010) && ((_M_ALUresult >= 32'h7f00 && _M_ALUresult <= 32'h7f0b) || (_M_ALUresult >= 32'h7f10 && _M_ALUresult <= 32'h7f1b))) ||
									(_M_mem_load_op != 3'b111 && _M_out_of_range) ? `AdEL : 5'd31;
	 
	 
	 
	 /*---------------------写回阶段（Writeback）----------------------------*/
	 /*将结果写回到寄存器文件*/
	 
	 wire [31:0] _W_PC;
	 wire [31:0] _W_instruction;
	 wire [31:0] _W_mem_read_data;
	 wire [31:0] _W_ALUresult;
	 wire [1:0] _W_reg_write_destination;
	 wire _W_reg_write_enable;
	 wire [1:0] _W_reg_write_src;
	 
	 wire [4:0] _W_reg_write_address;
	 wire [31:0] _W_reg_write_data;
	 
	 wire [1:0] _W_Tnew;
	 wire [1:0] _W_fw_ad_op;
	 wire [4:0] _W_fw_address; // 写入的寄存器编号
	 
	 assign _W_fw_address = _W_fw_ad_op == 2'b00 ? _W_instruction[`rd] :
									_W_fw_ad_op == 2'b01 ? _W_instruction[`rt] :
									_W_fw_ad_op == 2'b10 ? 5'b11111 :
									5'b00000;
	 
	 wire [1:0] _W_fw_data_op;
	 wire [31:0] _W_fw_data; // 如果可以转发，转发的数据
	 
	 assign _W_fw_data = _W_fw_data_op == 2'b00 ? _W_ALUresult : 
								_W_fw_data_op == 2'b01 ? _W_mem_read_data : 
								_W_fw_data_op == 2'b10 ? _W_PC + 8 : 
								0;
	 
	 
	 Register_W _W_RegW(.clk(clk), .reset(reset || Req), .instruction_in(_M_instruction), .pc_in(_M_PC), 
																	.mem_data_in(_M_mem_data), .ALUresult_in(_M_ALUresult), 
																	.reg_write_enable_in(_M_reg_write_enable), 
																	.pc_out(_W_PC), .instruction_out(_W_instruction), .reg_write_enable_out(_W_reg_write_enable),
																	.mem_data_out(_W_mem_read_data), .ALUresult_out(_W_ALUresult));
	 
	 ControlUnit_W _W_CU(.option(_W_instruction[`option]), .func(_W_instruction[`func]), .c0code(_W_instruction[`c0code]), 
									.reg_write_destination(_W_reg_write_destination), 
									.reg_write_src(_W_reg_write_src), .Tnew(_W_Tnew), .fw_ad_op(_W_fw_ad_op), .fw_data_op(_W_fw_data_op));
	 
	 assign _W_reg_write_address = _W_reg_write_destination == 2'b00 ? _W_instruction[`rd] :
												_W_reg_write_destination == 2'b01 ? _W_instruction[`rt] :
												_W_reg_write_destination == 2'b10 ? 5'b11111 : 
												5'b00000;
	 
	 assign _W_reg_write_data = _W_reg_write_src == 2'b00 ? _W_ALUresult :
											_W_reg_write_src == 2'b01 ? _W_mem_read_data :
											_W_reg_write_src == 2'b10 ? _W_PC + 8 : 0;
	 
	 
/*	 always @(*) begin
		if (i_inst_addr == 32'h3018) begin
			//$display("%d@%h: *$%h <= %h", $time, i_inst_addr, 31, i_inst_rdata);
			$display("%d@%h: $%d <= %h", $time, i_inst_addr, 5'd31, i_inst_rdata);
		end
	 end*/

endmodule
