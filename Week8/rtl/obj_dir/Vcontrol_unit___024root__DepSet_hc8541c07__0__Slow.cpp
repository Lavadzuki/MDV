// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol_unit.h for the primary calling header

#include "Vcontrol_unit__pch.h"
#include "Vcontrol_unit___024root.h"

VL_ATTR_COLD void Vcontrol_unit___024root___eval_static__TOP(Vcontrol_unit___024root* vlSelf);

VL_ATTR_COLD void Vcontrol_unit___024root___eval_static(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_static\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcontrol_unit___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vcontrol_unit___024root___eval_static__TOP(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_static__TOP\n"); );
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
    control_unit__DOT__en_0 = 0U;
    control_unit__DOT__en_1 = 0U;
    control_unit__DOT__en_2 = 0U;
    control_unit__DOT__en_3 = 0U;
    control_unit__DOT__en_4 = 0U;
    control_unit__DOT__en_5 = 0U;
    control_unit__DOT__en_6 = 0U;
    control_unit__DOT__en_7 = 0U;
}

VL_ATTR_COLD void Vcontrol_unit___024root___eval_initial(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_initial\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vcontrol_unit___024root___eval_final(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_final\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_unit___024root___dump_triggers__stl(Vcontrol_unit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcontrol_unit___024root___eval_phase__stl(Vcontrol_unit___024root* vlSelf);

VL_ATTR_COLD void Vcontrol_unit___024root___eval_settle(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_settle\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vcontrol_unit___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("control_unit.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcontrol_unit___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_unit___024root___dump_triggers__stl(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___dump_triggers__stl\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcontrol_unit___024root___stl_sequent__TOP__0(Vcontrol_unit___024root* vlSelf);

VL_ATTR_COLD void Vcontrol_unit___024root___eval_stl(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_stl\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcontrol_unit___024root___stl_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 4> Vcontrol_unit__ConstPool__TABLE_hcac39648_0;

VL_ATTR_COLD void Vcontrol_unit___024root___stl_sequent__TOP__0(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___stl_sequent__TOP__0\n"); );
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

VL_ATTR_COLD void Vcontrol_unit___024root___eval_triggers__stl(Vcontrol_unit___024root* vlSelf);

VL_ATTR_COLD bool Vcontrol_unit___024root___eval_phase__stl(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_phase__stl\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcontrol_unit___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vcontrol_unit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_unit___024root___dump_triggers__ico(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___dump_triggers__ico\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_unit___024root___dump_triggers__act(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___dump_triggers__act\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_unit___024root___dump_triggers__nba(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___dump_triggers__nba\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcontrol_unit___024root___ctor_var_reset(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___ctor_var_reset\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->run = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->instruction = VL_RAND_RESET_I(16);
    vlSelf->sel = VL_RAND_RESET_I(4);
    vlSelf->mux_sel = VL_RAND_RESET_I(3);
    vlSelf->mode = VL_RAND_RESET_I(1);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->enableOutput = VL_RAND_RESET_I(8);
    vlSelf->en_s = VL_RAND_RESET_I(1);
    vlSelf->en_c = VL_RAND_RESET_I(1);
    vlSelf->en_i = VL_RAND_RESET_I(1);
    vlSelf->control_unit__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->control_unit__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
