// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegister.h for the primary calling header

#include "VRegister__pch.h"
#include "VRegister___024root.h"

VL_ATTR_COLD void VRegister___024root___eval_static(VRegister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root___eval_static\n"); );
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VRegister___024root___eval_initial(VRegister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root___eval_initial\n"); );
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void VRegister___024root___eval_final(VRegister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root___eval_final\n"); );
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VRegister___024root___eval_settle(VRegister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root___eval_settle\n"); );
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegister___024root___dump_triggers__act(VRegister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root___dump_triggers__act\n"); );
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void VRegister___024root___dump_triggers__nba(VRegister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root___dump_triggers__nba\n"); );
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void VRegister___024root___ctor_var_reset(VRegister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root___ctor_var_reset\n"); );
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->d_in = VL_RAND_RESET_I(16);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->enable = VL_RAND_RESET_I(1);
    vlSelf->debug_init = VL_RAND_RESET_I(16);
    vlSelf->debug_load = VL_RAND_RESET_I(1);
    vlSelf->d_out = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
