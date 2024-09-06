`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:47:32 10/11/2023 
// Design Name: 
// Module Name:    expr 
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

module expr(
    input clk,
    input clr,
    input [7:0] in,
    output reg out
    );
	 
	 reg [1:0] next_state = 0;
	 reg [1:0] state = 0;
	 
	 always @(state,in) begin
		case (state) 
			`S0 : begin
				next_state <= (in >= "0" && in <= "9") ? `S1 : `S3;
			end
			
			`S1 : begin
				next_state <= (in == "+" || in == "*") ? `S2 : `S3;
			end
			
			`S2 : begin
				next_state <= (in >= "0" && in <= "9") ? `S1 : `S3;
			end
			
			default : begin
				next_state <= `S3;
			end
		endcase
	 end
	 
	 always @(posedge clk) begin
		if (clr) begin
			state <= 0;
		end else begin
			state <= next_state;
		end
	 end
	 
	 always @(state) begin
		out <= state == `S1 ? 1'b1 : 1'b0;
	 end
	 
	 always @(clr) begin
		state <= 0;
	 end

endmodule
