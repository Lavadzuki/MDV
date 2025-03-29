// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegister.h for the primary calling header

#include "VRegister__pch.h"
#include "VRegister___024root.h"

void VRegister___024root___eval_act(VRegister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root___eval_act\n"); );
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VRegister___024root___nba_sequent__TOP__0(VRegister___024root* vlSelf);

void VRegister___024root___eval_nba(VRegister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root___eval_nba\n"); );
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VRegister___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VRegister___024root___nba_sequent__TOP__0(VRegister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root___nba_sequent__TOP__0\n"); );
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst) {
        vlSelfRef.d_out = 0U;
    } else if (vlSelfRef.debug_load) {
        vlSelfRef.d_out = vlSelfRef.debug_init;
    } else if (vlSelfRef.enable) {
        vlSelfRef.d_out = vlSelfRef.d_in;
    }
}

void VRegister___024root___eval_triggers__act(VRegister___024root* vlSelf);

bool VRegister___024root___eval_phase__act(VRegister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root___eval_phase__act\n"); );
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VRegister___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VRegister___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VRegister___024root___eval_phase__nba(VRegister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root___eval_phase__nba\n"); );
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VRegister___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegister___024root___dump_triggers__nba(VRegister___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRegister___024root___dump_triggers__act(VRegister___024root* vlSelf);
#endif  // VL_DEBUG

void VRegister___024root___eval(VRegister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root___eval\n"); );
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VRegister___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("Register.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VRegister___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("Register.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VRegister___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VRegister___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VRegister___024root___eval_debug_assertions(VRegister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root___eval_debug_assertions\n"); );
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY(((vlSelfRef.enable & 0xfeU)))) {
        Verilated::overWidthError("enable");}
    if (VL_UNLIKELY(((vlSelfRef.debug_load & 0xfeU)))) {
        Verilated::overWidthError("debug_load");}
}
#endif  // VL_DEBUG
