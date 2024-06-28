#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <nvboard.h>
#include <Vtop.h>
#include "verilated.h"
#include "verilated_vcd_c.h"

VerilatedContext* contextp = new VerilatedContext;
VerilatedVcdC* tfp = new VerilatedVcdC;

Vtop* top = new Vtop;

void nvboard_bind_all_pins(Vtop* top);

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
	Verilated::traceEverOn(true);

  top->trace(tfp, 0);
  tfp->open("dump.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

static void single_cycle() {
  top->clk = 0; top->eval();
  top->clk = 1; top->eval();
}

static void reset(int n) {
  top->rst = 1;
  while (n -- > 0) single_cycle();
  top->rst = 0;
}

int main(int argc, char** argv) {
	Verilated::commandArgs(argc, argv);
	sim_init();
  nvboard_bind_all_pins(top);
  nvboard_init();

	reset(10);
	while
		(1){
		nvboard_update();
		single_cycle();

		}
	sim_exit();
	return 0;
}
