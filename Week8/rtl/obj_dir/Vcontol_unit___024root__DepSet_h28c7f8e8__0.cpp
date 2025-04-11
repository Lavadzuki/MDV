// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontol_unit.h for the primary calling header

#include "Vcontol_unit__pch.h"
#include "Vcontol_unit___024root.h"

void Vcontol_unit___024root___eval_act(Vcontol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontol_unit___024root___eval_act\n"); );
    Vcontol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcontol_unit___024root___nba_sequent__TOP__0(Vcontol_unit___024root* vlSelf);
void Vcontol_unit___024root___nba_sequent__TOP__1(Vcontol_unit___024root* vlSelf);
void Vcontol_unit___024root___nba_sequent__TOP__2(Vcontol_unit___024root* vlSelf);

void Vcontol_unit___024root___eval_nba(Vcontol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontol_unit___024root___eval_nba\n"); );
    Vcontol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcontol_unit___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcontol_unit___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcontol_unit___024root___nba_sequent__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void Vcontol_unit___024root___nba_sequent__TOP__0(Vcontol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontol_unit___024root___nba_sequent__TOP__0\n"); );
    Vcontol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__control_unit__DOT__next_state 
        = vlSelfRef.control_unit__DOT__next_state;
    if ((2U & (IData)(vlSelfRef.control_unit__DOT__current_state))) {
        if ((1U & (IData)(vlSelfRef.control_unit__DOT__current_state))) {
            vlSelfRef.__Vdly__control_unit__DOT__next_state = 0U;
            vlSelfRef.done = 1U;
        } else {
            vlSelfRef.__Vdly__control_unit__DOT__next_state = 3U;
        }
        if ((1U & (~ (IData)(vlSelfRef.control_unit__DOT__current_state)))) {
            vlSelfRef.mode = vlSelfRef.control_unit__DOT__ALU_mode;
            vlSelfRef.sel = vlSelfRef.control_unit__DOT__ALU_sel;
        }
    } else {
        if ((1U & (IData)(vlSelfRef.control_unit__DOT__current_state))) {
            vlSelfRef.__Vdly__control_unit__DOT__next_state = 2U;
            vlSelfRef.sel = vlSelfRef.control_unit__DOT__ALU_sel;
        } else {
            vlSelfRef.__Vdly__control_unit__DOT__next_state = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.control_unit__DOT__current_state)))) {
            vlSelfRef.done = 0U;
        }
    }
}

VL_INLINE_OPT void Vcontol_unit___024root___nba_sequent__TOP__1(Vcontol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontol_unit___024root___nba_sequent__TOP__1\n"); );
    Vcontol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.control_unit__DOT__ALU_mode = ((1U & 
                                              (~ ((IData)(vlSelfRef.rst) 
                                                  | (~ (IData)(vlSelfRef.run))))) 
                                             && (1U 
                                                 & ((IData)(vlSelfRef.instruction) 
                                                    >> 2U)));
    if ((1U & ((IData)(vlSelfRef.rst) | (~ (IData)(vlSelfRef.run))))) {
        vlSelfRef.control_unit__DOT__ALU_sel = 0U;
        vlSelfRef.control_unit__DOT__current_state = 0U;
    } else {
        vlSelfRef.control_unit__DOT__ALU_sel = (0xfU 
                                                & ((IData)(vlSelfRef.instruction) 
                                                   >> 3U));
        vlSelfRef.control_unit__DOT__current_state 
            = vlSelfRef.control_unit__DOT__next_state;
    }
}

VL_INLINE_OPT void Vcontol_unit___024root___nba_sequent__TOP__2(Vcontol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontol_unit___024root___nba_sequent__TOP__2\n"); );
    Vcontol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.control_unit__DOT__next_state = vlSelfRef.__Vdly__control_unit__DOT__next_state;
}

void Vcontol_unit___024root___eval_triggers__act(Vcontol_unit___024root* vlSelf);

bool Vcontol_unit___024root___eval_phase__act(Vcontol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontol_unit___024root___eval_phase__act\n"); );
    Vcontol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcontol_unit___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcontol_unit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcontol_unit___024root___eval_phase__nba(Vcontol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontol_unit___024root___eval_phase__nba\n"); );
    Vcontol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcontol_unit___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontol_unit___024root___dump_triggers__nba(Vcontol_unit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontol_unit___024root___dump_triggers__act(Vcontol_unit___024root* vlSelf);
#endif  // VL_DEBUG

void Vcontol_unit___024root___eval(Vcontol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontol_unit___024root___eval\n"); );
    Vcontol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vcontol_unit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("contol_unit.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcontol_unit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("contol_unit.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcontol_unit___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcontol_unit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcontol_unit___024root___eval_debug_assertions(Vcontol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontol_unit___024root___eval_debug_assertions\n"); );
    Vcontol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.run & 0xfeU)))) {
        Verilated::overWidthError("run");}
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
