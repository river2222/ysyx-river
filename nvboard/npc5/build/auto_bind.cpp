#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->B, 4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->A, 4, SW7, SW6, SW5, SW4);
	nvboard_bind_pin( &top->func_sel, 3, SW15, SW14, SW13);
	nvboard_bind_pin( &top->out_s, 3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->out_eq, 1, LD15);
	nvboard_bind_pin( &top->out_lt, 1, LD14);
	nvboard_bind_pin( &top->overflow, 1, LD13);
	nvboard_bind_pin( &top->carry, 1, LD12);
}
