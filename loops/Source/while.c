#include <stdio.h>
#include "../Headers/while.h"

void while_example() {
    /* 
     * Function: while_example
     * arguments: void
     *
     * describe: while loop example.
     * return: void
     */

    fprintf(stdout, "%s: ", __FUNCTION__);

    int i = 1;

    while (i <= 10) { 
        if (i < 10) {
            fprintf(stdout, "%d, ", i);
        } else {
            fprintf(stdout, "%d\n\n", i);
        }
        i++;
    }

}
