all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator --cc npc.v -Wno-fatal --exe sim_main.cpp && \
    cd obj_dir && make -f Vnpc.mk && \
    ./Vnpc

include ../Makefile
