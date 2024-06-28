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

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->lfsr_out = 1U;
        vlSelf->seg1 = 2U;
        vlSelf->seg0 = 0x9fU;
        vlSelf->top__DOT__prev_btn0 = 0U;
    } else {
        if ((1U & ((~ (IData)(vlSelf->top__DOT__prev_btn0)) 
                   & (IData)(vlSelf->btn)))) {
            vlSelf->lfsr_out = ((0x80U & (VL_REDXOR_8(
                                                      (0x1dU 
                                                       & (IData)(vlSelf->lfsr_out))) 
                                          << 7U)) | 
                                (0x7fU & ((IData)(vlSelf->lfsr_out) 
                                          >> 1U)));
            if ((0U == (0xfU & ((IData)(vlSelf->lfsr_out) 
                                >> 4U)))) {
                vlSelf->seg1 = 2U;
            }
            if ((1U == (0xfU & ((IData)(vlSelf->lfsr_out) 
                                >> 4U)))) {
                vlSelf->seg1 = 0x9fU;
            }
            if ((2U == (0xfU & ((IData)(vlSelf->lfsr_out) 
                                >> 4U)))) {
                vlSelf->seg1 = 0x25U;
            }
            if ((3U == (0xfU & ((IData)(vlSelf->lfsr_out) 
                                >> 4U)))) {
                vlSelf->seg1 = 0xdU;
            }
            if ((4U == (0xfU & ((IData)(vlSelf->lfsr_out) 
                                >> 4U)))) {
                vlSelf->seg1 = 0x99U;
            }
            if ((5U == (0xfU & ((IData)(vlSelf->lfsr_out) 
                                >> 4U)))) {
                vlSelf->seg1 = 0x49U;
            }
            if ((6U == (0xfU & ((IData)(vlSelf->lfsr_out) 
                                >> 4U)))) {
                vlSelf->seg1 = 0x41U;
            }
            if ((7U == (0xfU & ((IData)(vlSelf->lfsr_out) 
                                >> 4U)))) {
                vlSelf->seg1 = 0x1fU;
            }
            if ((8U == (0xfU & ((IData)(vlSelf->lfsr_out) 
                                >> 4U)))) {
                vlSelf->seg1 = 1U;
            }
            if ((9U == (0xfU & ((IData)(vlSelf->lfsr_out) 
                                >> 4U)))) {
                vlSelf->seg1 = 9U;
            }
            if ((0xaU == (0xfU & ((IData)(vlSelf->lfsr_out) 
                                  >> 4U)))) {
                vlSelf->seg1 = 0x11U;
            }
            if ((0xbU == (0xfU & ((IData)(vlSelf->lfsr_out) 
                                  >> 4U)))) {
                vlSelf->seg1 = 0xc1U;
            }
            if ((0xcU == (0xfU & ((IData)(vlSelf->lfsr_out) 
                                  >> 4U)))) {
                vlSelf->seg1 = 0x63U;
            }
            if ((0xdU == (0xfU & ((IData)(vlSelf->lfsr_out) 
                                  >> 4U)))) {
                vlSelf->seg1 = 0x85U;
            }
            if ((0xeU == (0xfU & ((IData)(vlSelf->lfsr_out) 
                                  >> 4U)))) {
                vlSelf->seg1 = 0x61U;
            }
            if ((0xfU == (0xfU & ((IData)(vlSelf->lfsr_out) 
                                  >> 4U)))) {
                vlSelf->seg1 = 0x71U;
            }
            if ((0U == (0xfU & (IData)(vlSelf->lfsr_out)))) {
                vlSelf->seg0 = 2U;
            }
            if ((1U == (0xfU & (IData)(vlSelf->lfsr_out)))) {
                vlSelf->seg0 = 0x9fU;
            }
            if ((2U == (0xfU & (IData)(vlSelf->lfsr_out)))) {
                vlSelf->seg0 = 0x25U;
            }
            if ((3U == (0xfU & (IData)(vlSelf->lfsr_out)))) {
                vlSelf->seg0 = 0xdU;
            }
            if ((4U == (0xfU & (IData)(vlSelf->lfsr_out)))) {
                vlSelf->seg0 = 0x99U;
            }
            if ((5U == (0xfU & (IData)(vlSelf->lfsr_out)))) {
                vlSelf->seg0 = 0x49U;
            }
            if ((6U == (0xfU & (IData)(vlSelf->lfsr_out)))) {
                vlSelf->seg0 = 0x41U;
            }
            if ((7U == (0xfU & (IData)(vlSelf->lfsr_out)))) {
                vlSelf->seg0 = 0x1fU;
            }
            if ((8U == (0xfU & (IData)(vlSelf->lfsr_out)))) {
                vlSelf->seg0 = 1U;
            }
            if ((9U == (0xfU & (IData)(vlSelf->lfsr_out)))) {
                vlSelf->seg0 = 9U;
            }
            if ((0xaU == (0xfU & (IData)(vlSelf->lfsr_out)))) {
                vlSelf->seg0 = 0x11U;
            }
            if ((0xbU == (0xfU & (IData)(vlSelf->lfsr_out)))) {
                vlSelf->seg0 = 0xc1U;
            }
            if ((0xcU == (0xfU & (IData)(vlSelf->lfsr_out)))) {
                vlSelf->seg0 = 0x63U;
            }
            if ((0xdU == (0xfU & (IData)(vlSelf->lfsr_out)))) {
                vlSelf->seg0 = 0x85U;
            }
            if ((0xeU == (0xfU & (IData)(vlSelf->lfsr_out)))) {
                vlSelf->seg0 = 0x61U;
            }
            if ((0xfU == (0xfU & (IData)(vlSelf->lfsr_out)))) {
                vlSelf->seg0 = 0x71U;
            }
        }
        vlSelf->top__DOT__prev_btn0 = (1U & (IData)(vlSelf->btn));
    }
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
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
    VlTriggerVec<1> __VpreTriggered;
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
                    VL_FATAL_MT("/home/holy/ysyx-workbench/nvboard/npc6/vsrc/top.v", 1, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/holy/ysyx-workbench/nvboard/npc6/vsrc/top.v", 1, "", "NBA region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->btn & 0xe0U))) {
        Verilated::overWidthError("btn");}
}
#endif  // VL_DEBUG
