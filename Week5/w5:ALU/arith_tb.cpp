#include <verilated.h>
#include "Valu_arithmetic.h"  
#include <iostream>
#include <bitset>  
#include <cstdlib> // Required for std::rand()
#include <ctime>   // Required for std::time()
#include <string>  // Required for std::string

void printBinary(uint16_t num) {
    for (int i = 15; i >= 0; i--) {
        std::cout << ((num >> i) & 1);
    }
}

std::string getOperationName(int op) {
    switch (op) {
        case 0b0000: return "A";
        case 0b0001: return "A + B";
        case 0b0010: return "A + B’";
        case 0b0011: return "minus 1 (2’s Comp)";
        case 0b0100: return "A + AB’";
        case 0b0101: return "(A + B) plus AB’";
        case 0b0110: return "A - B - 1";
        case 0b0111: return "AB’ minus 1";
        case 0b1000: return "A plus AB";
        case 0b1001: return "A plus B";
        case 0b1010: return "(A + B’) plus AB";
        case 0b1011: return "AB minus 1";
        case 0b1100: return "A plus A";
        case 0b1101: return "(A + B) plus A";
        case 0b1110: return "(A + B’) plus A";
        case 0b1111: return "A minus 1";
        default: return "Unknown Operation";
    }
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv); // Initialize Verilator
    Valu_arithmetic* tb = new Valu_arithmetic;  // Instantiate the Arithmetic module

    const int num_tests = 1000; // Number of test iterations
    const int select_size = 16; // All possible operations (assuming 4-bit select)
    std::srand(std::time(0)); 

    std::cout << "Running ALU Tests for " << num_tests << " random inputs per operation...\n";

    for (int op = 0; op < select_size; op++) {  // Test all operations
        std::cout << "\nTesting operation " << std::bitset<4>(op) 
                  << " (" << getOperationName(op) << ")...\n";

        for (int test = 0; test < num_tests; test++) {
            uint16_t a = std::rand() % 65536;  // 16-bit random input
            uint16_t b = std::rand() % 65536;  // 16-bit random input

            tb->in_a = a;
            tb->in_b = b;
            tb->select = op;
            tb->eval();

            std::cout << "Test " << test + 1 << " | A: ";
            printBinary(a);
            std::cout << " B: ";
            printBinary(b);
            std::cout << " | Select: " << std::bitset<4>(op) 
                      << " (" << getOperationName(op) << ")";
            std::cout << " => arith_out: ";
            printBinary(tb->arith_out);
            std::cout << std::endl;
        }
    }

    delete tb; 
    std::cout << "\nALU Testing Complete.\n";
    return 0;
}
