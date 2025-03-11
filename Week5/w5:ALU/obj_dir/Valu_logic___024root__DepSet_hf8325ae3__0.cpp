// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_logic.h for the primary calling header

#include "Valu_logic__pch.h"
#include "Valu_logic___024root.h"

void Valu_logic___024root___ico_sequent__TOP__0(Valu_logic___024root* vlSelf);

void Valu_logic___024root___eval_ico(Valu_logic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_logic___024root___eval_ico\n"); );
    Valu_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Valu_logic___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Valu_logic___024root___ico_sequent__TOP__0(Valu_logic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_logic___024root___ico_sequent__TOP__0\n"); );
    Valu_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.logic_out = (0xffffU & ((8U & (IData)(vlSelfRef.select))
                                       ? ((4U & (IData)(vlSelfRef.select))
                                           ? ((2U & (IData)(vlSelfRef.select))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.select))
                                                   ? (IData)(vlSelfRef.in_a)
                                                   : 
                                                  ((IData)(vlSelfRef.in_a) 
                                                   | (IData)(vlSelfRef.in_b)))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.select))
                                                   ? 
                                                  ((IData)(vlSelfRef.in_a) 
                                                   | (~ (IData)(vlSelfRef.in_b)))
                                                   : 0xffffU))
                                           : ((2U & (IData)(vlSelfRef.select))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.select))
                                                   ? 
                                                  ((IData)(vlSelfRef.in_a) 
                                                   & (IData)(vlSelfRef.in_b))
                                                   : (IData)(vlSelfRef.in_b))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.select))
                                                   ? 
                                                  (~ 
                                                   ((IData)(vlSelfRef.in_a) 
                                                    ^ (IData)(vlSelfRef.in_b)))
                                                   : 
                                                  ((~ (IData)(vlSelfRef.in_a)) 
                                                   & (IData)(vlSelfRef.in_b)))))
                                       : ((4U & (IData)(vlSelfRef.select))
                                           ? ((2U & (IData)(vlSelfRef.select))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.select))
                                                   ? 
                                                  ((IData)(vlSelfRef.in_a) 
                                                   & (~ (IData)(vlSelfRef.in_b)))
                                                   : 
                                                  ((IData)(vlSelfRef.in_a) 
                                                   ^ (IData)(vlSelfRef.in_b)))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.select))
                                                   ? 
                                                  (~ (IData)(vlSelfRef.in_b))
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelfRef.in_a) 
                                                    & (IData)(vlSelfRef.in_b)))))
                                           : ((2U & (IData)(vlSelfRef.select))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.select))
                                                   ? 0U
                                                   : 
                                                  ((~ (IData)(vlSelfRef.in_a)) 
                                                   & (IData)(vlSelfRef.in_b)))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.select))
                                                   ? 
                                                  (~ 
                                                   ((IData)(vlSelfRef.in_a) 
                                                    | (IData)(vlSelfRef.in_b)))
                                                   : 
                                                  (~ (IData)(vlSelfRef.in_a)))))));
}

void Valu_logic___024root___eval_triggers__ico(Valu_logic___024root* vlSelf);

bool Valu_logic___024root___eval_phase__ico(Valu_logic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_logic___024root___eval_phase__ico\n"); );
    Valu_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Valu_logic___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Valu_logic___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Valu_logic___024root___eval_act(Valu_logic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_logic___024root___eval_act\n"); );
    Valu_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Valu_logic___024root___eval_nba(Valu_logic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_logic___024root___eval_nba\n"); );
    Valu_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Valu_logic___024root___eval_triggers__act(Valu_logic___024root* vlSelf);

bool Valu_logic___024root___eval_phase__act(Valu_logic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_logic___024root___eval_phase__act\n"); );
    Valu_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Valu_logic___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Valu_logic___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Valu_logic___024root___eval_phase__nba(Valu_logic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_logic___024root___eval_phase__nba\n"); );
    Valu_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Valu_logic___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_logic___024root___dump_triggers__ico(Valu_logic___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_logic___024root___dump_triggers__nba(Valu_logic___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_logic___024root___dump_triggers__act(Valu_logic___024root* vlSelf);
#endif  // VL_DEBUG

void Valu_logic___024root___eval(Valu_logic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_logic___024root___eval\n"); );
    Valu_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Valu_logic___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("alu_logic.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Valu_logic___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Valu_logic___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("alu_logic.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Valu_logic___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("alu_logic.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Valu_logic___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Valu_logic___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Valu_logic___024root___eval_debug_assertions(Valu_logic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_logic___024root___eval_debug_assertions\n"); );
    Valu_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.select & 0xf0U)))) {
        Verilated::overWidthError("select");}
}
#endif  // VL_DEBUG
