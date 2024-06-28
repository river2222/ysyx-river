module bcd7seg(
	input [3:0] b,
	input en,
	output reg [7:0] h
);
	always @ (*)
	begin

		if(en)
		begin
		case (b)
			0: h =  8'b00000010;
			1: h =  8'b10011111;
			2: h =  8'b00100101; 
			3: h =  8'b00001101;
			4: h =  8'b10011001;
			5: h =  8'b01001001;
			6: h =  8'b01000001;
			7: h =  8'b00011111;
			8: h =  8'b00000001; 
			9: h =  8'b00001001;
			10: h = 8'b00010001; 
			11: h = 8'b11000001;
			12: h = 8'b01100011;
			13: h = 8'b10000101;
			14: h = 8'b01100001;
			15: h = 8'b01110001;
		endcase
		end

		else
		begin
			h = 8'b11111111;
		end

	end
endmodule
