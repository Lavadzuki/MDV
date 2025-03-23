// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtraffic_light__Syms.h"


void Vtraffic_light___024root__trace_chg_0_sub_0(Vtraffic_light___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtraffic_light___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root__trace_chg_0\n"); );
    // Init
    Vtraffic_light___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtraffic_light___024root*>(voidSelf);
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtraffic_light___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtraffic_light___024root__trace_chg_0_sub_0(Vtraffic_light___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root__trace_chg_0_sub_0\n"); );
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.traffic_light_fsm__DOT__current_state),2);
        bufp->chgCData(oldp+1,(vlSelfRef.traffic_light_fsm__DOT__next_state),2);
        bufp->chgCData(oldp+2,(vlSelfRef.traffic_light_fsm__DOT__count_out),4);
        bufp->chgBit(oldp+3,(((IData)(vlSelfRef.traffic_light_fsm__DOT__current_state) 
                              != (IData)(vlSelfRef.traffic_light_fsm__DOT__next_state))));
    }
    bufp->chgBit(oldp+4,(vlSelfRef.clk));
    bufp->chgBit(oldp+5,(vlSelfRef.reset));
    bufp->chgCData(oldp+6,(vlSelfRef.light),3);
}

void Vtraffic_light___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root__trace_cleanup\n"); );
    // Init
    Vtraffic_light___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtraffic_light___024root*>(voidSelf);
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
