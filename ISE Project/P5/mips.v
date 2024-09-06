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
`define option 31:26
`define func 5:0
`define rs 25:21
`define rt 20:16
`define rd 15:11 
`define shamt 10:6
`define imm 15:0
`define instr 25:0 

//`default_nettype none

module mips(
    input clk,
    input reset
    );
	 
	 /*--------------------------取指阶段（Fetch）-------------------------*/
	 /*从指令存储器中读取指令*/
	 
	 wire [31:0] _F_NPC;
	 wire [31:0] _F_PC;
	 wire [31:0] _F_instruction;
	 
	 assign _F_NPC = frozen ? _F_NPC :
						_D_NPCop == 2'b01 && _D_cmp_result ? _F_PC + _D_offset :
						_D_NPCop == 2'b10 && _D_cmp_result ? {{_F_PC[31:28]}, {_D_instruction[`instr]}, {2{1'b0}}} :
						_D_NPCop == 2'b11 && _D_cmp_result ? _D_rs_data : 
										_F_PC + 4;
	 
	 ProgramCounter _F_PCmodule(.data_in(_F_NPC), .clk(clk), .reset(reset), .data_out(_F_PC));
	 
	 InstructionRegister _F_IM(.address(_F_PC), .data_out(_F_instruction));
	 
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
	 
	 wire frozen = frozen_rs || frozen_rt;
	 
	 /*-----------*/
	 
	 Register_D _D_RegD(.clk(clk), .reset(reset), .frozen(frozen), 
								.instruction_in(_F_instruction), .pc_in(_F_PC),
								.instruction_out(_D_instruction), .pc_out(_D_PC));
								
	 ControlUnit_D _D_CU(.option(_D_instruction[`option]), 
									.func(_D_instruction[`func]), 
									.NPCop(_D_NPCop), 
									.cmp_option(_D_cmp_option), 
									.ext_option(_D_ext_option), 
									.reg_write_enable(_D_reg_write_enable), 
									.rt_Tuse(_D_rt_Tuse), 
									.rs_Tuse(_D_rs_Tuse));
									
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
	 //考虑转发												
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
	 
	 Register_E _E_RegE(.clk(clk), .reset(reset || frozen), .instruction_in(_D_instruction), 
																	.pc_in(_D_PC), 
																	.reg_data1_in(_D_rs_data),
																	.reg_data2_in(_D_rt_data), 
																	.imm32_in(_D_imm32), 
																	.reg_write_enable_in(_D_reg_write_enable && _D_cmp_result), 
																	.pc_out(_E_PC), 
																	.instruction_out(_E_instruction), 
																	.reg_data1_out(_E_reg_read_data1),
																	.reg_data2_out(_E_reg_read_data2), 
																	.imm32_out(_E_imm32), 
																	.reg_write_enable_out(_E_reg_write_enable)
																	);
	 
	 ControlUnit_E _E_CU(.option(_E_instruction[`option]), .func(_E_instruction[`func]),
																	.ALUoption(_E_ALUoption), .ALUsrc(_E_ALUsrc),
																	.Tnew(_E_Tnew), .fw_ad_op(_E_fw_ad_op), .fw_data_op(_E_fw_data_op));
	 
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
	 
	 
	 assign _E_ALUinput2 = _E_ALUsrc == 1'b1 ? _E_imm32 : _E_rt_data;
	 
	 ALU _E_ALU(.input1(_E_rs_data), .input2(_E_ALUinput2), .option(_E_ALUoption), .result(_E_ALUresult));
	 
	 
	 
	 /*---------------------存储阶段（Memory）----------------------------*/
	 /*读或写数据存储器*/
	 
	 wire [31:0] _M_PC;
	 wire [31:0] _M_instruction;
	 wire [31:0] _M_ALUresult;
	 wire [31:0] _M_reg_read_data2;
	 wire [31:0] _M_mem_read_data;
	 wire _M_mem_write_enable;
	 wire _M_reg_write_enable;
	 
	 wire [4:0] _M_rt = _M_instruction[`rt];
	 wire [1:0] _M_Tnew;
	 wire [1:0] _M_fw_ad_op;
	 wire [4:0] _M_fw_address; // 写入的寄存器编号
	 
	 assign _M_fw_address = _M_fw_ad_op == 2'b00 ? _M_instruction[`rd] :
									_M_fw_ad_op == 2'b01 ? _M_instruction[`rt] :
									_M_fw_ad_op == 2'b10 ? 5'b11111 :
									5'b00000;
	 
	 
	 wire [1:0] _M_fw_data_op;
	 wire [31:0] _M_fw_data; // 如果可以转发，转发的数据
	 
	 assign _M_fw_data = _M_fw_data_op == 2'b00 ? _M_ALUresult :
								_M_fw_data_op == 2'b10 ? _M_PC + 8 : 
								0;
	 
	 wire [1:0] _M_fw_rt_sel = _M_rt == _W_fw_address && _M_rt != 5'd0 && _W_reg_write_enable && _W_Tnew == 2'b00 ? 2'b01 :
									2'b00;
	 wire [31:0] _M_rt_data = _M_fw_rt_sel == 2'b01 ? _W_fw_data :
									_M_reg_read_data2;
	 
	 Register_M _M_RegM(.clk(clk), .reset(reset), .pc_in(_E_PC), .instruction_in(_E_instruction), .reg_write_enable_in(_E_reg_write_enable), 
																	.ALUresult_in(_E_ALUresult), .reg_read_data2_in(_E_rt_data/*_E_rt_data*/), // ? 以前是_E_reg_read_data2，改一下试试
																	.pc_out(_M_PC), .instruction_out(_M_instruction), .reg_write_enable_out(_M_reg_write_enable), 
																	.ALUresult_out(_M_ALUresult), .reg_read_data2_out(_M_reg_read_data2));
	 
	 ControlUnit_M _M_CU(.option(_M_instruction[`option]), .func(_M_instruction[`func]), .mem_write_enable(_M_mem_write_enable), 
									.Tnew(_M_Tnew), .fw_ad_op(_M_fw_ad_op), .fw_data_op(_M_fw_data_op));
	 
	 DataMemory _M_DM(.clk(clk), .reset(reset), .PC(_M_PC), .write_enable(_M_mem_write_enable), .address(_M_ALUresult), 
																.data_in(_M_rt_data), .data_out(_M_mem_read_data));
	 
	 
	 
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
	 
	 
	 Register_W _W_RegW(.clk(clk), .reset(reset), .instruction_in(_M_instruction), .pc_in(_M_PC), 
																	.mem_data_in(_M_mem_read_data), .ALUresult_in(_M_ALUresult), 
																	.reg_write_enable_in(_M_reg_write_enable), 
																	.pc_out(_W_PC), .instruction_out(_W_instruction), .reg_write_enable_out(_W_reg_write_enable),
																	.mem_data_out(_W_mem_read_data), .ALUresult_out(_W_ALUresult));
	 
	 ControlUnit_W _W_CU(.option(_W_instruction[`option]), .func(_W_instruction[`func]), 
									.reg_write_destination(_W_reg_write_destination), 
									.reg_write_src(_W_reg_write_src), .Tnew(_W_Tnew), .fw_ad_op(_W_fw_ad_op), .fw_data_op(_W_fw_data_op));
	 
	 assign _W_reg_write_address = _W_reg_write_destination == 2'b00 ? _W_instruction[`rd] :
												_W_reg_write_destination == 2'b01 ? _W_instruction[`rt] :
												_W_reg_write_destination == 2'b10 ? 5'b11111 : 
												5'b00000;
	 
	 assign _W_reg_write_data = _W_reg_write_src == 2'b00 ? _W_ALUresult :
											_W_reg_write_src == 2'b01 ? _W_mem_read_data :
											_W_reg_write_src == 2'b10 ? _W_PC + 8 : 0;
	 

endmodule
