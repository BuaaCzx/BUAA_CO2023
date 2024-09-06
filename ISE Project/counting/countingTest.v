`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:12:41 09/17/2023
// Design Name:   counting
// Module Name:   C:/Users/Hihiczx/Documents/ISE Project/counting/countingTest.v
// Project Name:  counting
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: counting
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module countingTest;

	// Inputs
	reg [1:0] num;
	reg clk;

	// Outputs
	wire ans;

	// Instantiate the Unit Under Test (UUT)
	counting uut (
		.num(num), 
		.clk(clk), 
		.ans(ans)
	);

	initial begin
		// Initialize Inputs
		num = 0;
		clk = 0;

		// Wait 30 ns for global reset to finish
		#100;
		//1 1 2 3 3 1 2 1 1 1 2 2 3 3 3 1
		num=1;#10;clk=1;#10;clk=0;#30;
		num=1;#10;clk=1;#10;clk=0;#30;
		num=2;#10;clk=1;#10;clk=0;#30;
		num=3;#10;clk=1;#10;clk=0;#30;
		num=3;#10;clk=1;#10;clk=0;#30;
		num=1;#10;clk=1;#10;clk=0;#30;
		num=2;#10;clk=1;#10;clk=0;#30;
		num=1;#10;clk=1;#10;clk=0;#30;
		num=1;#10;clk=1;#10;clk=0;#30;
		num=1;#10;clk=1;#10;clk=0;#30;
		num=2;#10;clk=1;#10;clk=0;#30;
		num=2;#10;clk=1;#10;clk=0;#30;
		num=2;#10;clk=1;#10;clk=0;#30;
		num=3;#10;clk=1;#10;clk=0;#30;
		num=3;#10;clk=1;#10;clk=0;#30;
		num=3;#10;clk=1;#10;clk=0;#30;
		num=1;#10;clk=1;#10;clk=0;#30;
		
		// Add stimulus here

	end
		
		
		
endmodule

