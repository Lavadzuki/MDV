module Register (
    input wire [15:0] d_in,
    input wire clk,
    input wire rst,
    input wire enable,
    input wire [15:0] debug_init,    // Values for debugging
    input wire debug_load,           // Enable for Debugging part
    output reg [15:0] d_out
);

always @(posedge clk or posedge rst) begin
    if (rst) begin
        d_out <= 16'b0;
    end else if (debug_load) begin
        d_out <= debug_init;
    end else if (enable) begin
        d_out <= d_in;
    end
end
endmodule