`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:18:15 09/18/2023 
// Design Name: 
// Module Name:    id_fsm 
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

module id_fsm(
    input [7:0] char,
    input clk,
    output out
    );
	 
	 reg [1:0] curr;
	 
	initial begin
		curr = `S0;
	end
	
	assign out = (curr == `S2) ? 1 : 0;
	
	always@ (posedge clk) begin
		if (curr == `S0) begin
			if ((char >= "a" && char <= "z") || (char >= "A" && char <= "Z")) begin
				curr <= `S1;
			end else begin
				curr <= `S0;
			end
		end else if (curr == `S1) begin
			if ((char >= "a" && char <= "z") || (char >= "A" && char <= "Z")) begin
				curr <= `S1;
			end else if (char >= "0" && char <= "9") begin
				curr <= `S2;
			end else begin
				curr <= `S0;
			end
		end else if (curr == `S2) begin
			if ((char >= "a" && char <= "z") || (char >= "A" && char <= "Z")) begin
				curr <= `S1;
			end else if (char >= "0" && char <= "9") begin
				curr <= `S2;
			end else begin
				curr <= `S0;
			end
		end
	end

endmodule
