// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontol_unit.h for the primary calling header

#include "Vcontol_unit__pch.h"
#include "Vcontol_unit__Syms.h"
#include "Vcontol_unit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontol_unit___024root___dump_triggers__act(Vcontol_unit___024root* vlSelf);
#endif  // VL_DEBUG

void Vcontol_unit___024root___eval_triggers__act(Vcontol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontol_unit___024root___eval_triggers__act\n"); );
    Vcontol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vcontol_unit___024root___dump_triggers__act(vlSelf);
    }
#endif
}
