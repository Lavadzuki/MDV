// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol_unit.h for the primary calling header

#include "Vcontrol_unit__pch.h"
#include "Vcontrol_unit___024root.h"

void Vcontrol_unit___024root___ico_sequent__TOP__0(Vcontrol_unit___024root* vlSelf);

void Vcontrol_unit___024root___eval_ico(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_ico\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcontrol_unit___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcontrol_unit___024root___ico_sequent__TOP__0(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___ico_sequent__TOP__0\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ control_unit__DOT__en_0;
    control_unit__DOT__en_0 = 0;
    CData/*0:0*/ control_unit__DOT__en_1;
    control_unit__DOT__en_1 = 0;
    CData/*0:0*/ control_unit__DOT__en_2;
    control_unit__DOT__en_2 = 0;
    CData/*0:0*/ control_unit__DOT__en_3;
    control_unit__DOT__en_3 = 0;
    CData/*0:0*/ control_unit__DOT__en_4;
    control_unit__DOT__en_4 = 0;
    CData/*0:0*/ control_unit__DOT__en_5;
    control_unit__DOT__en_5 = 0;
    CData/*0:0*/ control_unit__DOT__en_6;
    control_unit__DOT__en_6 = 0;
    CData/*0:0*/ control_unit__DOT__en_7;
    control_unit__DOT__en_7 = 0;
    // Body
    vlSelfRef.mux_sel = 0U;
    vlSelfRef.sel = 0U;
    vlSelfRef.mode = 0U;
    control_unit__DOT__en_0 = 0U;
    control_unit__DOT__en_1 = 0U;
    control_unit__DOT__en_2 = 0U;
    control_unit__DOT__en_3 = 0U;
    control_unit__DOT__en_4 = 0U;
    control_unit__DOT__en_5 = 0U;
    control_unit__DOT__en_6 = 0U;
    control_unit__DOT__en_7 = 0U;
    if ((0U != (IData)(vlSelfRef.control_unit__DOT__current_state))) {
        if ((1U == (IData)(vlSelfRef.control_unit__DOT__current_state))) {
            vlSelfRef.mux_sel = (7U & ((IData)(vlSelfRef.instruction) 
                                       >> 0xdU));
        } else if ((2U == (IData)(vlSelfRef.control_unit__DOT__current_state))) {
            vlSelfRef.mux_sel = (7U & ((IData)(vlSelfRef.instruction) 
                                       >> 0xaU));
        }
        if ((1U != (IData)(vlSelfRef.control_unit__DOT__current_state))) {
            if ((2U == (IData)(vlSelfRef.control_unit__DOT__current_state))) {
                vlSelfRef.sel = (0xfU & ((IData)(vlSelfRef.instruction) 
                                         >> 3U));
                vlSelfRef.mode = (1U & ((IData)(vlSelfRef.instruction) 
                                        >> 2U));
            }
            if ((2U != (IData)(vlSelfRef.control_unit__DOT__current_state))) {
                if ((3U == (IData)(vlSelfRef.control_unit__DOT__current_state))) {
                    if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                                  >> 0xfU)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                                      >> 0xeU)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                                          >> 0xdU)))) {
                                control_unit__DOT__en_0 = 1U;
                            }
                            if ((0x2000U & (IData)(vlSelfRef.instruction))) {
                                control_unit__DOT__en_1 = 1U;
                            }
                        }
                        if ((0x4000U & (IData)(vlSelfRef.instruction))) {
                            if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                                          >> 0xdU)))) {
                                control_unit__DOT__en_2 = 1U;
                            }
                            if ((0x2000U & (IData)(vlSelfRef.instruction))) {
                                control_unit__DOT__en_3 = 1U;
                            }
                        }
                    }
                    if ((0x8000U & (IData)(vlSelfRef.instruction))) {
                        if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                                      >> 0xeU)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                                          >> 0xdU)))) {
                                control_unit__DOT__en_4 = 1U;
                            }
                            if ((0x2000U & (IData)(vlSelfRef.instruction))) {
                                control_unit__DOT__en_5 = 1U;
                            }
                        }
                        if ((0x4000U & (IData)(vlSelfRef.instruction))) {
                            if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                                          >> 0xdU)))) {
                                control_unit__DOT__en_6 = 1U;
                            }
                            if ((0x2000U & (IData)(vlSelfRef.instruction))) {
                                control_unit__DOT__en_7 = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.enableOutput = (((((IData)(control_unit__DOT__en_7) 
                                 << 7U) | ((IData)(control_unit__DOT__en_6) 
                                           << 6U)) 
                               | (((IData)(control_unit__DOT__en_5) 
                                   << 5U) | ((IData)(control_unit__DOT__en_4) 
                                             << 4U))) 
                              | ((((IData)(control_unit__DOT__en_3) 
                                   << 3U) | ((IData)(control_unit__DOT__en_2) 
                                             << 2U)) 
                                 | (((IData)(control_unit__DOT__en_1) 
                                     << 1U) | (IData)(control_unit__DOT__en_0))));
}

