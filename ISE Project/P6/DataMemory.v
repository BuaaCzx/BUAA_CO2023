`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:39:47 11/01/2023 
// Design Name: 
// Module Name:    DataMemory 
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
module DataMemory(
	 input [31:0] PC,
    input clk,
    input reset,
    input write_enable,
    input [31:0] address,
    input [31:0] data_in,
    output [31:0] data_out
    );
	 
	 reg [31:0] memory [0:4095];
	 reg [31:0] i;
	 
	 wire [11:0] index;
	 
	 assign index = address[13:2];
	 
	 always @(posedge clk) begin
		if (reset) begin
			for (i = 0; i <= 4095; i = i + 1) begin
				memory[i] <= 0;
			end
		end else begin
			if (write_enable) begin
				memory[index] <= data_in;
				//$display("%d@%h: *%h <= %h", $time, PC, address, data_in);
				$display("@%h: *%h <= %h", PC, address, data_in);
			end
		end
	 end
	 
	 assign data_out = memory[index];


endmodule
