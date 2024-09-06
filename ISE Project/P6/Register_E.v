`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:53:01 11/08/2023 
// Design Name: 
// Module Name:    Register_E 
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
module Register_E(
    input clk,
    input reset,
	 input [31:0] instruction_in,
	 input [31:0] pc_in,
    input [31:0] reg_data1_in,
    input [31:0] reg_data2_in,
	 input [31:0] imm32_in,
	 input reg_write_enable_in, 
	 output [31:0] pc_out,
	 output [31:0] instruction_out,
    output [31:0] reg_data1_out,
    output [31:0] reg_data2_out,
	 output [31:0] imm32_out, 
	 output reg_write_enable_out
    );
	 
	 reg [31:0] reg_data1;
	 reg [31:0] reg_data2;
	 reg [31:0] pc;
	 reg [31:0] instruction;
	 reg [31:0] imm32;
	 reg reg_write_enable;
	 
	 initial begin
		pc <= 0;
		instruction <= 0;
		reg_data1 <= 0;
		reg_data2 <= 0;
		imm32 <= 0;
		reg_write_enable <= 0;
	 end
	 
	 always@ (posedge clk) begin
		if(reset) begin
			pc <= 0;
			instruction <= 0;
			reg_data1 <= 0;
			reg_data2 <= 0;
			imm32 <= 0;
			reg_write_enable <= 0;
		end else begin
			pc <= pc_in;
			instruction <= instruction_in;
			reg_data1 <= reg_data1_in;
			reg_data2 <= reg_data2_in;
			imm32 <= imm32_in;
			reg_write_enable <= reg_write_enable_in;
		end
	 end
	 
	 assign reg_data1_out = reg_data1;
	 assign reg_data2_out = reg_data2;
	 assign pc_out = pc;
	 assign instruction_out = instruction;
	 assign imm32_out = imm32;
	 assign reg_write_enable_out = reg_write_enable;


endmodule
