// �쳣���жϱ���
`define None 5'd31          //���쳣
`define Int 5'd0            //�ⲿ�ж�
`define AdEL 5'd4           //ȡָ�쳣 �� ȡ���쳣
`define AdES 5'd5           //�����쳣
`define Syscall 5'd8        //ϵͳ����
`define RI 5'd10            //δָ֪��
`define Ov 5'd12            //����쳣

// ��ַ�ռ���� 
`define DataMemStart 32'h0000_0000
`define DataMemEnd 32'h0000_2FFF

`define IMStart 32'h0000_3000
`define IMEnd 32'h0000_6FFF

`define Timer0Start 32'h0000_7F00
`define Timer0End 32'h0000_7F0B

`define Timer1Start 32'h0000_7F10
`define Timer1End 32'h0000_7F1B

`define IGStart 32'h0000_7F20
`define IGEnd 32'h0000_7F23
