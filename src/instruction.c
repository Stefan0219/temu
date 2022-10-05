//
// Created by Stefan on 10/5/2022.
//
#include "../include/instruction.h"
#include "../include/errhdr.h"
#include "../include/cpu.h"
#include <malloc.h>
inst_hdr_t hdrs[] = {
[TYPE_I] = I_hdr
};
void decode_exe(inst_t inst){
    decoder_t *decoder =(decoder_t*) malloc(sizeof(decoder_t)) ;
    decoder = fill_decoder(inst);
    hdrs[decoder->inst_type](inst,decoder);
}
uint_32 I_imm(inst_t inst){
    return (uint_32)inst>>20;
}
uint_32 get_inst_type(inst_t inst){
    uint_32 opcode = (inst<<25)>>25;
    uint_32 type = 0;
    switch (opcode) {
        case 0x13:
            type = TYPE_I;
            break;
        default:
            panic("error in get_inst_type!");
    }
    return type;
}
uint_32 get_rs1(inst_t inst){
    return (uint_32) (inst<<12) >> (12+15);
}

uint_32 get_funct3(inst_t inst){
    return (uint_32) (inst<<17) >> (17+12);
}
uint_32 get_rd(inst_t inst){
    return (uint_32) (inst<<20) >>(20+7);
}
decoder_t* fill_decoder(inst_t inst){
    decoder_t *decoder = (decoder_t*)malloc(sizeof(decoder_t));
    decoder->rs1 = get_rs1(inst);
    decoder->funct3 = get_funct3(inst);
    decoder->inst_type = get_inst_type(inst);
    decoder->rd = get_rd(inst);
    //todo
    return decoder;
}

void I_hdr(inst_t inst , decoder_t *decoder){
    pc += 4;
    uint_32 imm = I_imm(inst);
    reg_t rs1val= gpr_r((int_32)decoder->rs1);
    uint_32 aluresult = aluoperation(rs1val,imm,decoder->funct3);
    gpr_w((uint_32)decoder->rd,aluresult);
}

inst_t inst_fetch(inst_t inst){
    //todo
    return (inst_t)0x00110093;
}