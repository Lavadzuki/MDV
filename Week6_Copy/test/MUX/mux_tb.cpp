#include <iostream>
#include "VMUX.h"
#include "verilated.h"

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    VMUX* mux = new VMUX;

    // Initialize inputs
    mux->inMux[0] = 0x1233;
    mux->inMux[1] = 0x5678;
    mux->inMux[2] = 0x9ABC;
    mux->inMux[3] = 0xDEF0;
    mux->inMux[4] = 0xAAAA;
    mux->inMux[5] = 0xBBBB;
    mux->inMux[6] = 0xCCCC;
    mux->inMux[7] = 0xDDDD;

    // Loop through select values
    for (int sel = 0; sel < 8; ++sel) {
        mux->select = sel;
        mux->eval();

        std::cout << "select=" << sel 
                  << " → outMux = 0x" << std::hex << mux->outMux << std::endl;
    }

    delete mux;
    return 0;
}