// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol_unit.h for the primary calling header

#include "Vcontrol_unit__pch.h"
#include "Vcontrol_unit___024root.h"

void Vcontrol_unit___024root___eval_act(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_act\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcontrol_unit___024root___nba_sequent__TOP__0(Vcontrol_unit___024root* vlSelf);
void Vcontrol_unit___024root___nba_sequent__TOP__1(Vcontrol_unit___024root* vlSelf);
void Vcontrol_unit___024root___nba_sequent__TOP__2(Vcontrol_unit___024root* vlSelf);

void Vcontrol_unit___024root___eval_nba(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_nba\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcontrol_unit___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcontrol_unit___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcontrol_unit___024root___nba_sequent__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void Vcontrol_unit___024root___nba_sequent__TOP__0(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___nba_sequent__TOP__0\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__control_unit__DOT__next_state 
        = vlSelfRef.control_unit__DOT__next_state;
    vlSelfRef.enableOutput = (((((IData)(vlSelfRef.control_unit__DOT__en_7) 
                                 << 7U) | ((IData)(vlSelfRef.control_unit__DOT__en_6) 
                                           << 6U)) 
                               | (((IData)(vlSelfRef.control_unit__DOT__en_5) 
                                   << 5U) | ((IData)(vlSelfRef.control_unit__DOT__en_4) 
                                             << 4U))) 
                              | ((((IData)(vlSelfRef.control_unit__DOT__en_3) 
                                   << 3U) | ((IData)(vlSelfRef.control_unit__DOT__en_2) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.control_unit__DOT__en_1) 
                                     << 1U) | (IData)(vlSelfRef.control_unit__DOT__en_0))));
    if ((2U & (IData)(vlSelfRef.control_unit__DOT__current_state))) {
        if ((1U & (IData)(vlSelfRef.control_unit__DOT__current_state))) {
            vlSelfRef.__Vdly__control_unit__DOT__next_state = 0U;
            vlSelfRef.done = 1U;
            if ((1U & (~ ((IData)(vlSelfRef.control_unit__DOT__Rx) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.control_unit__DOT__Rx))) {
                    if ((1U & (IData)(vlSelfRef.control_unit__DOT__Rx))) {
                        vlSelfRef.control_unit__DOT__en_3 = 1U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.control_unit__DOT__Rx)))) {
                        vlSelfRef.control_unit__DOT__en_2 = 1U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.control_unit__DOT__Rx) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.control_unit__DOT__Rx))) {
                        vlSelfRef.control_unit__DOT__en_1 = 1U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.control_unit__DOT__Rx)))) {
                        vlSelfRef.control_unit__DOT__en_0 = 1U;
                    }
                }
            }
            if ((4U & (IData)(vlSelfRef.control_unit__DOT__Rx))) {
                if ((2U & (IData)(vlSelfRef.control_unit__DOT__Rx))) {
                    if ((1U & (IData)(vlSelfRef.control_unit__DOT__Rx))) {
                        vlSelfRef.control_unit__DOT__en_7 = 1U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.control_unit__DOT__Rx)))) {
                        vlSelfRef.control_unit__DOT__en_6 = 1U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.control_unit__DOT__Rx) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.control_unit__DOT__Rx))) {
                        vlSelfRef.control_unit__DOT__en_5 = 1U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.control_unit__DOT__Rx)))) {
                        vlSelfRef.control_unit__DOT__en_4 = 1U;
                    }
                }
            }
        } else {
            vlSelfRef.__Vdly__control_unit__DOT__next_state = 3U;
        }
        if ((1U & (~ (IData)(vlSelfRef.control_unit__DOT__current_state)))) {
            vlSelfRef.en_c = 1U;
            vlSelfRef.en_s = 0U;
            vlSelfRef.en_i = 0U;
            vlSelfRef.sel = vlSelfRef.control_unit__DOT__ALU_sel;
            vlSelfRef.mux_sel = vlSelfRef.control_unit__DOT__Ry;
        }
    } else {
        if ((1U & (IData)(vlSelfRef.control_unit__DOT__current_state))) {
            vlSelfRef.__Vdly__control_unit__DOT__next_state = 2U;
            vlSelfRef.mux_sel = vlSelfRef.control_unit__DOT__Rx;
        } else {
            vlSelfRef.__Vdly__control_unit__DOT__next_state = 1U;
        }
        vlSelfRef.en_c = 0U;
        if ((1U & (~ (IData)(vlSelfRef.control_unit__DOT__current_state)))) {
            vlSelfRef.done = 0U;
        }
        vlSelfRef.en_s = (1U & (IData)(vlSelfRef.control_unit__DOT__current_state));
        vlSelfRef.en_i = (1U & (~ (IData)(vlSelfRef.control_unit__DOT__current_state)));
    }
}

VL_INLINE_OPT void Vcontrol_unit___024root___nba_sequent__TOP__1(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___nba_sequent__TOP__1\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSelfRef.rst) | (~ (IData)(vlSelfRef.run))))) {
        vlSelfRef.control_unit__DOT__ALU_sel = 0U;
        vlSelfRef.control_unit__DOT__Ry = 0U;
        vlSelfRef.control_unit__DOT__Rx = 0U;
        vlSelfRef.control_unit__DOT__current_state = 0U;
    } else {
        vlSelfRef.control_unit__DOT__ALU_sel = (7U 
                                                & ((IData)(vlSelfRef.instruction) 
                                                   >> 2U));
        vlSelfRef.control_unit__DOT__Ry = (7U & ((IData)(vlSelfRef.instruction) 
                                                 >> 0xaU));
        vlSelfRef.control_unit__DOT__Rx = (7U & ((IData)(vlSelfRef.instruction) 
                                                 >> 0xdU));
        vlSelfRef.control_unit__DOT__current_state 
            = vlSelfRef.control_unit__DOT__next_state;
    }
}

VL_INLINE_OPT void Vcontrol_unit___024root___nba_sequent__TOP__2(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___nba_sequent__TOP__2\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.control_unit__DOT__next_state = vlSelfRef.__Vdly__control_unit__DOT__next_state;
}

void Vcontrol_unit___024root___eval_triggers__act(Vcontrol_unit___024root* vlSelf);

bool Vcontrol_unit___024root___eval_phase__act(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_phase__act\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcontrol_unit___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcontrol_unit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcontrol_unit___024root___eval_phase__nba(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_phase__nba\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcontrol_unit___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_unit___024root___dump_triggers__nba(Vcontrol_unit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_unit___024root___dump_triggers__act(Vcontrol_unit___024root* vlSelf);
#endif  // VL_DEBUG

void Vcontrol_unit___024root___eval(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vcontrol_unit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("control_unit.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcontrol_unit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("control_unit.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcontrol_unit___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcontrol_unit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcontrol_unit___024root___eval_debug_assertions(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_debug_assertions\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
