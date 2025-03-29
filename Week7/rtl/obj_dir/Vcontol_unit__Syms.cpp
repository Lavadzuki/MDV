// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcontol_unit__pch.h"
#include "Vcontol_unit.h"
#include "Vcontol_unit___024root.h"

// FUNCTIONS
Vcontol_unit__Syms::~Vcontol_unit__Syms()
{
}

Vcontol_unit__Syms::Vcontol_unit__Syms(VerilatedContext* contextp, const char* namep, Vcontol_unit* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(11);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
