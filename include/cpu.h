//
// Created by Stefan on 10/5/2022.
//

#ifndef TEMU_CPU_H
#define TEMU_CPU_H
#include "type.h"
#include "alu.h"
#include "instruction.h"
#include <stdio.h>
#define NGPR 32
#define DEFAULTENTRY 0
//init the register file
void init_cpu();
uint_32 gpr_r(int_32 pos);
void gpr_w(int_32 pos,uint_32 value);
void cpu_exec(uint_32 step);
extern void decode_exe(inst_t inst);
#endif //TEMU_CPU_H
