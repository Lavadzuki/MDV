#include <iostream>
#include <string>
#include <verilated.h>
#include <Vkeylock.h>

int main (int argc, char **argv){

    Verilated::commandArgs(argc, argv);   // Initialize Verilator.
    Vkeylock* keylock = new Vkeylock;

    int sim_time = 0;

    // Initial reset
    keylock->clk = 0;
    keylock->reset = 1;
    keylock->eval();
    keylock->reset = 0;
    // vcd_trace->dump(sim_time++);

    // // Razogrevaem Dvigatel'
    // for (int i = 0; i < 4; i++) {
    //     keylock->clk = !traffic->clk;
    //     keylock->eval();
    //     vcd_trace->dump(sim_time++);
    // }

    while (!Verilated::gotFinish()){
        int user_input;
        std::cout<< "Enter digit from 0 to 7: "<<std::endl;
        std::cin>> user_input;

        if (user_input < 0 || user_input > 7) {
            std::cout << "Invalid input. Must be 3-bit number (0-7)." << std::endl;
            continue;
        }

        keylock->number = user_input;

        //Simulation of the One clock cycle
        keylock->clk = 1;
        keylock->eval();

        keylock->clk = 0;
        keylock->eval();

        std::cout<<"Locked: "<< (int)keylock->locked <<std::endl;

        if (keylock->locked == 0) {
            std::cout << "UNLOCKED! You've entered the correct sequence." << std::endl;
            break;
        }

    }


    delete keylock;
    return 0;
}

