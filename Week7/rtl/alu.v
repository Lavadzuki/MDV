module alu (
    input wire carry_in,
    input wire [15:0] in_a,
    input wire [15:0] in_b,
    input wire [2:0] select,
    output wire carry_out,
    output wire compare,
    output reg [15:0] alu_out
);

 //   wire arith_carry_out, arith_compare;

    always @(*) begin
        alu_out = 16'd0;  
        case (select) 
            3'b000:
                alu_out = in_a + in_b ;  // for test16'b0000000000000010
            3'b001:
                alu_out = in_a - in_b;
            3'b010:
                alu_out = in_a & in_b;
            3'b011:
                alu_out = in_a | in_b;
            3'b100:
                alu_out = in_a ^ in_b;
            3'b101:
                alu_out = in_a << in_b;
            3'b110:
                alu_out = in_a >> in_b;
            3'b111:
                if (in_a == in_b) begin
                    alu_out = 16'd0;
                end else if (in_a > in_b) begin
                    alu_out = 16'd1;
                end else if (in_a < in_b) begin
                    alu_out = 16'd2;
                end

        endcase
    end
    

//  assign alu_out = alu_result;

 //   assign carry_out = (mode == 1'b0) ? arith_carry_out : 1'b0;
   // assign compare = (mode == 1'b0) ? arith_compare : 1'b0;

endmodule