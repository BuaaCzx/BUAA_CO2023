`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:51:31 12/02/2023 
// Design Name: 
// Module Name:    mips 
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

module mips(
    input clk,                    // ʱ���ź�
    input reset,                  // ͬ����λ�ź�
    input interrupt,              // �ⲿ�ж��ź�
    output [31:0] macroscopic_pc, // ��� PC ~

    output [31:0] i_inst_addr,    // IM ��ȡ��ַ��ȡָ PC�� ~
    input  [31:0] i_inst_rdata,   // IM ��ȡ����

    output [31:0] m_data_addr,    // DM ��д��ַ
    input  [31:0] m_data_rdata,   // DM ��ȡ����
    output [31:0] m_data_wdata,   // DM ��д������ ~
    output [3 :0] m_data_byteen,  // DM �ֽ�ʹ���ź�

    output [31:0] m_int_addr,     // �жϷ�������д���ַ
    output [3 :0] m_int_byteen,   // �жϷ������ֽ�ʹ���ź�

    output [31:0] m_inst_addr,    // M �� PC ~

    output w_grf_we,              // GRF дʹ���ź� ~
    output [4 :0] w_grf_addr,     // GRF ��д��Ĵ������ ~
    output [31:0] w_grf_wdata,    // GRF ��д������ ~

    output [31:0] w_inst_addr     // W �� PC ~
	 );
	 
	 CPU _CPU(.clk(clk), .reset(reset), .i_inst_rdata(i_inst_rdata), .m_data_rdata(bridge_m_data_rdata), .HWInt(HWInt), 
					.macroscopic_pc(macroscopic_pc), .i_inst_addr(i_inst_addr), .m_data_addr(cpu_m_data_addr), .m_data_wdata(cpu_m_data_wdata), 
					.m_data_byteen(cpu_m_data_byteen), .m_inst_addr(m_inst_addr), .w_grf_we(w_grf_we), .w_grf_addr(w_grf_addr), 
					.w_grf_wdata(w_grf_wdata), .w_inst_addr(w_inst_addr));
					
	 wire [31:0] cpu_m_data_addr;
	 wire [31:0] cpu_m_data_wdata;
	 wire [31:0] cpu_m_data_rdata;
	 wire [3:0] cpu_m_data_byteen;
	 
	 wire [31:0] bridge_m_int_addr;
	 assign m_int_addr = bridge_m_int_addr;
	 
	 wire [3:0] bridge_m_int_byteen;
	 assign m_int_byteen = bridge_m_int_byteen;
	 
	 wire [31:0] bridge_O_m_data_wdata;
	 assign m_data_wdata = bridge_O_m_data_wdata;
	 
	 wire [31:0] bridge_O_m_data_addr;
	 assign m_data_addr = bridge_O_m_data_addr;
	 
	 wire [3:0] bridge_O_m_data_byteen;
	 assign m_data_byteen = bridge_O_m_data_byteen;
	 
	 wire [31:0] bridge_m_data_rdata;
	 
	 Bridge _Bridge(.m_data_addr(cpu_m_data_addr), .m_data_wdata(cpu_m_data_wdata), .m_data_byteen(cpu_m_data_byteen), .HWInt(HWInt), 
							.DMdata_in(m_data_rdata), .timer0_data_in(timer0data), .timer1_data_in(timer1data), .m_int_addr(bridge_m_int_addr), 
							.m_int_byteen(bridge_m_int_byteen), .O_m_data_wdata(bridge_O_m_data_wdata), .O_m_data_addr(bridge_O_m_data_addr), 
							.O_m_data_byteen(bridge_O_m_data_byteen), .Timer0WE(Timer0WE), .Timer1WE(Timer1WE), .m_data_rdata(bridge_m_data_rdata)
							);
						
	 
	 wire Timer0WE;
	 wire Timer1WE;
	 
	 wire [31:0] timer0data;
	 wire [31:0] timer1data;
	 
	 wire IRQ0;
	 wire IRQ1;
	 
	 wire [5:0] HWInt = {3'd0, interrupt, IRQ1, IRQ0};
	 
	 TC _Timer0(.clk(clk), .reset(reset), .Addr(bridge_O_m_data_addr[31:2]), .WE(Timer0WE), .Din(bridge_O_m_data_wdata), .Dout(timer0data), .IRQ(IRQ0));
	 
	 TC _Timer1(.clk(clk), .reset(reset), .Addr(bridge_O_m_data_addr[31:2]), .WE(Timer1WE), .Din(bridge_O_m_data_wdata), .Dout(timer1data), .IRQ(IRQ1));



endmodule
