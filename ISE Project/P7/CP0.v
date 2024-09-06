`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:34:43 11/30/2023 
// Design Name: 
// Module Name:    CP0 
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
`define SR_IM SR[15:10]
// �ֱ��Ӧ�����ⲿ�жϣ���Ӧλ�� 1 ��ʾ�����жϣ��� 0 ��ʾ��ֹ�жϡ�����һ�������Ĺ��ܣ�ֻ��ͨ�� mtc0 ���ָ���޸ģ�ͨ���޸�������������ǿ�������һЩ�жϡ�
`define SR_EXL SR[1]
// �κ��쳣����ʱ��λ�����ǿ�ƽ������̬��Ҳ���ǽ����쳣������򣩲���ֹ�жϡ�
`define SR_IE SR[0]
// ȫ���ж�ʹ�ܣ���λ�� 1 ��ʾ�����жϣ��� 0 ��ʾ��ֹ�жϡ�
`define Cause_BD Cause[31]
// ����λ�� 1 ��ʱ��EPC ָ��ǰָ���ǰһ��ָ�һ��Ϊ��ת��������ָ��ǰָ�
`define Cause_IP Cause[15:10]
// Ϊ 6 λ�������ж�λ���ֱ��Ӧ 6 ���ⲿ�жϣ���Ӧλ�� 1 ��ʾ���жϣ��� 0 ��ʾ���жϣ�����ÿ�����ڱ��޸�һ�Σ��޸ĵ��������Լ�ʱ�����ⲿ�жϡ�
`define Cause_ExcCode Cause[6:2]
// �쳣���룬��¼��ǰ��������ʲô�쳣��
module CP0(
    input clk,
    input reset,
    input write_enable,
    input [4:0] CP0_address, // �Ĵ�����ַ
    input [31:0] CP0_in, // CP0 д������
    output [31:0] CP0_out, // CP0 ��������
    input [31:0] VPC, // �ܺ� PC
    input BDIn, // �Ƿ����ӳٲ�ָ��
    input [4:0] ExcCodeIn, // ��¼�쳣����
    input [5:0] HWInt, // �����ж��ź�
    input EXLClr, // ������λ EXL
    output [31:0] EPCOut, // EPC ��ֵ
    output Req // ���봦���������
    );
	 
	 reg [31:0] SR;
	 reg [31:0] Cause;
	 reg [31:0] EPC;
	 
	 wire Exc = !`SR_EXL && ExcCodeIn != 5'd31;
	 wire Int = !`SR_EXL && `SR_IE && (|(`SR_IM & HWInt));
	 
	 assign CP0_out = CP0_address == 5'd12 ? SR :
							CP0_address == 5'd13 ? Cause :
							CP0_address == 5'd14 ? EPC : 32'd0;
							
	 assign EPCOut = EPC;
	 assign Req = Exc || Int;
	 
	 always @(posedge clk) begin
		if (reset) begin
			SR = 0;
			Cause = 0;
			EPC = 0;
			`Cause_ExcCode = 5'd31;
		end else begin
			`SR_EXL <= EXLClr ? 1'b0 : 
                     Req ? 1'b1 : `SR_EXL;  // Clr ���� 0�� Req ���� 1�� ����ά��ԭ��
							
         `Cause_BD <= Req ? BDIn : `Cause_BD; // ��� Req �����һ�£�����ά��ԭ��
			
         `Cause_IP <= HWInt; // ʵʱ����
			
         `Cause_ExcCode <= Int ? 5'd0 :
                          Exc ? ExcCodeIn : `Cause_ExcCode;
								  
			if (write_enable/* && !Req && !`SR_EXL*/) begin // ?
				if (CP0_address == 5'd12) begin
					SR <= CP0_in;
				end else if (CP0_address == 5'd13) begin
					//Cause <= CP0_in;
				end else if (CP0_address == 5'd14) begin
					EPC <= CP0_in;
				end
			end
			if (!`SR_EXL && Req) begin // Req ������ EPC
				EPC <= BDIn ? VPC - 4 : VPC;
			end
		end
	 end


endmodule
