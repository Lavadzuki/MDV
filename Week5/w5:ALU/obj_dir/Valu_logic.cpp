// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Valu_logic__pch.h"

//============================================================
// Constructors

Valu_logic::Valu_logic(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Valu_logic__Syms(contextp(), _vcname__, this)}
    , select{vlSymsp->TOP.select}
    , in_a{vlSymsp->TOP.in_a}
    , in_b{vlSymsp->TOP.in_b}
    , logic_out{vlSymsp->TOP.logic_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Valu_logic::Valu_logic(const char* _vcname__)
    : Valu_logic(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Valu_logic::~Valu_logic() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Valu_logic___024root___eval_debug_assertions(Valu_logic___024root* vlSelf);
#endif  // VL_DEBUG
void Valu_logic___024root___eval_static(Valu_logic___024root* vlSelf);
void Valu_logic___024root___eval_initial(Valu_logic___024root* vlSelf);
void Valu_logic___024root___eval_settle(Valu_logic___024root* vlSelf);
void Valu_logic___024root___eval(Valu_logic___024root* vlSelf);

void Valu_logic::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Valu_logic::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Valu_logic___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Valu_logic___024root___eval_static(&(vlSymsp->TOP));
        Valu_logic___024root___eval_initial(&(vlSymsp->TOP));
        Valu_logic___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Valu_logic___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Valu_logic::eventsPending() { return false; }

uint64_t Valu_logic::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Valu_logic::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Valu_logic___024root___eval_final(Valu_logic___024root* vlSelf);

VL_ATTR_COLD void Valu_logic::final() {
    Valu_logic___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Valu_logic::hierName() const { return vlSymsp->name(); }
const char* Valu_logic::modelName() const { return "Valu_logic"; }
unsigned Valu_logic::threads() const { return 1; }
void Valu_logic::prepareClone() const { contextp()->prepareClone(); }
void Valu_logic::atClone() const {
    contextp()->threadPoolpOnClone();
}
