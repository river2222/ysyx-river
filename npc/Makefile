SRC_DIR = /home/holy/ysyx-workbench/nvboard/example/build/auto_bind.cpp
all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self.r"

	include $(NVBOARD_HOME)/scripts/nvboard.mk

	verilator -Wall --trace -cc ./vsrc/top.v --exe ./csrc/main.cpp
	make -C obj_dir -f Vtop.mk Vtop ./nvboard.a -lsDL2 -lsDL2_image

include ../Makefile
