// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtraffic_light.h for the primary calling header

#include "Vtraffic_light__pch.h"
#include "Vtraffic_light__Syms.h"
#include "Vtraffic_light___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtraffic_light___024root___dump_triggers__stl(Vtraffic_light___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtraffic_light___024root___eval_triggers__stl(Vtraffic_light___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___eval_triggers__stl\n"); );
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtraffic_light___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
