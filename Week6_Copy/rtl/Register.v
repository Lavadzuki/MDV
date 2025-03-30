module Register (
    input wire [15:0] d_in,
    input wire clk,
    input wire rst,
    input wire enable,
    output reg [15:0] d_out
);

always @(posedge clk or posedge rst) begin
    if (rst) begin
        d_out <= 16'b0;
    end else if (enable) begin
        d_out <= d_in;
    end
end
endmodule