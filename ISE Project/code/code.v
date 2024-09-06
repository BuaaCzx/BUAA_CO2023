`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:33:27 09/18/2023 
// Design Name: 
// Module Name:    code 
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
module code(
    input Clk,//时钟信号
    input Reset,//复位信号
    input Slt,//选择信号
    input En,//使能信号
    output [63:0] Output0,
    output [63:0] Output1
    );
	
	reg Cnt0;
	reg [2:0] Cnt1;
	reg [63:0] Res1;
	reg [63:0] Res0;
	
	
	initial begin
		Cnt1 <= 0;
		Cnt0 <= 0;
		Res1 <= 0;
		Res0 <= 0;
	end
	
	always@ (posedge Clk) begin
		if (Reset == 1'b1) begin
			Res1 = 0;
			Res0 = 0;
			Cnt1 = 0;
			Cnt0 = 0;
		end else if (En == 1'b1) begin
			if (Slt == 0) begin
				Res0 = Res0 + 1;
			end else if (Slt == 1) begin
				Cnt1 = Cnt1 + 1;
				if (Cnt1 == 3'd4) begin
					Cnt1 = 0;
					Res1 = Res1 + 1;
				end
			end
		end
	end
	
	assign Output1 = Res1;
	assign Output0 = Res0;		
	
endmodule
