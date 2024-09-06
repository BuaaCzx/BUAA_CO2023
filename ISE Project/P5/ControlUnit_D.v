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
	 output [1:0] rt_Tuse, 
	 output [1:0] rs_Tuse
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
	 
	 ControlUnitDecode _D_CUdecode(.option(option), 
											.func(func), 
											.add(add), 
											.sub(sub),
											.ori(ori), 
											.lw(lw), 
											.sw(sw), 
											.beq(beq), 
											.lui(lui), 
											.j(j), 
											.jal(jal), 
											.jr(jr));
	 
	 assign NPCop = beq ? 2'b01 : // ��֧
						j || jal ? 2'b10 : // ��ת��������
						jr ? 2'b11 : // ��ת���Ĵ���
						2'b00; // PC + 4
						
	 assign cmp_option = beq ? 3'b001 : // �������
								j || jal || jr ? 3'b111 : // ����1
								3'b111; // ����������������1������Ӱ���reg_write_enable���ж�
	
	 assign ext_option = sw || lw; // ������չ
	 
	 assign reg_write_enable = add || sub || ori || lw || lui || jal;
	 
	 assign rt_Tuse = add || sub ? 2'b01 : 
							lw || sw ? 2'b10 :
							beq ? 2'b00 : 
							2'b11; // ����Ҫrt�е�����
	 
	 assign rs_Tuse = add || sub || ori || lw || sw ? 2'b01 :
							beq || jr ? 2'b00 :
							2'b11; // ����Ҫrs�е�����


endmodule
