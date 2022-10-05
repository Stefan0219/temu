//
// Created by Stefan on 10/5/2022.
//

#ifndef TEMU_DEBUG_H
#define TEMU_DEBUG_H
#include "type.h"
#include "cpu.h"
#include "memory.h"
#include "errhdr.h"
extern uint_32 gprs[NGPR];
extern char* gpr_name[NGPR];
extern uint_64* PMEM;
void p_gprs();
void p_vmem(addr_t vaddr,uint_32 size);
#endif //TEMU_DEBUG_H
