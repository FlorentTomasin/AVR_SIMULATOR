#include "hex.h"

/*
 * parse_hex_format:
 *     Parse an intel HEX format file and extract the instructions.
 *
 * Inputs:
 *     fd: file descriptor of the HEX file.
 *     HEX_format: structure to fill with the file content.
 *
 * Output:
 *     Number of lines in the HEX file. If 0, the file is empty.
 */
HEX_format_t ** parse_hex_format(FILE* fd, int * fdlines, HEX_format_t ** HEX_format) {
    size_t len = 0;
    ssize_t read;
    char * buf = NULL;
    char header[HEX_HEADER_SIZE];
    uint16_t *body;

    int lines = 0;

    while((read = getline(&buf, &len, fd)) != -1) {
        lines++;
    }
    fseek(fd, 0, SEEK_SET);

    HEX_format = malloc(lines * sizeof(HEX_format_t *));
    for (int i = 0;  i < lines; i++) {
        HEX_format[i] = malloc(sizeof(HEX_format_t));
    }

    int line_index = 0;
    /* Reset fd pointer to the top ofthe HEX file */
    while((read = getline(&buf, &len, fd)) != -1) {
        memcpy(header, buf, HEX_HEADER_SIZE * sizeof(*buf));
        sscanf(header,
               "%c%02x%04x%02x",
               &HEX_format[line_index]->start_code,
               (unsigned int*)&HEX_format[line_index]->byte_count,
               (unsigned int*)&HEX_format[line_index]->address,
               (unsigned int*)&HEX_format[line_index]->record_type);

        HEX_format[line_index]->data = malloc(HEX_format[line_index]->byte_count
                                            * sizeof(HEX_format[line_index]->data));

        body = (uint16_t *)&buf[HEX_HEADER_SIZE];
        for (int i = 0; i < HEX_format[line_index]->byte_count; i++) {
            sscanf((char *)&body[i],
                   "%02x",
                   (unsigned int*)&HEX_format[line_index]->data[i]);
        }

        sscanf((char *)&body[HEX_format[line_index]->byte_count],
                "%02x",
                (unsigned int*)&HEX_format[line_index]->checksum);
        line_index++;
    }

    *fdlines = lines;

    return HEX_format;
}

/*
 * print_hex_format:
 *     Print the content of an HEX_format structure.
 *
 * Inputs:
 *     HEX_format: structure to fill with the file content.
 *     lines: number of lines to print.
 */
void print_hex_format(HEX_format_t ** HEX_format, int lines) {
    /* Compute checksum */
    uint8_t checksum;
    uint8_t * checkbuf;

    printf("start_code | byte_count | address | record_type | data\t | checksum | validation\n");
    printf("--------------------------------------------------------------------------------\n");
    for (int j = 0; j < lines; ++j) {
        checksum = 0;

        checksum += HEX_format[j]->byte_count +
                    ((HEX_format[j]->address & 0xFF00) >> 8) +
                    (HEX_format[j]->address & 0x00FF) +
                    HEX_format[j]->record_type;

        checkbuf = (uint8_t *)HEX_format[j]->data;
        for (int i = 0; i < (HEX_format[j]->byte_count * 2); ++i)
        {
            checksum += checkbuf[i];
        }
        checksum = ~checksum + 0x01;

        /* display HEX instructions */
        printf("    %c     |    %02d-byte |  0x%04X |    0x%02X     | ",
                HEX_format[j]->start_code,
                HEX_format[j]->byte_count,
                HEX_format[j]->address,
                HEX_format[j]->record_type);

        if (HEX_format[j]->byte_count == 0) {
            printf(" --- NO DATA --- ");
        }
        else {
            for (int i = 0; i < HEX_format[j]->byte_count; i++) {
                printf("%02X ", HEX_format[j]->data[i]);
            }
        }

        printf(" | 0x%02X | ", HEX_format[j]->checksum);
        printf("0x%02X\n", checksum);
    }
    printf("\n");
}
