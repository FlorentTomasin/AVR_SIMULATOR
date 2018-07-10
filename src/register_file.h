#ifndef _REGISTER_FILE_H
#define _REGISTER_FILE_H
/*
 * Fast access register file
 * Size: 32x8 bits
 * Single clock access time.
 *
 * 6 of the 32 register can used as a 16 bit indirect address register
 * in 2 clock access time (-Z, -Y, -X: lookup table for flash memory).
 *
 */
#include "common.h"

#define XL 0x1Au
#define XH 0x1Bu
#define YL 0x1Cu
#define YH 0x1Du
#define ZL 0x1Eu
#define ZH 0x1Fu

static uint8_t register_file[32];

#endif /* _REGISTER_FILE_H */
