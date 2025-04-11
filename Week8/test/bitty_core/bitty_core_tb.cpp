#include <iostream>
#include "Vbitty_core.h"
#include "verilated.h"
#include <bitset>
#include <ctime>
#include <cstdlib>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vbitty_core* core = new Vbitty_core;

    srand(time(NULL)); // Seed the random number generator

    // Initial reset
    core->clk = 0;
    core->rst = 1;
    core->instruction = 0;
    core->run = 0;
    core->eval();

    //testing clock just to razogrev
    
    for (int i = 0; i < 4; i++) {
        core->clk ^= 1; //toggle
        core->eval();
    }

    core->rst = 0;
    core->run = 1;


    // FSM 
    for (int i = 0; i < 20; i++) {
        // uint16_t rand_middle = rand() & 0xFF; // 8 bits
        // uint16_t fixed_low = 0b0001;         // bits [4:0]
        // uint16_t fixed_high = 0b101 << 13;    // bits [15:13], can modify if needed

        // core->instruction = fixed_high | (rand_middle << 5) | fixed_low;

        core->clk = 1;
        core->eval();

        std::cout << "\nCycle " << i
                  << ": instruction=" << std::bitset<16>(core->instruction)
                  << ", done=" << (int)core->done << "\n";

        core->clk = 0;
        core->eval();
        std::cout << "========\n";
        core->instruction = 0b1010111011100001;

        // std::cout << "Register values:\n";
        // std::cout << "========\n";

        // std::cout << "R0 = " << std::hex << core->r0_out << " ";
        // std::cout << "R1 = " << std::hex << core->r1_out << " ";
        // std::cout << "R2 = " << std::hex << core->r2_out << " ";
        // std::cout << "R3 = " << std::hex << core->r3_out << " ";
        // std::cout << "R4 = " << std::hex << core->r4_out << " ";
        // std::cout << "R5 = " << std::hex << core->r5_out << " ";
        // std::cout << "R6 = " << std::hex << core->r6_out << " ";
        // std::cout << "R7 = " << std::hex << core->r7_out << " ";
        // std::cout << "\n===========================\n";

    }
        std::cout << "Register values:\n";

        std::cout << "R0 = " << std::hex << core->r0_out << "\n";
        std::cout << "R1 = " << std::hex << core->r1_out << "\n";
        std::cout << "R2 = " << std::hex << core->r2_out << "\n";
        std::cout << "R3 = " << std::hex << core->r3_out << "\n";
        std::cout << "R4 = " << std::hex << core->r4_out << "\n";
        std::cout << "R5 = " << std::hex << core->r5_out << "\n";
        std::cout << "R6 = " << std::hex << core->r6_out << "\n";
        std::cout << "R7 = " << std::hex << core->r7_out << "\n";
        std::cout << "\n===========================\n";
    
    delete core;
    return 0;
}
