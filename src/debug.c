//
// Created by Stefan on 10/5/2022.
//
#include "../include/debug.h"
#include "stdio.h"
void p_gprs(){
    for (int i = 0; i < NGPR; ++i) {
        if(i%4 == 0 && i){
            printf("\n");
        }
        printf("$%s = %d ",gpr_name[i],gprs[i]);
    }
}

void p_vmem(addr_t vaddr,uint_32 size){
    for (int i = vaddr; i < size; ++i) {
        if(i && !(i%8) )
            printf("\n");
        printf("%x ", r_vmem(i));
    }
    printf("\n");
}
