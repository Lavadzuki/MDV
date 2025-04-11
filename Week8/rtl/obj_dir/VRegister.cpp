// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRegister__pch.h"

//============================================================
// Constructors

VRegister::VRegister(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRegister__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , enable{vlSymsp->TOP.enable}
    , debug_load{vlSymsp->TOP.debug_load}
    , d_in{vlSymsp->TOP.d_in}
    , debug_init{vlSymsp->TOP.debug_init}
    , d_out{vlSymsp->TOP.d_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VRegister::VRegister(const char* _vcname__)
    : VRegister(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRegister::~VRegister() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VRegister___024root___eval_debug_assertions(VRegister___024root* vlSelf);
#endif  // VL_DEBUG
void VRegister___024root___eval_static(VRegister___024root* vlSelf);
void VRegister___024root___eval_initial(VRegister___024root* vlSelf);
void VRegister___024root___eval_settle(VRegister___024root* vlSelf);
void VRegister___024root___eval(VRegister___024root* vlSelf);

void VRegister::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRegister::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRegister___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VRegister___024root___eval_static(&(vlSymsp->TOP));
        VRegister___024root___eval_initial(&(vlSymsp->TOP));
        VRegister___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VRegister___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VRegister::eventsPending() { return false; }

uint64_t VRegister::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VRegister::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VRegister___024root___eval_final(VRegister___024root* vlSelf);

VL_ATTR_COLD void VRegister::final() {
    VRegister___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRegister::hierName() const { return vlSymsp->name(); }
const char* VRegister::modelName() const { return "VRegister"; }
unsigned VRegister::threads() const { return 1; }
void VRegister::prepareClone() const { contextp()->prepareClone(); }
void VRegister::atClone() const {
    contextp()->threadPoolpOnClone();
}
