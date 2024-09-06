`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:26:44 11/08/2023 
// Design Name: 
// Module Name:    CMP 
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
`define false 3'b000
`define equal 3'b001
`define true 3'b111
module CMP(
    input [31:0] input1,
    input [31:0] input2,
    input [2:0] option,
    output reg res
    );
	 
	 initial begin
		res = 1'b1;
	 end
	 
	 always @(*) begin
		if (option == `false) begin
			res = 1'b0;
		end else if (option == `equal) begin
			res = input1 == input2;
		end else if (option == 3'b010) begin
			
		end else if (option == 3'b011) begin
			
		end else if (option == 3'b100) begin
			
		end else if (option == 3'b101) begin
			
		end else if (option == 3'b110) begin
			
		end else if (option == `true) begin
			res = 1'b1;
		end
	 end


endmodule
