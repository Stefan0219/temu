//
// Created by Stefan on 10/5/2022.
//
#include "include/cpu.h"
#include "include/memory.h"
#include "include/debug.h"
int main(){
    init_cpu();
    init_mem();
    w_vmem(0,0xa);
    w_vmem(0x5,0xf);
    w_vmem(0x6,0xd);
    p_vmem(0,20);
}
