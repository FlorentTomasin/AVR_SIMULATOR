#ifndef _FLASH_PROGRAM_MEMORY_H
#define _FLASH_PROGRAM_MEMORY_H
/*
 * On-chip in-system reprogrammable flash memory for program
 *
 * 32Kbytes.
 * Split in two sections for security:
 *     Boot loader
 *     Application
 */
#include "common.h"

#define FLASH_MEM_SIZE 16318

static uint16_t flash_memory[FLASH_MEM_SIZE];

#endif /* _FLASH_PROGRAM_MEMORY_H */
