#include "hex.h"
#include "opcodes.h"

int main(int argc, char const *argv[]) {
    /* Test if an argument is given before starting */
    if (argc == 1){
        printf("Missing arguments: HEX file\n");
        return EXIT_FAILURE;
    }

    HEX_format_t ** HEX_format;
    FILE* fd = NULL;
    int lines = 10;

    fd = fopen(argv[1], "r");
    if(!fd) {
        perror("error: can't open file");
        return EXIT_FAILURE;
    }

    /*
     * Extract instruction and data from the HEX file
     * The HAX format follows the Intel HEX definition
     */
    HEX_format = parse_hex_format(fd, &lines, HEX_format);
#ifdef DEBUG
    print_hex_format(HEX_format, lines);

    for (int j = 0; j < lines; j++)
    {
        for (int i = 0; i < HEX_format[j]->byte_count; i+=2)
        {
            uint16_t opcode = (HEX_format[j]->data[i+1] << 8) + HEX_format[j]->data[i];

            for (int j = OpADC; j < OpEND; j++)
            {
                if (opcode == AVR_opcodes[j].val) {
                    printf("%s\t= ", AVR_opcodes[j].name);
                    printb(opcode, 16);
                    printf("\n");
                }
            }
        }
    }
#endif

    fclose(fd);
    if (HEX_format) {
        free(HEX_format);
    }

    return EXIT_SUCCESS;
}
