// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbitty_core.h for the primary calling header

#include "Vbitty_core__pch.h"
#include "Vbitty_core___024root.h"

void Vbitty_core___024root___eval_act(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_act\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vbitty_core___024root___nba_sequent__TOP__0(Vbitty_core___024root* vlSelf);
void Vbitty_core___024root___nba_sequent__TOP__1(Vbitty_core___024root* vlSelf);
void Vbitty_core___024root___nba_sequent__TOP__2(Vbitty_core___024root* vlSelf);
void Vbitty_core___024root___nba_comb__TOP__0(Vbitty_core___024root* vlSelf);
void Vbitty_core___024root___nba_sequent__TOP__3(Vbitty_core___024root* vlSelf);
void Vbitty_core___024root___nba_sequent__TOP__4(Vbitty_core___024root* vlSelf);

void Vbitty_core___024root___eval_nba(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_nba\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbitty_core___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbitty_core___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbitty_core___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbitty_core___024root___nba_comb__TOP__0(vlSelf);
        Vbitty_core___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbitty_core___024root___nba_sequent__TOP__4(vlSelf);
    }
}

VL_INLINE_OPT void Vbitty_core___024root___nba_sequent__TOP__0(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___nba_sequent__TOP__0\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__bitty_core__DOT__CU__DOT__next_state 
        = vlSelfRef.bitty_core__DOT__CU__DOT__next_state;
    if ((2U & (IData)(vlSelfRef.bitty_core__DOT__CU__DOT__current_state))) {
        if ((1U & (IData)(vlSelfRef.bitty_core__DOT__CU__DOT__current_state))) {
            vlSelfRef.__Vdly__bitty_core__DOT__CU__DOT__next_state = 0U;
            vlSelfRef.done = 1U;
        } else {
            vlSelfRef.__Vdly__bitty_core__DOT__CU__DOT__next_state = 3U;
        }
        if ((1U & (~ (IData)(vlSelfRef.bitty_core__DOT__CU__DOT__current_state)))) {
            vlSelfRef.bitty_core__DOT__ALU_sel = vlSelfRef.bitty_core__DOT__CU__DOT__ALU_sel;
            vlSelfRef.bitty_core__DOT__mux_sel = vlSelfRef.bitty_core__DOT__CU__DOT__Ry;
        }
    } else {
        if ((1U & (IData)(vlSelfRef.bitty_core__DOT__CU__DOT__current_state))) {
            vlSelfRef.__Vdly__bitty_core__DOT__CU__DOT__next_state = 2U;
            vlSelfRef.bitty_core__DOT__mux_sel = vlSelfRef.bitty_core__DOT__CU__DOT__Rx;
        } else {
            vlSelfRef.__Vdly__bitty_core__DOT__CU__DOT__next_state = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.bitty_core__DOT__CU__DOT__current_state)))) {
            vlSelfRef.done = 0U;
        }
    }
}

