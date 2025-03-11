// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VALU_LOGIC__SYMS_H_
#define VERILATED_VALU_LOGIC__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Valu_logic.h"

// INCLUDE MODULE CLASSES
#include "Valu_logic___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Valu_logic__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Valu_logic* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Valu_logic___024root           TOP;

    // CONSTRUCTORS
    Valu_logic__Syms(VerilatedContext* contextp, const char* namep, Valu_logic* modelp);
    ~Valu_logic__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
