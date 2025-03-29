module MUX (
    input wire [2:0] select,        
    input wire [15:0] inMux [7:0],  
    output reg [15:0] outMux
);

always @(*) begin
    case (select)
        3'b000: outMux = inMux[0]; 
        3'b001: outMux = inMux[1];  
        3'b010: outMux = inMux[2];
        3'b011: outMux = inMux[3];
        3'b100: outMux = inMux[4];
        3'b101: outMux = inMux[5];
        3'b110: outMux = inMux[6];
        3'b111: outMux = inMux[7];
        default: outMux = 0; 
    endcase
end

endmodule