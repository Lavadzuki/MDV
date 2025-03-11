// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_logic.h for the primary calling header

#include "Valu_logic__pch.h"
#include "Valu_logic__Syms.h"
#include "Valu_logic___024root.h"

void Valu_logic___024root___ctor_var_reset(Valu_logic___024root* vlSelf);

Valu_logic___024root::Valu_logic___024root(Valu_logic__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Valu_logic___024root___ctor_var_reset(this);
}

void Valu_logic___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Valu_logic___024root::~Valu_logic___024root() {
}
