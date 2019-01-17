#include <stdio.h>
#include "../Headers/square.h"

void square(int num) {
    /*
     * Function: square.
     * arguments:
     *      num(int) - width and height of square.
     * 
     * describe: draw a square.
     * return: void
     */

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            printf("* ");
        } 
        printf("\n");
    }
}
