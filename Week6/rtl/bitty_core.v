module bitty_core(
    input wire clk,
    input wire rst,
    input wire [15:0] instruction,
    input wire run,
    output wire done,

    // Debug initialization
    input wire debug_load,
    input wire [15:0] debug_init_0,
    input wire [15:0] debug_init_1,
    input wire [15:0] debug_init_2,
    input wire [15:0] debug_init_3,
    input wire [15:0] debug_init_4,
    input wire [15:0] debug_init_5,
    input wire [15:0] debug_init_6,
    input wire [15:0] debug_init_7,

    output wire [15:0] r0_out,
    output wire [15:0] r1_out,
    output wire [15:0] r2_out,
    output wire [15:0] r3_out,
    output wire [15:0] r4_out,
    output wire [15:0] r5_out,
    output wire [15:0] r6_out,
    output wire [15:0] r7_out
);

    // GP registers
    wire [15:0] r_out[7:0];
    wire [7:0] enables;

    // Special Enables
    wire en_i;
    wire en_s;
    wire en_c;

    // Control Unit outputs
    wire [3:0] sel;
    wire [2:0] mux_sel;
    wire mode;

    // Input to register file (output of ALU or MUX)
    wire [15:0] reg_in;
    assign reg_in = c_out;

    // Output for Instruction Register
    wire [15:0] inst_out;

    // Reg S output
    wire [15:0] s_out;

    // Reg C output
    wire [15:0] c_out;

    // Multiplexer output
    wire [15:0] mux_out;

    // ALU output
    wire [15:0] ALU_out;

    // ALU select and mode
    wire [3:0] ALU_sel;
    wire ALU_mode;

    control_unit CU (
        .clk(clk),
        .rst(rst),
        .run(run),
        .instruction(instruction),
        .sel(ALU_sel),
        .mux_sel(mux_sel),
        .mode(ALU_mode),
        .done(done),
        .enableOutput(enables),
        .en_s(en_s),
        .en_c(en_c),
        .en_i(en_i)
    );

    Register R0 (.d_in(reg_in), .clk(clk), .rst(rst), .enable(enables[0]), .debug_init(debug_init_0), .debug_load(debug_load), .d_out(r_out[0]));
    Register R1 (.d_in(reg_in), .clk(clk), .rst(rst), .enable(enables[1]), .debug_init(debug_init_1), .debug_load(debug_load), .d_out(r_out[1]));
    Register R2 (.d_in(reg_in), .clk(clk), .rst(rst), .enable(enables[2]), .debug_init(debug_init_2), .debug_load(debug_load), .d_out(r_out[2]));
    Register R3 (.d_in(reg_in), .clk(clk), .rst(rst), .enable(enables[3]), .debug_init(debug_init_3), .debug_load(debug_load), .d_out(r_out[3]));
    Register R4 (.d_in(reg_in), .clk(clk), .rst(rst), .enable(enables[4]), .debug_init(debug_init_4), .debug_load(debug_load), .d_out(r_out[4]));
    Register R5 (.d_in(reg_in), .clk(clk), .rst(rst), .enable(enables[5]), .debug_init(debug_init_5), .debug_load(debug_load), .d_out(r_out[5]));
    Register R6 (.d_in(reg_in), .clk(clk), .rst(rst), .enable(enables[6]), .debug_init(debug_init_6), .debug_load(debug_load), .d_out(r_out[6]));
    Register R7 (.d_in(reg_in), .clk(clk), .rst(rst), .enable(enables[7]), .debug_init(debug_init_7), .debug_load(debug_load), .d_out(r_out[7]));

    Register RegInst (.d_in(instruction), .clk(clk), .rst(rst), .enable(en_i), .debug_init(16'h0000), .debug_load(1'b0), .d_out(inst_out));
    Register RegS (.d_in(mux_out), .clk(clk), .rst(rst), .enable(en_s), .debug_init(16'h0000), .debug_load(1'b0), .d_out(s_out));
    Register RegC (.d_in(ALU_out), .clk(clk), .rst(rst), .enable(en_c), .debug_init(16'h0000), .debug_load(1'b0), .d_out(c_out));

    MUX multiplex (
        .select(mux_sel),
        .inMux(r_out),
        .outMux(mux_out)
    );

    alu alu_unit (
        .in_a(s_out),
        .in_b(mux_out),
        .select(ALU_sel),
        .mode(ALU_mode),
        .alu_out(ALU_out),
        .carry_in(),
        .carry_out(),
        .compare()
    );

    assign r0_out = r_out[0];
    assign r1_out = r_out[1];
    assign r2_out = r_out[2];
    assign r3_out = r_out[3];
    assign r4_out = r_out[4];
    assign r5_out = r_out[5];
    assign r6_out = r_out[6];
    assign r7_out = r_out[7];

endmodule