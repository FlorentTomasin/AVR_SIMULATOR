#ifndef _PROGRAM_COUNTER_H
#define _PROGRAM_COUNTER_H
/*
 * Program counter
 *
 *  14bits wide those to address te 14Kbyte of flash memory.
 *
 */
#include "common.h"

#define PC_HIGH 16383

extern uint16_t PC;

#endif /* _PROGRAM_COUNTER_H */
