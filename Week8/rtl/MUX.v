module MUX (
    input wire [3:0] select,        
    input wire [15:0] inMux [8:0],   // will change later, for now 9 is okay.
    output reg [15:0] outMux
);

always @(*) begin
    case (select)
        4'b0000: outMux = inMux[0]; 
        4'b0001: outMux = inMux[1];  
        4'b0010: outMux = inMux[2];
        4'b0011: outMux = inMux[3];
        4'b0100: outMux = inMux[4];
        4'b0101: outMux = inMux[5];
        4'b0110: outMux = inMux[6];
        4'b0111: outMux = inMux[7];
        4'b1000: outMux = inMux[8];// Instruction channel
   //   4'b1001: outMux = inMux[9];
   //   4'b1010: outMux = inMux[10];
   //   4'b1011: outMux = inMux[11];
   //   4'b1100: outMux = inMux[12];
   //   4'b1101: outMux = inMux[13];
   //   4'b1110: outMux = inMux[14];
   //   4'b1111: outMux = inMux[15];

        default: outMux = 0; 
    endcase
end

endmodule