module top(x0,x1,x2,x3,y,f);
  input  [1:0] x0;
  input  [1:0] x1;
	input  [1:0] x2;
	input  [1:0] x3;
	input  [1:0] y;
  output reg [1:0] f;
  
	wire Y_00 = ~y[1] & ~y[0];  
	wire Y_01 = ~y[1] &  y[0];  
	wire Y_10 =  y[1] & ~y[0];  
	wire Y_11 =  y[1] &  y[0];  
	assign f = (x0 & {2{Y_00}}) | (x1 & {2{Y_01}}) | (x2 & {2{Y_10}}) | (x3 & {2{Y_11}});

endmodule
