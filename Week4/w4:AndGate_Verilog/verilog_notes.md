# Verilog AND Gate Simulation Notes

## 🛠️ Verilog Code
```verilog
module and_gate(
    input wire a, b,
    output wire y
);
    assign y = a & b;
endmodule
```

## Verilog to C++ using Verilator

We run verilator using this command:
``` 
verilator --cc --exe --build and_gate.v tb_and_gate.cpp
```
* --cc: Convert to C++
* --exe: Include an executable testbench (tb_and_gate.cpp)
* --build: Compile everyting into working executable.

Verilator automatically generates C++ files (Vand_gate.h, Vand_gate.cpp, etc.) in obj_dir/.

### Test Bench for Verilog Code

```
#include <iostream>   // 🔴 Needed for std::cout (printing output)
#include "Vand_gate.h" // 🔴 This is the auto-generated header file from Verilator
#include "verilated.h" // 🔴 This is Verilator's library for simulation
```

* #include <iostream>: Allows us to use std::cout to print results.
* #include "Vand_gate.h": Includes the C++ model of our AND gate (generated by Verilator).
* #include "verilated.h": Includes Verilator’s simulation functions.

```
int main() {
    Vand_gate* and_gate = new Vand_gate; // Create AND gate instance

    and_gate->a = 1; and_gate->b = 1; // Set inputs
    and_gate->eval(); // Run the simulation
    std::cout << "a=1, b=1 -> y=" << (int)and_gate->y << std::endl;

    delete and_gate; // Free memory
    return 0;
}
```

This testbench sets inputs, evaluates the logic, and prints the result.

#### Run Executable using this command
```
./obj_dir/Vand_gate
```