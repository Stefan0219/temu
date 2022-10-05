//
// Created by Stefan on 10/5/2022.
//

#ifndef TEMU_INSTRUCTION_H
#define TEMU_INSTRUCTION_H
#include "type.h"
enum {TYPE_I,};
void decode_exe(inst_t inst);
uint_32 I_imm(inst_t inst);
uint_32 get_inst_type(inst_t inst);
uint_32 get_rd(inst_t inst);
uint_32 get_funct3(inst_t inst);
uint_32 get_rs1(inst_t inst);
typedef struct decoder {
    uint_32 funct7;
    uint_32 rs2;
    uint_32 rs1;
    uint_32 funct3;
    uint_32 rd;
    uint_32 inst_type;
} decoder_t;
decoder_t* fill_decoder(inst_t inst);
typedef void (*inst_hdr_t) (inst_t inst,decoder_t *decoder);
void I_hdr(inst_t inst,decoder_t *decoder);
inst_t inst_fetch(addr_t vaddr);
extern inst_t pc;
#endif //TEMU_INSTRUCTION_H
