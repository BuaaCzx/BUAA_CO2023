`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:19:03 10/15/2023 
// Design Name: 
// Module Name:    FloatType 
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
module FloatType(
    input [31:0] num,
    output [4:0] float_type
    );
	 wire [22:0] weishu;
	 wire [7:0] jiema;
	 
	 assign weishu = num[22:0];
	 assign jiema = num[30:23];
	 assign float_type = (weishu == 0 && jiema == 0) ? 5'b00001 :
								(jiema != 0 && jiema != 8'b11111111) ? 5'b00010 :
								(jiema == 0 && weishu != 0) ? 5'b00100 :
								(jiema == 8'b11111111 && weishu == 0) ? 5'b01000 :
								(jiema == 8'b11111111 && weishu != 0) ? 5'b10000 : 
								5'b00000;

endmodule
