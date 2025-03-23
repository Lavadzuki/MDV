module traffic_light_fsm (
    input clk,
    input reset,           // Asynchronous reset
    output reg [2:0] light // Traffic light output: 3'b001 (RED), 3'b010 (GREEN), 3'b100 (YELLOW)
);

    // State encoding
    parameter RED = 2'b00;
    parameter GREEN = 2'b01;
    parameter YELLOW = 2'b10;

    parameter THRESHOLD_RED = 10;    // Change this value as needed
    parameter THRESHOLD_GREEN = 10;
    parameter THRESHOLD_YELLOW = 5;
    reg [1:0] current_state, next_state;
    wire [3:0] count_out; // Wire to receive counter output


    // Instantiate counter module with `clear` signal
    counter counter_inst (
        .clk(clk),
        .rst(reset),
        .clear(current_state != next_state), // Clear counter when state changes
        .count_out(count_out)
    );


    // Model state register (sequential logic)
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            current_state <= RED;
        end else begin
            current_state <= next_state;
        end
    end

    // Model next state decode logic (combinational logic)
    always @(*) begin
        case (current_state)
            RED: begin
                if (count_out>=THRESHOLD_RED) begin
                    next_state = GREEN;
                end else begin
                    next_state = RED;
                end
            end
            GREEN: begin
                if (count_out >=THRESHOLD_GREEN) begin
                    next_state = YELLOW;
                end else begin
                    next_state = GREEN;
                end
            end
            YELLOW: begin
                if (count_out >= THRESHOLD_YELLOW) begin
                    next_state = RED;
                end else begin
                    next_state = YELLOW;
                end
            end
            default: begin
                next_state = RED;
            end
        endcase
    end

    // Model output logic (combinational logic)
    always @(*) begin
        case (current_state)
            RED: begin
                light = 3'b001; // RED light
            end
            GREEN: begin
                light = 3'b010; // GREEN light
            end
            YELLOW: begin
                light = 3'b100; // YELLOW light
            end
            default: begin
                light = 3'b001; // Default to RED light
            end
        endcase
    end
endmodule