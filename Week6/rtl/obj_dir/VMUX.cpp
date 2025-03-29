// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMUX__pch.h"

//============================================================
// Constructors

VMUX::VMUX(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VMUX__Syms(contextp(), _vcname__, this)}
    , select{vlSymsp->TOP.select}
    , outMux{vlSymsp->TOP.outMux}
    , inMux{vlSymsp->TOP.inMux}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VMUX::VMUX(const char* _vcname__)
    : VMUX(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VMUX::~VMUX() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VMUX___024root___eval_debug_assertions(VMUX___024root* vlSelf);
#endif  // VL_DEBUG
void VMUX___024root___eval_static(VMUX___024root* vlSelf);
void VMUX___024root___eval_initial(VMUX___024root* vlSelf);
void VMUX___024root___eval_settle(VMUX___024root* vlSelf);
void VMUX___024root___eval(VMUX___024root* vlSelf);

void VMUX::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMUX::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMUX___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VMUX___024root___eval_static(&(vlSymsp->TOP));
        VMUX___024root___eval_initial(&(vlSymsp->TOP));
        VMUX___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VMUX___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VMUX::eventsPending() { return false; }

uint64_t VMUX::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VMUX::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VMUX___024root___eval_final(VMUX___024root* vlSelf);

VL_ATTR_COLD void VMUX::final() {
    VMUX___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VMUX::hierName() const { return vlSymsp->name(); }
const char* VMUX::modelName() const { return "VMUX"; }
unsigned VMUX::threads() const { return 1; }
void VMUX::prepareClone() const { contextp()->prepareClone(); }
void VMUX::atClone() const {
    contextp()->threadPoolpOnClone();
}
