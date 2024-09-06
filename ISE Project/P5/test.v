`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:23:14 11/10/2023
// Design Name:   mips
// Module Name:   C:/Users/Hihiczx/Documents/ISE Project/P5/test.v
// Project Name:  P5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mips
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
 
module test;
   
	// Inputs
	reg clk;
	reg reset;   

	// Instantiate the Unit Under Test (UUT)
	mips uut (
		.clk(clk), 
		.reset(reset)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		#10;
		reset = 0;
 
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here  
 
	end
   
	always #5 clk = ~clk;
endmodule

