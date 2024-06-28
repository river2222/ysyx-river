// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(ps2_clk,0,0);
    VL_IN8(ps2_data,0,0);
    VL_OUT8(b0,3,0);
    VL_OUT8(b1,3,0);
    VL_OUT8(h0,7,0);
    VL_OUT8(h1,7,0);
    VL_OUT8(light6,7,0);
    VL_OUT8(light5,7,0);
    VL_OUT8(light4,7,0);
    VL_OUT8(light3,7,0);
    VL_OUT8(light2,7,0);
    VL_OUT8(light1,7,0);
    VL_OUT8(en,0,0);
    VL_OUT8(count,7,0);
    VL_OUT8(d1,3,0);
    VL_OUT8(d0,3,0);
    CData/*1:0*/ top__DOT__en_clk_sync;
    CData/*3:0*/ top__DOT__r1;
    CData/*3:0*/ top__DOT__r0;
    CData/*3:0*/ top__DOT__my_keyboard__DOT__count;
    CData/*2:0*/ top__DOT__my_keyboard__DOT__ps2_clk_sync;
    CData/*0:0*/ top__DOT__my_keyboard__DOT____Vlvbound_h1a91ade8__0;
    CData/*1:0*/ __Vdly__top__DOT__en_clk_sync;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*1:0*/ __Vtrigrprev__TOP__top__DOT__en_clk_sync;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ top__DOT__my_keyboard__DOT__buffer;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 256> top__DOT__rom;
    VlUnpacked<CData/*3:0*/, 3> top__DOT__out0_clk_sync;
    VlUnpacked<CData/*3:0*/, 3> top__DOT__out1_clk_sync;
    VlUnpacked<CData/*3:0*/, 3> top__DOT____Vcellout__my_keyboard__out1;
    VlUnpacked<CData/*3:0*/, 3> top__DOT____Vcellout__my_keyboard__out0;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
