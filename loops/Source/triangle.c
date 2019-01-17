#include <stdio.h>
#include "../Headers/triangle.h"

void triangle(int num) {
    /*
     * Function: triangle.
     * arguments: 
     *      num(int) - size of the bottom of the triangle.
     *
     * description: draw a triangle.
     * return: void
     */

    for (int i = 1; i <= num; i++) { 
        for (int j = 1; j <= i; j++) { 
            printf("* ");
        }
        printf("\n");
    }
}
