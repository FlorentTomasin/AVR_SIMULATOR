#ifndef _COMMON_H
#define _COMMON_H
/*
 * Macro to read and write registers.
 */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DEBUG

#define REG_SIZE 8

#define READ_REGISTER(word, value) (((uint32_t)word >> value ## _SHIFT) & (value ## _MASK))
#define WRITE_REGISTER(word, index, value) (word = ((uint32_t)word & ~(1 << (index ## _SHIFT)) | (value << (index ## _SHIFT))))

#define READ_BIT(word, index) (((uint32_t)word >> index) & 1u)
#define WRITE_BIT(word, index, value) (word = ((uint32_t)word & ~(1 << (index)) | (value << (index))))

#define N_SHIFT  3u
#define V_SHIFT  4u
#define S_SHIFT  5u

void bit2str(char ** str, int n, int len);
void printb(int n, int len);

#endif /* _COMMON_H */
