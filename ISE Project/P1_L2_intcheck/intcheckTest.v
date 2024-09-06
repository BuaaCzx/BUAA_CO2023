`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:20:56 10/15/2023
// Design Name:   intcheck
// Module Name:   C:/Users/Hihiczx/Documents/ISE Project/P1_L2_intcheck/intcheckTest.v
// Project Name:  P1_L2_intcheck
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: intcheck
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module intcheckTest;

	// Inputs
	reg clk;
	reg reset;
	reg [7:0] in;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	intcheck uut (
		.clk(clk), 
		.reset(reset), 
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus herein="i";#5;clk=1;#5;clk=0;

in="i";#5;clk=1;#5;clk=0;
in="n";#5;clk=1;#5;clk=0;
in="t";#5;clk=1;#5;clk=0;
in=" ";#5;clk=1;#5;clk=0;
in="7";#5;clk=1;#5;clk=0;
in="1";#5;clk=1;#5;clk=0;
in="1";#5;clk=1;#5;clk=0;
in=";";#5;clk=1;#5;clk=0;
//


	end
      
endmodule

