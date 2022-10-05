//
// Created by Stefan on 10/5/2022.
//
#include"../include/errhdr.h"

void panic(char *msg){
    printf("%s\n",msg);
    assert(0);
}