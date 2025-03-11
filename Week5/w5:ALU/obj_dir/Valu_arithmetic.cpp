// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Valu_arithmetic__pch.h"

//============================================================
// Constructors

Valu_arithmetic::Valu_arithmetic(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Valu_arithmetic__Syms(contextp(), _vcname__, this)}
    , select{vlSymsp->TOP.select}
    , carry_out{vlSymsp->TOP.carry_out}
    , compare{vlSymsp->TOP.compare}
    , in_a{vlSymsp->TOP.in_a}
    , in_b{vlSymsp->TOP.in_b}
    , arith_out{vlSymsp->TOP.arith_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Valu_arithmetic::Valu_arithmetic(const char* _vcname__)
    : Valu_arithmetic(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Valu_arithmetic::~Valu_arithmetic() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Valu_arithmetic___024root___eval_debug_assertions(Valu_arithmetic___024root* vlSelf);
#endif  // VL_DEBUG
void Valu_arithmetic___024root___eval_static(Valu_arithmetic___024root* vlSelf);
void Valu_arithmetic___024root___eval_initial(Valu_arithmetic___024root* vlSelf);
void Valu_arithmetic___024root___eval_settle(Valu_arithmetic___024root* vlSelf);
void Valu_arithmetic___024root___eval(Valu_arithmetic___024root* vlSelf);

void Valu_arithmetic::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Valu_arithmetic::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Valu_arithmetic___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Valu_arithmetic___024root___eval_static(&(vlSymsp->TOP));
        Valu_arithmetic___024root___eval_initial(&(vlSymsp->TOP));
        Valu_arithmetic___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Valu_arithmetic___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Valu_arithmetic::eventsPending() { return false; }

uint64_t Valu_arithmetic::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Valu_arithmetic::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Valu_arithmetic___024root___eval_final(Valu_arithmetic___024root* vlSelf);

VL_ATTR_COLD void Valu_arithmetic::final() {
    Valu_arithmetic___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Valu_arithmetic::hierName() const { return vlSymsp->name(); }
const char* Valu_arithmetic::modelName() const { return "Valu_arithmetic"; }
unsigned Valu_arithmetic::threads() const { return 1; }
void Valu_arithmetic::prepareClone() const { contextp()->prepareClone(); }
void Valu_arithmetic::atClone() const {
    contextp()->threadPoolpOnClone();
}
