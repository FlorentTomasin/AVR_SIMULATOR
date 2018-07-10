#ifndef _ALU_H
#define _ALU_H
/*
 * ALU pipeline
 *
 * instruction fecth
 * instruction execute
 * write back
 *
 * needed blocks:
 *     - ADD
 *     - SUB
 *     - AND
 *     - OR
 *     - XOR
 *     - MUL
 *     - SHIFT R L
 *     - JUMP
 *     - CALL
 *     - COMPARE
 *     - BRANCHS
 *     - SET
 *     - CLEAR
 *     - ROTATE
 *     - SWAP
 *     - LOAD
 *     - STORE
 */
#include "common.h"

void alu(uint8_t instruction, uint8_t regA, uint8_t regB);

#endif /* _ALU_H */
