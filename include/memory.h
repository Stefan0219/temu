//
// Created by Stefan on 10/5/2022.
//

#ifndef TEMU_MEMORY_H
#define TEMU_MEMORY_H
#include"type.h"
#define PMEMSZ 0x80000000
#define VMEMSZ 0x80000000
void init_mem();
void w_pmem(addr_t paddr,uint_8 value);
void w_vmem(addr_t vaddr,uint_8 value);
uint_8 r_pmem(addr_t paddr);
uint_8 r_vmem(addr_t vaddr);
#endif //TEMU_MEMORY_H
