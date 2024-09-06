`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:24:22 11/08/2023 
// Design Name: 
// Module Name:    ControlUnit_D 
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
module ControlUnit_D(
    input [5:0] option,
	 input [5:0] func,
	 output reg_write_enable, 
    output [1:0] NPCop,
    output [2:0] cmp_option,
    output ext_option, 
	 output mult_div, 
	 output [1:0] rt_Tuse, 
	 output [1:0] rs_Tuse
    );
	 
	 wire add;
    wire sub;
	 wire andd;
	 wire orr;
	 wire slt;
	 wire sltu;
    wire ori;
	 wire addi;
	 wire andi;
    wire lw;
	 wire lh;
	 wire lb;
    wire sw;
	 wire sh;
	 wire sb;
    wire beq;
	 wire bne;
    wire lui;
    wire j;
    wire jal;
    wire jr;
	 wire mult;
	 wire multu;
	 wire div;
	 wire divu;
	 wire mflo;
	 wire mfhi;
	 wire mtlo;
	 wire mthi;
	 
	 ControlUnitDecode _D_CUdecode(.option(option), 
											.func(func), 
											.add(add), 
											.sub(sub),
											.andd(andd), 
											.orr(orr), 
											.slt(slt), 
											.sltu(sltu),
											.ori(ori),	
											.andi(andi), 
											.addi(addi),
											.lw(lw), 
											.lh(lh), 
											.lb(lb), 
											.sw(sw), 
											.sh(sh), 
											.sb(sb), 
											.beq(beq), 
											.bne(bne), 
											.lui(lui), 
											.j(j), 
											.jal(jal), 
											.jr(jr), 
											.mult(mult), 
											.multu(multu), 
											.div(div), 
											.divu(divu), 
											.mflo(mflo), 
											.mfhi(mfhi), 
											.mtlo(mtlo), 
											.mthi(mthi));
	 
	 assign NPCop = beq || bne ? 2'b01 : // ��֧
						j || jal ? 2'b10 : // ��ת��������
						jr ? 2'b11 : // ��ת���Ĵ���
						2'b00; // PC + 4
						
	 assign cmp_option = beq ? 3'b001 : // �������
								bne ? 3'b010 : // ��������
								j || jal || jr ? 3'b111 : // ����1
								3'b111; // ����������������1������Ӱ���reg_write_enable���ж�
	
	 assign ext_option = sw || sh || sb || lw || lh || lb || addi; // ������չ
	 
	 assign reg_write_enable = add || sub || andd || orr || slt || sltu || ori || addi || andi || lw || lh || lb || lui || jal || mflo || mfhi;
	 
	 assign rt_Tuse = add || sub || andd || orr || slt || sltu || mult || multu || div || divu ? 2'b01 : 
							lw || lh || lb || sw || sh || sb ? 2'b10 :
							beq || bne ? 2'b00 : 
							2'b11; // ����Ҫrt�е�����
	 
	 assign rs_Tuse = add || sub || andd || orr || slt || sltu || ori || addi || andi || lw || lh || lb || sw || sh || sb || mult || multu || div || divu || mthi || mtlo ? 2'b01 :
							beq || bne || jr ? 2'b00 :
							2'b11; // ����Ҫrs�е�����
							
	 assign mult_div = mult || multu || div || divu || mfhi || mflo || mthi || mtlo;


endmodule
