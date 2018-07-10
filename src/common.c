#include "common.h"

void bit2str(char ** str, int n, int len) {
    *str = malloc((len + 1) * sizeof(char));
    for (int i = len - 1; i >= 0; i--) {
        if (n & 1) {
            (*str)[i] = '1';
        }
        else {
            (*str)[i] = '0';
        }
        n >>= 1;
    }
    (*str)[len] = 0;
}

/*
 * Print with bit layout.
 */
void printb(int n, int len) {
    char * str;
    bit2str(&str, n, len);
    printf("0b%s ", str);
}
