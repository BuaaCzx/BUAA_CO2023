`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:01:26 09/17/2023 
// Design Name: 
// Module Name:    counting 
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
`define S0 2'b00
`define S1 2'b01
`define S2 2'b10
`define S3 2'b11

module counting(
    input [1:0] num,
    input clk,
    output ans
    );
	 reg [1:0] cur;
	 initial begin
		cur<=`S0;
		end;
	always@(posedge clk) begin
		if(cur==`S0)begin
			if(num==1) cur<=`S1;
			else cur<=`S0;
		end else if(cur==`S1) begin
			if(num==1) cur<=`S1;
			else if(num==2) cur<=`S2;
			else if(num==3) cur<=`S0;
		end else if(cur==`S2) begin
			if(num==1) cur<=`S1;
			else if(num==2) cur<=`S2;
			else if(num==3) cur<=`S3;
		end else if(cur==`S3) begin
			if(num==1) cur<=`S1;
			else if(num==3) cur<=`S3;
			else cur<=`S0;
		end
		
	end
	
	assign ans = (cur==`S3) ? 1'b1 : 1'b0;

endmodule
