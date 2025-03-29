// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMUX.h for the primary calling header

#include "VMUX__pch.h"
#include "VMUX___024root.h"

void VMUX___024root___ico_sequent__TOP__0(VMUX___024root* vlSelf);

void VMUX___024root___eval_ico(VMUX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX___024root___eval_ico\n"); );
    VMUX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VMUX___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VMUX___024root___ico_sequent__TOP__0(VMUX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX___024root___ico_sequent__TOP__0\n"); );
    VMUX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.outMux = ((4U & (IData)(vlSelfRef.select))
                         ? ((2U & (IData)(vlSelfRef.select))
                             ? ((1U & (IData)(vlSelfRef.select))
                                 ? vlSelfRef.inMux[7U]
                                 : vlSelfRef.inMux[6U])
                             : ((1U & (IData)(vlSelfRef.select))
                                 ? vlSelfRef.inMux[5U]
                                 : vlSelfRef.inMux[4U]))
                         : ((2U & (IData)(vlSelfRef.select))
                             ? ((1U & (IData)(vlSelfRef.select))
                                 ? vlSelfRef.inMux[3U]
                                 : vlSelfRef.inMux[2U])
                             : ((1U & (IData)(vlSelfRef.select))
                                 ? vlSelfRef.inMux[1U]
                                 : vlSelfRef.inMux[0U])));
}

void VMUX___024root___eval_triggers__ico(VMUX___024root* vlSelf);

bool VMUX___024root___eval_phase__ico(VMUX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX___024root___eval_phase__ico\n"); );
    VMUX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VMUX___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VMUX___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VMUX___024root___eval_act(VMUX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX___024root___eval_act\n"); );
    VMUX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VMUX___024root___eval_nba(VMUX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX___024root___eval_nba\n"); );
    VMUX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VMUX___024root___eval_triggers__act(VMUX___024root* vlSelf);

bool VMUX___024root___eval_phase__act(VMUX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX___024root___eval_phase__act\n"); );
    VMUX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VMUX___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VMUX___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VMUX___024root___eval_phase__nba(VMUX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX___024root___eval_phase__nba\n"); );
    VMUX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VMUX___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMUX___024root___dump_triggers__ico(VMUX___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMUX___024root___dump_triggers__nba(VMUX___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMUX___024root___dump_triggers__act(VMUX___024root* vlSelf);
#endif  // VL_DEBUG

void VMUX___024root___eval(VMUX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX___024root___eval\n"); );
    VMUX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VMUX___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("MUX.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VMUX___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VMUX___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("MUX.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VMUX___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("MUX.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VMUX___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VMUX___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VMUX___024root___eval_debug_assertions(VMUX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX___024root___eval_debug_assertions\n"); );
    VMUX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.select & 0xf8U)))) {
        Verilated::overWidthError("select");}
}
#endif  // VL_DEBUG
