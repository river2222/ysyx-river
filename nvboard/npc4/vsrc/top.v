module top(x,en,y,flag,seg0,clk,rst);
  input  [7:0] x;
  input  en;
	input clk;
	input rst;
  output reg [2:0] y;
	output reg flag;
	output reg [7:0] seg0;
  integer i;
  always_latch @(x or en) begin
		if (x==0) flag = 0;
		else	flag = 1;
    if (en) begin
      y = 0;
      for( i = 0; i <= 7; i = i+1)
          if(x[i] == 1)  y = i[2:0];
			if (y==3'd0) seg0 = 8'b00000010;
			if (y==3'd1) seg0 = 8'b10011111;
			if (y==3'd2) seg0 = 8'b00100101;
			if (y==3'd3) seg0 = 8'b00001101;
			if (y==3'd4) seg0 = 8'b10011001;
			if (y==3'd5) seg0 = 8'b01001001;
			if (y==3'd6) seg0 = 8'b01000001;
			if (y==3'd7) seg0 = 8'b00011111;
    end
    else  begin
			y = 0;
			seg0 = 8'b00000010;
		end
  end
endmodule
