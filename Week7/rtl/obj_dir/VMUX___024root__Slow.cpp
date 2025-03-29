// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMUX.h for the primary calling header

#include "VMUX__pch.h"
#include "VMUX__Syms.h"
#include "VMUX___024root.h"

void VMUX___024root___ctor_var_reset(VMUX___024root* vlSelf);

VMUX___024root::VMUX___024root(VMUX__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMUX___024root___ctor_var_reset(this);
}

void VMUX___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VMUX___024root::~VMUX___024root() {
}
