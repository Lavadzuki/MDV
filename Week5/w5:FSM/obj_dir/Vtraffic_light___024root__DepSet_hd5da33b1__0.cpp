// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtraffic_light.h for the primary calling header

#include "Vtraffic_light__pch.h"
#include "Vtraffic_light___024root.h"

void Vtraffic_light___024root___eval_act(Vtraffic_light___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___eval_act\n"); );
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtraffic_light___024root___nba_sequent__TOP__0(Vtraffic_light___024root* vlSelf);

void Vtraffic_light___024root___eval_nba(Vtraffic_light___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___eval_nba\n"); );
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtraffic_light___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<CData/*1:0*/, 64> Vtraffic_light__ConstPool__TABLE_h33f03cf1_0;

VL_INLINE_OPT void Vtraffic_light___024root___nba_sequent__TOP__0(Vtraffic_light___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___nba_sequent__TOP__0\n"); );
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.traffic_light_fsm__DOT__count_out = (
                                                   ((IData)(vlSelfRef.reset) 
                                                    | ((IData)(vlSelfRef.traffic_light_fsm__DOT__current_state) 
                                                       != (IData)(vlSelfRef.traffic_light_fsm__DOT__next_state)))
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSelfRef.traffic_light_fsm__DOT__count_out))));
    vlSelfRef.traffic_light_fsm__DOT__current_state 
        = ((IData)(vlSelfRef.reset) ? 0U : (IData)(vlSelfRef.traffic_light_fsm__DOT__next_state));
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

void Vtraffic_light___024root___eval_triggers__act(Vtraffic_light___024root* vlSelf);

bool Vtraffic_light___024root___eval_phase__act(Vtraffic_light___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___eval_phase__act\n"); );
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtraffic_light___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtraffic_light___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtraffic_light___024root___eval_phase__nba(Vtraffic_light___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___eval_phase__nba\n"); );
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtraffic_light___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtraffic_light___024root___dump_triggers__nba(Vtraffic_light___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtraffic_light___024root___dump_triggers__act(Vtraffic_light___024root* vlSelf);
#endif  // VL_DEBUG

void Vtraffic_light___024root___eval(Vtraffic_light___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___eval\n"); );
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtraffic_light___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("traffic_light.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtraffic_light___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("traffic_light.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtraffic_light___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtraffic_light___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtraffic_light___024root___eval_debug_assertions(Vtraffic_light___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___eval_debug_assertions\n"); );
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
