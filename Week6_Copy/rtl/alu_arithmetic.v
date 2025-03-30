module alu_arithmetic (
    input wire [15:0] in_a,
    input wire [15:0] in_b,
    input wire [3:0] select,
    output reg [15:0] arith_out,
    output wire carry_out,
    output wire compare
);

    wire [16:0] extended_sum; // 17-bit sum to capture carry
    assign extended_sum = {1'b0, in_a} + {1'b0, in_b}; // Prevent overflow issues {} -> used for concatenation

    always @(*) begin
        case (select)
            4'b0000: arith_out = in_a;                  
            4'b0001: arith_out = in_a | in_b;         
            4'b0010: arith_out = in_a | (~in_b);     
            4'b0011: arith_out = 16'hFFFF;            
            4'b0100: arith_out = in_a | (in_a & ~in_b); 
            4'b0101: arith_out = (in_a | in_b) + (in_a & ~in_b);
            4'b0110: arith_out = in_a - in_b - 1;     
            4'b0111: arith_out = (in_a & ~in_b) - 1;
            4'b1000: arith_out = in_a + (in_a & in_b);
            4'b1001: arith_out = in_a + in_b;         
            4'b1010: arith_out = (in_a | ~in_b) + (in_a & in_b);
            4'b1011: arith_out = (in_a & in_b) - 1;
            4'b1100: arith_out = in_a + in_a;
            4'b1101: arith_out = (in_a | in_b) + in_a;
            4'b1110: arith_out = (in_a | ~in_b) + in_a;
            4'b1111: arith_out = in_a - 1;
            default: arith_out = 16'b0;
        endcase
    end

    assign carry_out = extended_sum[16];

    assign compare = (in_a == in_b) ? 1'b1 : 1'b0;

endmodule