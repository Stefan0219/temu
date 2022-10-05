//
// Created by Stefan on 10/5/2022.
//
#include "include/cpu.h"
#include "include/memory.h"
#include "include/debug.h"
int main(){
    init_cpu();
    init_mem();
    w_vmem(0,3);
    w_vmem(1,9);
    w_vmem(2,0);
    w_vmem(3,0);
    w_vmem(4,1);
    w_vmem(5,1);
    w_vmem(6,0);
    w_vmem(7,0);
   // p_vmem(0,8);
    cpu_exec(1);
    p_gprs();
}
