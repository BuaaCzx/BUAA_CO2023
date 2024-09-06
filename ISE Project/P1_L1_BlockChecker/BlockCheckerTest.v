`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:52:08 10/13/2023
// Design Name:   BlockChecker
// Module Name:   C:/Users/Hihiczx/Documents/ISE Project/P1_L1_BlockChecker/BlockCheckerTest.v
// Project Name:  P1_L1_BlockChecker
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BlockChecker
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module BlockCheckerTest;

	// Inputs
	reg clk;
	reg reset;
	reg [7:0] in;

	// Outputs
	wire result;

	// Instantiate the Unit Under Test (UUT)
	BlockChecker uut (
		.clk(clk), 
		.reset(reset), 
		.in(in), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
in = "a";#5;clk = 1;#5;clk = 0;#5;
in = " ";#5;clk = 1;#5;clk = 0;#5;
in = "b";#5;clk = 1;#5;clk = 0;#5;
in = "e";#5;clk = 1;#5;clk = 0;#5;
in = "g";#5;clk = 1;#5;clk = 0;#5;
in = "i";#5;clk = 1;#5;clk = 0;#5;
in = "n";#5;clk = 1;#5;clk = 0;#5;
in = " ";#5;clk = 1;#5;clk = 0;#5;
in = "e";#5;clk = 1;#5;clk = 0;#5;
in = "n";#5;clk = 1;#5;clk = 0;#5;
in = "d";#5;clk = 1;#5;clk = 0;#5;
in = "c";#5;clk = 1;#5;clk = 0;#5;
in = " ";#5;clk = 1;#5;clk = 0;#5;
in = "e";#5;clk = 1;#5;clk = 0;#5;
in = "n";#5;clk = 1;#5;clk = 0;#5;
in = "d";#5;clk = 1;#5;clk = 0;#5;
in = " ";#5;clk = 1;#5;clk = 0;#5;
in = "e";#5;clk = 1;#5;clk = 0;#5;
in = "n";#5;clk = 1;#5;clk = 0;#5;
in = "d";#5;clk = 1;#5;clk = 0;#5;
in = " ";#5;clk = 1;#5;clk = 0;#5;
in = "b";#5;clk = 1;#5;clk = 0;#5;
in = "e";#5;clk = 1;#5;clk = 0;#5;
in = "g";#5;clk = 1;#5;clk = 0;#5;
in = "i";#5;clk = 1;#5;clk = 0;#5;
in = "n";#5;clk = 1;#5;clk = 0;#5;

	end
      
endmodule

