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

int main(int argc, char** argv) {
	Verilated::commandArgs(argc, argv);
	sim_init();
  nvboard_bind_all_pins(top);
  nvboard_init();

	for (int time = 0; time < 100000000; time++){
	top->y=0b00;
	top->x0=0b00;
	step_and_dump_wave();
	nvboard_update();

	top->y=0b01;
	top->x1=0b01;
	step_and_dump_wave();
	nvboard_update();

	top->y=0b10;
	top->x2=0b10;
	step_and_dump_wave();
	nvboard_update();

	top->y=0b11;
	top->x3=0b11;
	step_and_dump_wave();
	nvboard_update();

	}


	
	sim_exit();
	return 0;
}
