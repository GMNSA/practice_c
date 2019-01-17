#include <stdio.h>
#include "../Headers/rectangle.h"

void rectangle(int length) {
    int height = length / 2;

    for (int i = 1; i <= length; i++) { 
        for (int j = 1; j <= height; j++) { 
            printf("* ");
        }
        printf("\n");
    }
}
