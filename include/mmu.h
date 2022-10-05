//
// Created by Stefan on 10/5/2022.
//

#ifndef TEMU_MMU_H
#define TEMU_MMU_H
#include "type.h"
#define pagetable_t uint_64
#define PGTBLSZ 4096
uint_32 addr_trans(addr_t vaddr);
#endif //TEMU_MMU_H
