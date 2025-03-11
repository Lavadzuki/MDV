// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_arithmetic.h for the primary calling header

#include "Valu_arithmetic__pch.h"
#include "Valu_arithmetic__Syms.h"
#include "Valu_arithmetic___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_arithmetic___024root___dump_triggers__ico(Valu_arithmetic___024root* vlSelf);
#endif  // VL_DEBUG

void Valu_arithmetic___024root___eval_triggers__ico(Valu_arithmetic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_arithmetic___024root___eval_triggers__ico\n"); );
    Valu_arithmetic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu_arithmetic___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_arithmetic___024root___dump_triggers__act(Valu_arithmetic___024root* vlSelf);
#endif  // VL_DEBUG

void Valu_arithmetic___024root___eval_triggers__act(Valu_arithmetic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_arithmetic___024root___eval_triggers__act\n"); );
    Valu_arithmetic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu_arithmetic___024root___dump_triggers__act(vlSelf);
    }
#endif
}
