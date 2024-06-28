module top (
	input clk,	
	input rst,	
	input ps2_clk,	
	input ps2_data,	
	output reg [3:0] b0,	
	output reg [3:0] b1,	
	output reg [7:0] h0,	
	output reg [7:0] h1,
	output reg [7:0] light6, light5, light4, light3, light2, light1,
	output reg en,	
	output reg [7:0] count,	
	output reg [3:0] d1,	
	output reg [3:0] d0		
);
	
	reg [7:0] rom [255:0];	
	reg [3:0] out0_clk_sync [2:0];	
	reg [3:0] out1_clk_sync [2:0];	
	reg [1:0] en_clk_sync;	
	reg [3:0] r1, r0;	

	initial begin 
		count = 0;
		en_clk_sync[1] = 0;
		en_clk_sync[0] = 0;
		$readmemh("/home/holy/npc7/mem1.txt", rom);
	end
	
	assign b0 = out0_clk_sync[0];
	assign b1 = out1_clk_sync[0];

	always @ (posedge clk) 
	begin
		if((out1_clk_sync[2] == out1_clk_sync[0]) &&
			(out0_clk_sync[2] == out0_clk_sync[0]) &&
			(out1_clk_sync[1] == 4'hf) &&
			(out0_clk_sync[1] == 4'h0)
		) begin
			en <= 0;
		end else begin
		       en <= 1;
		       {d1, d0} <= rom[{out1_clk_sync[0], out0_clk_sync[0]}];
	       	end
	end

	always @ (posedge clk)
	begin
		en_clk_sync <= {en_clk_sync[1], en};
	end
	
	always @ (en_clk_sync)
	begin
		if(en_clk_sync[1] != en_clk_sync[0]) begin
			count = count + 1;
		end else begin
			count = (count == 8'b11111111) ? 0 : count;
		end
	end

	bcd7seg seg0(.b(b0), .h(h0), .en(en));
	bcd7seg seg1(.b(b1), .h(h1), .en(en));
	
	bcd7seg seg2(.b(d0[3:0]), .h(light1), .en(en));
	bcd7seg seg3(.b(d1[3:0]), .h(light2), .en(en));
	
	bcd7seg seg6(.b(count[3:0]), .h(light5), .en(1));
	bcd7seg seg7(.b(count[7:4]), .h(light6), .en(1));

	ps2_keyboard my_keyboard(
		.clk(clk),
		.resetn(~rst),
		.ps2_clk(ps2_clk),
		.ps2_data(ps2_data),
		.out0(out0_clk_sync),
		.out1(out1_clk_sync)
	);
endmodule
