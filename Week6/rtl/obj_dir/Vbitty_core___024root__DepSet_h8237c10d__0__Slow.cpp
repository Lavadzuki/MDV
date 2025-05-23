// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbitty_core.h for the primary calling header

#include "Vbitty_core__pch.h"
#include "Vbitty_core___024root.h"

VL_ATTR_COLD void Vbitty_core___024root___eval_static__TOP(Vbitty_core___024root* vlSelf);

VL_ATTR_COLD void Vbitty_core___024root___eval_static(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_static\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vbitty_core___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vbitty_core___024root___eval_static__TOP(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_static__TOP\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bitty_core__DOT__CU__DOT__en_0 = 0U;
    vlSelfRef.bitty_core__DOT__CU__DOT__en_1 = 0U;
    vlSelfRef.bitty_core__DOT__CU__DOT__en_2 = 0U;
    vlSelfRef.bitty_core__DOT__CU__DOT__en_3 = 0U;
    vlSelfRef.bitty_core__DOT__CU__DOT__en_4 = 0U;
    vlSelfRef.bitty_core__DOT__CU__DOT__en_5 = 0U;
    vlSelfRef.bitty_core__DOT__CU__DOT__en_6 = 0U;
    vlSelfRef.bitty_core__DOT__CU__DOT__en_7 = 0U;
}

VL_ATTR_COLD void Vbitty_core___024root___eval_initial(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_initial\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vbitty_core___024root___eval_final(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_final\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__stl(Vbitty_core___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vbitty_core___024root___eval_phase__stl(Vbitty_core___024root* vlSelf);

VL_ATTR_COLD void Vbitty_core___024root___eval_settle(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_settle\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vbitty_core___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("bitty_core.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vbitty_core___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__stl(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___dump_triggers__stl\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vbitty_core___024root___stl_sequent__TOP__0(Vbitty_core___024root* vlSelf);

VL_ATTR_COLD void Vbitty_core___024root___eval_stl(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_stl\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vbitty_core___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vbitty_core___024root___stl_sequent__TOP__0(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___stl_sequent__TOP__0\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r0_out = vlSelfRef.bitty_core__DOT____Vcellout__R0__d_out;
    vlSelfRef.r1_out = vlSelfRef.bitty_core__DOT____Vcellout__R1__d_out;
    vlSelfRef.r2_out = vlSelfRef.bitty_core__DOT____Vcellout__R2__d_out;
    vlSelfRef.r3_out = vlSelfRef.bitty_core__DOT____Vcellout__R3__d_out;
    vlSelfRef.r4_out = vlSelfRef.bitty_core__DOT____Vcellout__R4__d_out;
    vlSelfRef.r5_out = vlSelfRef.bitty_core__DOT____Vcellout__R5__d_out;
    vlSelfRef.r6_out = vlSelfRef.bitty_core__DOT____Vcellout__R6__d_out;
    vlSelfRef.r7_out = vlSelfRef.bitty_core__DOT____Vcellout__R7__d_out;
    vlSelfRef.bitty_core__DOT__r_out[0U] = vlSelfRef.bitty_core__DOT____Vcellout__R0__d_out;
    vlSelfRef.bitty_core__DOT__r_out[1U] = vlSelfRef.bitty_core__DOT____Vcellout__R1__d_out;
    vlSelfRef.bitty_core__DOT__r_out[2U] = vlSelfRef.bitty_core__DOT____Vcellout__R2__d_out;
    vlSelfRef.bitty_core__DOT__r_out[3U] = vlSelfRef.bitty_core__DOT____Vcellout__R3__d_out;
    vlSelfRef.bitty_core__DOT__r_out[4U] = vlSelfRef.bitty_core__DOT____Vcellout__R4__d_out;
    vlSelfRef.bitty_core__DOT__r_out[5U] = vlSelfRef.bitty_core__DOT____Vcellout__R5__d_out;
    vlSelfRef.bitty_core__DOT__r_out[6U] = vlSelfRef.bitty_core__DOT____Vcellout__R6__d_out;
    vlSelfRef.bitty_core__DOT__r_out[7U] = vlSelfRef.bitty_core__DOT____Vcellout__R7__d_out;
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
    if ((8U & (IData)(vlSelfRef.bitty_core__DOT__ALU_sel))) {
        if ((4U & (IData)(vlSelfRef.bitty_core__DOT__ALU_sel))) {
            if ((2U & (IData)(vlSelfRef.bitty_core__DOT__ALU_sel))) {
                if ((1U & (IData)(vlSelfRef.bitty_core__DOT__ALU_sel))) {
                    vlSelfRef.bitty_core__DOT__alu_unit__DOT__arith_result 
                        = (0xffffU & ((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                                      - (IData)(1U)));
                    vlSelfRef.bitty_core__DOT__alu_unit__DOT__logic_result 
                        = (0xffffU & (IData)(vlSelfRef.bitty_core__DOT__s_out));
                } else {
                    vlSelfRef.bitty_core__DOT__alu_unit__DOT__arith_result 
                        = (0xffffU & (((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                                       | (~ (IData)(vlSelfRef.bitty_core__DOT__mux_out))) 
                                      + (IData)(vlSelfRef.bitty_core__DOT__s_out)));
                    vlSelfRef.bitty_core__DOT__alu_unit__DOT__logic_result 
                        = (0xffffU & ((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                                      | (IData)(vlSelfRef.bitty_core__DOT__mux_out)));
                }
            } else if ((1U & (IData)(vlSelfRef.bitty_core__DOT__ALU_sel))) {
                vlSelfRef.bitty_core__DOT__alu_unit__DOT__arith_result 
                    = (0xffffU & (((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                                   | (IData)(vlSelfRef.bitty_core__DOT__mux_out)) 
                                  + (IData)(vlSelfRef.bitty_core__DOT__s_out)));
                vlSelfRef.bitty_core__DOT__alu_unit__DOT__logic_result 
                    = (0xffffU & ((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                                  | (~ (IData)(vlSelfRef.bitty_core__DOT__mux_out))));
            } else {
                vlSelfRef.bitty_core__DOT__alu_unit__DOT__arith_result 
                    = (0xffffU & ((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                                  + (IData)(vlSelfRef.bitty_core__DOT__s_out)));
                vlSelfRef.bitty_core__DOT__alu_unit__DOT__logic_result 
                    = (0xffffU & 0xffffU);
            }
        } else if ((2U & (IData)(vlSelfRef.bitty_core__DOT__ALU_sel))) {
            if ((1U & (IData)(vlSelfRef.bitty_core__DOT__ALU_sel))) {
                vlSelfRef.bitty_core__DOT__alu_unit__DOT__arith_result 
                    = (0xffffU & (((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                                   & (IData)(vlSelfRef.bitty_core__DOT__mux_out)) 
                                  - (IData)(1U)));
                vlSelfRef.bitty_core__DOT__alu_unit__DOT__logic_result 
                    = (0xffffU & ((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                                  & (IData)(vlSelfRef.bitty_core__DOT__mux_out)));
            } else {
                vlSelfRef.bitty_core__DOT__alu_unit__DOT__arith_result 
                    = (0xffffU & (((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                                   | (~ (IData)(vlSelfRef.bitty_core__DOT__mux_out))) 
                                  + ((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                                     & (IData)(vlSelfRef.bitty_core__DOT__mux_out))));
                vlSelfRef.bitty_core__DOT__alu_unit__DOT__logic_result 
                    = (0xffffU & (IData)(vlSelfRef.bitty_core__DOT__mux_out));
            }
        } else if ((1U & (IData)(vlSelfRef.bitty_core__DOT__ALU_sel))) {
            vlSelfRef.bitty_core__DOT__alu_unit__DOT__arith_result 
                = (0xffffU & ((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                              + (IData)(vlSelfRef.bitty_core__DOT__mux_out)));
            vlSelfRef.bitty_core__DOT__alu_unit__DOT__logic_result 
                = (0xffffU & (~ ((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                                 ^ (IData)(vlSelfRef.bitty_core__DOT__mux_out))));
        } else {
            vlSelfRef.bitty_core__DOT__alu_unit__DOT__arith_result 
                = (0xffffU & ((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                              + ((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                                 & (IData)(vlSelfRef.bitty_core__DOT__mux_out))));
            vlSelfRef.bitty_core__DOT__alu_unit__DOT__logic_result 
                = (0xffffU & ((~ (IData)(vlSelfRef.bitty_core__DOT__s_out)) 
                              | (IData)(vlSelfRef.bitty_core__DOT__mux_out)));
        }
    } else if ((4U & (IData)(vlSelfRef.bitty_core__DOT__ALU_sel))) {
        if ((2U & (IData)(vlSelfRef.bitty_core__DOT__ALU_sel))) {
            if ((1U & (IData)(vlSelfRef.bitty_core__DOT__ALU_sel))) {
                vlSelfRef.bitty_core__DOT__alu_unit__DOT__arith_result 
                    = (0xffffU & (((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                                   & (~ (IData)(vlSelfRef.bitty_core__DOT__mux_out))) 
                                  - (IData)(1U)));
                vlSelfRef.bitty_core__DOT__alu_unit__DOT__logic_result 
                    = (0xffffU & ((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                                  & (~ (IData)(vlSelfRef.bitty_core__DOT__mux_out))));
            } else {
                vlSelfRef.bitty_core__DOT__alu_unit__DOT__arith_result 
                    = (0xffffU & (((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                                   - (IData)(vlSelfRef.bitty_core__DOT__mux_out)) 
                                  - (IData)(1U)));
                vlSelfRef.bitty_core__DOT__alu_unit__DOT__logic_result 
                    = (0xffffU & ((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                                  ^ (IData)(vlSelfRef.bitty_core__DOT__mux_out)));
            }
        } else if ((1U & (IData)(vlSelfRef.bitty_core__DOT__ALU_sel))) {
            vlSelfRef.bitty_core__DOT__alu_unit__DOT__arith_result 
                = (0xffffU & (((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                               | (IData)(vlSelfRef.bitty_core__DOT__mux_out)) 
                              + ((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                                 & (~ (IData)(vlSelfRef.bitty_core__DOT__mux_out)))));
            vlSelfRef.bitty_core__DOT__alu_unit__DOT__logic_result 
                = (0xffffU & (~ (IData)(vlSelfRef.bitty_core__DOT__mux_out)));
        } else {
            vlSelfRef.bitty_core__DOT__alu_unit__DOT__arith_result 
                = (0xffffU & ((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                              | ((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                                 & (~ (IData)(vlSelfRef.bitty_core__DOT__mux_out)))));
            vlSelfRef.bitty_core__DOT__alu_unit__DOT__logic_result 
                = (0xffffU & (~ ((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                                 & (IData)(vlSelfRef.bitty_core__DOT__mux_out))));
        }
    } else if ((2U & (IData)(vlSelfRef.bitty_core__DOT__ALU_sel))) {
        if ((1U & (IData)(vlSelfRef.bitty_core__DOT__ALU_sel))) {
            vlSelfRef.bitty_core__DOT__alu_unit__DOT__arith_result 
                = (0xffffU & 0xffffU);
            vlSelfRef.bitty_core__DOT__alu_unit__DOT__logic_result 
                = (0xffffU & 0U);
        } else {
            vlSelfRef.bitty_core__DOT__alu_unit__DOT__arith_result 
                = (0xffffU & ((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                              | (~ (IData)(vlSelfRef.bitty_core__DOT__mux_out))));
            vlSelfRef.bitty_core__DOT__alu_unit__DOT__logic_result 
                = (0xffffU & ((~ (IData)(vlSelfRef.bitty_core__DOT__s_out)) 
                              & (IData)(vlSelfRef.bitty_core__DOT__mux_out)));
        }
    } else if ((1U & (IData)(vlSelfRef.bitty_core__DOT__ALU_sel))) {
        vlSelfRef.bitty_core__DOT__alu_unit__DOT__arith_result 
            = (0xffffU & ((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                          | (IData)(vlSelfRef.bitty_core__DOT__mux_out)));
        vlSelfRef.bitty_core__DOT__alu_unit__DOT__logic_result 
            = (0xffffU & (~ ((IData)(vlSelfRef.bitty_core__DOT__s_out) 
                             | (IData)(vlSelfRef.bitty_core__DOT__mux_out))));
    } else {
        vlSelfRef.bitty_core__DOT__alu_unit__DOT__arith_result 
            = (0xffffU & (IData)(vlSelfRef.bitty_core__DOT__s_out));
        vlSelfRef.bitty_core__DOT__alu_unit__DOT__logic_result 
            = (0xffffU & (~ (IData)(vlSelfRef.bitty_core__DOT__s_out)));
    }
}

VL_ATTR_COLD void Vbitty_core___024root___eval_triggers__stl(Vbitty_core___024root* vlSelf);

VL_ATTR_COLD bool Vbitty_core___024root___eval_phase__stl(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_phase__stl\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vbitty_core___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vbitty_core___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__act(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___dump_triggers__act\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__nba(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___dump_triggers__nba\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vbitty_core___024root___ctor_var_reset(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___ctor_var_reset\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->instruction = VL_RAND_RESET_I(16);
    vlSelf->run = VL_RAND_RESET_I(1);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->debug_load = VL_RAND_RESET_I(1);
    vlSelf->debug_init_0 = VL_RAND_RESET_I(16);
    vlSelf->debug_init_1 = VL_RAND_RESET_I(16);
    vlSelf->debug_init_2 = VL_RAND_RESET_I(16);
    vlSelf->debug_init_3 = VL_RAND_RESET_I(16);
    vlSelf->debug_init_4 = VL_RAND_RESET_I(16);
    vlSelf->debug_init_5 = VL_RAND_RESET_I(16);
    vlSelf->debug_init_6 = VL_RAND_RESET_I(16);
    vlSelf->debug_init_7 = VL_RAND_RESET_I(16);
    vlSelf->r0_out = VL_RAND_RESET_I(16);
    vlSelf->r1_out = VL_RAND_RESET_I(16);
    vlSelf->r2_out = VL_RAND_RESET_I(16);
    vlSelf->r3_out = VL_RAND_RESET_I(16);
    vlSelf->r4_out = VL_RAND_RESET_I(16);
    vlSelf->r5_out = VL_RAND_RESET_I(16);
    vlSelf->r6_out = VL_RAND_RESET_I(16);
    vlSelf->r7_out = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->bitty_core__DOT__r_out[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->bitty_core__DOT__enables = VL_RAND_RESET_I(8);
    vlSelf->bitty_core__DOT__en_s = VL_RAND_RESET_I(1);
    vlSelf->bitty_core__DOT__en_c = VL_RAND_RESET_I(1);
    vlSelf->bitty_core__DOT__mux_sel = VL_RAND_RESET_I(3);
    vlSelf->bitty_core__DOT__s_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT__c_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT__mux_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT__ALU_sel = VL_RAND_RESET_I(4);
    vlSelf->bitty_core__DOT__ALU_mode = VL_RAND_RESET_I(1);
    vlSelf->bitty_core__DOT____Vcellout__R0__d_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT____Vcellout__R1__d_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT____Vcellout__R2__d_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT____Vcellout__R3__d_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT____Vcellout__R4__d_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT____Vcellout__R5__d_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT____Vcellout__R6__d_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT____Vcellout__R7__d_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT__CU__DOT__Rx = VL_RAND_RESET_I(3);
    vlSelf->bitty_core__DOT__CU__DOT__Ry = VL_RAND_RESET_I(3);
    vlSelf->bitty_core__DOT__CU__DOT__ALU_sel = VL_RAND_RESET_I(4);
    vlSelf->bitty_core__DOT__CU__DOT__ALU_mode = VL_RAND_RESET_I(1);
    vlSelf->bitty_core__DOT__CU__DOT__en_0 = VL_RAND_RESET_I(1);
    vlSelf->bitty_core__DOT__CU__DOT__en_1 = VL_RAND_RESET_I(1);
    vlSelf->bitty_core__DOT__CU__DOT__en_2 = VL_RAND_RESET_I(1);
    vlSelf->bitty_core__DOT__CU__DOT__en_3 = VL_RAND_RESET_I(1);
    vlSelf->bitty_core__DOT__CU__DOT__en_4 = VL_RAND_RESET_I(1);
    vlSelf->bitty_core__DOT__CU__DOT__en_5 = VL_RAND_RESET_I(1);
    vlSelf->bitty_core__DOT__CU__DOT__en_6 = VL_RAND_RESET_I(1);
    vlSelf->bitty_core__DOT__CU__DOT__en_7 = VL_RAND_RESET_I(1);
    vlSelf->bitty_core__DOT__CU__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->bitty_core__DOT__CU__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->bitty_core__DOT__alu_unit__DOT__arith_result = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT__alu_unit__DOT__logic_result = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__bitty_core__DOT__CU__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
