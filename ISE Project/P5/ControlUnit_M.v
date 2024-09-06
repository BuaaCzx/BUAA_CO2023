`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:22:25 11/09/2023 
// Design Name: 
// Module Name:    ControlUnit_M 
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
module ControlUnit_M(
    input [5:0] option,
	 input [5:0] func,
    output mem_write_enable, 
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
	 
	 ControlUnitDecode _M_CUdecode(.option(option), 
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
	 
	 assign mem_write_enable = sw;
	 
	 assign Tnew = add || sub || ori || lui || jal ? 2'b00 :
						lw ? 2'b01 :
						2'b11;
	 
	 assign fw_ad_op = add || sub ? 2'b00 : // 写入rd
								ori || lw || lui ? 2'b01 : // 写入rt
								jal ? 2'b10 : // 写入$31
								2'b11; // 无写入
	
	 assign fw_data_op = add || sub || lui || ori ? 2'b00 : // ALU计算结果
								lw ? 2'b01 : // mem_data
								jal ? 2'b10 : // PC + 8
								2'b11; // 无


endmodule
