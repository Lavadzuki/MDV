// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRegister.h for the primary calling header

#ifndef VERILATED_VREGISTER___024ROOT_H_
#define VERILATED_VREGISTER___024ROOT_H_  // guard

#include "verilated.h"


class VRegister__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRegister___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(enable,0,0);
    VL_IN8(debug_load,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(d_in,15,0);
    VL_IN16(debug_init,15,0);
    VL_OUT16(d_out,15,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VRegister__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRegister___024root(VRegister__Syms* symsp, const char* v__name);
    ~VRegister___024root();
    VL_UNCOPYABLE(VRegister___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
