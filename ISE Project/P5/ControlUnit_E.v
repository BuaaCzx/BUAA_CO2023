`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:24:22 11/08/2023 
// Design Name: 
// Module Name:    ControlUnit_D 
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
module ControlUnit_E(
    input [5:0] option,
	 input [5:0] func,
    output [2:0] ALUoption,
    output ALUsrc, 
	 output [1:0] Tnew, 
	 output [1:0] fw_ad_op, 
	 output [1:0] fw_data_op
    );
	 
	 wire add;
    wire sub;
    wire ori;
    wire lw;
    wire sw;
    wire beq;
    wire lui;
    wire j;
    wire jal;
    wire jr;
	 
	 ControlUnitDecode _E_CUdecode(.option(option), 
											.func(func), 
											.add(add), 
											.sub(sub),
											.ori(ori), 
											.lw(lw), 
											.sw(sw), 
											.beq(beq), 
											.lui(lui), 
											.j(j), 
											.jal(jal), 
											.jr(jr));
	 
	 assign ALUoption = ori ? 3'b000 : // 或运算
								add || lw || sw ? 3'b001 : // 加法运算
								sub ? 3'b010 : // 减法运算
								lui ? 3'b011 : //加载至高位
								3'b111;
	 assign ALUsrc = lui || sw || lw || ori ? 1'b1 : 1'b0; // 为1表示imm32
	 
	 assign Tnew = add || sub || ori || lui ? 2'b01 :
						lw ? 2'b10 :
						jal ? 2'b00 :
						2'b11; // 不存在寄存器的写入操作
						
	 assign fw_ad_op = add || sub ? 2'b00 : // 写入rd
								ori || lw || lui ? 2'b01 : // 写入rt
								jal ? 2'b10 : // 写入$31
								2'b11; // 无写入
								
	 assign fw_data_op = add || sub || lui || ori ? 2'b00 : // ALU计算结果
								lw ? 2'b01 : // mem_data
								jal ? 2'b10 : // PC + 8
								2'b11; // 无

endmodule
