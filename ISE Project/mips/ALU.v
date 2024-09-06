`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:17:17 11/01/2023 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input [31:0] input1,
    input [31:0] input2,
    input [2:0] ALUop,
    output reg output_cmp,
    output reg [31:0] output_calc
    );
	 
	 always @(*) begin
		if (ALUop == 3'b000) begin
			output_calc = input1 & input2;
		end else if (ALUop == 3'b001) begin
			output_calc = input1 | input2;
			output_cmp = 1'b1;
		end else if (ALUop == 3'b010) begin
			output_calc = input1 + input2;
		end else if (ALUop == 3'b011) begin
			output_cmp = $signed(input1) == $signed(input2);
		end else if (ALUop == 3'b100) begin
			output_calc = {input2[15:0], {16{1'b0}}};
		end else if (ALUop == 3'b101) begin
			
		end else if (ALUop == 3'b110) begin
			output_calc = input1 - input2;
		end else if (ALUop == 3'b111) begin
			
		end
	 end


endmodule
