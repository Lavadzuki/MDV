// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMUX__SYMS_H_
#define VERILATED_VMUX__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VMUX.h"

// INCLUDE MODULE CLASSES
#include "VMUX___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VMUX__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VMUX* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VMUX___024root                 TOP;

    // CONSTRUCTORS
    VMUX__Syms(VerilatedContext* contextp, const char* namep, VMUX* modelp);
    ~VMUX__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
