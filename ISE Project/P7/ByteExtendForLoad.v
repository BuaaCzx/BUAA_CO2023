`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:36:57 11/16/2023 
// Design Name: 
// Module Name:    ByteExtendForLoad 
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
module ByteExtendForLoad(
    input [1:0] addr_low2bit,
    input [31:0] data_in,
    input [2:0] option,
    output reg [31:0] data_out
    );
	 
	 always @(*) begin
		
		if (option == 3'b000) begin // 无拓展
			data_out = data_in;
		end else if (option == 3'b001) begin // 无符号字节拓展
			data_out = addr_low2bit == 2'b00 ? {24'd0, data_in[7:0]} : 
							addr_low2bit == 2'b01 ? {24'd0, data_in[15:8]} :
							addr_low2bit == 2'b10 ? {24'd0, data_in[23:16]} :
							addr_low2bit == 2'b11 ? {24'd0, data_in[31:24]} : 0;
		end else if (option == 3'b010) begin // 有符号字节拓展
			data_out = addr_low2bit == 2'b00 ? {{24{data_in[7]}}, data_in[7:0]} :
							addr_low2bit == 2'b01 ? {{24{data_in[15]}}, data_in[15:8]} :
							addr_low2bit == 2'b10 ? {{24{data_in[23]}}, data_in[23:16]} :
							addr_low2bit == 2'b11 ? {{24{data_in[31]}}, data_in[31:24]} : 0;
		end else if (option == 3'b011) begin // 无符号半字拓展
			data_out = addr_low2bit == 2'b00 ? {16'd0, data_in[15:0]} :
							addr_low2bit == 2'b10 ? {16'd0, data_in[31:16]} : 0;
		end else if (option == 3'b100) begin // 有符号半字拓展
			data_out = addr_low2bit == 2'b00 ? {{16{data_in[15]}}, data_in[15:0]} :
							addr_low2bit == 2'b10 ? {{16{data_in[31]}}, data_in[31:16]} : 0;
		end
		
		
	 end


endmodule
