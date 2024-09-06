`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:03:01 11/08/2023 
// Design Name: 
// Module Name:    ControlUnitDecode 
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
module ControlUnitDecode(
    input [5:0] option,
    input [5:0] func,
    output add,
    output sub,
    output ori,
    output lw,
    output sw,
    output beq,
    output lui,
    output jal,
    output jr,
	 output j
    );
	 
	 assign add = option == 6'b000000 && func == 6'b100000;
	 assign sub = option == 6'b000000 && func == 6'b100010;
	 assign ori = option == 6'b001101;
	 assign lw = option == 6'b100011;
	 assign sw = option == 6'b101011;
	 assign beq = option == 6'b000100;
	 assign lui = option == 6'b001111;
	 assign j = option == 6'b000010;
	 assign jal = option == 6'b000011;
	 assign jr = option == 6'b000000 && func == 6'b001000;

endmodule
