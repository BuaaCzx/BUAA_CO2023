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
// 分别对应六个外部中断，相应位置 1 表示允许中断，置 0 表示禁止中断。这是一个被动的功能，只能通过 mtc0 这个指令修改，通过修改这个功能域，我们可以屏蔽一些中断。
`define SR_EXL SR[1]
// 任何异常发生时置位，这会强制进入核心态（也就是进入异常处理程序）并禁止中断。
`define SR_IE SR[0]
// 全局中断使能，该位置 1 表示允许中断，置 0 表示禁止中断。
`define Cause_BD Cause[31]
// 当该位置 1 的时候，EPC 指向当前指令的前一条指令（一定为跳转），否则指向当前指令。
`define Cause_IP Cause[15:10]
// 为 6 位待决的中断位，分别对应 6 个外部中断，相应位置 1 表示有中断，置 0 表示无中断，将会每个周期被修改一次，修改的内容来自计时器和外部中断。
`define Cause_ExcCode Cause[6:2]
// 异常编码，记录当前发生的是什么异常。
module CP0(
    input clk,
    input reset,
    input write_enable,
    input [4:0] CP0_address, // 寄存器地址
    input [31:0] CP0_in, // CP0 写入数据
    output [31:0] CP0_out, // CP0 读出数据
    input [31:0] VPC, // 受害 PC
    input BDIn, // 是否是延迟槽指令
    input [4:0] ExcCodeIn, // 记录异常类型
    input [5:0] HWInt, // 输入中断信号
    input EXLClr, // 用来复位 EXL
    output [31:0] EPCOut, // EPC 的值
    output Req // 进入处理程序请求
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
                     Req ? 1'b1 : `SR_EXL;  // Clr 则置 0， Req 则置 1， 否则维持原样
							
         `Cause_BD <= Req ? BDIn : `Cause_BD; // 如果 Req ，则改一下，否则维持原样
			
         `Cause_IP <= HWInt; // 实时更新
			
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
			if (!`SR_EXL && Req) begin // Req ，更新 EPC
				EPC <= BDIn ? VPC - 4 : VPC;
			end
		end
	 end


endmodule