VL_INLINE_OPT void Vbitty_core___024root___nba_sequent__TOP__1(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___nba_sequent__TOP__1\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst) {
        vlSelfRef.bitty_core__DOT__s_out = 0U;
        vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__0__KET____DOT__R__d_out = 0U;
        vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__1__KET____DOT__R__d_out = 0U;
        vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__2__KET____DOT__R__d_out = 0U;
        vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__3__KET____DOT__R__d_out = 0U;
        vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__4__KET____DOT__R__d_out = 0U;
        vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__5__KET____DOT__R__d_out = 0U;
        vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__6__KET____DOT__R__d_out = 0U;
        vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__7__KET____DOT__R__d_out = 0U;
        vlSelfRef.bitty_core__DOT__c_out = 0U;
    } else {
        if (vlSelfRef.bitty_core__DOT__en_s) {
            vlSelfRef.bitty_core__DOT__s_out = vlSelfRef.bitty_core__DOT__mux_out;
        }
        if ((1U & (IData)(vlSelfRef.bitty_core__DOT__enables))) {
            vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__0__KET____DOT__R__d_out 
                = vlSelfRef.bitty_core__DOT__c_out;
        }
        if ((2U & (IData)(vlSelfRef.bitty_core__DOT__enables))) {
            vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__1__KET____DOT__R__d_out 
                = vlSelfRef.bitty_core__DOT__c_out;
        }
        if ((4U & (IData)(vlSelfRef.bitty_core__DOT__enables))) {
            vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__2__KET____DOT__R__d_out 
                = vlSelfRef.bitty_core__DOT__c_out;
        }
        if ((8U & (IData)(vlSelfRef.bitty_core__DOT__enables))) {
            vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__3__KET____DOT__R__d_out 
                = vlSelfRef.bitty_core__DOT__c_out;
        }
        if ((0x10U & (IData)(vlSelfRef.bitty_core__DOT__enables))) {
            vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__4__KET____DOT__R__d_out 
                = vlSelfRef.bitty_core__DOT__c_out;
        }
        if ((0x20U & (IData)(vlSelfRef.bitty_core__DOT__enables))) {
            vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__5__KET____DOT__R__d_out 
                = vlSelfRef.bitty_core__DOT__c_out;
        }
        if ((0x40U & (IData)(vlSelfRef.bitty_core__DOT__enables))) {
            vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__6__KET____DOT__R__d_out 
                = vlSelfRef.bitty_core__DOT__c_out;
        }
        if ((0x80U & (IData)(vlSelfRef.bitty_core__DOT__enables))) {
            vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__7__KET____DOT__R__d_out 
                = vlSelfRef.bitty_core__DOT__c_out;
        }
        if (vlSelfRef.bitty_core__DOT__en_c) {
            vlSelfRef.bitty_core__DOT__c_out = vlSelfRef.bitty_core__DOT__ALU_out;
        }
    }
    if ((1U & ((IData)(vlSelfRef.rst) | (~ (IData)(vlSelfRef.run))))) {
        vlSelfRef.bitty_core__DOT__CU__DOT__ALU_sel = 0U;
        vlSelfRef.bitty_core__DOT__CU__DOT__Ry = 0U;
    } else {
        vlSelfRef.bitty_core__DOT__CU__DOT__ALU_sel 
            = (7U & ((IData)(vlSelfRef.instruction) 
                     >> 2U));
        vlSelfRef.bitty_core__DOT__CU__DOT__Ry = (7U 
                                                  & ((IData)(vlSelfRef.instruction) 
                                                     >> 0xaU));
    }
    vlSelfRef.r0_out = vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__0__KET____DOT__R__d_out;
    vlSelfRef.bitty_core__DOT__r_out[0U] = vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__0__KET____DOT__R__d_out;
    vlSelfRef.r1_out = vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__1__KET____DOT__R__d_out;
    vlSelfRef.bitty_core__DOT__r_out[1U] = vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__1__KET____DOT__R__d_out;
    vlSelfRef.r2_out = vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__2__KET____DOT__R__d_out;
    vlSelfRef.bitty_core__DOT__r_out[2U] = vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__2__KET____DOT__R__d_out;
    vlSelfRef.r3_out = vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__3__KET____DOT__R__d_out;
    vlSelfRef.bitty_core__DOT__r_out[3U] = vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__3__KET____DOT__R__d_out;
    vlSelfRef.r4_out = vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__4__KET____DOT__R__d_out;
    vlSelfRef.bitty_core__DOT__r_out[4U] = vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__4__KET____DOT__R__d_out;
    vlSelfRef.r5_out = vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__5__KET____DOT__R__d_out;
    vlSelfRef.bitty_core__DOT__r_out[5U] = vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__5__KET____DOT__R__d_out;
    vlSelfRef.r6_out = vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__6__KET____DOT__R__d_out;
    vlSelfRef.bitty_core__DOT__r_out[6U] = vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__6__KET____DOT__R__d_out;
    vlSelfRef.r7_out = vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__7__KET____DOT__R__d_out;
    vlSelfRef.bitty_core__DOT__r_out[7U] = vlSelfRef.bitty_core__DOT____Vcellout__reg_bank__BRA__7__KET____DOT__R__d_out;
}

