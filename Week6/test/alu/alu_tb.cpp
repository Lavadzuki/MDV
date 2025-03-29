#include <verilated.h>
#include "Valu.h"  // Ensure this matches the generated Verilog module name
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

uint16_t computeLogic(uint16_t a, uint16_t b, int op) {
    switch (op) {
        case 0b0000: return ~a;
        case 0b0001: return ~(a | b);
        case 0b0010: return ~a & b;
        case 0b0011: return 0;
        case 0b0100: return ~(a & b);
        case 0b0101: return ~b;
        case 0b0110: return a ^ b;
        case 0b0111: return a & ~b;
        case 0b1000: return ~a | b;
        case 0b1001: return ~(a ^ b);
        case 0b1010: return b;
        case 0b1011: return a & b;
        case 0b1100: return 0xFFFF;
        case 0b1101: return a | ~b;
        case 0b1110: return a | b;
        case 0b1111: return a;
        default: return 0;
    }
}

uint16_t computeArith(uint16_t a, uint16_t b, int op) {
    switch (op) {
        case 0b0000: return a;
        case 0b0001: return a | b;
        case 0b0010: return a | (~b);
        case 0b0011: return -1; // Two's complement -1
        case 0b0100: return a | (a & ~b);
        case 0b0101: return (a | b) + (a & ~b);
        case 0b0110: return a - b - 1;
        case 0b0111: return (a & ~b) - 1;
        case 0b1000: return a + (a & b);
        case 0b1001: return a + b;
        case 0b1010: return (a | ~b) + (a & b);
        case 0b1011: return (a & b) - 1;
        case 0b1100: return a + a;
        case 0b1101: return (a | b) + a;
        case 0b1110: return (a | ~b) + a;
        case 0b1111: return a - 1;
        default: return 0;
    }
}

std::string getOperationNameArith(int op) {
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

std::string getOperationLogic(int op) {
    switch (op) {
        case 0b0000: return "A’";
        case 0b0001: return "(A + B)’";
        case 0b0010: return "A’B";
        case 0b0011: return "Logical 0";
        case 0b0100: return "(AB)’";
        case 0b0101: return "B’";
        case 0b0110: return "A XOR B";
        case 0b0111: return "AB’";
        case 0b1000: return "A’ + B";
        case 0b1001: return "(A XOR B)’";
        case 0b1010: return "B";
        case 0b1011: return "AB";
        case 0b1100: return "Logical 1";
        case 0b1101: return "A + B’";
        case 0b1110: return "A + B";
        case 0b1111: return "A";
        default: return "Unknown Operation";
    }
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv); // Initialize Verilator
    Valu* tb = new Valu;  // Instantiate the ALU module

    const int num_tests = 3; // Number of test iterations
    const int select_size = 16; // All possible operations (assuming 4-bit select)
    std::srand(std::time(0)); 

    std::cout << "Running ALU Tests for " << num_tests << " random inputs per operation...\n";

    for (int op = 0; op < select_size; op++) {  // Test all operations
        
        int random_bit = std::rand()%2; 

        std::cout << "\nTesting operation " << std::bitset<4>(op) 
          << " (" << (random_bit ? getOperationLogic(op) : getOperationNameArith(op)) << ")...\n";

        for (int test = 0; test < num_tests; test++) {
            uint16_t a = std::rand() % 65536;  // 16-bit random input
            uint16_t b = std::rand() % 65536;  // 16-bit random input

            tb->mode = random_bit;
            tb->in_a = a;
            tb->in_b = b;
            tb->select = op;
            tb->eval();

            uint16_t expected = random_bit ? computeLogic(a, b, op) : computeArith(a, b, op);
            uint16_t actual = tb->alu_out;

            std::cout << "Test " << test + 1 << " | A: ";
            printBinary(a);
            std::cout << " B: ";
            printBinary(b);
            std::cout << " | Select: " << std::bitset<4>(op) 
                      << " (" << (random_bit ? getOperationLogic(op) : getOperationNameArith(op)) << ")";
            std::cout << (random_bit ? " => logic_out: " : " => arith_out: ");
            printBinary(actual);
            
            // Compare ALU Output with Expected Value
            if (actual == expected) {
                std::cout << " ✅ Test Passed";
            } else {
                std::cout << " ❌ Test Failed (Expected: ";
                printBinary(expected);
                std::cout << ")";
            }
            std::cout << std::endl;
        }
    }

    std::cout<<"Check: "<<std::endl;
    tb->mode = 0b0;
    tb->in_a = 0b101;
    tb->in_b = 0b111;
    tb->select = 0b1;
    tb->eval();
    uint16_t actual = tb->alu_out;
    printBinary(actual);
   
    delete tb; // Free memory
    return 0;
}