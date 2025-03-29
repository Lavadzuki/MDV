#include <verilated.h>
#include <iostream>
#include "VRegister.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    VRegister* reg = new VRegister;

    // Initialize
    reg->clk = 0;
    reg->rst = 1;
    reg->enable = 0;
    reg->debug_load = 0;
    reg->d_in = 0xAAAA;
    reg->debug_init = 0x1234;
    reg->eval();

    // Clock toggle
    reg->clk = 1;
    reg->eval();
    reg->clk = 0;
    reg->eval();

    // Deassert reset
    reg->rst = 0;

    // Load using debug
    reg->debug_load = 1;
    reg->clk = 1;
    reg->eval();
    reg->clk = 0;
    reg->eval();
    std::cout << "After debug load: d_out = 0x" << std::hex << reg->d_out << std::endl;

    // Normal register write
    reg->debug_load = 0;
    reg->d_in = 0xBEEF;
    reg->enable = 1;
    reg->clk = 1;
    reg->eval();
    reg->clk = 0;
    reg->eval();
    std::cout << "After normal enable: d_out = 0x" << std::hex << reg->d_out << std::endl;

    delete reg;
    return 0;
}