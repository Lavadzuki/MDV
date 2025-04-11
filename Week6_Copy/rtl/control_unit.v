module control_unit (
input wire run,
input wire clk,
input wire rst,
input wire [15:0] instruction,


output reg [3:0] sel,
output reg [2:0] mux_sel,
output reg mode,
output reg done,
output wire [7:0] enableOutput,

output reg en_s,
output reg en_c,
output reg en_i
);


wire [2:0] Rx;
wire [2:0] Ry;
wire [2:0] Res1;
wire [3:0] ALU_sel;
wire ALU_mode;
wire [1:0] Res0;

assign Rx = instruction[15:13];
assign Ry = instruction[12:10];
assign Res1 = instruction[9:7];
assign ALU_sel = instruction[6:3];
assign ALU_mode = instruction[2];
assign Res0 = instruction[1:0];


//always @(posedge clk or posedge rst) begin
//    if (rst || !run) begin
//        Rx <= 3'b0;
//        Ry <= 3'b0;
//       Res1 <= 3'b0;
//        ALU_sel <= 4'b0;
//        ALU_mode <= 1'b0;
//        Res0 <= 2'b0;
//    end else begin

//        Rx <= instruction[15:13];
//        Ry <= instruction[12:10];
//        Res1 <= instruction[9:7];
//        ALU_sel <= instruction[6:3];
//        ALU_mode <= instruction[2];
//        Res0 <= instruction[1:0];
        
//    end
//end

parameter S0 = 2'b00;
parameter S1 = 2'b01;
parameter S2 = 2'b10;
parameter S3 = 2'b11;



reg en_0 = 1'b0;
reg en_1 = 1'b0;
reg en_2 = 1'b0;
reg en_3 = 1'b0;
reg en_4 = 1'b0;
reg en_5 = 1'b0;
reg en_6 = 1'b0;
reg en_7 = 1'b0;



reg [1:0] next_state;
reg [1:0] current_state;

always @(posedge clk or posedge rst) begin
    if (rst || !run) begin
        current_state <= S0;
    end else begin
        current_state <=next_state;
    end
end


always @(*) begin
    case (current_state) 
        S0: begin
            next_state = S1;
        end
        S1: begin
            next_state = S2;
        end
        S2: begin
            next_state = S3;
        end
        S3: begin
            next_state = S0;
        end
    endcase
end


always @(*) begin
    en_i = 1'b0;
    en_s = 1'b0;
    en_c = 1'b0;
    done = 1'b0;
    mux_sel = 3'b000;
    sel = 4'b0000;
    mode = 1'b0;
    en_0 = 1'b0;
    en_1 = 1'b0;
    en_2 = 1'b0;
    en_3 = 1'b0;
    en_4 = 1'b0;
    en_5 = 1'b0;
    en_6 = 1'b0;
    en_7 = 1'b0;


    if (current_state == S0) begin
        en_i = 1'b1;
    end else if (current_state == S1) begin
        en_s = 1'b1;
        mux_sel = Rx;
    end else if (current_state == S2) begin
        en_c = 1'b1;
        sel = ALU_sel;
        mode = ALU_mode;
        mux_sel = Ry;
    end else if (current_state == S3) begin
        case (Rx) 
                3'b000: en_0 = 1'b1;
                3'b001: en_1 = 1'b1;
                3'b010: en_2 = 1'b1;
                3'b011: en_3 = 1'b1;
                3'b100: en_4 = 1'b1;
                3'b101: en_5 = 1'b1;
                3'b110: en_6 = 1'b1;
                3'b111: en_7 = 1'b1;
                default: en_0 = 1'b0;
        endcase
        done = 1'b1;
    end
end

//wire assign
//always @(posedge clk) begin
//  enableOutput[0] <= en_0;
//    enableOutput[1] <= en_1;
//    enableOutput[2] <= en_2;
//   enableOutput[3] <= en_3;
//    enableOutput[4] <= en_4;
//    enableOutput[5] <= en_5;
//    enableOutput[6] <= en_6;
//    enableOutput[7] <= en_7;
//end

assign enableOutput[0] = en_0;
assign enableOutput[1] = en_1;
assign enableOutput[2] = en_2;
assign enableOutput[3] = en_3;
assign enableOutput[4] = en_4;
assign enableOutput[5] = en_5;
assign enableOutput[6] = en_6;
assign enableOutput[7] = en_7;

endmodule