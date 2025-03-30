// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcontol_unit__pch.h"

//============================================================
// Constructors

Vcontol_unit::Vcontol_unit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcontol_unit__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , run{vlSymsp->TOP.run}
    , sel{vlSymsp->TOP.sel}
    , mode{vlSymsp->TOP.mode}
    , done{vlSymsp->TOP.done}
    , instruction{vlSymsp->TOP.instruction}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcontol_unit::Vcontol_unit(const char* _vcname__)
    : Vcontol_unit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcontol_unit::~Vcontol_unit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcontol_unit___024root___eval_debug_assertions(Vcontol_unit___024root* vlSelf);
#endif  // VL_DEBUG
void Vcontol_unit___024root___eval_static(Vcontol_unit___024root* vlSelf);
void Vcontol_unit___024root___eval_initial(Vcontol_unit___024root* vlSelf);
void Vcontol_unit___024root___eval_settle(Vcontol_unit___024root* vlSelf);
void Vcontol_unit___024root___eval(Vcontol_unit___024root* vlSelf);

void Vcontol_unit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcontol_unit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcontol_unit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcontol_unit___024root___eval_static(&(vlSymsp->TOP));
        Vcontol_unit___024root___eval_initial(&(vlSymsp->TOP));
        Vcontol_unit___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcontol_unit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcontol_unit::eventsPending() { return false; }

uint64_t Vcontol_unit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcontol_unit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcontol_unit___024root___eval_final(Vcontol_unit___024root* vlSelf);

VL_ATTR_COLD void Vcontol_unit::final() {
    Vcontol_unit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcontol_unit::hierName() const { return vlSymsp->name(); }
const char* Vcontol_unit::modelName() const { return "Vcontol_unit"; }
unsigned Vcontol_unit::threads() const { return 1; }
void Vcontol_unit::prepareClone() const { contextp()->prepareClone(); }
void Vcontol_unit::atClone() const {
    contextp()->threadPoolpOnClone();
}
