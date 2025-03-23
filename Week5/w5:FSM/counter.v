module counter(
    input clk,
    input rst,        
    input clear,       // New input: clears counter when high
    output reg [3:0] count_out  
);

    always @(posedge clk or posedge rst) begin
        if (rst || clear) 
            count_out <= 4'b0000;  // Reset count to 0
        else 
            count_out <= count_out + 4'b0001;  
    end

endmodule