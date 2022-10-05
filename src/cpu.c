//
// Created by Stefan on 10/5/2022.
//
#include "../include/cpu.h"
#include "../include/errhdr.h"
uint_32 gprs[NGPR];
uint_32 pc;
uint_32 satp;
char *gpr_name[NGPR] = {
        "x0","ra","sp","gp",
        "tp","t0","t1","t2",
        "s0","s1","a0","a1",
        "a2","a3","a4","a5",
        "a6","a7","s2","s3",
        "s4","s5","s6","s7",
        "s8","s9","s10","s11",
        "t3","t4","t5","t6"
};
uint_32 init_cpu(){
    printf("init cpu\n");
    gprs[0] = 0;
}
uint_32 gpr_r(int_32 pos){
    if(pos>=NGPR || pos < 0)
        panic("error in reading reg file");
    return gprs[pos];
}

void gpr_w(int_32 pos,uint_32 val){
    if (!pos)
        return;
    if(pos>=NGPR || pos < 0)
        panic("error in writing reg file");
    gprs[pos] = val;
}