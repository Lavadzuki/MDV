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
    // Body
    vlSelfRef.control_unit__DOT__en_0 = 0U;
    vlSelfRef.control_unit__DOT__en_1 = 0U;
    vlSelfRef.control_unit__DOT__en_2 = 0U;
    vlSelfRef.control_unit__DOT__en_3 = 0U;
    vlSelfRef.control_unit__DOT__en_4 = 0U;
    vlSelfRef.control_unit__DOT__en_5 = 0U;
    vlSelfRef.control_unit__DOT__en_6 = 0U;
    vlSelfRef.control_unit__DOT__en_7 = 0U;
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

VL_ATTR_COLD void Vcontrol_unit___024root___eval_settle(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_settle\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

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
    vlSelf->control_unit__DOT__Rx = VL_RAND_RESET_I(3);
    vlSelf->control_unit__DOT__Ry = VL_RAND_RESET_I(3);
    vlSelf->control_unit__DOT__ALU_sel = VL_RAND_RESET_I(4);
    vlSelf->control_unit__DOT__ALU_mode = VL_RAND_RESET_I(1);
    vlSelf->control_unit__DOT__en_0 = VL_RAND_RESET_I(1);
    vlSelf->control_unit__DOT__en_1 = VL_RAND_RESET_I(1);
    vlSelf->control_unit__DOT__en_2 = VL_RAND_RESET_I(1);
    vlSelf->control_unit__DOT__en_3 = VL_RAND_RESET_I(1);
    vlSelf->control_unit__DOT__en_4 = VL_RAND_RESET_I(1);
    vlSelf->control_unit__DOT__en_5 = VL_RAND_RESET_I(1);
    vlSelf->control_unit__DOT__en_6 = VL_RAND_RESET_I(1);
    vlSelf->control_unit__DOT__en_7 = VL_RAND_RESET_I(1);
    vlSelf->control_unit__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->control_unit__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__control_unit__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
