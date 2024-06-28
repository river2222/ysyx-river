module top(  
    input [3:0] A, B,
    input [2:0] func_sel,
		input clk,
		input rst,
    output reg [3:0] out_s, 
    output reg out_eq,  
    output reg out_lt,
    output reg overflow,
    output reg carry
);  
  
reg [4:0] temp_add;
reg [4:0] temp_sub;
  
always_latch @(*) begin  
    case (func_sel)  
        3'b000: begin
            {carry, out_s} = A + B;
            overflow = (A[3] == B[3] && A[3] != out_s[3]);  
        end  
        3'b001: begin
            {temp_sub[4], out_s} = A - B;  
            carry = ~temp_sub[4];  
            overflow = (A[3] != B[3] && A[3] != out_s[3]);  
        end  
        3'b010: out_s = ~A;  
        3'b011: out_s = A & B; 
        3'b100: out_s = A | B;  
        3'b101: out_s = A ^ B;  
        3'b110: begin 
            out_lt = (A < B); 
        end  
        3'b111: begin 
            out_eq = (A == B);  
        end  
        default: begin  
            out_s = 4'b0000;  
            out_eq = 0;  
            out_lt = 0;  
            overflow = 0;  
            carry = 0;  
        end  
    endcase  
end  
  
endmodule
