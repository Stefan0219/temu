//
// Created by Stefan on 10/5/2022.
//
#include <malloc.h>
#include "../include/memory.h"
#include "../include/type.h"
#include "../include/errhdr.h"
#include "../include/mmu.h"
uint_8* PMEM;
void init_mem(){
    printf("init mem\n");
    PMEM = (uint_64 *)malloc(PMEMSZ * sizeof (uint_8));
    if(!PMEM)
        panic("init mem error");
}
//todo
void w_pmem(addr_t paddr,uint_8 value){
    if(paddr >= PMEMSZ)
        panic("error in w_pmem!\n");
    PMEM[paddr] = value;
}
void w_vmem(addr_t vaddr,uint_8 value){
    addr_t pa = addr_trans(vaddr);
    w_pmem(pa,value);
}
uint_8 r_vmem(addr_t vaddr){
    if(vaddr>=VMEMSZ)
        panic("error in r_vmem!\n");
    uint_32 pa = addr_trans(vaddr);
   return r_pmem(pa);
}
//todo
uint_8 r_pmem(addr_t paddr){
    if(paddr>=PMEMSZ)
        panic("error in r_vmem!");
    return PMEM[paddr];
}