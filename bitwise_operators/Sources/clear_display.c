// clear_display.c

#include <string.h>
#include <stdlib.h>

// --------------------------------------------------------------------------

void clear_display() {
    /*
     * Function: clear_display.
     * atributes: none
     *
     * describe: clearing dispay.
     * return: void
     */

    char command[10];

    strcpy(command, "clear");
    system(command);
}
