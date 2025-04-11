// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCONTOL_UNIT__SYMS_H_
#define VERILATED_VCONTOL_UNIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcontol_unit.h"

// INCLUDE MODULE CLASSES
#include "Vcontol_unit___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vcontol_unit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcontol_unit* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcontol_unit___024root         TOP;

    // CONSTRUCTORS
    Vcontol_unit__Syms(VerilatedContext* contextp, const char* namep, Vcontol_unit* modelp);
    ~Vcontol_unit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
