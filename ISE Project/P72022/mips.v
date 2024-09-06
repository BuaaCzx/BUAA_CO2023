`timescale 1ns / 1ps
`default_nettype none 
module mips (
    input wire clk,                    // ʱ���ź�
    input wire reset,                  // ͬ����λ�ź�
    input wire interrupt,              // �ⲿ�ж��ź�
    output wire [31:0] macroscopic_pc, // ��� PC

    output wire [31:0] i_inst_addr,    // IM ��ȡ��ַ��ȡָ PC��
    input wire  [31:0] i_inst_rdata,   // IM ��ȡ����

    output wire [31:0] m_data_addr,    // DM ��д��ַ
    input wire  [31:0] m_data_rdata,   // DM ��ȡ����
    output wire [31:0] m_data_wdata,   // DM ��д������
    output wire [3 :0] m_data_byteen,  // DM �ֽ�ʹ���ź�

    output wire [31:0] m_int_addr,     // �жϷ�������д���ַ
    output wire [3 :0] m_int_byteen,   // �жϷ������ֽ�ʹ���ź�

    output wire [31:0] m_inst_addr,    // M �� PC

    output wire w_grf_we,              // GRF дʹ���ź�
    output wire [4 :0] w_grf_addr,     // GRF ��д��Ĵ������
    output wire [31:0] w_grf_wdata,    // GRF ��д������

    output wire [31:0] w_inst_addr     // W �� PC
);
    // CPU wires
    wire [31:0] CPU_O_m_data_addr;
    wire [31:0] CPU_O_m_data_wdata;
    wire [3:0] CPU_O_m_data_byteen;
    wire [31:0] CPU_O_m_inst_addr;
    
    // Bridge wires
    wire [31:0] Bridge_O_m_int_addr;
    wire [3:0] Bridge_O_m_int_byteen;
    wire [31:0] Bridge_O_m_data_wdata;
    wire [31:0] Bridge_O_m_data_addr;
    wire [31:0] Bridge_O_m_data_byteen;
    wire [31:0] Bridge_O_m_inst_addr;
    wire Bridge_O_Timer0WE;
    wire Bridge_O_Timer1WE;
    wire [31:0] Bridge_O_m_data_rdata;

    // Timer0 wires
    wire [31:0] Timer0Data;
    wire IRQ0;

    // Timer1 wires
    wire [31:0] Timer1Data;
    wire IRQ1;


    wire [5:0] CPU_I_HWInt;
    assign CPU_I_HWInt = {3'b0, {interrupt}, {IRQ1}, {IRQ0}};
    CPU CPU_Mips (
        .clk(clk),
        .reset(reset),
        .i_inst_rdata(i_inst_rdata),    //����IM(TB)
        .m_data_rdata(Bridge_O_m_data_rdata),    // ����Bridge
        .HWInt(CPU_I_HWInt),   // ����IG(TB), Timer0, Timer1, ������϶���

        .i_inst_addr(i_inst_addr),  //ֱ���ͳ���IM(TB)
        .m_data_addr(CPU_O_m_data_addr), //�͸�Bridge
        .m_data_wdata(CPU_O_m_data_wdata), //�͸�Bridge
        .m_data_byteen(CPU_O_m_data_byteen), //�͸�Bridge
        .m_inst_addr(CPU_O_m_inst_addr), //�͸�Bridge
        .w_grf_we(w_grf_we), //ֱ���ͳ���TB
        .w_grf_addr(w_grf_addr), //ֱ���ͳ���TB
        .w_grf_wdata(w_grf_wdata), //ֱ���ͳ���TB
        .w_inst_addr(w_inst_addr) //ֱ���ͳ���TB
    );

    Bridge Bridge_Mips (
        .m_data_addr(CPU_O_m_data_addr),  // ����CPU 
        .m_data_wdata(CPU_O_m_data_wdata), // ����CPU 
        .m_data_byteen(CPU_O_m_data_byteen), // ����CPU 
        .m_inst_addr(CPU_O_m_inst_addr),  // ����CPU 
        .I_DMData(m_data_rdata),     // ��������DM(TB)
        .I_Timer0Data(Timer0Data), // ��������Timer0
        .I_Timer1Data(Timer1Data), // ��������Timer1

        .m_int_addr(Bridge_O_m_int_addr),   // �͸�����IG(TB)
        .m_int_byteen(Bridge_O_m_int_byteen),  // �͸�����IG(TB)

        .O_m_data_wdata(Bridge_O_m_data_wdata),   // �͸�����DM(TB), Timer0, Timer1 
        .O_m_data_addr(Bridge_O_m_data_addr),    // �͸�����DM(TB), Timer0, Timer1 (����ʱTimer�ǵ�Ҫ��ȡ�ֶ����ַ)
        .O_m_data_byteen(Bridge_O_m_data_byteen),  // �͸�����DM(TB)
        .O_m_inst_addr(Bridge_O_m_inst_addr),    // �͸�����DM(TB)

        .O_Timer0WE(Bridge_O_Timer0WE),  // �͸�����Timer0

        .O_Timer1WE(Bridge_O_Timer1WE), // �͸�����Timer1

        .m_data_rdata(Bridge_O_m_data_rdata)  // �͸�CPU
    );

    TC Timer0_Mips (
        .clk(clk),
        .reset(reset),
        .Addr(Bridge_O_m_data_addr[31:2]),    // ����Bridge
        .WE(Bridge_O_Timer0WE),  // ����Bridge
        .Din(Bridge_O_m_data_wdata), // ����Bridge
        
        .Dout(Timer0Data),    // �͸�Bridge
        .IRQ(IRQ0)  // �͸�CPU
    );

    TC Timer1_Mips (
        .clk(clk),
        .reset(reset),
        .Addr(Bridge_O_m_data_addr[31:2]),    // ����Bridge
        .WE(Bridge_O_Timer1WE),  // ����Bridge
        .Din(Bridge_O_m_data_wdata), // ����Bridge
        
        .Dout(Timer1Data),    // �͸�Bridge
        .IRQ(IRQ1)  // �͸�CPU
    );
    
    // ����δֱ������Ľӿ�
    assign macroscopic_pc = CPU_O_m_inst_addr;
    assign m_data_addr = Bridge_O_m_data_addr;
    assign m_data_wdata = Bridge_O_m_data_wdata;
    assign m_data_byteen = Bridge_O_m_data_byteen;
    assign m_int_addr = Bridge_O_m_int_addr;
    assign m_int_byteen = Bridge_O_m_int_byteen;
    assign m_inst_addr = CPU_O_m_inst_addr;
endmodule
// ̤�������ҵ��������Լ����ܲ�����, ��������