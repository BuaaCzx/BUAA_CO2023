`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:24:43 11/01/2023 
// Design Name: 
// Module Name:    ProgramCounter 
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
module ProgramCounter(
    input [31:0] data_in,
    input clk,
    input reset,
    output [31:0] data_out
    );
	 
	 reg [31:0] pc;
	 
	 initial begin
		pc <= 32'h00003000;
	 end
	 
	 always @(posedge clk) begin
		if (reset) begin
			pc <= 32'h00003000;
		end else begin
			pc <= data_in;
		end
	 end
	 
	 assign data_out = pc;


endmodule
