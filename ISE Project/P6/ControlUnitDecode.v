`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:03:01 11/08/2023 
// Design Name: 
// Module Name:    ControlUnitDecode 
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
module ControlUnitDecode(
    input [5:0] option,
    input [5:0] func,
    output add,
    output sub,
	 output andd, 
	 output orr, 
	 output slt, 
	 output sltu, 
    output ori,
	 output addi, 
	 output andi, 
    output lw,
	 output lh,
	 output lb,
    output sw,
	 output sh,
	 output sb,
    output beq,
	 output bne, 
    output lui,
    output jal,
    output jr,
	 output j, 
	 output mult, 
	 output multu, 
	 output div, 
	 output divu, 
	 output mflo,
	 output mfhi, 
	 output mtlo, 
	 output mthi
    );
	 
	 assign add = option == 6'b000000 && func == 6'b100000;
	 assign sub = option == 6'b000000 && func == 6'b100010;
	 assign andd = option == 6'b000000 && func == 6'b100100;
	 assign orr = option == 6'b000000 && func == 6'b100101;
	 assign slt = option == 6'b000000 && func == 6'b101010;
	 assign sltu = option == 6'b000000 && func == 6'b101011;
	 assign ori = option == 6'b001101;
	 assign addi = option == 6'b001000;
	 assign andi = option == 6'b001100;
	 assign lw = option == 6'b100011;
	 assign lh = option == 6'b100001;
	 assign lb = option == 6'b100000;
	 assign sw = option == 6'b101011;
	 assign sh = option == 6'b101001;
	 assign sb = option == 6'b101000;
	 assign beq = option == 6'b000100;
	 assign bne = option == 6'b000101;
	 assign lui = option == 6'b001111;
	 assign j = option == 6'b000010;
	 assign jal = option == 6'b000011;
	 assign jr = option == 6'b000000 && func == 6'b001000;
	 assign mult = option == 6'b000000 && func == 6'b011000;
	 assign multu = option == 6'b000000 && func == 6'b011001;
	 assign div = option == 6'b000000 && func == 6'b011010;
	 assign divu = option == 6'b000000 && func == 6'b011011;
	 assign mflo = option == 6'b000000 && func == 6'b010010;
	 assign mfhi = option == 6'b000000 && func == 6'b010000;
	 assign mtlo = option == 6'b000000 && func == 6'b010011;
	 assign mthi = option == 6'b000000 && func == 6'b010001;
	 
endmodule
