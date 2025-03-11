// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu_logic.h for the primary calling header

#ifndef VERILATED_VALU_LOGIC___024ROOT_H_
#define VERILATED_VALU_LOGIC___024ROOT_H_  // guard

#include "verilated.h"


class Valu_logic__Syms;

class alignas(VL_CACHE_LINE_BYTES) Valu_logic___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(select,3,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN16(in_a,15,0);
    VL_IN16(in_b,15,0);
    VL_OUT16(logic_out,15,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Valu_logic__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valu_logic___024root(Valu_logic__Syms* symsp, const char* v__name);
    ~Valu_logic___024root();
    VL_UNCOPYABLE(Valu_logic___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
