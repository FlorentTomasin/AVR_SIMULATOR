#ifndef _STATUS_REGISTER_H
#define _STATUS_REGISTER_H
/*
 * SREG Status_register mask and shift:
 *
 * C: Carry Flag
 * Z: Zero Flag
 * N: Negative Flag
 * V: Two’s complement overflow indicator
 * S: N XOR V, For signed tests
 * H: Half Carry Flag
 * T: Transfer bit used by BLD and BST instructions
 * I: Global Interrupt Enable/Disable Flag
 */

/* When addressing I/O Registers as data space using LD and ST
 * instructions, the provided offset must be used.
 * When using the I/O specific commands IN and OUT,
 * the offset is reduced by 0x20, resulting in an
 * I/O address offset within 0x00 - 0x3F.*/
#include "common.h"

extern uint8_t SREG;

void update_S(void);

#endif /* _STATUS_REGISTER_H */
