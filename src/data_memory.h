#ifndef _DATA_MEMORY_H
#define _DATA_MEMORY_H
/*
 * SRAM data memory
 *
 * Addressing modes (5):
 *     Direct
 *     Indirect with Displacement
 *     Indirect
 *     Indirect with Pre-decrement
 *     Indirect with Post-increment
 *
 * Organisation:
 * IO                               Load/Store
 *              +--------------+
 *              | 32 registers | 0-0x001F
 *              +--------------+
 * 0-0x001f     | 64 IO regs   | 0x0020 - 0x005F
 *              +--------------+
 *              |160 ExtIO regs| 0x0060 - 0x00FF
 *              +--------------+
 *              | Internal SRAM| 0x0100
 *              |    2048 x 8  |
 *              +--------------+ 0x08FF
 *
 */
#include "common.h"

#define REG_HIGH 0x08FFu

#define IO_REG_OFFSET 0x0020u
#define EXT_IO_REG_OFFSET 0x0060u
#define INT_SRAM_REG_OFFSET 0x0100u

static uint8_t sram_data_memory[REG_HIGH];

#endif /* _DATA_MEMORY_H */