void Vcontrol_unit___024root___eval_triggers__ico(Vcontrol_unit___024root* vlSelf);

bool Vcontrol_unit___024root___eval_phase__ico(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_phase__ico\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcontrol_unit___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vcontrol_unit___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vcontrol_unit___024root___eval_act(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_act\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcontrol_unit___024root___nba_sequent__TOP__0(Vcontrol_unit___024root* vlSelf);

void Vcontrol_unit___024root___eval_nba(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_nba\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcontrol_unit___024root___nba_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 4> Vcontrol_unit__ConstPool__TABLE_hcac39648_0;

VL_INLINE_OPT void Vcontrol_unit___024root___nba_sequent__TOP__0(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___nba_sequent__TOP__0\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ control_unit__DOT__en_0;
    control_unit__DOT__en_0 = 0;
    CData/*0:0*/ control_unit__DOT__en_1;
    control_unit__DOT__en_1 = 0;
    CData/*0:0*/ control_unit__DOT__en_2;
    control_unit__DOT__en_2 = 0;
    CData/*0:0*/ control_unit__DOT__en_3;
    control_unit__DOT__en_3 = 0;
    CData/*0:0*/ control_unit__DOT__en_4;
    control_unit__DOT__en_4 = 0;
    CData/*0:0*/ control_unit__DOT__en_5;
    control_unit__DOT__en_5 = 0;
    CData/*0:0*/ control_unit__DOT__en_6;
    control_unit__DOT__en_6 = 0;
    CData/*0:0*/ control_unit__DOT__en_7;
    control_unit__DOT__en_7 = 0;
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.control_unit__DOT__current_state = ((1U 
                                                   & ((IData)(vlSelfRef.rst) 
                                                      | (~ (IData)(vlSelfRef.run))))
                                                   ? 0U
                                                   : (IData)(vlSelfRef.control_unit__DOT__next_state));
    vlSelfRef.en_s = 0U;
    vlSelfRef.done = 0U;
    vlSelfRef.en_i = 0U;
    if ((0U == (IData)(vlSelfRef.control_unit__DOT__current_state))) {
        vlSelfRef.en_i = 1U;
    }
    vlSelfRef.en_c = 0U;
    vlSelfRef.mux_sel = 0U;
    vlSelfRef.sel = 0U;
    vlSelfRef.mode = 0U;
    __Vtableidx1 = vlSelfRef.control_unit__DOT__current_state;
    vlSelfRef.control_unit__DOT__next_state = Vcontrol_unit__ConstPool__TABLE_hcac39648_0
        [__Vtableidx1];
    control_unit__DOT__en_0 = 0U;
    control_unit__DOT__en_1 = 0U;
    control_unit__DOT__en_2 = 0U;
    control_unit__DOT__en_3 = 0U;
    control_unit__DOT__en_4 = 0U;
    control_unit__DOT__en_5 = 0U;
    control_unit__DOT__en_6 = 0U;
    control_unit__DOT__en_7 = 0U;
    if ((0U != (IData)(vlSelfRef.control_unit__DOT__current_state))) {
        if ((1U == (IData)(vlSelfRef.control_unit__DOT__current_state))) {
            vlSelfRef.en_s = 1U;
            vlSelfRef.mux_sel = (7U & ((IData)(vlSelfRef.instruction) 
                                       >> 0xdU));
        } else if ((2U == (IData)(vlSelfRef.control_unit__DOT__current_state))) {
            vlSelfRef.mux_sel = (7U & ((IData)(vlSelfRef.instruction) 
                                       >> 0xaU));
        }
        if ((1U != (IData)(vlSelfRef.control_unit__DOT__current_state))) {
            if ((2U != (IData)(vlSelfRef.control_unit__DOT__current_state))) {
                if ((3U == (IData)(vlSelfRef.control_unit__DOT__current_state))) {
                    vlSelfRef.done = 1U;
                    if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                                  >> 0xfU)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                                      >> 0xeU)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                                          >> 0xdU)))) {
                                control_unit__DOT__en_0 = 1U;
                            }
                            if ((0x2000U & (IData)(vlSelfRef.instruction))) {
                                control_unit__DOT__en_1 = 1U;
                            }
                        }
                        if ((0x4000U & (IData)(vlSelfRef.instruction))) {
                            if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                                          >> 0xdU)))) {
                                control_unit__DOT__en_2 = 1U;
                            }
                            if ((0x2000U & (IData)(vlSelfRef.instruction))) {
                                control_unit__DOT__en_3 = 1U;
                            }
                        }
                    }
                    if ((0x8000U & (IData)(vlSelfRef.instruction))) {
                        if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                                      >> 0xeU)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                                          >> 0xdU)))) {
                                control_unit__DOT__en_4 = 1U;
                            }
                            if ((0x2000U & (IData)(vlSelfRef.instruction))) {
                                control_unit__DOT__en_5 = 1U;
                            }
                        }
                        if ((0x4000U & (IData)(vlSelfRef.instruction))) {
                            if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                                          >> 0xdU)))) {
                                control_unit__DOT__en_6 = 1U;
                            }
                            if ((0x2000U & (IData)(vlSelfRef.instruction))) {
                                control_unit__DOT__en_7 = 1U;
                            }
                        }
                    }
                }
            }
            if ((2U == (IData)(vlSelfRef.control_unit__DOT__current_state))) {
                vlSelfRef.en_c = 1U;
                vlSelfRef.sel = (0xfU & ((IData)(vlSelfRef.instruction) 
                                         >> 3U));
                vlSelfRef.mode = (1U & ((IData)(vlSelfRef.instruction) 
                                        >> 2U));
            }
        }
    }
    vlSelfRef.enableOutput = (((((IData)(control_unit__DOT__en_7) 
                                 << 7U) | ((IData)(control_unit__DOT__en_6) 
                                           << 6U)) 
                               | (((IData)(control_unit__DOT__en_5) 
                                   << 5U) | ((IData)(control_unit__DOT__en_4) 
                                             << 4U))) 
                              | ((((IData)(control_unit__DOT__en_3) 
                                   << 3U) | ((IData)(control_unit__DOT__en_2) 
                                             << 2U)) 
                                 | (((IData)(control_unit__DOT__en_1) 
                                     << 1U) | (IData)(control_unit__DOT__en_0))));
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
VL_ATTR_COLD void Vcontrol_unit___024root___dump_triggers__ico(Vcontrol_unit___024root* vlSelf);
#endif  // VL_DEBUG
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
            Vcontrol_unit___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("control_unit.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vcontrol_unit___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
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
