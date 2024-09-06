`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:07:45 11/16/2023 
// Design Name: 
// Module Name:    MultDiv 
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
module MultDiv(
	 input clk, 
	 input reset, 
	 input [2:0] start, // 001 为无符号乘，010 为符号乘，011为无符号除，100为符号除
    input [31:0] input1,
    input [31:0] input2,
    input [31:0] data_in,
    input write_enable,
    input address, // 1 为 hi，0 为 lo
    output [31:0] data_out,
	 output reg [3:0] busy
    );
	 
	 reg [31:0] lo;
	 reg [31:0] hi;
	 reg [31:0] lo_tmp;
	 reg [31:0] hi_tmp;
	 
	 assign data_out = address ? hi : lo;
	 
	 always @(posedge clk) begin
		if (reset) begin
			lo = 0;
			hi = 0;
			lo_tmp = 0;
			hi_tmp = 0;
			busy = 0;
		end else begin
			if (busy == 1) begin
			//	$display("hi <= %h  lo <= %h", hi_tmp, lo_tmp);
				lo = lo_tmp;
				hi = hi_tmp;
				busy = 0;
			end else if (busy > 1) begin
				busy = busy - 1;
			end else if (start == 3'b001) begin
				{hi_tmp, lo_tmp} = input1 * input2;
				busy = 5;
			end else if (start == 3'b010) begin
				{hi_tmp, lo_tmp} = $signed(input1) * $signed(input2);
				busy = 5;
			end else if (start == 3'b011) begin
				lo_tmp = input1 / input2;
				hi_tmp = input1 % input2;
				busy = 10;
			end else if (start == 3'b100) begin
				lo_tmp = $signed(input1) / $signed(input2);
				hi_tmp = $signed(input1) % $signed(input2);
				busy = 10;
			end
			
			if (write_enable) begin
				if (address) begin
					hi = data_in;
				//	$display("hi <= %h  lo <= %h", hi_tmp, lo_tmp);
				end else begin
					lo = data_in;
				//	$display("hi <= %h  lo <= %h", hi_tmp, lo_tmp);
				end
			end
		end
	 end


endmodule
