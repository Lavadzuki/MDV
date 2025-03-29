// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegister.h for the primary calling header

#include "VRegister__pch.h"
#include "VRegister__Syms.h"
#include "VRegister___024root.h"

void VRegister___024root___ctor_var_reset(VRegister___024root* vlSelf);

VRegister___024root::VRegister___024root(VRegister__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRegister___024root___ctor_var_reset(this);
}

void VRegister___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VRegister___024root::~VRegister___024root() {
}
