#include "Vfibonacci_generator.h"
#include "verilated.h"
#include "verilated_vcd_c.h"  // Include VCD tracing
#include <iostream>

int main(int argc, char **argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true); // Enable waveform tracing

    // Instantiate the Verilog module
    Vfibonacci_generator *tb = new Vfibonacci_generator;

    // Create VCD trace file
    VerilatedVcdC* vcd_trace = new VerilatedVcdC;
    tb->trace(vcd_trace, 99); // Attach trace object (99 levels of hierarchy)
    vcd_trace->open("fibonacci_generator.vcd"); // Open the VCD file

    // Simulation setup
    vluint64_t sim_time = 0;  // Simulation time
    const vluint64_t max_sim_time = 1000;  // Maximum simulation time
    bool enable = true;  // Enable signal

    // Initialize the clock and reset
    tb->clk = 0;
    tb->rst = 1;  // Assert reset

    // Start the simulation loop
    while (sim_time < max_sim_time) {
        // Toggle the clock
        tb->clk = !tb->clk;

        // Deassert reset after a few clock cycles
        if (sim_time == 10) {
            tb->rst = 0;  // Deassert reset
        }

        // Apply the enable signal
        tb->enable = enable;

        // Evaluate the model (tick the clock)
        tb->eval();

        // Dump waveform data for this time step. I should do it after eval()???
        vcd_trace->dump(sim_time);
        vcd_trace->flush(); // Ensure immediate writing to the VCD file

        // Print Fibonacci number output on the rising edge of the clock
        if (tb->clk && !tb->rst) {
            std::cout << "Cycle " << sim_time / 2 << ": Fibonacci number = " << tb->fib_out << std::endl;
        }

        // Increment simulation time
        sim_time++;
    }

    // Final cleanup
    vcd_trace->close(); // Close the VCD file
    tb->final();
    delete tb;
    delete vcd_trace; // Free allocated memory

    return 0;
}