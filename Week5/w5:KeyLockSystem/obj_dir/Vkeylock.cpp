// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vkeylock__pch.h"

//============================================================
// Constructors

Vkeylock::Vkeylock(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vkeylock__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , number{vlSymsp->TOP.number}
    , locked{vlSymsp->TOP.locked}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vkeylock::Vkeylock(const char* _vcname__)
    : Vkeylock(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vkeylock::~Vkeylock() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vkeylock___024root___eval_debug_assertions(Vkeylock___024root* vlSelf);
#endif  // VL_DEBUG
void Vkeylock___024root___eval_static(Vkeylock___024root* vlSelf);
void Vkeylock___024root___eval_initial(Vkeylock___024root* vlSelf);
void Vkeylock___024root___eval_settle(Vkeylock___024root* vlSelf);
void Vkeylock___024root___eval(Vkeylock___024root* vlSelf);

void Vkeylock::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vkeylock::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vkeylock___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vkeylock___024root___eval_static(&(vlSymsp->TOP));
        Vkeylock___024root___eval_initial(&(vlSymsp->TOP));
        Vkeylock___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vkeylock___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vkeylock::eventsPending() { return false; }

uint64_t Vkeylock::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vkeylock::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vkeylock___024root___eval_final(Vkeylock___024root* vlSelf);

VL_ATTR_COLD void Vkeylock::final() {
    Vkeylock___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vkeylock::hierName() const { return vlSymsp->name(); }
const char* Vkeylock::modelName() const { return "Vkeylock"; }
unsigned Vkeylock::threads() const { return 1; }
void Vkeylock::prepareClone() const { contextp()->prepareClone(); }
void Vkeylock::atClone() const {
    contextp()->threadPoolpOnClone();
}
