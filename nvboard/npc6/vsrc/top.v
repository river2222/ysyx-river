module top(  
    input clk,
		input rst,	
    input [4:0] btn,
    output reg [7:0] lfsr_out, 
    output reg [7:0] seg1,
		output reg [7:0] seg0	
);  
  
initial begin  
    lfsr_out = 8'b00000001;
		seg1 = 8'b00000010;
		seg0 = 8'b10011111;
end

reg prev_btn0 = 0;
  
always @(posedge clk) begin
	if (rst) begin
        lfsr_out = 8'b00000001;
        seg1 = 8'b00000010;
        seg0 = 8'b10011111;
        prev_btn0 = 0;
			end else begin
	if (!prev_btn0 && btn[0]) begin
		lfsr_out = {lfsr_out[4] ^ lfsr_out[3] ^ lfsr_out[2] ^ lfsr_out[0], lfsr_out[7:1]};    
    if (lfsr_out[7:4]==4'b0000) seg1 = 8'b00000010;
		if (lfsr_out[7:4]==4'b0001) seg1 = 8'b10011111;
		if (lfsr_out[7:4]==4'b0010) seg1 = 8'b00100101;
		if (lfsr_out[7:4]==4'b0011) seg1 = 8'b00001101;
		if (lfsr_out[7:4]==4'b0100) seg1 = 8'b10011001;
		if (lfsr_out[7:4]==4'b0101) seg1 = 8'b01001001;
		if (lfsr_out[7:4]==4'b0110) seg1 = 8'b01000001;
		if (lfsr_out[7:4]==4'b0111) seg1 = 8'b00011111;
		if (lfsr_out[7:4]==4'b1000) seg1 = 8'b00000001;

		if (lfsr_out[7:4]==4'b1001) seg1 = 8'b00001001;
		if (lfsr_out[7:4]==4'b1010) seg1 = 8'b00010001;
		if (lfsr_out[7:4]==4'b1011) seg1 = 8'b11000001;
		if (lfsr_out[7:4]==4'b1100) seg1 = 8'b01100011;
		if (lfsr_out[7:4]==4'b1101) seg1 = 8'b10000101;
		if (lfsr_out[7:4]==4'b1110) seg1 = 8'b01100001;
		if (lfsr_out[7:4]==4'b1111) seg1 = 8'b01110001;

    if (lfsr_out[3:0]==4'b0000) seg0 = 8'b00000010;
		if (lfsr_out[3:0]==4'b0001) seg0 = 8'b10011111;
		if (lfsr_out[3:0]==4'b0010) seg0 = 8'b00100101;
		if (lfsr_out[3:0]==4'b0011) seg0 = 8'b00001101;
		if (lfsr_out[3:0]==4'b0100) seg0 = 8'b10011001;
		if (lfsr_out[3:0]==4'b0101) seg0 = 8'b01001001;
		if (lfsr_out[3:0]==4'b0110) seg0 = 8'b01000001;
		if (lfsr_out[3:0]==4'b0111) seg0 = 8'b00011111;
		if (lfsr_out[3:0]==4'b1000) seg0 = 8'b00000001;

		if (lfsr_out[3:0]==4'b1001) seg0 = 8'b00001001;
		if (lfsr_out[3:0]==4'b1010) seg0 = 8'b00010001;
		if (lfsr_out[3:0]==4'b1011) seg0 = 8'b11000001;
		if (lfsr_out[3:0]==4'b1100) seg0 = 8'b01100011;
		if (lfsr_out[3:0]==4'b1101) seg0 = 8'b10000101;
		if (lfsr_out[3:0]==4'b1110) seg0 = 8'b01100001;
		if (lfsr_out[3:0]==4'b1111) seg0 = 8'b01110001;
	end
	prev_btn0 = btn[0];
end

end
endmodule
