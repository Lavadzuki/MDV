#include <iostream>
#include "Vbitty_core.h"
#include "verilated.h"

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vbitty_core* core = new Vbitty_core;

    vluint64_t main_time = 0;

    // Initial reset
    core->clk = 0;
    core->rst = 1;
    core->run = 0;
    core->debug_load = 0;
    core->eval();

    // Clock cycles for reset
    for (int i = 0; i < 4; i++) {
        core->clk ^= 1;
        core->eval();
    }

    // Load values into R5 and R7 using debug
    core->rst = 0;
    core->debug_load = 1;
    core->debug_init_0 = 0x0000;
    core->debug_init_1 = 0x0000;
    core->debug_init_2 = 0x0000;
    core->debug_init_3 = 0x0000;
    core->debug_init_4 = 0x0000;
    core->debug_init_5 = 0x0011;  // R5 = 0x0011
    core->debug_init_6 = 0x0000;
    core->debug_init_7 = 0x0022;  // R7 = 0x0022

    // One debug load cycle
    core->clk = 1; core->eval();
    core->clk = 0; core->eval();

    core->debug_load = 0;

    // Load instruction: Rx=6, Ry=7, ALU=ADD (sel=0001), mode=0 (Arithmetic)
    core->instruction = 0b1101110000001000;
    core->run = 1;

    // Run simulation cycles
    for (int i = 0; i < 16; i++) {
        core->clk = 1;
        core->eval();
        core->clk = 0;
        core->eval();

        std::cout << "Cycle " << i << ": done=" << (int)core->done << "\n";
        std::cout << "R0=" << core->r0_out << " R1=" << core->r1_out
                  << " R2=" << core->r2_out << " R3=" << core->r3_out
                  << " R4=" << core->r4_out << " R5=" << core->r5_out
                  << " R6=" << core->r6_out << " R7=" << core->r7_out << "\n";
        std::cout << "----------------------------\n";
    }

    delete core;
    return 0;
}