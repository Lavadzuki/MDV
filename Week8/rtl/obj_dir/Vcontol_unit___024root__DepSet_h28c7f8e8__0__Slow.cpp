// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontol_unit.h for the primary calling header

#include "Vcontol_unit__pch.h"
#include "Vcontol_unit___024root.h"

VL_ATTR_COLD void Vcontol_unit___024root___eval_static(Vcontol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontol_unit___024root___eval_static\n"); );
    Vcontol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcontol_unit___024root___eval_initial(Vcontol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontol_unit___024root___eval_initial\n"); );
    Vcontol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vcontol_unit___024root___eval_final(Vcontol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontol_unit___024root___eval_final\n"); );
    Vcontol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcontol_unit___024root___eval_settle(Vcontol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontol_unit___024root___eval_settle\n"); );
    Vcontol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontol_unit___024root___dump_triggers__act(Vcontol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontol_unit___024root___dump_triggers__act\n"); );
    Vcontol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vcontol_unit___024root___dump_triggers__nba(Vcontol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontol_unit___024root___dump_triggers__nba\n"); );
    Vcontol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vcontol_unit___024root___ctor_var_reset(Vcontol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontol_unit___024root___ctor_var_reset\n"); );
    Vcontol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->run = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->instruction = VL_RAND_RESET_I(16);
    vlSelf->sel = VL_RAND_RESET_I(4);
    vlSelf->mode = VL_RAND_RESET_I(1);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->control_unit__DOT__ALU_sel = VL_RAND_RESET_I(4);
    vlSelf->control_unit__DOT__ALU_mode = VL_RAND_RESET_I(1);
    vlSelf->control_unit__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->control_unit__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__control_unit__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
