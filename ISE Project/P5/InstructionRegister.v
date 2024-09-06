`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:39:57 11/01/2023 
// Design Name: 
// Module Name:    InstructionRegister 
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
module InstructionRegister(
    input [31:0] address,
    output [31:0] data_out
    );
	 
	 reg [31:0] mem [0:4095];
	 
	 initial begin
		$readmemh("code.txt", mem); 
	 end
	 
	 wire [31:0] addr;
	 wire [11:0] index;
	 
	 assign addr = address - 32'h00003000;
	 assign index = addr[13:2];
	 
	 assign data_out = mem[index];


endmodule
