`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:12:55 11/09/2023 
// Design Name: 
// Module Name:    Register_M 
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
module Register_M(
    input [31:0] pc_in,
    input [31:0] instruction_in,
    input [31:0] ALUresult_in,
	 input [31:0] reg_read_data2_in,
	 input reg_write_enable_in, 
	 input [4:0] exc_code_in, 
	 input BD_in,
    output [31:0] pc_out,
    output [31:0] instruction_out,
    output [31:0] ALUresult_out,
	 output [31:0] reg_read_data2_out,
	 output reg_write_enable_out, 
	 output [4:0] exc_code_out, 
	 output BD_out, 
    input clk,
    input reset
    );
	 
	 reg [31:0] pc;
	 reg [31:0] instruction;
	 reg [31:0] ALUresult;
	 reg [31:0] reg_read_data2;
	 reg reg_write_enable;
	 reg [4:0] exc_code;
	 reg BD;
	 
	 initial begin
		pc <= 0;
		instruction <= 0;
		ALUresult <= 0;
		reg_read_data2 <= 0;
		reg_write_enable <= 0;
		exc_code <= 5'd31;
		BD <= 0;
	 end
	 
	 always@ (posedge clk) begin
		if (reset) begin
			pc <= 0;
			instruction <= 0;
			ALUresult <= 0;
			reg_read_data2 <= 0;
			reg_write_enable <= 0;
			exc_code <= 5'd31;
			BD <= 0;
		end else begin
			pc <= pc_in;
			instruction <= instruction_in;
			ALUresult <= ALUresult_in;
			reg_read_data2 <= reg_read_data2_in;
			reg_write_enable <= reg_write_enable_in;
			exc_code <= exc_code_in;
			BD <= BD_in;
		end
	 end
	 
	 assign pc_out = pc;
	 assign instruction_out = instruction;
	 assign ALUresult_out = ALUresult;
	 assign reg_read_data2_out = reg_read_data2;
	 assign reg_write_enable_out = reg_write_enable;
	 assign exc_code_out = exc_code;
	 assign BD_out = BD;


endmodule
