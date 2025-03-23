#include <iostream>
#include <Vcounter.h>
#include <verilated.h>
#include "verilated_vcd_c.h"

int main(int argc, char **argv){

    Verilated::commandArgs(argc, argv);   // Initialize Verilator.
    Vcounter* counter = new Vcounter;

    Verilated::traceEverOn(true); // Enable waveform tracing. 
    VerilatedVcdC* vcd_trace = new VerilatedVcdC; 
    counter->trace(vcd_trace, 99); 
    vcd_trace->open("counter.vcd"); // Open the VCD file.

    counter->clk = 0;
    counter->rst = 1;
    counter->eval();
    vcd_trace->dump(0);

    counter->rst=0;

    for (int i = 0; i < 15; i++) {
        counter->clk = 1;
        counter->eval();
        vcd_trace->dump(i * 10);  // Increment time properly

        counter->clk = 0;
        counter->eval();
        vcd_trace->dump(i * 10 + 5);  // Increment again for clock low

        std::cout << "Cycle: " << i << " | Count: " << (int)counter->count_out << std::endl;
    }

    vcd_trace->close();
    delete counter;
    return 0;
}