// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VREGISTER__SYMS_H_
#define VERILATED_VREGISTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VRegister.h"

// INCLUDE MODULE CLASSES
#include "VRegister___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VRegister__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VRegister* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VRegister___024root            TOP;

    // CONSTRUCTORS
    VRegister__Syms(VerilatedContext* contextp, const char* namep, VRegister* modelp);
    ~VRegister__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
