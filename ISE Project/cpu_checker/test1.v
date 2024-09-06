`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:34:43 09/20/2023
// Design Name:   cpu_checker
// Module Name:   C:/Users/Hihiczx/Documents/ISE Project/cpu_checker/test1.v
// Project Name:  cpu_checker
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cpu_checker
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test1;

	// Inputs
	reg clk;
	reg reset;
	reg [7:0] char;

	// Outputs
	wire [1:0] format_type;

	// Instantiate the Unit Under Test (UUT)
	cpu_checker uut (
		.clk(clk), 
		.reset(reset), 
		.char(char), 
		.format_type(format_type)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		char = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		//^338@00003130: *00000088 <= ffffb528#
		
		char = "^";#5;clk = 1;#5;clk = 0;
char = "1";#5;clk = 1;#5;clk = 0;
char = "0";#5;clk = 1;#5;clk = 0;
char = "2";#5;clk = 1;#5;clk = 0;
char = "4";#5;clk = 1;#5;clk = 0;
char = "@";#5;clk = 1;#5;clk = 0;
char = "0";#5;clk = 1;#5;clk = 0;
char = "0";#5;clk = 1;#5;clk = 0;
char = "0";#5;clk = 1;#5;clk = 0;
char = "0";#5;clk = 1;#5;clk = 0;
char = "3";#5;clk = 1;#5;clk = 0;
char = "0";#5;clk = 1;#5;clk = 0;
char = "f";#5;clk = 1;#5;clk = 0;
char = "c";#5;clk = 1;#5;clk = 0;
char = ":";#5;clk = 1;#5;clk = 0;
char = "$";#5;clk = 1;#5;clk = 0;
char = "2";#5;clk = 1;#5;clk = 0;
char = "<";#5;clk = 1;#5;clk = 0;
char = "=";#5;clk = 1;#5;clk = 0;
char = "8";#5;clk = 1;#5;clk = 0;
char = "9";#5;clk = 1;#5;clk = 0;
char = "a";#5;clk = 1;#5;clk = 0;
char = "b";#5;clk = 1;#5;clk = 0;
char = "c";#5;clk = 1;#5;clk = 0;
char = "d";#5;clk = 1;#5;clk = 0;
char = "e";#5;clk = 1;#5;clk = 0;
char = "f";#5;clk = 1;#5;clk = 0;
char = "#";#5;clk = 1;#5;clk = 0;
char = "^";#5;clk = 1;#5;clk = 0;
char = "6";#5;clk = 1;#5;clk = 0;
char = "4";#5;clk = 1;#5;clk = 0;



	end
      
endmodule

