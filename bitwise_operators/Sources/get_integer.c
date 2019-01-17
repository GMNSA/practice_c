// get_integer.c

#include <stdio.h>
#include "../Headers/get_integer.h"

// --------------------------------------------------------------------------

int get_integer(char *msg) {
    /*
     * Function: get_integer.
     * arguments:
     *      msg(char) - youre message.
     *
     * describe: infinity cycle, which enter a integer.
     * return: int
     */

    char answer[256];
    int n = 0; // total number

    fprintf(stdout, "%s", msg);

    // which input integer
    fgets(answer, sizeof(answer), stdin);
    while (sscanf(answer, "%d", &n) != 1) {
        fprintf(stdout, "Incorrect input. Try again.");
        fgets(answer, sizeof(answer), stdin);
    }

    return n;
}