VL_INLINE_OPT void Vbitty_core___024root___nba_sequent__TOP__2(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___nba_sequent__TOP__2\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bitty_core__DOT__enables = (((((IData)(vlSelfRef.bitty_core__DOT__CU__DOT__en_7) 
                                             << 7U) 
                                            | ((IData)(vlSelfRef.bitty_core__DOT__CU__DOT__en_6) 
                                               << 6U)) 
                                           | (((IData)(vlSelfRef.bitty_core__DOT__CU__DOT__en_5) 
                                               << 5U) 
                                              | ((IData)(vlSelfRef.bitty_core__DOT__CU__DOT__en_4) 
                                                 << 4U))) 
                                          | ((((IData)(vlSelfRef.bitty_core__DOT__CU__DOT__en_3) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.bitty_core__DOT__CU__DOT__en_2) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.bitty_core__DOT__CU__DOT__en_1) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.bitty_core__DOT__CU__DOT__en_0))));
    if ((2U & (IData)(vlSelfRef.bitty_core__DOT__CU__DOT__current_state))) {
        if ((1U & (~ (IData)(vlSelfRef.bitty_core__DOT__CU__DOT__current_state)))) {
            vlSelfRef.bitty_core__DOT__en_s = 0U;
            vlSelfRef.bitty_core__DOT__en_c = 1U;
        }
        if ((1U & (IData)(vlSelfRef.bitty_core__DOT__CU__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelfRef.bitty_core__DOT__CU__DOT__Rx) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.bitty_core__DOT__CU__DOT__Rx))) {
                    if ((1U & (IData)(vlSelfRef.bitty_core__DOT__CU__DOT__Rx))) {
                        vlSelfRef.bitty_core__DOT__CU__DOT__en_3 = 1U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.bitty_core__DOT__CU__DOT__Rx)))) {
                        vlSelfRef.bitty_core__DOT__CU__DOT__en_2 = 1U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.bitty_core__DOT__CU__DOT__Rx) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.bitty_core__DOT__CU__DOT__Rx))) {
                        vlSelfRef.bitty_core__DOT__CU__DOT__en_1 = 1U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.bitty_core__DOT__CU__DOT__Rx)))) {
                        vlSelfRef.bitty_core__DOT__CU__DOT__en_0 = 1U;
                    }
                }
            }
            if ((4U & (IData)(vlSelfRef.bitty_core__DOT__CU__DOT__Rx))) {
                if ((2U & (IData)(vlSelfRef.bitty_core__DOT__CU__DOT__Rx))) {
                    if ((1U & (IData)(vlSelfRef.bitty_core__DOT__CU__DOT__Rx))) {
                        vlSelfRef.bitty_core__DOT__CU__DOT__en_7 = 1U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.bitty_core__DOT__CU__DOT__Rx)))) {
                        vlSelfRef.bitty_core__DOT__CU__DOT__en_6 = 1U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.bitty_core__DOT__CU__DOT__Rx) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.bitty_core__DOT__CU__DOT__Rx))) {
                        vlSelfRef.bitty_core__DOT__CU__DOT__en_5 = 1U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.bitty_core__DOT__CU__DOT__Rx)))) {
                        vlSelfRef.bitty_core__DOT__CU__DOT__en_4 = 1U;
                    }
                }
            }
        }
    } else {
        vlSelfRef.bitty_core__DOT__en_s = (1U & (IData)(vlSelfRef.bitty_core__DOT__CU__DOT__current_state));
        vlSelfRef.bitty_core__DOT__en_c = 0U;
    }
}

