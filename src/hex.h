#ifndef _HEX_H
#define _HEX_H

#include "common.h"

#define HEX_HEADER_SIZE 9

typedef struct __attribute__((__packed__)) {
    uint8_t  start_code;      // one character, an ASCII colon ':'
    uint8_t  byte_count;      // number of bytes in the data field
    uint16_t address;         // 16-bit beginning memory address offset of the data (big endian values)
    uint8_t  record_type;     // meaning of the data field
    uint8_t  *data;
    uint8_t  checksum;
} HEX_format_t;

HEX_format_t ** parse_hex_format(FILE* fd,
                                int * lines,
                                HEX_format_t ** HEX_format);

void print_hex_format(HEX_format_t ** HEX_format,
                      int lines);

#endif /* _HEX_H */
