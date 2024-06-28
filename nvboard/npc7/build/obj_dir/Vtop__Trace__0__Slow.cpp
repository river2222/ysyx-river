// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+17,"clk", false,-1);
    tracep->declBit(c+18,"rst", false,-1);
    tracep->declBit(c+19,"ps2_clk", false,-1);
    tracep->declBit(c+20,"ps2_data", false,-1);
    tracep->declBus(c+21,"b0", false,-1, 3,0);
    tracep->declBus(c+22,"b1", false,-1, 3,0);
    tracep->declBus(c+23,"h0", false,-1, 7,0);
    tracep->declBus(c+24,"h1", false,-1, 7,0);
    tracep->declBus(c+25,"light6", false,-1, 7,0);
    tracep->declBus(c+26,"light5", false,-1, 7,0);
    tracep->declBus(c+27,"light4", false,-1, 7,0);
    tracep->declBus(c+28,"light3", false,-1, 7,0);
    tracep->declBus(c+29,"light2", false,-1, 7,0);
    tracep->declBus(c+30,"light1", false,-1, 7,0);
    tracep->declBit(c+31,"en", false,-1);
    tracep->declBus(c+32,"count", false,-1, 7,0);
    tracep->declBus(c+33,"d1", false,-1, 3,0);
    tracep->declBus(c+34,"d0", false,-1, 3,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+17,"clk", false,-1);
    tracep->declBit(c+18,"rst", false,-1);
    tracep->declBit(c+19,"ps2_clk", false,-1);
    tracep->declBit(c+20,"ps2_data", false,-1);
    tracep->declBus(c+21,"b0", false,-1, 3,0);
    tracep->declBus(c+22,"b1", false,-1, 3,0);
    tracep->declBus(c+23,"h0", false,-1, 7,0);
    tracep->declBus(c+24,"h1", false,-1, 7,0);
    tracep->declBus(c+25,"light6", false,-1, 7,0);
    tracep->declBus(c+26,"light5", false,-1, 7,0);
    tracep->declBus(c+27,"light4", false,-1, 7,0);
    tracep->declBus(c+28,"light3", false,-1, 7,0);
    tracep->declBus(c+29,"light2", false,-1, 7,0);
    tracep->declBus(c+30,"light1", false,-1, 7,0);
    tracep->declBit(c+31,"en", false,-1);
    tracep->declBus(c+32,"count", false,-1, 7,0);
    tracep->declBus(c+33,"d1", false,-1, 3,0);
    tracep->declBus(c+34,"d0", false,-1, 3,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+1+i*1,"out0_clk_sync", true,(i+0), 3,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+4+i*1,"out1_clk_sync", true,(i+0), 3,0);
    }
    tracep->declBus(c+35,"en_clk_sync", false,-1, 1,0);
    tracep->declBus(c+39,"r1", false,-1, 3,0);
    tracep->declBus(c+40,"r0", false,-1, 3,0);
    tracep->pushNamePrefix("my_keyboard ");
    tracep->declBit(c+17,"clk", false,-1);
    tracep->declBit(c+36,"resetn", false,-1);
    tracep->declBit(c+19,"ps2_clk", false,-1);
    tracep->declBit(c+20,"ps2_data", false,-1);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+7+i*1,"out0", true,(i+0), 3,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+10+i*1,"out1", true,(i+0), 3,0);
    }
    tracep->declBus(c+13,"buffer", false,-1, 9,0);
    tracep->declBus(c+14,"count", false,-1, 3,0);
    tracep->declBus(c+15,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+16,"sampling", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg0 ");
    tracep->declBus(c+21,"b", false,-1, 3,0);
    tracep->declBit(c+31,"en", false,-1);
    tracep->declBus(c+23,"h", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg1 ");
    tracep->declBus(c+22,"b", false,-1, 3,0);
    tracep->declBit(c+31,"en", false,-1);
    tracep->declBus(c+24,"h", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg2 ");
    tracep->declBus(c+34,"b", false,-1, 3,0);
    tracep->declBit(c+31,"en", false,-1);
    tracep->declBus(c+30,"h", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg3 ");
    tracep->declBus(c+33,"b", false,-1, 3,0);
    tracep->declBit(c+31,"en", false,-1);
    tracep->declBus(c+29,"h", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg6 ");
    tracep->declBus(c+37,"b", false,-1, 3,0);
    tracep->declBit(c+41,"en", false,-1);
    tracep->declBus(c+26,"h", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg7 ");
    tracep->declBus(c+38,"b", false,-1, 3,0);
    tracep->declBit(c+41,"en", false,-1);
    tracep->declBus(c+25,"h", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__out0_clk_sync[0]),4);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__out0_clk_sync[1]),4);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__out0_clk_sync[2]),4);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__out1_clk_sync[0]),4);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__out1_clk_sync[1]),4);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__out1_clk_sync[2]),4);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT____Vcellout__my_keyboard__out0[0]),4);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT____Vcellout__my_keyboard__out0[1]),4);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT____Vcellout__my_keyboard__out0[2]),4);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT____Vcellout__my_keyboard__out1[0]),4);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT____Vcellout__my_keyboard__out1[1]),4);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT____Vcellout__my_keyboard__out1[2]),4);
    bufp->fullSData(oldp+13,(vlSelf->top__DOT__my_keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__my_keyboard__DOT__count),4);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+16,((IData)((4U == (6U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync))))));
    bufp->fullBit(oldp+17,(vlSelf->clk));
    bufp->fullBit(oldp+18,(vlSelf->rst));
    bufp->fullBit(oldp+19,(vlSelf->ps2_clk));
    bufp->fullBit(oldp+20,(vlSelf->ps2_data));
    bufp->fullCData(oldp+21,(vlSelf->b0),4);
    bufp->fullCData(oldp+22,(vlSelf->b1),4);
    bufp->fullCData(oldp+23,(vlSelf->h0),8);
    bufp->fullCData(oldp+24,(vlSelf->h1),8);
    bufp->fullCData(oldp+25,(vlSelf->light6),8);
    bufp->fullCData(oldp+26,(vlSelf->light5),8);
    bufp->fullCData(oldp+27,(vlSelf->light4),8);
    bufp->fullCData(oldp+28,(vlSelf->light3),8);
    bufp->fullCData(oldp+29,(vlSelf->light2),8);
    bufp->fullCData(oldp+30,(vlSelf->light1),8);
    bufp->fullBit(oldp+31,(vlSelf->en));
    bufp->fullCData(oldp+32,(vlSelf->count),8);
    bufp->fullCData(oldp+33,(vlSelf->d1),4);
    bufp->fullCData(oldp+34,(vlSelf->d0),4);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__en_clk_sync),2);
    bufp->fullBit(oldp+36,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->fullCData(oldp+37,((0xfU & (IData)(vlSelf->count))),4);
    bufp->fullCData(oldp+38,((0xfU & ((IData)(vlSelf->count) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+39,(vlSelf->top__DOT__r1),4);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__r0),4);
    bufp->fullBit(oldp+41,(1U));
}
