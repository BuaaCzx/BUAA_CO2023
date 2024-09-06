`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:27:09 10/11/2023 
// Design Name: 
// Module Name:    ext 
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
module ext(
    input [15:0] imm,
    input [1:0] EOp,
    output [31:0] ext
    );
	 wire [31:0] res0;
	 
	 assign res0 = {{16{imm[15]}}, {imm[15:0]}};
	 
	 assign ext = EOp == 2'b00 ? res0 :
						EOp == 2'b01 ? {{16{1'b0}}, imm[15:0]} :
						EOp == 2'b10 ? {imm[15:0], {16{1'b0}}} :
						{{16{imm[15]}}, imm[15:0]} << 2;


endmodule
