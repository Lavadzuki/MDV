// Include the generated module header.
// Vand_gate.h file is auto-generated by Verilator.
// It is the output of Verilator, i.e. the translation from Verilog to C++.
#include "Vand_gate.h"
#include <iostream>
#include "verilated_vcd_c.h"  // Enables waveform tracing
#include "verilated.h"        // Include Verilator library

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);  // Initialize Verilator
    Vand_gate* and_gate = new Vand_gate; // Create an instance of the AND gate module

    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* vcd_trace = new VerilatedVcdC;
    and_gate->trace(vcd_trace, 99); // Trace 99 levels of hierarchy
    vcd_trace->open("and_gate_trace.vcd"); // Open the VCD file

    int timestamp = 0; // Start time at 0

    // Apply test cases with unique timestamps
    and_gate->a = 0; and_gate->b = 0;
    and_gate->eval();
    vcd_trace->dump(timestamp += 50); // Increase time spacing // Unique time step
    vcd_trace->flush();
    std::cout << "a=0, b=0 -> y=" << (int)and_gate->y << std::endl;

    and_gate->a = 0; and_gate->b = 1;
    and_gate->eval();
    vcd_trace->dump(timestamp += 50); // Increase time spacing
    vcd_trace->flush();
    std::cout << "a=0, b=1 -> y=" << (int)and_gate->y << std::endl;

    and_gate->a = 1; and_gate->b = 0;
    and_gate->eval();
    vcd_trace->dump(timestamp += 50); // Increase time spacing
    vcd_trace->flush();
    std::cout << "a=1, b=0 -> y=" << (int)and_gate->y << std::endl;

    // Last test case: a = 1, b = 1
    and_gate->a = 1; and_gate->b = 1;
    and_gate->eval();
    vcd_trace->dump(timestamp += 50); // Increment time
    vcd_trace->flush();
    std::cout << "a=1, b=1 -> y=" << (int)and_gate->y << std::endl;


    // 🔹 Add a final dump to ensure the last state is captured
    vcd_trace->dump(timestamp += 50);
    vcd_trace->flush();
    return 0;
}