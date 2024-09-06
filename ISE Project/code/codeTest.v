`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:56:17 09/18/2023
// Design Name:   code
// Module Name:   C:/Users/Hihiczx/Documents/ISE Project/code/codeTest.v
// Project Name:  code
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: code
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module codeTest;

	// Inputs
	reg Clk;
	reg Reset;
	reg Slt;
	reg En;

	// Outputs
	wire [63:0] Output0;
	wire [63:0] Output1;

	// Instantiate the Unit Under Test (UUT)
	code uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.Slt(Slt), 
		.En(En), 
		.Output0(Output0), 
		.Output1(Output1)
	);

	initial begin
		// Initialize Inputs
		Clk = 0;
		Reset = 0;
		Slt = 0;
		En = 0;

		// Wait 100 ns for global reset to finish
		#100;
      
		En = 1;
		Clk = 1;#5;Clk = 0;#5;
		Clk = 1;#5;Clk = 0;#5;
		Clk = 1;#5;Clk = 0;#5;
		Clk = 1;#5;Clk = 0;#5;
		Clk = 1;#5;Clk = 0;#5;
		Slt = 1;
		Clk = 1;#5;Clk = 0;#5;
		Clk = 1;#5;Clk = 0;#5;
		Clk = 1;#5;Clk = 0;#5;
		Clk = 1;#5;Clk = 0;#5;
		Clk = 1;#5;Clk = 0;#5;
		Clk = 1;#5;Clk = 0;#5;
		Reset = 1;#5;Reset = 0;#5;
		Clk = 1;#5;Clk = 0;#5;
		Clk = 1;#5;Clk = 0;#5;
		Clk = 1;#5;Clk = 0;#5;
		Clk = 1;#5;Clk = 0;#5;
		Clk = 1;#5;Clk = 0;#5;
		
		
		
		
		
		
		// Add stimulus here

	end
      
endmodule

