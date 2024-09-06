`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:42:32 11/09/2023 
// Design Name: 
// Module Name:    ControlUnit_W 
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
module ControlUnit_W(
    input [5:0] option,
    input [5:0] func,
    output [1:0] reg_write_destination,
    output [1:0] reg_write_src, 
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
	 
	 assign reg_write_destination = add || sub ? 2'b00 :
												ori || lw || lui ? 2'b01 : 
												jal ? 2'b10 :
												2'b11;
	 
	 assign reg_write_src = add || sub || ori || lui ? 2'b00 : // ALUresult
									lw ? 2'b01 : // mem_data
									jal ? 2'b10 : // PC + 8
									2'b11;
									
	 assign Tnew = add || sub || ori || lw || lui || jal ? 2'b00 : 2'b11;									

	 assign fw_ad_op = add || sub ? 2'b00 : // 写入rd
								ori || lw || lui ? 2'b01 : // 写入rt
								jal ? 2'b10 : // 写入$31
								2'b11; // 无写入
					
	 assign fw_data_op = add || sub || lui || ori ? 2'b00 : // ALU计算结果
								lw ? 2'b01 : // mem_data
								jal ? 2'b10 : // PC + 8
								2'b11; // 无

endmodule
