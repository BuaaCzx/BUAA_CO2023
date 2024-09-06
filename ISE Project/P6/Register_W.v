`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:30:43 11/09/2023 
// Design Name: 
// Module Name:    Register_W 
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
module Register_W(
    input clk,
    input reset,
    input [31:0] pc_in,
    input [31:0] instruction_in,
    input [31:0] mem_data_in,
    input [31:0] ALUresult_in,
	 input reg_write_enable_in, 
    output [31:0] pc_out,
    output [31:0] instruction_out,
    output [31:0] mem_data_out,
    output [31:0] ALUresult_out, 
	 output reg_write_enable_out
    );
	 
	 reg [31:0] pc;
	 reg [31:0] instruction;
	 reg [31:0] ALUresult;
	 reg [31:0] mem_data;
	 reg reg_write_enable;
	 
	 always @(posedge clk) begin
		if (reset) begin
			pc <= 0;
			instruction <= 0;
			mem_data <= 0;
			ALUresult <= 0;
			reg_write_enable <= 0;
		end else begin
			pc <= pc_in;
			instruction <= instruction_in;
			mem_data <= mem_data_in;
			ALUresult <= ALUresult_in;
			reg_write_enable <= reg_write_enable_in;
		end
	 end
	 
	 assign instruction_out = instruction;
	 assign pc_out = pc;
	 assign mem_data_out = mem_data;
	 assign ALUresult_out = ALUresult;
	 assign reg_write_enable_out = reg_write_enable;


endmodule
