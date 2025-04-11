#include <iostream>
#include "Vbitty_core.h"
#include "verilated.h"
#include <bitset>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vbitty_core* core = new Vbitty_core;
    // Initial reset
    core->clk = 0;
    core->rst = 1;
    core->instruction = 0;
    core->run = 0;
    core->eval();

    // Reset for a few cycles
    for (int i = 0; i < 4; i++) {
        core->clk ^= 1;
        core->eval();
    }

    core->rst = 0;
    core->run = 1;
    core->instruction = 0b1110000010100001;

    // Simulate FSM cycles
    for (int i = 0; i < 15; i++) {
        core->clk = 1;
        core->eval();

        std::cout << "Cycle " << i << ": done=" << (int)core->done << "\n";
        core->clk = 0;
        core->eval();
    }
    std::cout << "Immediate control: " << core->immediate_control << "\n";

    std::cout << "Register values:\n";
    std::cout << "R0 = " << std::hex << core->r0_out << "\n";
    std::cout << "R1 = " << std::hex << core->r1_out << "\n";
    std::cout << "R2 = " << std::hex << core->r2_out << "\n";
    std::cout << "R3 = " << std::hex << core->r3_out << "\n";
    std::cout << "R4 = " << std::hex << core->r4_out << "\n";
    std::cout << "R5 = " << std::hex << core->r5_out << "\n";
    std::cout << "R6 = " << std::hex << core->r6_out << "\n";
    std::cout << "R7 = " << std::hex << core->r7_out << "\n";
    //std::cout << "R8 = " << std::hex << core->r8_out << "\n";

    delete core;
    return 0;
}
