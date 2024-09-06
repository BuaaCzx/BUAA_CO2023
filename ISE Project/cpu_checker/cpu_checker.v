`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:54:22 09/19/2023 
// Design Name: 
// Module Name:    cpu_checker 
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

`define S0 5'b00000
`define S1 5'b00001
`define S2 5'b00010
`define S3 5'b00011
`define S4 5'b00100
`define S5 5'b00101
`define S6 5'b00110
`define S7 5'b00111
`define S8 5'b01000
`define S9 5'b01001
`define S10 5'b01010
`define S11 5'b01011
`define S12 5'b01100
`define S13 5'b01101
`define S14 5'b01110
`define S15 5'b01111
`define S16 5'b10000
`define S17 5'b10001
`define S18 5'b10010
`define S19 5'b10011
`define S20 5'b10100

module cpu_checker(
    input clk,
    input reset,
    input [7:0] char,
    output [1:0] format_type
    );
	
	reg [4:0] cur;
	reg [2:0] cnt;
	
	
	initial begin
		cur <= `S0;
		cnt <= 0;
	end
	
	always@ (posedge clk) begin
	
		if(reset == 1) begin
			cur <= `S0;
			cnt <= 0;
		end else begin
			case (cur)
			
			`S0 : begin // 初始状态
				cnt <= 0;
				if (char == "^") begin
					cur <= `S1;
				end else begin
					cur <= `S0;
				end
			end
			
			`S1 : begin // 字符'^'
				cnt <= 0;
				if (char == "^") begin
					cur <= `S1;
				end else if (char >= "0" && char <= "9") begin
					cur <= `S2;
					cnt <= 1;
				end else begin
					cur <= `S0;
				end
			end
			
			`S2 : begin // 十进制数time
				if (char >= "0" && char <= "9" && cnt < 4) begin
					cnt <= cnt + 1;
				end else if (char >= "0" && char <= "9" && cnt == 4) begin
					cnt <= 0;
					cur <= `S0;
				end else if (char == "^") begin
					cur <= `S1;
					cnt <= 0;
				end else if (char == "@") begin
					cur <= `S3;
					cnt <= 0;
				end else begin
					cur <= `S0;
					cnt <= 0;
				end
			end
			
			`S3 : begin // 字符'@'，以及随后的16进制数未满8位时的状态
				if (char == "^") begin
					cur <= `S1;
				end else if (((char >= "0" && char <= "9") || (char >= "a" && char <= "f")) && cnt < 7) begin
					cur <= `S3;
					cnt <= cnt + 1;
				end else if (((char >= "0" && char <= "9") || (char >= "a" && char <= "f")) && cnt == 7) begin
					cur <= `S4;
					cnt <= 0;
				end else begin
					cur <= `S0;
				end
			end
				
			`S4 : begin // 8位十六进制数pc刚满8位的状态
				if (char == "^") begin
					cur <= `S1;
				end else if (char == ":") begin
					cur <= `S5;
				end else begin
					cur <= `S0;
				end
			end
			
			`S5 : begin // 字符':'，以及在其后输入若干个空格时的状态
				if (char == " ") begin
					cur <= `S5;
				end else if (char == "^") begin
					cur <= `S1;
				end else if (char == "*") begin
					cur <= `S6;
				end else if (char == "$") begin
					cur <= `S13;
				end else begin
					cur <= `S0;
				end
			end
			
			// S6~S12均为进入"数据存储器信息序列"后的状态
			
			`S6 : begin // 字符'*'，以及随后的16进制数未满8位时的状态
				if (char == "^") begin
					cur <= `S1;
				end else if (((char >= "0" && char <= "9") || (char >= "a" && char <= "f")) && cnt < 7) begin
					cur <= `S6;
					cnt <= cnt + 1;
				end else if (((char >= "0" && char <= "9") || (char >= "a" && char <= "f")) && cnt == 7) begin
					cur <= `S7;
					cnt <= 0;
				end else begin
					cur <= `S0;
				end
			end
			
			`S7 : begin // 8位十六进制数addr刚满8位时的状态
				if (char == "^") begin
					cur <= `S1;
				end else if (char == " ") begin
					cur <= `S7;
				end else if (char == "<") begin
					cur <= `S8;
				end else begin
					cur <= `S0;
				end
			end
			
			`S8 : begin // 字符'<'
				if (char == "^") begin
					cur <= `S1;
				end else if (char == "=") begin
					cur <= `S9;
				end else begin
					cur <= `S0;
				end
			end
			
			`S9 : begin // 字符'='
				if (char == "^") begin
					cur <= `S1;
				end else if (char == " ") begin
					cur <= `S9;
				end else if ((char >= "0" && char <= "9") || (char >= "a" && char <= "f")) begin
					cur <= `S10;
					cnt <= 1;
				end else begin
					cur <= `S0;
				end
			end
			
			`S10 : begin // 8位十六进制数data，未满8位
				if (char == "^") begin
					cur <= `S1;
				end else if (((char >= "0" && char <= "9") || (char >= "a" && char <= "f")) && cnt < 7) begin
					cur <= `S10;
					cnt <= cnt + 1;
				end else if (((char >= "0" && char <= "9") || (char >= "a" && char <= "f")) && cnt == 7) begin
					cur <= `S11;
					cnt <= 0;
				end else begin
					cur <= `S0;
				end
			end
			
			`S11 : begin // 8位十六进制数data，刚满8位
				if (char == "^") begin
					cur <= `S1;
				end else if (char == "#") begin
					cur <= `S12;
				end else begin
					cur <= `S0;
				end
			end
			
			`S12 : begin // 字符'#'，检查到“数据存储器信息序列”
				if (char == "^") begin
					cur <= `S1;
				end else begin
					cur <= `S0;
				end
			end
			
			// S13~S20  均为进入"寄存器信息序列"后的状态
			
			`S13 : begin // 字符'$'
				if (char == "^") begin
					cur <= `S1;
				end else if (char >= "0" && char <= "9") begin
					cur <= `S14;
					cnt <= 1;
				end else begin
					cur <= `S0;
				end
			end
			
			`S14 : begin // 十进制数grf
				if (char == "^") begin
					cur <= `S1;
				end else if (char >= "0" && char <= "9" && cnt < 4) begin
					cnt <= cnt + 1;
				/*	if (cnt > 4) begin
						//...
					end*/
				end else if (char >= "0" && char <= "9" && cnt == 4) begin
					cnt <= 0;
					cur <= `S0;
				end else if (char == " ") begin
					cnt <= 0;
					cur <= `S15;
				end else if (char == "<") begin
					cnt <= 0;
					cur <= `S16;
				end else begin
					cnt <= 0;
					cur <= `S0;
				end
			end
			
			`S15 : begin // 十进制数grf后的若干个空格
				if (char == "^") begin
					cur <= `S1;
				end else if (char == " ") begin
					cur <= `S15;
				end else if (char == "<") begin
					cur <= `S16;
				end else begin
					cur <= `S0;
				end
			end
			
			`S16 : begin // 字符'<'
				if (char == "^") begin
					cur <= `S1;
				end else if (char == "=") begin
					cur <= `S17;
				end else begin
					cur <= `S0;
				end
			end
			
			`S17 : begin // 字符'='
				if (char == "^") begin
					cur <= `S1;
				end else if (char == " ") begin
					cur <= `S17;
				end else if ((char >= "0" && char <= "9") || (char >= "a" && char <= "f")) begin
					cur <= `S18;
					cnt <= 1;
				end else begin
					cur <= `S0;
				end
			end
			
			`S18 : begin // 8位十六进制数data未满8位
				if (char == "^") begin
					cur <= `S1;
				end else if (((char >= "0" && char <= "9") || (char >= "a" && char <= "f")) && cnt < 7) begin
					cur <= `S18;
					cnt <= cnt + 1;
				end else if (((char >= "0" && char <= "9") || (char >= "a" && char <= "f")) && cnt == 7) begin
					cur <= `S19;
					cnt <= 0;
				end else begin
					cur <= `S0;
				end
 			end
			
			`S19 : begin // 8位十六进制数data刚满8位
				if (char == "^") begin
					cur <= `S1;
				end else if (char == "#") begin
					cur <= `S20;
				end else begin
					cur <= `S0;
				end
			end
			
			`S20 : begin
				if (char == "^") begin
					cur <= `S1;
				end else begin
					cur <= `S0;
				end
			end
			
			default : ;
			endcase
		
		end
	end
	
	
	
	assign format_type = (cur == `S12) ? 2'b10 :
								(cur == `S20) ? 2'b01 :
								2'b00;

endmodule
