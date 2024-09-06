`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:02:55 11/01/2023 
// Design Name: 
// Module Name:    GRF 
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
module GRF(
	 input [31:0] PC,
    input reset,
    input clk,
    input [4:0] read_address1,
    input [4:0] read_address2,
    input [4:0] write_address,
    output [31:0] read_data1,
    output [31:0] read_data2,
    input [31:0] write_data,
    input write_enable
    );
	 
	 reg [31:0] register [0:31];
	 reg [31:0] i;
	 
	 initial begin
		for (i = 0; i <= 31; i = i + 1) begin
			register[i] <= 0;
		end
	 end
	 
	 always @(posedge clk) begin
		if (reset) begin
			for (i = 0; i <= 31; i = i + 1) begin
				register[i] <= 0;
			end
		end else begin
			if (write_enable && write_address != 0) begin
				register[write_address] <= write_data;
				//$display("%d@%h: $%d <= %h", $time, PC, write_address, write_data);
				$display("@%h: $%d <= %h", PC, write_address, write_data);
			end
		end
	 end
	 
	 assign read_data1 = register[read_address1];
	 assign read_data2 = register[read_address2];


endmodule
