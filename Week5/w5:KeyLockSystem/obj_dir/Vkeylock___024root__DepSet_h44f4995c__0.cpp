// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkeylock.h for the primary calling header

#include "Vkeylock__pch.h"
#include "Vkeylock__Syms.h"
#include "Vkeylock___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vkeylock___024root___dump_triggers__ico(Vkeylock___024root* vlSelf);
#endif  // VL_DEBUG

void Vkeylock___024root___eval_triggers__ico(Vkeylock___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeylock___024root___eval_triggers__ico\n"); );
    Vkeylock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vkeylock___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vkeylock___024root___dump_triggers__act(Vkeylock___024root* vlSelf);
#endif  // VL_DEBUG

void Vkeylock___024root___eval_triggers__act(Vkeylock___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeylock___024root___eval_triggers__act\n"); );
    Vkeylock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.reset) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vkeylock___024root___dump_triggers__act(vlSelf);
    }
#endif
}
