# 🚀 Verilator Waveform Tracing (VCD) - Notes

## **📌 Introduction**
Verilator allows us to **trace signal transitions** in our Verilog simulation and save them to a **VCD (Value Change Dump) file**.  
This `.vcd` file can be viewed using:
- **WaveTrace (VS Code Extension)**
- **GTKWave**
- **VCDrom (Online Viewer)**

This guide explains **how to set up and use waveform tracing in Verilator**.

---

## **1️⃣ Enable Waveform Tracing in Verilator**
Before we start, we must **enable tracing globally** so that Verilator tracks all signal changes.

```cpp
Verilated::traceEverOn(true); // Enable waveform tracing
```
- ✅ Enables **waveform tracking** throughout the simulation.
- 📌 **Must be called before opening the VCD file**.

---

## **2️⃣ Create a VCD (Value Change Dump) Object**
Next, we **create an object** that will manage our waveform data.

```cpp
VerilatedVcdC* vcd_trace = new VerilatedVcdC;
```
- ✅ Creates a **VCD trace object** to store waveform data.
- This will be used to **write signal changes to a `.vcd` file**.

---

## **3️⃣ Attach the VCD Object to Our Verilog Module**
We now tell Verilator **which module we want to trace**.

```cpp
and_gate->trace(vcd_trace, 99);
```
- ✅ This attaches **the VCD object (`vcd_trace`)** to our **AND gate module**.
- `99` represents the **number of hierarchy levels** to trace.

---

## **4️⃣ Open the VCD File for Writing**
Now, we **open the `.vcd` file** where all signal transitions will be saved.

```cpp
vcd_trace->open("and_gate_trace.vcd");
```
- ✅ Creates and opens **a file named `and_gate_trace.vcd`**.
- 📌 All signal changes will be **saved inside this file** for waveform visualization.

---

## **5️⃣ Dump Waveform Data at Each Time Step**
We need to **save the simulation data** at specific time intervals.

```cpp
vcd_trace->dump(timestamp += 50);
```
- ✅ **Increments the simulation time** (`timestamp += 50`).
- ✅ Saves the **current values of all traced signals** in the `.vcd` file.

### **🎠 Example Usage in a Testbench**
```cpp
int timestamp = 0; // Start time at 0

and_gate->a = 0; and_gate->b = 0;
and_gate->eval();
vcd_trace->dump(timestamp += 50); // Save this state
std::cout << "a=0, b=0 -> y=" << (int)and_gate->y << std::endl;

and_gate->a = 0; and_gate->b = 1;
and_gate->eval();
vcd_trace->dump(timestamp += 50);
std::cout << "a=0, b=1 -> y=" << (int)and_gate->y << std::endl;
```

---

## **6️⃣ Flush Data to Ensure It’s Written**
Sometimes, Verilator **buffers the data**, meaning some signals may **not be written** immediately to the `.vcd` file.

```cpp
vcd_trace->flush();
```
- ✅ **Forces all pending data to be written to the `.vcd` file**.
- 📌 This should be **called after each dump** to ensure nothing is lost.

---

## **7️⃣ Full Testbench Code (With Tracing)**
```cpp
// Include necessary headers
#include "Vand_gate.h"
#include <iostream>
#include "verilated_vcd_c.h"  // Enables waveform tracing
#include "verilated.h"        // Include Verilator library

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);  // Initialize Verilator
    Vand_gate* and_gate = new Vand_gate; // Create an instance of the AND gate module

    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* vcd_trace = new VerilatedVcdC;
    and_gate->trace(vcd_trace, 99); // Trace 99 levels of hierarchy
    vcd_trace->open("and_gate_trace.vcd"); // Open the VCD file

    int timestamp = 0; // Start time at 0

    // Apply test cases
    and_gate->a = 0; and_gate->b = 0;
    and_gate->eval();
    vcd_trace->dump(timestamp += 50);
    vcd_trace->flush();
    std::cout << "a=0, b=0 -> y=" << (int)and_gate->y << std::endl;

    and_gate->a = 0; and_gate->b = 1;
    and_gate->eval();
    vcd_trace->dump(timestamp += 50);
    vcd_trace->flush();
    std::cout << "a=0, b=1 -> y=" << (int)and_gate->y << std::endl;

    and_gate->a = 1; and_gate->b = 0;
    and_gate->eval();
    vcd_trace->dump(timestamp += 50);
    vcd_trace->flush();
    std::cout << "a=1, b=0 -> y=" << (int)and_gate->y << std::endl;

    and_gate->a = 1; and_gate->b = 1;
    and_gate->eval();
    vcd_trace->dump(timestamp += 50);
    vcd_trace->flush();
    std::cout << "a=1, b=1 -> y=" << (int)and_gate->y << std::endl;

    // Cleanup
    delete and_gate;  // Free allocated memory
    vcd_trace->close(); // Close the VCD file

    return 0;
}
```

---

### 🚀 **Now you have a complete Markdown guide for Verilator waveform tracing!**
Let me know if you need any improvements! 🎯🔥😃

