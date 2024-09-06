`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:16:29 11/08/2023 
// Design Name: 
// Module Name:    RegisterD 
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
module Register_D(
    input clk,
    input reset,
	 input frozen,
    input [31:0] instruction_in,
    input [31:0] pc_in,
    output [31:0] instruction_out,
    output [31:0] pc_out
    );
	 
	 reg [31:0] instruction;
	 reg [31:0] pc;
	 
	 initial begin
		instruction <= 0;
		pc <= 0;
	 end
	 
	 always @(posedge clk) begin
		if (reset) begin
			instruction <= 0;
			pc <= 0;
		end else if (!frozen) begin
			instruction <= instruction_in;
			pc <= pc_in;
		end
	 end
	 
	 assign instruction_out = instruction;
	 assign pc_out = pc;


endmodule
