cmd_/home/holy/ysyx-workbench/nemu/build/obj-riscv32-nemu-interpreter/src/isa/riscv32/inst.o := unused

source_/home/holy/ysyx-workbench/nemu/build/obj-riscv32-nemu-interpreter/src/isa/riscv32/inst.o := src/isa/riscv32/inst.c

deps_/home/holy/ysyx-workbench/nemu/build/obj-riscv32-nemu-interpreter/src/isa/riscv32/inst.o := \
  src/isa/riscv32/local-include/reg.h \
    $(wildcard include/config/rt/check.h) \
    $(wildcard include/config/rve.h) \
  /home/holy/ysyx-workbench/nemu/include/common.h \
    $(wildcard include/config/target/am.h) \
    $(wildcard include/config/mbase.h) \
    $(wildcard include/config/msize.h) \
    $(wildcard include/config/isa64.h) \
  /home/holy/ysyx-workbench/nemu/include/macro.h \
  /home/holy/ysyx-workbench/nemu/include/debug.h \
  /home/holy/ysyx-workbench/nemu/include/utils.h \
    $(wildcard include/config/target/native/elf.h) \
  /home/holy/ysyx-workbench/nemu/include/cpu/cpu.h \
  /home/holy/ysyx-workbench/nemu/include/cpu/ifetch.h \
  /home/holy/ysyx-workbench/nemu/include/memory/vaddr.h \
  /home/holy/ysyx-workbench/nemu/include/cpu/decode.h \
    $(wildcard include/config/itrace.h) \
  /home/holy/ysyx-workbench/nemu/include/isa.h \
  /home/holy/ysyx-workbench/nemu/src/isa/riscv32/include/isa-def.h \
    $(wildcard include/config/rv64.h) \

/home/holy/ysyx-workbench/nemu/build/obj-riscv32-nemu-interpreter/src/isa/riscv32/inst.o: $(deps_/home/holy/ysyx-workbench/nemu/build/obj-riscv32-nemu-interpreter/src/isa/riscv32/inst.o)

$(deps_/home/holy/ysyx-workbench/nemu/build/obj-riscv32-nemu-interpreter/src/isa/riscv32/inst.o):
