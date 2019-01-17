#include <stdio.h>
#include "../Headers/do_while.h"

void do_while_example() { 
    /* 
     * Function: do_while_example
     * argumenst: none
     *
     * descriptions: loop do while.
     * return: void
     */

    const int END = 10;
    int i = 1;

    fprintf(stdout, "%s: ", __FUNCTION__);

    do {
        if (i != END) {
            printf("%i, ", i);
        } else {
            printf("%i\n\n", i);
        }
        i++;
    } while (i <= END);

}
