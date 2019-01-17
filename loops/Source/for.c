#include <stdio.h>
#include "../Headers/for.h" 

void for_example() {
    /*
     * Function: for_example.
     * arguments: void
     *
     * descriptions: for loop example.
     * return: void
     */

    fprintf(stdout, "%s: ", __FUNCTION__); 

    for (int i = 1; i <= 10; i++) {
        if (i < 10) {
            fprintf(stdout, "%d, ", i);
        } else {
            fprintf(stdout, "%d\n\n", i);
        }

    }

    for (int i = 0; i < 256; i++) {
        if (i % 20 == 0) {
            printf("\n");
        }
        printf("[ %c ]", i);
    }
    fprintf(stdout, "\n\n");

}
