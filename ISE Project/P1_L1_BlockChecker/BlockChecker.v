`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:31:36 10/12/2023 
// Design Name: 
// Module Name:    BlockChecker 
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

`define S0 4'b0000
`define S1 4'b0001
`define S2 4'b0010
`define S3 4'b0011
`define S4 4'b0100
`define S5 4'b0101
`define S6 4'b0110
`define S7 4'b0111
`define S8 4'b1000
`define S9 4'b1001

module BlockChecker(
    input clk,
    input reset,
    input [7:0] in,
    output result
    );
	 reg flag = 0;
	 reg [32:0] cnt = 0;
	 reg [3:0] state = 0;
	 
	 always @(posedge clk) begin
		if(reset) begin
			cnt <= 0;
			state <= `S0;
			flag <= 0;
		end else
		case (state)
			`S0: begin
				if(in == "b" || in == "B") begin
					state <= `S1;
				end else if(in == "e" || in == "E") begin
					state <= `S6;
				end else if(in == " ") begin
					state <= `S0;
				end else begin
					state <= `S9;
				end
			end
			`S1: begin
				if(in == "e" || in == "E") begin
					state <= `S2;
				end else if(in == " ") begin
					state <= `S0;
				end else begin
					state <= `S9;
				end
			end
			`S2: begin
				if(in == "g" || in == "G") begin
					state <= `S3;
				end else if(in == " ") begin
					state <= `S0;
				end else begin
					state <= `S9;
				end
			end
			`S3: begin
				if(in == "i" || in == "I") begin
					state <= `S4;
				end else if(in == " ") begin
					state <= `S0;
				end else begin
					state <= `S9;
				end
			end
			`S4: begin
				if(in == "n" || in == "N") begin
					state <= `S5;
					if($signed(cnt) >= $signed(0)) begin
						cnt <= cnt + 1;
					end
				end else if(in == " ") begin
					state <= `S0;
				end else begin
					state <= `S9;
				end
			end
			`S5: begin
				if(in == " ") begin
					state <= `S0;
				end else begin
					state <= `S9;
					cnt <= cnt - 1;
				end
			end
			`S6: begin
				if(in == "n" || in == "N") begin
					state <= `S7;
				end else if(in == " ") begin
					state <= `S0;
				end else begin
					state <= `S9;
				end
			end
			`S7: begin
				if(in == "d" || in == "D") begin
					state <= `S8;
					if($signed(cnt) >= $signed(0)) begin
						cnt <= cnt - 1;
						flag <= 1;
					end
				end else if(in == " ") begin
					state <= `S0;
				end else begin
					state <= `S9;
				end
			end
			`S8: begin
				if(in == " ") begin
					state <= `S0;
					flag <= 0;
				end else begin
					state <= `S9;
					if(flag) begin
						cnt <= cnt + 1;
					end
					flag <= 0;
				end
			end
			`S9: begin
				if(in == " ") begin
					state <= `S0;
				end else begin
					state <= `S9;
				end
			end
		endcase
	 end
	 
	 always @(posedge reset) begin
		cnt <= 0;
		state <= 0;
		flag <= 0;
	 end
	 
	 assign result = cnt == 0 ? 1 : 0;
	 

endmodule
