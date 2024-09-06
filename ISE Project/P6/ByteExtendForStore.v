`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:00:30 11/16/2023 
// Design Name: 
// Module Name:    ByteExtend 
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
module ByteExtendForStore(
    input [2:0] inst_op,
    input [1:0] addr_low2bit,
	 input [31:0] data_in,
    output reg [3:0] data_byteen, 
	 output reg [31:0] data_out
    );
	 
	 always @(*) begin
		if (inst_op == 3'b000) begin // ²»Ð´
			data_byteen = 4'b0000;
		end else if (inst_op == 3'b001) begin // sb
			data_byteen = addr_low2bit == 2'b00 ? 4'b0001 :
								addr_low2bit == 2'b01 ? 4'b0010 :
								addr_low2bit == 2'b10 ? 4'b0100 :
								addr_low2bit == 2'b11 ? 4'b1000 : 4'b0000;
			data_out = addr_low2bit == 2'b00 ? {24'd0, data_in[7:0]} :
							addr_low2bit == 2'b01 ? {16'd0, data_in[7:0], 8'd0} :
							addr_low2bit == 2'b10 ? {8'd0, data_in[7:0], 16'd0} :
							addr_low2bit == 2'b11 ? {data_in[7:0], 24'd0} : 0;
		end else if (inst_op == 3'b010) begin // sh
			data_byteen = addr_low2bit == 2'b00 ? 4'b0011 :
								addr_low2bit == 2'b10 ? 4'b1100 : 4'b0000;
			data_out = addr_low2bit == 2'b00 ? {16'd0, data_in[15:0]} :
							addr_low2bit == 2'b10 ? {data_in[15:0], 16'd0} : 0;
		end else if (inst_op == 3'b011) begin // sw
			data_out = data_in;
			data_byteen = 4'b1111;
		end
	 end


endmodule
