// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcontol_unit.h for the primary calling header

#ifndef VERILATED_VCONTOL_UNIT___024ROOT_H_
#define VERILATED_VCONTOL_UNIT___024ROOT_H_  // guard

#include "verilated.h"


class Vcontol_unit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcontol_unit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(run,0,0);
    VL_OUT8(sel,3,0);
    VL_OUT8(mode,0,0);
    VL_OUT8(done,0,0);
    CData/*3:0*/ control_unit__DOT__ALU_sel;
    CData/*0:0*/ control_unit__DOT__ALU_mode;
    CData/*1:0*/ control_unit__DOT__next_state;
    CData/*1:0*/ control_unit__DOT__current_state;
    CData/*1:0*/ __Vdly__control_unit__DOT__next_state;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(instruction,15,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcontol_unit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcontol_unit___024root(Vcontol_unit__Syms* symsp, const char* v__name);
    ~Vcontol_unit___024root();
    VL_UNCOPYABLE(Vcontol_unit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
