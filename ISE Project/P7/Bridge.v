`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:37:47 12/02/2023 
// Design Name: 
// Module Name:    Bridge 
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
module Bridge (
    input [31:0] m_data_addr,
    input [31:0] m_data_wdata,
    input [3:0] m_data_byteen,
	 // ����CPU 
	 
    input [31:0] DMdata_in,     // ���� DM
    input [31:0] timer0_data_in, // ���� Timer0
    input [31:0] timer1_data_in,
	 
	 input [4:0] HWInt, 

    output [31:0] m_int_addr,   // �͸��жϷ�����
    output [3:0] m_int_byteen,

    output [31:0] O_m_data_wdata,   // �͸�����DM, Timer0, Timer1 
    output [31:0] O_m_data_addr,    // �͸�����DM, Timer0, Timer1
	 
    output [4:0] O_m_data_byteen,  // �͸�����DM

    output Timer0WE,  // �͸�����Timer0

    output Timer1WE, // �͸�����Timer1

    output [31:0] m_data_rdata  // �͸�CPU
);

    assign m_int_addr = m_data_addr;
    assign m_int_byteen = m_data_byteen;

    assign O_m_data_wdata = m_data_wdata;
    assign O_m_data_addr = m_data_addr;
    assign O_m_data_byteen = m_data_byteen;
	 
    assign Timer0WE = m_data_addr >= 32'h7f00 && m_data_addr <= 32'h7f0b && (|m_data_byteen);

    assign Timer1WE = m_data_addr >= 32'h7f10 && m_data_addr <= 32'h7f1b && (|m_data_byteen);

    assign m_data_rdata =   ((m_data_addr >= 32'h0) && (m_data_addr <= 32'h2ffff)) ? DMdata_in :
                            ((m_data_addr >= 32'h7f00) && (m_data_addr <= 32'h7f0b)) ? timer0_data_in :
                            ((m_data_addr >= 32'h7f10) && (m_data_addr <= 32'h7f1b)) ? timer1_data_in : 32'd0;
endmodule