// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_logic.h for the primary calling header

#include "Valu_logic__pch.h"
#include "Valu_logic__Syms.h"
#include "Valu_logic___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_logic___024root___dump_triggers__stl(Valu_logic___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Valu_logic___024root___eval_triggers__stl(Valu_logic___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_logic___024root___eval_triggers__stl\n"); );
    Valu_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu_logic___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
