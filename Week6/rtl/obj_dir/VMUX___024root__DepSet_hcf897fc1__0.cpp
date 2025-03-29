// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMUX.h for the primary calling header

#include "VMUX__pch.h"
#include "VMUX__Syms.h"
#include "VMUX___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VMUX___024root___dump_triggers__ico(VMUX___024root* vlSelf);
#endif  // VL_DEBUG

void VMUX___024root___eval_triggers__ico(VMUX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX___024root___eval_triggers__ico\n"); );
    VMUX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMUX___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMUX___024root___dump_triggers__act(VMUX___024root* vlSelf);
#endif  // VL_DEBUG

void VMUX___024root___eval_triggers__act(VMUX___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMUX___024root___eval_triggers__act\n"); );
    VMUX__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMUX___024root___dump_triggers__act(vlSelf);
    }
#endif
}
