//
// Created by Stefan on 10/5/2022.
//
#include "../include/alu.h"
#include "../include/errhdr.h"
uint_32 aluoperation(alu_operand lhs,alu_operand rhs,alusel sel){
    uint_32 result = 0;
    switch (sel) {
        case 0:
            result = lhs + rhs;
            break;
        default:
            panic("error in aluoperation\n");
    }
    return result;
}