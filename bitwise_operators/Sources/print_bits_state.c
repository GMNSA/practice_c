// print_bits_state.c

#include <stdio.h>

// --------------------------------------------------------------------------

void print_bits_state(char aCh) {
    /*
     * Function: print_bits_state.
     * argunets: 
     *      aCh(char) - youre number.
     *
     * describe: Output number in bit value.
     * return: void
     */

    printf("%i: ", (unsigned char)aCh);
    printf("%i:", (aCh & 0x80) ? 1 : 0);
    printf("%i:", (aCh & 0x40) ? 1 : 0);
    printf("%i:", (aCh & 0x20) ? 1 : 0);
    printf("%i:", (aCh & 0x10) ? 1 : 0);
    printf("%i:", (aCh & 0x08) ? 1 : 0);
    printf("%i:", (aCh & 0x04) ? 1 : 0);
    printf("%i:", (aCh & 0x02) ? 1 : 0);
    printf("%i \n", (aCh & 0x01) ? 1 : 0);

}
