SRC_DIR = ~/verilator/test_our
all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator --cc --exe --build -j 0 -Wall ${SRC_DIR}/sim_main.cpp ${SRC_DIR}/our.v --trace && \
    cd obj_dir && \
    ./Vour

include ../Makefile
