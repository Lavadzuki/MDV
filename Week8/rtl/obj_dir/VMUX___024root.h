// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMUX.h for the primary calling header

#ifndef VERILATED_VMUX___024ROOT_H_
#define VERILATED_VMUX___024ROOT_H_  // guard

#include "verilated.h"


class VMUX__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMUX___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(select,2,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(outMux,15,0);
    IData/*31:0*/ __VactIterCount;
    VL_IN16(inMux[8],15,0);
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VMUX__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMUX___024root(VMUX__Syms* symsp, const char* v__name);
    ~VMUX___024root();
    VL_UNCOPYABLE(VMUX___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
