#include <iostream>
#include "Vcontrol_unit.h"
#include "verilated.h"
#include <bitset>

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);   
    Vcontrol_unit* control = new Vcontrol_unit;  

    // Initial reset
    control->clk = 0;
    control->rst = 1;
    control->run = 0;
    control->eval();

    // Clock cycle with reset
    for (int i = 0; i < 2; ++i) {
        control->clk = !control->clk;
        control->eval();
    }

    // Deassert reset and give valid instruction
    control->rst = 0;
    control->run = 1;
    control->instruction = 0b1011110000000100; // Example instruction

    std::cout << "Running FSM..." << std::endl;

    // Run enough cycles to go through all FSM states
    for (int i = 0; i < 10; ++i) {
        control->clk = 1;
        control->eval();

        std::bitset<8> enables(control->enableOutput);
        std::cout << "Cycle " << i << ": "
                  << "sel=" << std::hex << (int)control->sel
                  << " mode=" << (int)control->mode
                  << " done=" << (int)control->done
                  << " enables=[ ";
        
        for (int j = 7; j >= 0; --j) {
            std::cout << "e" << j << "=" << enables[j] << " ";
        }
        
        std::cout << "]" << std::endl;
        control->clk = 0;
        control->eval();
   
    }

    delete control;
    return 0;
}