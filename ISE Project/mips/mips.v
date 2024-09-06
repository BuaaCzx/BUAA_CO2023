`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:22:40 11/01/2023 
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
module mips(
    input clk,
    input reset
    );
	 
	 wire [31:0] PC;
	 wire [31:0] NPC;
	 
	 wire [31:0] instruction;
	 wire [5:0] option;
	 wire [5:0] func;
	 wire [4:0] rs;
	 wire [4:0] rt;
	 wire [4:0] rd;
	 wire [4:0] shamt;
	 wire [15:0] immediate;
	 wire [25:0] instr_index;
	 
	 wire [1:0] reg_write_src;
    wire mem_write_enable;
    wire [2:0] ALUoption;
    wire ALUsrc;
    wire [1:0] reg_destination;
    wire reg_write_enable;
	 wire reg_write_lock;
    wire imm_extend_op;
    wire [1:0] jump;
	 
	 assign option = instruction[31:26];
	 assign func = instruction[5:0];
	 assign rs = instruction[25:21];
	 assign rt = instruction[20:16];
	 assign rd = instruction[15:11];
	 assign shamt = instruction[10:6];
	 assign immediate = instruction[15:0];
	 assign instr_index = instruction[25:0];
	 
	 wire [31:0] offset;
	 assign offset = {{14{immediate[15]}}, immediate, {2{1'b0}}};
	 
	 assign NPC = jump == 2'b01 && ALU_cmp ? PC + 4 + offset : // branch
						jump == 2'b10 && ALU_cmp ? {{PC[31:28]}, {instr_index}, {2{1'b0}}} : // j
						jump == 2'b11 && ALU_cmp ? GRF_read_data1 : PC + 4; // jr
	 
	 ProgramCounter _PC(.data_in(NPC), .clk(clk), .reset(reset), .data_out(PC));
	 
	 InstructionRegister _IM(.address(PC), .out(instruction));
	 
	 ControlUnit _CU(.option(option), .func(func), .reg_write_src(reg_write_src),
														.mem_write_enable(mem_write_enable), .ALUoption(ALUoption), 
														.ALUsrc(ALUsrc), .reg_destination(reg_destination), .reg_write_enable(reg_write_enable), 
														.imm_extend_op(imm_extend_op), .jump(jump));
	 
	 wire [31:0] GRF_read_data1;
	 wire [31:0] GRF_read_data2;
	 wire [4:0] write_address;
	 wire [31:0] write_data;
	 
	 assign write_address = reg_destination == 2'b00 ? rd :
									reg_destination == 2'b01 ? rt :
									5'h1f; // $ra
	 assign write_data = reg_write_src == 2'b00 ? ALU_calc : // 计算结果
								reg_write_src == 2'b01 ? mem_read_data : // 内存中取出的数据
								reg_write_src == 2'b10 ? PC + 4 : 0; // 下一条指令的位置
	 assign reg_write_lock = jump != 2'b00 && !ALU_cmp; // 是分支跳转语句，且不满足条件，则锁住写入功能
	 
	 GRF _GRF(.PC(PC), .reset(reset), .clk(clk), .read_address1(rs), .read_address2(rt),
															.write_address(write_address), .read_data1(GRF_read_data1), .read_data2(GRF_read_data2), 
															.write_data(write_data), .write_enable(reg_write_enable), .write_lock(reg_write_lock));
															
	 wire [31:0] ALU_input2;
	 wire [31:0] ALU_calc;
	 wire ALU_cmp;
	 wire [31:0] extend_immediate;
	 
	 assign extend_immediate = imm_extend_op == 1'b0 ? {{16{1'b0}}, immediate} : {{16{immediate[15]}}, immediate}; // 对立即数（偏移量）进行拓展
	 
	 assign ALU_input2 = ALUsrc == 1'b0 ? GRF_read_data2 : extend_immediate; // 第二个运算数为 rt 还是立即数
	 
	 ALU _ALU(.input1(GRF_read_data1), .input2(ALU_input2), .ALUop(ALUoption), .output_calc(ALU_calc), .output_cmp(ALU_cmp));
	 
	 wire [31:0] mem_read_data;
	 
	 DataMemory _DM(.PC(PC), .clk(clk), .reset(reset), .write_enable(mem_write_enable), .address(ALU_calc), 
													.data_in(GRF_read_data2), .data_out(mem_read_data));


endmodule
