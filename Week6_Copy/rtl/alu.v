module alu (
    input wire carry_in,
    input wire [15:0] in_a,
    input wire [15:0] in_b,
    input wire [3:0] select,
    input wire mode,  // Mode selection: 0 = Arithmetic, 1 = Logic
    output wire carry_out,
    output wire compare,
    output wire [15:0] alu_out
);

    wire [15:0] arith_result;
    wire [15:0] logic_result;
    wire arith_carry_out, arith_compare;

    

    alu_arithmetic arithmetic_unit (
        .in_a(in_a),
        .in_b(in_b),
        .select(select),
        .arith_out(arith_result),
        .carry_out(arith_carry_out),
        .compare(arith_compare)
    );

    alu_logic logic_unit (
        .in_a(in_a),
        .in_b(in_b),
        .select(select),
        .logic_out(logic_result)
    );

    assign alu_out = (mode == 1'b0) ? arith_result : logic_result ;

    assign carry_out = (mode == 1'b0) ? arith_carry_out : 1'b0;
    assign compare = (mode == 1'b0) ? arith_compare : 1'b0;

endmodule