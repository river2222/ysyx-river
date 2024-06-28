// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__out0_clk_sync[0]),4);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__out0_clk_sync[1]),4);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__out0_clk_sync[2]),4);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__out1_clk_sync[0]),4);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__out1_clk_sync[1]),4);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__out1_clk_sync[2]),4);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT____Vcellout__my_keyboard__out0[0]),4);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT____Vcellout__my_keyboard__out0[1]),4);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT____Vcellout__my_keyboard__out0[2]),4);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT____Vcellout__my_keyboard__out1[0]),4);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT____Vcellout__my_keyboard__out1[1]),4);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT____Vcellout__my_keyboard__out1[2]),4);
        bufp->chgSData(oldp+12,(vlSelf->top__DOT__my_keyboard__DOT__buffer),10);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__my_keyboard__DOT__count),4);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync),3);
        bufp->chgBit(oldp+15,((IData)((4U == (6U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync))))));
    }
    bufp->chgBit(oldp+16,(vlSelf->clk));
    bufp->chgBit(oldp+17,(vlSelf->rst));
    bufp->chgBit(oldp+18,(vlSelf->ps2_clk));
    bufp->chgBit(oldp+19,(vlSelf->ps2_data));
    bufp->chgCData(oldp+20,(vlSelf->b0),4);
    bufp->chgCData(oldp+21,(vlSelf->b1),4);
    bufp->chgCData(oldp+22,(vlSelf->h0),8);
    bufp->chgCData(oldp+23,(vlSelf->h1),8);
    bufp->chgCData(oldp+24,(vlSelf->light6),8);
    bufp->chgCData(oldp+25,(vlSelf->light5),8);
    bufp->chgCData(oldp+26,(vlSelf->light4),8);
    bufp->chgCData(oldp+27,(vlSelf->light3),8);
    bufp->chgCData(oldp+28,(vlSelf->light2),8);
    bufp->chgCData(oldp+29,(vlSelf->light1),8);
    bufp->chgBit(oldp+30,(vlSelf->en));
    bufp->chgCData(oldp+31,(vlSelf->count),8);
    bufp->chgCData(oldp+32,(vlSelf->d1),4);
    bufp->chgCData(oldp+33,(vlSelf->d0),4);
    bufp->chgCData(oldp+34,(vlSelf->top__DOT__en_clk_sync),2);
    bufp->chgBit(oldp+35,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->chgCData(oldp+36,((0xfU & (IData)(vlSelf->count))),4);
    bufp->chgCData(oldp+37,((0xfU & ((IData)(vlSelf->count) 
                                     >> 4U))),4);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
