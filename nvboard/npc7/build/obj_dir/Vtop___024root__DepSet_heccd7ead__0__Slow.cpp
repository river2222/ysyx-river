// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__top__DOT__en_clk_sync = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_h8be94571__0;
    // Body
    vlSelf->count = 0U;
    vlSelf->top__DOT__en_clk_sync = 0U;
    __Vtemp_h8be94571__0[0U] = 0x2e747874U;
    __Vtemp_h8be94571__0[1U] = 0x6d656d31U;
    __Vtemp_h8be94571__0[2U] = 0x7063372fU;
    __Vtemp_h8be94571__0[3U] = 0x6c792f6eU;
    __Vtemp_h8be94571__0[4U] = 0x652f686fU;
    __Vtemp_h8be94571__0[5U] = 0x2f686f6dU;
    VL_READMEM_N(true, 8, 256, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_h8be94571__0)
                 ,  &(vlSelf->top__DOT__rom), 0, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/holy/ysyx-workbench/nvboard/npc7/vsrc/top.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*7:0*/, 16> Vtop__ConstPool__TABLE_h6fbd049d_0;
extern const VlUnpacked<CData/*7:0*/, 32> Vtop__ConstPool__TABLE_h6ebf11e2_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*4:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*4:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    __Vtableidx5 = (0xfU & (IData)(vlSelf->count));
    vlSelf->light5 = Vtop__ConstPool__TABLE_h6fbd049d_0
        [__Vtableidx5];
    __Vtableidx6 = (0xfU & ((IData)(vlSelf->count) 
                            >> 4U));
    vlSelf->light6 = Vtop__ConstPool__TABLE_h6fbd049d_0
        [__Vtableidx6];
    __Vtableidx3 = (((IData)(vlSelf->d0) << 1U) | (IData)(vlSelf->en));
    vlSelf->light1 = Vtop__ConstPool__TABLE_h6ebf11e2_0
        [__Vtableidx3];
    __Vtableidx4 = (((IData)(vlSelf->d1) << 1U) | (IData)(vlSelf->en));
    vlSelf->light2 = Vtop__ConstPool__TABLE_h6ebf11e2_0
        [__Vtableidx4];
    vlSelf->top__DOT__out1_clk_sync[2U] = vlSelf->top__DOT____Vcellout__my_keyboard__out1
        [2U];
    vlSelf->top__DOT__out1_clk_sync[1U] = vlSelf->top__DOT____Vcellout__my_keyboard__out1
        [1U];
    vlSelf->top__DOT__out1_clk_sync[0U] = vlSelf->top__DOT____Vcellout__my_keyboard__out1
        [0U];
    vlSelf->top__DOT__out0_clk_sync[2U] = vlSelf->top__DOT____Vcellout__my_keyboard__out0
        [2U];
    vlSelf->top__DOT__out0_clk_sync[1U] = vlSelf->top__DOT____Vcellout__my_keyboard__out0
        [1U];
    vlSelf->top__DOT__out0_clk_sync[0U] = vlSelf->top__DOT____Vcellout__my_keyboard__out0
        [0U];
    vlSelf->b1 = vlSelf->top__DOT__out1_clk_sync[0U];
    vlSelf->b0 = vlSelf->top__DOT__out0_clk_sync[0U];
    __Vtableidx2 = (((IData)(vlSelf->b1) << 1U) | (IData)(vlSelf->en));
    vlSelf->h1 = Vtop__ConstPool__TABLE_h6ebf11e2_0
        [__Vtableidx2];
    __Vtableidx1 = (((IData)(vlSelf->b0) << 1U) | (IData)(vlSelf->en));
    vlSelf->h0 = Vtop__ConstPool__TABLE_h6ebf11e2_0
        [__Vtableidx1];
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] top.en_clk_sync)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] top.en_clk_sync)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->ps2_clk = 0;
    vlSelf->ps2_data = 0;
    vlSelf->b0 = 0;
    vlSelf->b1 = 0;
    vlSelf->h0 = 0;
    vlSelf->h1 = 0;
    vlSelf->light6 = 0;
    vlSelf->light5 = 0;
    vlSelf->light4 = 0;
    vlSelf->light3 = 0;
    vlSelf->light2 = 0;
    vlSelf->light1 = 0;
    vlSelf->en = 0;
    vlSelf->count = 0;
    vlSelf->d1 = 0;
    vlSelf->d0 = 0;
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__rom[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__out0_clk_sync[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__out1_clk_sync[__Vi0] = 0;
    }
    vlSelf->top__DOT__en_clk_sync = 0;
    vlSelf->top__DOT__r1 = 0;
    vlSelf->top__DOT__r0 = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT____Vcellout__my_keyboard__out1[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT____Vcellout__my_keyboard__out0[__Vi0] = 0;
    }
    vlSelf->top__DOT__my_keyboard__DOT__buffer = 0;
    vlSelf->top__DOT__my_keyboard__DOT__count = 0;
    vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync = 0;
    vlSelf->top__DOT__my_keyboard__DOT____Vlvbound_h1a91ade8__0 = 0;
    vlSelf->__Vdly__top__DOT__en_clk_sync = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    vlSelf->__Vtrigrprev__TOP__top__DOT__en_clk_sync = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
