#include "alu.h"

#define OPCODE_SIZE 20

void alu(uint8_t instr, uint8_t regA, uint8_t regB) {
	if (instr == 1) printf("ok\n");
}

typedef struct {
	uint32_t opcode;
	uint32_t funct_call;
} opcodes_calls_t;

// opcodes_calls_t * opcodes = [
// 	{ADD, add}
// ];
