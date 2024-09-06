`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:44:36 10/15/2023 
// Design Name: 
// Module Name:    intcheck 
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
`define S10 4'b1010
`define S11 4'b1011
`define S12 4'b1100


module intcheck(
    input clk,
    input reset,
    input [7:0] in,
    output out
    );
	 reg [3:0] state = `S0;
	 
	always @(posedge clk) begin
		if (reset) begin
			state <= `S0;
		end else begin
			case (state) 
				`S0 : begin // ³õÊ¼Çé¿ö
					if (in == " " || in == "\t" || in == ";") begin
						state <= `S0;
					end else if(in == "i") begin
						state <= `S1;
					end else begin
						state <= `S11;
					end
				end
				
				`S1 : begin
					if (in == "n") begin
						state <= `S2;
					end else if(in == ";") begin
						state <= `S0;
					end else begin
						state <= `S11;
					end
				end
				
				`S2 : begin
					if(in == "t") begin
						state <= `S3;
					end else if(in == ";") begin
						state <= `S0;
					end else begin
						state <= `S11;
					end
				end
				
				`S3 : begin
					if(in == " " || in == "\t") begin
						state <= `S4;
					end else if(in == ";") begin
						state <= `S0;
					end else begin
						state <= `S11;
					end
				end
				
				`S4 : begin
					if(in == " " || in == "\t") begin
						state <= `S4;
					end else if(in == ";") begin
						state <= `S0;
					end else if(in >= "0" && in <= "9") begin
						state <= `S11;
					end else if(in == "i") begin
						state <= `S8;
					end else if((in >= "a" && in <= "z") || (in >= "A" && in <= "Z") || in == "_") begin
						state <= `S5;
					end else begin
						state <= `S11;
					end
				end
				
				`S5 : begin
					if(in == " " || in == "\t") begin
						state <= `S6;
					end else if((in >= "a" && in <= "z") || (in >= "A" && in <= "Z") || in == "_" || (in >= "0" && in <= "9")) begin
						state <= `S5;
					end else if(in == ",") begin
						state <= `S4;
					end else if(in == ";") begin
						state <= `S7;
					end else begin
						state <= `S11;
					end
				end
				
				`S6 : begin
					if(in == " " || in == "\t") begin
						state <= `S6;
					end else if(in == ",") begin
						state <= `S4;
					end else if(in == ";") begin
						state <= `S7;
					end else begin
						state <= `S11;
					end
				end
				
				`S7 : begin
					if(in == " " || in == "\t") begin
						state <= `S0;
					end else if(in == ";") begin
						state <= `S0;
					end else if(in == "i") begin
						state <= `S1;
					end else begin
						state <= `S11;
					end
				end
				
				`S8 : begin
					if(in == "n") begin
						state <= `S9;
					end else if(in == " " || in == "\t") begin
						state <= `S6;
					end else if((in >= "a" && in <= "z") || (in >= "A" && in <= "Z") || in == "_" || (in >= "0" && in <= "9")) begin
						state <= `S5;
					end else if(in == ",") begin
						state <= `S4;
					end else if(in == ";") begin
						state <= `S7;
					end else begin
						state <= `S11;
					end
				end
				
				`S9 : begin
					if(in == "t") begin
						state <= `S10;
					end else if(in == " " || in == "\t") begin
						state <= `S6;
					end else if((in >= "a" && in <= "z") || (in >= "A" && in <= "Z") || in == "_" || (in >= "0" && in <= "9")) begin
						state <= `S5;
					end else if(in == ",") begin
						state <= `S4;
					end else if(in == ";") begin
						state <= `S7;
					end else begin
						state <= `S11;
					end
				end
				
				`S10 : begin
					if(in == " " || in == "\t") begin
						state <= `S11;
					end else if((in >= "a" && in <= "z") || (in >= "A" && in <= "Z") || in == "_" || (in >= "0" && in <= "9")) begin
						state <= `S5;
					end else if(in == ",") begin
						state <= `S11;
					end else if(in == ";") begin
						state <= `S0;
					end else begin
						state <= `S11;
					end
				end
				
				`S11 : begin
					if(in == ";") begin
						state <= `S0;
					end else begin
						state <= `S11;
					end
				end
			endcase
		end
	 end


	 assign out = state == `S7 ? 1'b1 : 1'b0;

endmodule
