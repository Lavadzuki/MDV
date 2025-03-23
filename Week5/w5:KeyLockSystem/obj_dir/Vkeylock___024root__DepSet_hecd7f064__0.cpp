// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkeylock.h for the primary calling header

#include "Vkeylock__pch.h"
#include "Vkeylock___024root.h"

void Vkeylock___024root___ico_sequent__TOP__0(Vkeylock___024root* vlSelf);

void Vkeylock___024root___eval_ico(Vkeylock___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeylock___024root___eval_ico\n"); );
    Vkeylock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vkeylock___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*2:0*/, 64> Vkeylock__ConstPool__TABLE_h2ca42857_0;

VL_INLINE_OPT void Vkeylock___024root___ico_sequent__TOP__0(Vkeylock___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeylock___024root___ico_sequent__TOP__0\n"); );
    Vkeylock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.number) << 3U) 
                    | (IData)(vlSelfRef.keylock__DOT__current_state));
    vlSelfRef.keylock__DOT__next_state = Vkeylock__ConstPool__TABLE_h2ca42857_0
        [__Vtableidx1];
}

void Vkeylock___024root___eval_triggers__ico(Vkeylock___024root* vlSelf);

bool Vkeylock___024root___eval_phase__ico(Vkeylock___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeylock___024root___eval_phase__ico\n"); );
    Vkeylock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vkeylock___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vkeylock___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vkeylock___024root___eval_act(Vkeylock___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeylock___024root___eval_act\n"); );
    Vkeylock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vkeylock___024root___nba_sequent__TOP__0(Vkeylock___024root* vlSelf);

void Vkeylock___024root___eval_nba(Vkeylock___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeylock___024root___eval_nba\n"); );
    Vkeylock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vkeylock___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vkeylock___024root___nba_sequent__TOP__0(Vkeylock___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeylock___024root___nba_sequent__TOP__0\n"); );
    Vkeylock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.keylock__DOT__current_state = ((IData)(vlSelfRef.reset)
                                              ? 0U : (IData)(vlSelfRef.keylock__DOT__next_state));
    vlSelfRef.locked = (6U != (IData)(vlSelfRef.keylock__DOT__current_state));
    __Vtableidx1 = (((IData)(vlSelfRef.number) << 3U) 
                    | (IData)(vlSelfRef.keylock__DOT__current_state));
    vlSelfRef.keylock__DOT__next_state = Vkeylock__ConstPool__TABLE_h2ca42857_0
        [__Vtableidx1];
}

void Vkeylock___024root___eval_triggers__act(Vkeylock___024root* vlSelf);

bool Vkeylock___024root___eval_phase__act(Vkeylock___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeylock___024root___eval_phase__act\n"); );
    Vkeylock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vkeylock___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vkeylock___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vkeylock___024root___eval_phase__nba(Vkeylock___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeylock___024root___eval_phase__nba\n"); );
    Vkeylock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vkeylock___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vkeylock___024root___dump_triggers__ico(Vkeylock___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vkeylock___024root___dump_triggers__nba(Vkeylock___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vkeylock___024root___dump_triggers__act(Vkeylock___024root* vlSelf);
#endif  // VL_DEBUG

void Vkeylock___024root___eval(Vkeylock___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeylock___024root___eval\n"); );
    Vkeylock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vkeylock___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("keylock.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vkeylock___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vkeylock___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("keylock.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vkeylock___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("keylock.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vkeylock___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vkeylock___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vkeylock___024root___eval_debug_assertions(Vkeylock___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeylock___024root___eval_debug_assertions\n"); );
    Vkeylock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY(((vlSelfRef.number & 0xf8U)))) {
        Verilated::overWidthError("number");}
}
#endif  // VL_DEBUG
