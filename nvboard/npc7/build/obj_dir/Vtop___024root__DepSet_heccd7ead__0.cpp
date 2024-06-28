// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*7:0*/, 32> Vtop__ConstPool__TABLE_h6ebf11e2_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*4:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*4:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*2:0*/ __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync;
    __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync = 0;
    CData/*3:0*/ __Vdly__top__DOT__my_keyboard__DOT__count;
    __Vdly__top__DOT__my_keyboard__DOT__count = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT____Vcellout__my_keyboard__out0__v0;
    __Vdlyvval__top__DOT____Vcellout__my_keyboard__out0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT____Vcellout__my_keyboard__out0__v0;
    __Vdlyvset__top__DOT____Vcellout__my_keyboard__out0__v0 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT____Vcellout__my_keyboard__out1__v0;
    __Vdlyvval__top__DOT____Vcellout__my_keyboard__out1__v0 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT____Vcellout__my_keyboard__out0__v1;
    __Vdlyvval__top__DOT____Vcellout__my_keyboard__out0__v1 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT____Vcellout__my_keyboard__out0__v1;
    __Vdlyvset__top__DOT____Vcellout__my_keyboard__out0__v1 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT____Vcellout__my_keyboard__out1__v1;
    __Vdlyvval__top__DOT____Vcellout__my_keyboard__out1__v1 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT____Vcellout__my_keyboard__out0__v2;
    __Vdlyvval__top__DOT____Vcellout__my_keyboard__out0__v2 = 0;
    CData/*3:0*/ __Vdlyvval__top__DOT____Vcellout__my_keyboard__out1__v2;
    __Vdlyvval__top__DOT____Vcellout__my_keyboard__out1__v2 = 0;
    // Body
    __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync 
        = vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync;
    vlSelf->__Vdly__top__DOT__en_clk_sync = vlSelf->top__DOT__en_clk_sync;
    __Vdly__top__DOT__my_keyboard__DOT__count = vlSelf->top__DOT__my_keyboard__DOT__count;
    __Vdlyvset__top__DOT____Vcellout__my_keyboard__out0__v0 = 0U;
    __Vdlyvset__top__DOT____Vcellout__my_keyboard__out0__v1 = 0U;
    __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelf->ps2_clk));
    vlSelf->__Vdly__top__DOT__en_clk_sync = ((2U & (IData)(vlSelf->top__DOT__en_clk_sync)) 
                                             | (IData)(vlSelf->en));
    if (vlSelf->rst) {
        __Vdly__top__DOT__my_keyboard__DOT__count = 0U;
    } else if ((IData)((4U == (6U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync))))) {
        if ((0xaU == (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) {
            if (VL_UNLIKELY((((~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)) 
                              & (IData)(vlSelf->ps2_data)) 
                             & VL_REDXOR_32((0x1ffU 
                                             & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                                                >> 1U)))))) {
                __Vdlyvval__top__DOT____Vcellout__my_keyboard__out0__v0 
                    = vlSelf->top__DOT____Vcellout__my_keyboard__out0
                    [1U];
                __Vdlyvset__top__DOT____Vcellout__my_keyboard__out0__v0 = 1U;
                __Vdlyvval__top__DOT____Vcellout__my_keyboard__out1__v0 
                    = vlSelf->top__DOT____Vcellout__my_keyboard__out1
                    [1U];
                VL_WRITEF("receive %x\n",8,(0xffU & 
                                            ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                                             >> 1U)));
                __Vdlyvval__top__DOT____Vcellout__my_keyboard__out0__v1 
                    = vlSelf->top__DOT____Vcellout__my_keyboard__out0
                    [0U];
                __Vdlyvset__top__DOT____Vcellout__my_keyboard__out0__v1 = 1U;
                __Vdlyvval__top__DOT____Vcellout__my_keyboard__out1__v1 
                    = vlSelf->top__DOT____Vcellout__my_keyboard__out1
                    [0U];
                __Vdlyvval__top__DOT____Vcellout__my_keyboard__out0__v2 
                    = (0xfU & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                               >> 1U));
                __Vdlyvval__top__DOT____Vcellout__my_keyboard__out1__v2 
                    = (0xfU & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                               >> 5U));
            }
            __Vdly__top__DOT__my_keyboard__DOT__count = 0U;
        } else {
            vlSelf->top__DOT__my_keyboard__DOT____Vlvbound_h1a91ade8__0 
                = vlSelf->ps2_data;
            if (VL_LIKELY((9U >= (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)))) {
                vlSelf->top__DOT__my_keyboard__DOT__buffer 
                    = (((~ ((IData)(1U) << (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) 
                        & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)) 
                       | (0x3ffU & ((IData)(vlSelf->top__DOT__my_keyboard__DOT____Vlvbound_h1a91ade8__0) 
                                    << (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))));
            }
            __Vdly__top__DOT__my_keyboard__DOT__count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
        }
    }
    if ((1U & (~ ((((vlSelf->top__DOT__out1_clk_sync
                     [2U] == vlSelf->top__DOT__out1_clk_sync
                     [0U]) & (vlSelf->top__DOT__out0_clk_sync
                              [2U] == vlSelf->top__DOT__out0_clk_sync
                              [0U])) & (0xfU == vlSelf->top__DOT__out1_clk_sync
                                        [1U])) & (0U 
                                                  == 
                                                  vlSelf->top__DOT__out0_clk_sync
                                                  [1U]))))) {
        vlSelf->d0 = (0xfU & vlSelf->top__DOT__rom[
                      ((vlSelf->top__DOT__out1_clk_sync
                        [0U] << 4U) | vlSelf->top__DOT__out0_clk_sync
                       [0U])]);
        vlSelf->d1 = (0xfU & (vlSelf->top__DOT__rom
                              [((vlSelf->top__DOT__out1_clk_sync
                                 [0U] << 4U) | vlSelf->top__DOT__out0_clk_sync
                                [0U])] >> 4U));
    }
    vlSelf->top__DOT__my_keyboard__DOT__count = __Vdly__top__DOT__my_keyboard__DOT__count;
    vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync 
        = __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync;
    if (__Vdlyvset__top__DOT____Vcellout__my_keyboard__out0__v0) {
        vlSelf->top__DOT____Vcellout__my_keyboard__out1[2U] 
            = __Vdlyvval__top__DOT____Vcellout__my_keyboard__out1__v0;
        vlSelf->top__DOT____Vcellout__my_keyboard__out0[2U] 
            = __Vdlyvval__top__DOT____Vcellout__my_keyboard__out0__v0;
    }
    if (__Vdlyvset__top__DOT____Vcellout__my_keyboard__out0__v1) {
        vlSelf->top__DOT____Vcellout__my_keyboard__out1[1U] 
            = __Vdlyvval__top__DOT____Vcellout__my_keyboard__out1__v1;
        vlSelf->top__DOT____Vcellout__my_keyboard__out1[0U] 
            = __Vdlyvval__top__DOT____Vcellout__my_keyboard__out1__v2;
        vlSelf->top__DOT____Vcellout__my_keyboard__out0[1U] 
            = __Vdlyvval__top__DOT____Vcellout__my_keyboard__out0__v1;
        vlSelf->top__DOT____Vcellout__my_keyboard__out0[0U] 
            = __Vdlyvval__top__DOT____Vcellout__my_keyboard__out0__v2;
    }
    vlSelf->en = (1U & (~ ((((vlSelf->top__DOT__out1_clk_sync
                              [2U] == vlSelf->top__DOT__out1_clk_sync
                              [0U]) & (vlSelf->top__DOT__out0_clk_sync
                                       [2U] == vlSelf->top__DOT__out0_clk_sync
                                       [0U])) & (0xfU 
                                                 == 
                                                 vlSelf->top__DOT__out1_clk_sync
                                                 [1U])) 
                           & (0U == vlSelf->top__DOT__out0_clk_sync
                              [1U]))));
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
    __Vtableidx3 = (((IData)(vlSelf->d0) << 1U) | (IData)(vlSelf->en));
    vlSelf->light1 = Vtop__ConstPool__TABLE_h6ebf11e2_0
        [__Vtableidx3];
    __Vtableidx4 = (((IData)(vlSelf->d1) << 1U) | (IData)(vlSelf->en));
    vlSelf->light2 = Vtop__ConstPool__TABLE_h6ebf11e2_0
        [__Vtableidx4];
    vlSelf->b1 = vlSelf->top__DOT__out1_clk_sync[0U];
    vlSelf->b0 = vlSelf->top__DOT__out0_clk_sync[0U];
    __Vtableidx2 = (((IData)(vlSelf->b1) << 1U) | (IData)(vlSelf->en));
    vlSelf->h1 = Vtop__ConstPool__TABLE_h6ebf11e2_0
        [__Vtableidx2];
    __Vtableidx1 = (((IData)(vlSelf->b0) << 1U) | (IData)(vlSelf->en));
    vlSelf->h0 = Vtop__ConstPool__TABLE_h6ebf11e2_0
        [__Vtableidx1];
}

extern const VlUnpacked<CData/*7:0*/, 16> Vtop__ConstPool__TABLE_h6fbd049d_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelf->count = (0xffU & (((1U & ((IData)(vlSelf->top__DOT__en_clk_sync) 
                                      >> 1U)) != (1U 
                                                  & (IData)(vlSelf->top__DOT__en_clk_sync)))
                               ? ((IData)(1U) + (IData)(vlSelf->count))
                               : ((0xffU == (IData)(vlSelf->count))
                                   ? 0U : (IData)(vlSelf->count))));
    __Vtableidx5 = (0xfU & (IData)(vlSelf->count));
    vlSelf->light5 = Vtop__ConstPool__TABLE_h6fbd049d_0
        [__Vtableidx5];
    __Vtableidx6 = (0xfU & ((IData)(vlSelf->count) 
                            >> 4U));
    vlSelf->light6 = Vtop__ConstPool__TABLE_h6fbd049d_0
        [__Vtableidx6];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__en_clk_sync = vlSelf->__Vdly__top__DOT__en_clk_sync;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/holy/ysyx-workbench/nvboard/npc7/vsrc/top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/holy/ysyx-workbench/nvboard/npc7/vsrc/top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
}
#endif  // VL_DEBUG
