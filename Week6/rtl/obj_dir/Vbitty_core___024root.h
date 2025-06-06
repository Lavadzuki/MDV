// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbitty_core.h for the primary calling header

#ifndef VERILATED_VBITTY_CORE___024ROOT_H_
#define VERILATED_VBITTY_CORE___024ROOT_H_  // guard

#include "verilated.h"


class Vbitty_core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbitty_core___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(run,0,0);
    VL_OUT8(done,0,0);
    VL_IN8(debug_load,0,0);
    CData/*7:0*/ bitty_core__DOT__enables;
    CData/*0:0*/ bitty_core__DOT__en_s;
    CData/*0:0*/ bitty_core__DOT__en_c;
    CData/*2:0*/ bitty_core__DOT__mux_sel;
    CData/*3:0*/ bitty_core__DOT__ALU_sel;
    CData/*0:0*/ bitty_core__DOT__ALU_mode;
    CData/*2:0*/ bitty_core__DOT__CU__DOT__Rx;
    CData/*2:0*/ bitty_core__DOT__CU__DOT__Ry;
    CData/*3:0*/ bitty_core__DOT__CU__DOT__ALU_sel;
    CData/*0:0*/ bitty_core__DOT__CU__DOT__ALU_mode;
    CData/*0:0*/ bitty_core__DOT__CU__DOT__en_0;
    CData/*0:0*/ bitty_core__DOT__CU__DOT__en_1;
    CData/*0:0*/ bitty_core__DOT__CU__DOT__en_2;
    CData/*0:0*/ bitty_core__DOT__CU__DOT__en_3;
    CData/*0:0*/ bitty_core__DOT__CU__DOT__en_4;
    CData/*0:0*/ bitty_core__DOT__CU__DOT__en_5;
    CData/*0:0*/ bitty_core__DOT__CU__DOT__en_6;
    CData/*0:0*/ bitty_core__DOT__CU__DOT__en_7;
    CData/*1:0*/ bitty_core__DOT__CU__DOT__next_state;
    CData/*1:0*/ bitty_core__DOT__CU__DOT__current_state;
    CData/*1:0*/ __Vdly__bitty_core__DOT__CU__DOT__next_state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(instruction,15,0);
    VL_IN16(debug_init_0,15,0);
    VL_IN16(debug_init_1,15,0);
    VL_IN16(debug_init_2,15,0);
    VL_IN16(debug_init_3,15,0);
    VL_IN16(debug_init_4,15,0);
    VL_IN16(debug_init_5,15,0);
    VL_IN16(debug_init_6,15,0);
    VL_IN16(debug_init_7,15,0);
    VL_OUT16(r0_out,15,0);
    VL_OUT16(r1_out,15,0);
    VL_OUT16(r2_out,15,0);
    VL_OUT16(r3_out,15,0);
    VL_OUT16(r4_out,15,0);
    VL_OUT16(r5_out,15,0);
    VL_OUT16(r6_out,15,0);
    VL_OUT16(r7_out,15,0);
    SData/*15:0*/ bitty_core__DOT__s_out;
    SData/*15:0*/ bitty_core__DOT__c_out;
    SData/*15:0*/ bitty_core__DOT__mux_out;
    SData/*15:0*/ bitty_core__DOT____Vcellout__R0__d_out;
    SData/*15:0*/ bitty_core__DOT____Vcellout__R1__d_out;
    SData/*15:0*/ bitty_core__DOT____Vcellout__R2__d_out;
    SData/*15:0*/ bitty_core__DOT____Vcellout__R3__d_out;
    SData/*15:0*/ bitty_core__DOT____Vcellout__R4__d_out;
    SData/*15:0*/ bitty_core__DOT____Vcellout__R5__d_out;
    SData/*15:0*/ bitty_core__DOT____Vcellout__R6__d_out;
    SData/*15:0*/ bitty_core__DOT____Vcellout__R7__d_out;
    SData/*15:0*/ bitty_core__DOT__alu_unit__DOT__arith_result;
    SData/*15:0*/ bitty_core__DOT__alu_unit__DOT__logic_result;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*15:0*/, 8> bitty_core__DOT__r_out;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbitty_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbitty_core___024root(Vbitty_core__Syms* symsp, const char* v__name);
    ~Vbitty_core___024root();
    VL_UNCOPYABLE(Vbitty_core___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
