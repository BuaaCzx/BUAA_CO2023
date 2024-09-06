`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:14:56 11/02/2023 
// Design Name: 
// Module Name:    ControlUnit 
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
module ControlUnit(
    input [5:0] option,
    input [5:0] func,
    output [1:0] reg_write_src,
    output mem_write_enable,
    output [2:0] ALUoption,
    output ALUsrc,
    output [1:0] reg_destination,
    output reg_write_enable,
    output imm_extend_op,
    output [1:0] jump
    );
	 
	 wire add;
	 wire sub;
	 wire ori;
	 wire lw;
	 wire sw;
	 wire beq;
	 wire lui;
	 wire j;
	 wire jal;
	 wire jr;
	 
	 assign add = option == 6'b000000 && func == 6'b100000;
	 assign sub = option == 6'b000000 && func == 6'b100010;
	 assign ori = option == 6'b001101;
	 assign lw = option == 6'b100011;
	 assign sw = option == 6'b101011;
	 assign beq = option == 6'b000100;
	 assign lui = option == 6'b001111;
	 assign j = option == 6'b000010;
	 assign jal = option == 6'b000011;
	 assign jr = option == 6'b000000 && func == 6'b001000;
	 
	 assign reg_destination = add || sub ? 2'b00 :
										ori || lw || lui ? 2'b01:
										2'b10;
	 assign reg_write_enable = add || sub || ori || lw || lui || jal;
	 assign reg_write_src = add || sub || ori || lui ? 2'b00 :
									lw ? 2'b01 : 2'b10;
	 assign mem_write_enable = sw;
	 assign ALUoption = add ? 3'b010 :
								sub ? 3'b110 :
								ori ? 3'b001 :
								lw || sw ? 3'b010 :
								beq ? 3'b011 :
								lui ? 3'b100 :
								j || jal || jr ? 3'b001 : 3'b111;
	 assign ALUsrc = ori || lw || sw || lui;
	 assign imm_extend_op = lw || sw || beq;
	 assign jump = beq ? 2'b01 :
						j || jal ? 2'b10 :
						jr ? 2'b11 : 2'b00;


endmodule
