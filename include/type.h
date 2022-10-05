//
// Created by Stefan on 10/5/2022.
//

#ifndef TEMU_TYPE_H
#define TEMU_TYPE_H
#define uint_64 unsigned long long
#define uint_8 char
#define uint_32 unsigned int
#define int_64 long long
#define int_32 int
#define addr_t uint_32
#define inst_t uint_32
#define alu_operand uint_32
#define alusel uint_32
#define reg_t uint_32
#include <stdbool.h>
#define ARRLEN(arr) (uint_32) sizeof(arr)/sizeof(arr[0])



#endif //TEMU_TYPE_H
