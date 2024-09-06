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
module ControlUnit_E(
    input [5:0] option,
	 input [5:0] func,
	 input [4:0] c0code, 
    output [2:0] ALUoption,
    output ALUsrc, 
	 output calc_result_src,
	 output MDaddress, 
	 output MD_write_enable,
	 output load_out, 
	 output store_out, 
	 output add_addi_sub_out, 
	 output [2:0] start,
	 output [1:0] Tnew, 
	 output [1:0] fw_ad_op, 
	 output [1:0] fw_data_op, 
	 output mtc0_out
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
	 wire mfhi;
	 wire mflo;
	 wire mthi;
	 wire mtlo;
	 wire mtc0;
	 wire mfc0;
	 
	 assign mtc0_out = mtc0;
	 
	 assign load_out = lw || lh || lb;
	 assign store_out = sw || sh || sb;
	 assign add_addi_sub_out = add || addi || sub;
	 
	 ControlUnitDecode _E_CUdecode(.option(option), 
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
											.mult(mult), 
											.multu(multu), 
											.div(div), 
											.divu(divu), 
											.mfhi(mfhi), 
											.mflo(mflo), 
											.mthi(mthi), 
											.mtlo(mtlo), 
											.mtc0(mtc0), 
											.mfc0(mfc0));
	 
	 assign ALUoption = ori || orr ? 3'b000 : // 或运算
								add || addi || lw || lh || lb || sw || sh || sb ? 3'b001 : // 加法运算
								sub ? 3'b010 : // 减法运算
								lui ? 3'b011 : //加载至高位
								andd || andi ? 3'b100 : // 与运算
								slt ? 3'b101 : // 小于置位 有符号
								sltu ? 3'b110 : // 小于置位 无符号
								3'b111;
	 assign ALUsrc = lui || sw || sh || sb || lw || lh || lb || ori || addi || andi ? 1'b1 : 1'b0; // 为1表示imm32
	 
	 assign Tnew = add || sub || andd || orr || slt || sltu || ori || addi || andi || lui || mflo || mfhi ? 2'b01 :
						lw || lh || lb || mfc0 ? 2'b10 :
						jal ? 2'b00 :
						2'b11; // 不存在寄存器的写入操作
						
	 assign fw_ad_op = add || sub || orr || andd || slt || sltu || mfhi || mflo ? 2'b00 : // 写入rd
								ori || andi || addi || lw || lh || lb || lui || mfc0 ? 2'b01 : // 写入rt
								jal ? 2'b10 : // 写入$31
								2'b11; // 无写入
								
	 assign fw_data_op = add || sub || andd || orr || slt || sltu || lui || ori || addi || andi || mfhi || mflo ? 2'b00 : // ALU计算结果
								lw || lh || lb || mfc0 ? 2'b01 : // mem_data, 把 CP0 读出的结果也作为 mem_data
								jal ? 2'b10 : // PC + 8
								2'b11; // 无
								
	 assign start = multu ? 3'b001 :
							mult ? 3'b010 :
							divu ? 3'b011 :
							div ? 3'b100 : 0;
							
	 assign calc_result_src = mfhi || mflo; // 1 为乘除单元结果
	 
	 assign MDaddress = mfhi || mthi;
	 
	 assign MD_write_enable = mthi || mtlo;

endmodule
