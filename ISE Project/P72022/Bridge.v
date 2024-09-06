`timescale 1ns / 1ps
`default_nettype none 
`include "macros.v"
module Bridge (
    input wire [31:0] m_data_addr,  // ����CPU 
    input wire [31:0] m_data_wdata, // ����CPU 
    input wire [3:0] m_data_byteen, // ����CPU 
    input wire [31:0] m_inst_addr,  // ����CPU 
    input wire [31:0] I_DMData,     // ��������DM
    input wire [31:0] I_Timer0Data, // ��������Timer0
    input wire [31:0] I_Timer1Data, // ��������Timer1

    output wire [31:0] m_int_addr,   // �͸�����IG
    output wire [3:0] m_int_byteen,  // �͸�����IG

    output wire [31:0] O_m_data_wdata,   // �͸�����DM, Timer0, Timer1 
    output wire [31:0] O_m_data_addr,    // �͸�����DM, Timer0, Timer1
    output wire [31:0] O_m_data_byteen,  // �͸�����DM
    output wire [31:0] O_m_inst_addr,    // �͸�����DM

    output wire O_Timer0WE,  // �͸�����Timer0

    output wire O_Timer1WE, // �͸�����Timer1

    output wire [31:0] m_data_rdata  // �͸�CPU
);

    assign m_int_addr = m_data_addr;    // ��CPU�ڲ�ʹ��tbReq�ź�ʵ�ֶ�IG�жϵ���Ӧ
    assign m_int_byteen = m_data_byteen;

    assign O_m_data_wdata = m_data_wdata;
    assign O_m_data_addr = m_data_addr;
    assign O_m_data_byteen = m_data_byteen;
    assign O_m_inst_addr = m_inst_addr;

    assign O_Timer0WE = ((m_data_addr >= `Timer0Start) && (m_data_addr <= `Timer0End)) && (|m_data_byteen);

    assign O_Timer1WE = ((m_data_addr >= `Timer1Start) && (m_data_addr <= `Timer1End)) && (|m_data_byteen);

    assign m_data_rdata =   ((m_data_addr >= `DataMemStart) && (m_data_addr <= `DataMemEnd)) ? I_DMData :
                            ((m_data_addr >= `Timer0Start) && (m_data_addr <= `Timer0End)) ? I_Timer0Data :
                            ((m_data_addr >= `Timer1Start) && (m_data_addr <= `Timer1End)) ? I_Timer1Data : 32'd0;
                            // �����жϷ�����, �̳̹涨: "�������ڲ���û�������Ĵ洢��Ԫ�����ǹ涨����������ʼ�ձ��� 0"
endmodule