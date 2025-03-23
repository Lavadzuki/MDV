#include <iostream>
#include <Vtraffic_light.h>
#include <verilated.h>
#include "verilated_vcd_c.h"
#include <bitset>
#include <string>

int main(int argc, char **argv){

    Verilated::commandArgs(argc, argv);   // Initialize Verilator.
    Vtraffic_light* traffic = new Vtraffic_light;

    Verilated::traceEverOn(true); // Enable waveform tracing. 
    VerilatedVcdC* vcd_trace = new VerilatedVcdC; 
    traffic->trace(vcd_trace, 99); 
    vcd_trace->open("traffic.vcd"); // Open the VCD file.

    int sim_time = 0;

    // Initial reset
    traffic->clk = 0;
    traffic->reset = 1;
    traffic->eval();
    vcd_trace->dump(sim_time++);

    // Razogrevaem Dvigatel'
    for (int i = 0; i < 4; i++) {
        traffic->clk = !traffic->clk;
        traffic->eval();
        vcd_trace->dump(sim_time++);
    }
    traffic->reset = 0;

    for (int i = 0; i < 100; i++) {
        traffic->clk = !traffic->clk;
        traffic->eval();
        vcd_trace->dump(sim_time++);

        std::bitset<3> light_bits(traffic->light);
        std::string light_color;
        if (light_bits == 0b001) {
            light_color = "RED";
        } else if (light_bits == 0b010) {
            light_color = "GREEN";
        } else if (light_bits == 0b100) {
            light_color = "YELLOW";
        }
        std::cout << "Time: " << sim_time/2 - 2
                  << " | Light: " << light_bits
                  << " (" << light_color << ")" << std::endl;
    }

    vcd_trace->close();
    delete traffic;
    delete vcd_trace;

    return 0;
}