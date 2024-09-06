`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:00:49 11/09/2023 
// Design Name: 
// Module Name:    ALU 
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
`define calc_or 3'b000
`define calc_add 3'b001
`define calc_sub 3'b010
`define calc_lui 3'b011
module ALU(
    input [31:0] input1,
    input [31:0] input2,
    input [2:0] option,
    output reg [31:0] result
    );
	 
	 always @(*) begin
		if (option == `calc_or) begin
			result = input1 | input2;
		end else if (option == `calc_add) begin
			result = input1 + input2;
		end else if (option == `calc_sub) begin
			result = input1 - input2;
		end else if (option == `calc_lui) begin
			result = {input2[15:0], {16{1'b0}}};
		end else if (option == 3'b100) begin
			
		end else if (option == 3'b101) begin
			
		end else if (option == 3'b110) begin
			
		end else if (option == 3'b111) begin
			
		end
	 end


endmodule
