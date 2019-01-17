// Text File
// AUTHOR:   _who
// FILE:     main.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-01-17 16:05:09


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../Headers/clear_display.h"
#include "../Headers/get_integer.h"
#include "../Headers/print_bits_state.h"

// ==========================================================================

int main()
{
    char message[] = "Enter the integer -> ";
    int number = 0;

    printf("0 - Exit\n\n");

    while (true) { 
        number = get_integer(message);

        if (number == 0) {
            break;
        } else if (number >= 256) {
            printf("overflow\n");
        }else {
            print_bits_state(number);
        }
        
    }

    return 0;
}
