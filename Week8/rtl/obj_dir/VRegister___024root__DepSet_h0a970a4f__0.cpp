// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegister.h for the primary calling header

#include "VRegister__pch.h"
#include "VRegister__Syms.h"
#include "VRegister___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegister___024root___dump_triggers__act(VRegister___024root* vlSelf);
#endif  // VL_DEBUG

void VRegister___024root___eval_triggers__act(VRegister___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root___eval_triggers__act\n"); );
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRegister___024root___dump_triggers__act(vlSelf);
    }
#endif
}
