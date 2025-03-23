// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtraffic_light.h for the primary calling header

#include "Vtraffic_light__pch.h"
#include "Vtraffic_light___024root.h"

VL_ATTR_COLD void Vtraffic_light___024root___eval_static(Vtraffic_light___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___eval_static\n"); );
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtraffic_light___024root___eval_initial(Vtraffic_light___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___eval_initial\n"); );
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
}

VL_ATTR_COLD void Vtraffic_light___024root___eval_final(Vtraffic_light___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___eval_final\n"); );
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtraffic_light___024root___dump_triggers__stl(Vtraffic_light___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtraffic_light___024root___eval_phase__stl(Vtraffic_light___024root* vlSelf);

VL_ATTR_COLD void Vtraffic_light___024root___eval_settle(Vtraffic_light___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___eval_settle\n"); );
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtraffic_light___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("traffic_light.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtraffic_light___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtraffic_light___024root___dump_triggers__stl(Vtraffic_light___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___dump_triggers__stl\n"); );
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtraffic_light___024root___stl_sequent__TOP__0(Vtraffic_light___024root* vlSelf);
VL_ATTR_COLD void Vtraffic_light___024root____Vm_traceActivitySetAll(Vtraffic_light___024root* vlSelf);

VL_ATTR_COLD void Vtraffic_light___024root___eval_stl(Vtraffic_light___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___eval_stl\n"); );
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtraffic_light___024root___stl_sequent__TOP__0(vlSelf);
        Vtraffic_light___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 64> Vtraffic_light__ConstPool__TABLE_h33f03cf1_0;

VL_ATTR_COLD void Vtraffic_light___024root___stl_sequent__TOP__0(Vtraffic_light___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___stl_sequent__TOP__0\n"); );
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.light = ((0U == (IData)(vlSelfRef.traffic_light_fsm__DOT__current_state))
                        ? 1U : ((1U == (IData)(vlSelfRef.traffic_light_fsm__DOT__current_state))
                                 ? 2U : ((2U == (IData)(vlSelfRef.traffic_light_fsm__DOT__current_state))
                                          ? 4U : 1U)));
    __Vtableidx1 = (((IData)(vlSelfRef.traffic_light_fsm__DOT__count_out) 
                     << 2U) | (IData)(vlSelfRef.traffic_light_fsm__DOT__current_state));
    vlSelfRef.traffic_light_fsm__DOT__next_state = 
        Vtraffic_light__ConstPool__TABLE_h33f03cf1_0
        [__Vtableidx1];
}

VL_ATTR_COLD void Vtraffic_light___024root___eval_triggers__stl(Vtraffic_light___024root* vlSelf);

VL_ATTR_COLD bool Vtraffic_light___024root___eval_phase__stl(Vtraffic_light___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___eval_phase__stl\n"); );
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtraffic_light___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtraffic_light___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtraffic_light___024root___dump_triggers__act(Vtraffic_light___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___dump_triggers__act\n"); );
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtraffic_light___024root___dump_triggers__nba(Vtraffic_light___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___dump_triggers__nba\n"); );
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtraffic_light___024root____Vm_traceActivitySetAll(Vtraffic_light___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root____Vm_traceActivitySetAll\n"); );
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vtraffic_light___024root___ctor_var_reset(Vtraffic_light___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___ctor_var_reset\n"); );
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->light = VL_RAND_RESET_I(3);
    vlSelf->traffic_light_fsm__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->traffic_light_fsm__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->traffic_light_fsm__DOT__count_out = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
