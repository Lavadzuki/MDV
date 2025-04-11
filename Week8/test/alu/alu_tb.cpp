#include <iostream>
#include <cstdint>
using namespace std;

uint16_t alu(uint16_t in_a, uint16_t in_b, uint8_t select) {
    switch (select) {
        case 0b000: return (~in_a) + in_b;              // Not A + B
        case 0b001: return in_a - in_b;                 // Sub
        case 0b010: return in_a & in_b;                 // AND
        case 0b011: return in_a | in_b;                 // OR
        case 0b100: return in_a ^ in_b;                 // XOR
        case 0b101: return in_a << in_b;                // Shift Left
        case 0b110: return in_a >> in_b;                // Shift Right
        case 0b111:                                     // Compare
            if (in_a == in_b) return 0;
            else if (in_a > in_b) return 1;
            else return 2;
        default: return 0;
    }
}

int main() {
    struct Test {
        uint16_t in_a, in_b;
        uint8_t select;
        const char* description;
    };

    Test tests[] = {
        {10, 5, 0b000, "NOT A + B"},
        {20, 5, 0b001, "A - B"},
        {0b1010101010101010, 0b1100110011001100, 0b010, "A AND B"},
        {0b1010101010101010, 0b1100110011001100, 0b011, "A OR B"},
        {0b1010101010101010, 0b1100110011001100, 0b100, "A XOR B"},
        {2, 3, 0b101, "A << B"},
        {16, 2, 0b110, "A >> B"},
        {10, 10, 0b111, "A == B"},
        {15, 10, 0b111, "A > B"},
        {5, 10, 0b111, "A < B"}
    };

    for (const auto& test : tests) {
        uint16_t result = alu(test.in_a, test.in_b, test.select);
        cout << test.description << ":\t"
             << "in_a = " << test.in_a
             << ", in_b = " << test.in_b
             << ", result = " << result << endl;
    }

    return 0;
}