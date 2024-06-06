include /home/holy/ysyx-workbench/nvboard/scripts/nvboard.mk

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL")
	@echo "Write this Makefile by your self."
	verilator -Wall --trace -cc -I/home/holy/ysyx-workbench/nvboard/usr/include ./vsrc/top.v --exe ./csrc/main.cpp
	make -C obj_dir -f Vtop.mk Vtop ./nvboard.a -lSDL2 -lSDL2_image
