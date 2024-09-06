`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:53:57 09/13/2023
// Design Name:   test
// Module Name:   C:/Users/Hihiczx/Documents/ISE Project/test_sample/t.v
// Project Name:  test_sample
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: test
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module a2(	
	input reg clk,
	input reg reset,
	input reg [3:0] a,
	input reg [3:0] b,
	output [3:0] ans1,
	output [3:0] ans2,
	output [3:0] ans3
    );
	 assign ans1 = (1'b1==1'b1) ? a>>>b : 0;
	 assign ans2 = (1'b1==1'b1) ? $signed(a)>>>b : 0;
	 assign ans3 = (1'b1==1'b1) ? $signed(a)>>>b : 4'b0;
		initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		a=3;
		b=1;
		#2;
		a=-2;
		b=1;

	end
endmodule

