`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:50:22 11/08/2023 
// Design Name: 
// Module Name:    EXT 
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
module EXT(
    input [15:0] data_in,
    input option,
    output reg [31:0] data_out
    );
	
	always@ (*) begin
		if (option == 1'b0) begin // ¡„¿©’π
			data_out <= {{16{1'b0}}, data_in};
		end else begin // ∑˚∫≈¿©’π
			data_out <= {{16{data_in[15]}}, data_in};
		end
	end

endmodule
