#ifndef _STACK_POINTER_H
#define _STACK_POINTER_H
/*
 * The stack is used to store temporary data, local variables and
 * return addresses.
 */

/*
 * Stack pointer instructions:
 *
 * PUSH
 * CALL
 * ICALL
 * RCALL
 * POP
 * RET
 * RETI
 *
 */

/*
 * Stack Pointer Register High byte:
 * When using the I/O specific commands IN and OUT,
 * the I/O addresses 0x00 - 0x3F must be used.
 * When addressing I/O Registers as data space using LD and
 * ST instructions, 0x20 must be added to these offset addresses.
 */
#include "common.h"

#define SPH_OFFSET 0x5Eu
#define SPH_MASK   0x0300u
//When addressing I/O Registers as data space the offset address is 0x3E

#define SPL_OFFSET 0x5Du
#define SPL_MASK   0x00FFu
//When addressing I/O Registers as data space the offset address is 0x3D

static uint16_t SP;
// TODO move SP to I/O space

#endif /* _STACK_POINTER_H */