VL_INLINE_OPT void Vbitty_core___024root___nba_comb__TOP__0(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___nba_comb__TOP__0\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bitty_core__DOT__mux_out = ((4U & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                           ? ((2U & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                                   ? 
                                                  vlSelfRef.bitty_core__DOT__r_out
                                                  [7U]
                                                   : 
                                                  vlSelfRef.bitty_core__DOT__r_out
                                                  [6U])
                                               : ((1U 
                                                   & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                                   ? 
                                                  vlSelfRef.bitty_core__DOT__r_out
                                                  [5U]
                                                   : 
                                                  vlSelfRef.bitty_core__DOT__r_out
                                                  [4U]))
                                           : ((2U & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                                   ? 
                                                  vlSelfRef.bitty_core__DOT__r_out
                                                  [3U]
                                                   : 
                                                  vlSelfRef.bitty_core__DOT__r_out
                                                  [2U])
                                               : ((1U 
                                                   & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                                   ? 
                                                  vlSelfRef.bitty_core__DOT__r_out
                                                  [1U]
                                                   : 
                                                  vlSelfRef.bitty_core__DOT__r_out
                                                  [0U])));
    vlSelfRef.bitty_core__DOT__ALU_out = 0U;
    if ((4U & (IData)(vlSelfRef.bitty_core__DOT__ALU_sel))) {
        if ((2U & (IData)(vlSelfRef.bitty_core__DOT__ALU_sel))) {
            if ((1U & (IData)(vlSelfRef.bitty_core__DOT__ALU_sel))) {
                if (((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                     == (IData)(vlSelfRef.bitty_core__DOT__mux_out))) {
                    vlSelfRef.bitty_core__DOT__ALU_out = 0U;
                } else if (((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                            > (IData)(vlSelfRef.bitty_core__DOT__mux_out))) {
                    vlSelfRef.bitty_core__DOT__ALU_out = 1U;
                } else if (((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                            < (IData)(vlSelfRef.bitty_core__DOT__mux_out))) {
                    vlSelfRef.bitty_core__DOT__ALU_out = 2U;
                }
            } else {
                vlSelfRef.bitty_core__DOT__ALU_out 
                    = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.bitty_core__DOT__s_out), (IData)(vlSelfRef.bitty_core__DOT__mux_out)));
            }
        } else {
            vlSelfRef.bitty_core__DOT__ALU_out = (0xffffU 
                                                  & ((1U 
                                                      & (IData)(vlSelfRef.bitty_core__DOT__ALU_sel))
                                                      ? 
                                                     VL_SHIFTL_III(16,16,16, (IData)(vlSelfRef.bitty_core__DOT__s_out), (IData)(vlSelfRef.bitty_core__DOT__mux_out))
                                                      : 
                                                     ((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                                                      ^ (IData)(vlSelfRef.bitty_core__DOT__mux_out))));
        }
    } else {
        vlSelfRef.bitty_core__DOT__ALU_out = (0xffffU 
                                              & ((2U 
                                                  & (IData)(vlSelfRef.bitty_core__DOT__ALU_sel))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.bitty_core__DOT__ALU_sel))
                                                   ? 
                                                  ((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                                                   | (IData)(vlSelfRef.bitty_core__DOT__mux_out))
                                                   : 
                                                  ((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                                                   & (IData)(vlSelfRef.bitty_core__DOT__mux_out)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.bitty_core__DOT__ALU_sel))
                                                   ? 
                                                  ((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                                                   - (IData)(vlSelfRef.bitty_core__DOT__mux_out))
                                                   : 
                                                  ((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                                                   + (IData)(vlSelfRef.bitty_core__DOT__mux_out)))));
    }
}

VL_INLINE_OPT void Vbitty_core___024root___nba_sequent__TOP__3(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___nba_sequent__TOP__3\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSelfRef.rst) | (~ (IData)(vlSelfRef.run))))) {
        vlSelfRef.bitty_core__DOT__CU__DOT__Rx = 0U;
        vlSelfRef.bitty_core__DOT__CU__DOT__current_state = 0U;
    } else {
        vlSelfRef.bitty_core__DOT__CU__DOT__Rx = (7U 
                                                  & ((IData)(vlSelfRef.instruction) 
                                                     >> 0xdU));
        vlSelfRef.bitty_core__DOT__CU__DOT__current_state 
            = vlSelfRef.bitty_core__DOT__CU__DOT__next_state;
    }
}

VL_INLINE_OPT void Vbitty_core___024root___nba_sequent__TOP__4(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___nba_sequent__TOP__4\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bitty_core__DOT__CU__DOT__next_state 
        = vlSelfRef.__Vdly__bitty_core__DOT__CU__DOT__next_state;
}

void Vbitty_core___024root___eval_triggers__act(Vbitty_core___024root* vlSelf);

bool Vbitty_core___024root___eval_phase__act(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_phase__act\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vbitty_core___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vbitty_core___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vbitty_core___024root___eval_phase__nba(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_phase__nba\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vbitty_core___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__nba(Vbitty_core___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__act(Vbitty_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vbitty_core___024root___eval(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vbitty_core___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("bitty_core.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vbitty_core___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("bitty_core.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vbitty_core___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vbitty_core___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vbitty_core___024root___eval_debug_assertions(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_debug_assertions\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY(((vlSelfRef.run & 0xfeU)))) {
        Verilated::overWidthError("run");}
}
#endif  // VL_DEBUG
