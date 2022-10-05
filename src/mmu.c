//
// Created by Stefan on 10/5/2022.
//
#include "../include/mmu.h"
uint_32 addr_trans(addr_t vaddr){
    //identity mapping for now.
    return vaddr;
}