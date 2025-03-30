module bitty_core(
    input wire clk,
    input wire rst,
    input wire [15:0] instruction,
    input wire run,

    output wire done,

    output reg [15:0] r0_out,
    output reg [15:0] r1_out,
    output reg [15:0] r2_out,
    output reg [15:0] r3_out,
    output reg [15:0] r4_out,
    output reg [15:0] r5_out,
    output reg [15:0] r6_out,
    output reg [15:0] r7_out
);

    // GP registers
    wire [15:0] r_out[7:0];
    wire [7:0] enables;

    // Special Enables
    wire en_i;
    wire en_s;
    wire en_c;

    // Control Unit outputs
    wire [2:0] sel;
    wire [2:0] mux_sel;

    // Input to register file (output of ALU or MUX)
    wire [15:0] reg_in;  
    assign reg_in = c_out;

    // Output for Instruction Registor
    wire [15:0] inst_out; 

    // Reg S output
    wire [15:0] s_out;

    // Reg C output
    wire [15:0] c_out;

    // Multiplexer output
    wire [15:0] mux_out;

    //ALU output;
    wire [15:0] ALU_out;

    // ALU select and ALY mode
    wire [2:0] ALU_sel;

    // Control Unit initiation
    control_unit CU (
        .clk(clk),
        .rst(rst),
        .run(run),
        .instruction(instruction),
        .sel(ALU_sel),
        .mux_sel(mux_sel),
        .done(done),
        .enableOutput(enables),
        .en_s(en_s),
        .en_c(en_c),
        .en_i(en_i)
    );

//genvar is a special variable used only for generate-time loops.
// begin: name.  Creates a named generate block. You can reference the instances using name[i].
//reg_bank — This is a named generate block

    // Registers (R0 to R7)
    genvar i;
    generate
        for (i = 0; i < 8; i = i + 1) begin: reg_bank
            Register R (
                .d_in(reg_in),
                .clk(clk),
                .rst(rst),
                .enable(enables[i]),
                .d_out(r_out[i])
            );
        end
    endgenerate

    Register RegInst (
        .d_in(instruction),
        .clk(clk),
        .rst(rst),
        .enable(en_i),
        .d_out(inst_out)
    );

    Register RegS (
        .d_in(mux_out),
        .clk(clk),
        .rst(rst),
        .enable(en_s),
        .d_out(s_out)
    );

    Register RegC (
        .d_in(ALU_out),   //ALU output
        .clk(clk),
        .rst(rst),
        .enable(en_c),
        .d_out(c_out)
    );

    MUX multiplex(
        .select(mux_sel),
        .outMux(mux_out),
        .inMux(r_out)
    );

    alu alu_unit(
        .in_a(s_out),
        .in_b(mux_out),
        .select(ALU_sel),
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
