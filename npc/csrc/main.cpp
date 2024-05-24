#define TOP_NAME Vtop
#include "Vtop.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "verilated.h"
#include <Vtop.h>
#include "verilated_vcd_c.h"
#include "nvboard/include/nvboard.h"


void nvboard_bind_all_pins(TOP_NAME* top);

int main(int argc, char** argv) {
    TOP_NAME dut; 
    nvboard_bind_all_pins(&dut);
    nvboard_init();

    Verilated::commandArgs(argc, argv);
    TOP_NAME* top = new TOP_NAME;


		for (int i = 0; i < 10; i++) {
        int a = rand() & 1;
        int b = rand() & 1;
        top->a = a;
        top->b = b;

        top->eval();
        printf("a = %d, b = %d, f = %d\n", a, b, top->f);
        assert(top->f == (a & b));

        nvboard_update();
    }

    delete top;

    nvboard_quit(); 
    exit(EXIT_SUCCESS);
}
