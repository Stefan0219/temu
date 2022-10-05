//
// Created by Stefan on 10/5/2022.
//

#ifndef TEMU_CPU_H
#define TEMU_CPU_H
#include "type.h"
#include <stdio.h>
#define NGPR 32

//init the register file
uint_32 init_cpu();
uint_32 gpr_r(int_32 pos);
void gpr_w(int_32 pos,uint_32 value);
#endif //TEMU_CPU_H
