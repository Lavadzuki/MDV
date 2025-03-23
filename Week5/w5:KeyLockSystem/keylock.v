module keylock (
input clk,
input reset,
input [2:0] number,

output reg locked
);

reg [2:0] next_state;
reg [2:0] current_state;

//Encoding

parameter S0 = 3'b000;
parameter S1 = 3'b001; //3
parameter S2 = 3'b010; //3
parameter S3 = 3'b011; //5
parameter S4 = 3'b100; //2
parameter S5 = 3'b101; //5
parameter S6 = 3'b110; //6 UNLOCKED

always @(posedge clk or posedge reset) begin
    if (reset) begin
        current_state <= S0;
    end else begin
        current_state <=next_state;
    end
end


//Next State Logic
always @ (*) begin
    case (current_state)
        S0: begin
            if (number == 3 ) begin
                next_state = S1;
            end else begin
                next_state = S0;
            end
        end
        S1: begin
            if (number == 3 ) begin
                next_state = S2;
            end else begin
                next_state = S0;
            end   
        end
        S2: begin
            if (number == 5) begin
                next_state = S3;
            end else begin
                next_state = S0;
            end    
        end
        S3: begin
            if (number == 2 )begin
                next_state = S4;
            end else begin
                next_state = S0;
            end   
        end
        S4: begin
            if (number == 5)begin
                next_state = S5;
            end else begin
                next_state = S0;
            end    
        end
        S5: begin
            if (number == 6 ) begin
                next_state = S6;
            end else begin
                next_state = S0;
            end    
        end 
        default : next_state = S0;
    endcase
end

//Output Logic

always @(*) begin
    if (current_state == S6) begin
        locked = 0;
    end else begin
        locked = 1;
    end
end

endmodule