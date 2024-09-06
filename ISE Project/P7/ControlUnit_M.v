`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:22:25 11/09/2023 
// Design Name: 
// Module Name:    ControlUnit_M 
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
module ControlUnit_M(
    input [5:0] option,
	 input [5:0] func,
	 input [4:0] c0code, 
	 output [1:0] Tnew, 
	 output [1:0] fw_ad_op, 
	 output [1:0] fw_data_op,
	 output [2:0] mem_write_op, 
	 output [2:0] mem_load_op, 
	 output mtc0_out, 
	 output mfc0_out, 
	 output eret_out
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
	 wire mfhi;
	 wire mflo;
	 wire mfc0;
	 wire mtc0;
	 wire syscall;
	 wire eret;
	 
	 assign mfc0_out = mfc0;
	 assign mtc0_out = mtc0;
	 assign eret_out = eret;
	 
	 ControlUnitDecode _M_CUdecode(.option(option), 
											.func(func), 
											.c0code(c0code), 
											.add(add), 
											.sub(sub),
											.andd(andd), 
											.orr(orr), 
											.slt(slt), 
											.sltu(sltu),
											.ori(ori), 
											.addi(addi), 
											.andi(andi), 
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
											.mfhi(mfhi), 
											.mflo(mflo), 
											.mfc0(mfc0), 
											.mtc0(mtc0), 
											.eret(eret));
	 
	 assign Tnew = add || sub || andd || orr || slt || sltu || ori || addi || andi || lui || jal || mfhi || mflo ? 2'b00 :
						lw || lh || lb || mfc0 ? 2'b01 :
						2'b11;
	 
	 assign fw_ad_op = add || sub || andd || orr || slt || sltu || mfhi || mflo ? 2'b00 : // 写入rd
								ori || addi || andi || lw || lh || lb || lui || mfc0 ? 2'b01 : // 写入rt
								jal ? 2'b10 : // 写入$31
								2'b11; // 无写入
	
	 assign fw_data_op = add || sub || andd || orr || slt || sltu || lui || ori || addi || andi || mfhi || mflo ? 2'b00 : // ALU计算结果
								lw || lh || lb || mfc0 ? 2'b01 : // mem_data
								jal ? 2'b10 : // PC + 8
								2'b11; // 无
								
	 assign mem_write_op = sb ? 3'b001 :
									sh ? 3'b010 :
									sw ? 3'b011 : 
									3'b000;
									
	 assign mem_load_op = lw ? 3'b000 :
									lh ? 3'b100 :
									lb ? 3'b010 : 3'b111;

endmodule
