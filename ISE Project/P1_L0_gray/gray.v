`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:52:24 10/11/2023 
// Design Name: 
// Module Name:    gray 
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
module gray(
    input Clk,
    input Reset,
    input En,
    output [2:0] Output,
    output Overflow
    );
	 
	 reg [2:0] cnt;
	 reg flag ;
	 
	 initial begin 
		cnt <= 0;
		flag <= 0;
	 end
	 
	 always @(posedge Clk) begin
		if (Reset) begin
			cnt <= 0;
			flag <= 0;
		end else if (En) begin
			cnt <= cnt + 1;
			if (cnt == 3'b111) begin
				flag <= 1;
			end
		end
	 end
	 
	 assign Overflow = flag;
	 
	 assign Output = cnt == 3'b010 ? 3'b011 :
							cnt == 3'b011 ? 3'b010 :
							cnt == 3'b100 ? 3'b110 :
							cnt == 3'b101 ? 3'b111 :
							cnt == 3'b110 ? 3'b101 :
							cnt == 3'b111 ? 3'b100 :
							cnt;
	
	


endmodule
