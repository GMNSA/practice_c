// Text File
// AUTHOR:   _who
// FILE:     main.c
// ROLE:     TODO (parse cycles)
// CREATED:  2019-01-17 02:04:42

#include <stdio.h>
#include <math.h>

#include "../Headers/do_while.h"
#include "../Headers/while.h"
#include "../Headers/for.h"
#include "../Headers/square.h"
#include "../Headers/triangle.h"
#include "../Headers/rectangle.h"


int main(void)
{
    printf("Line = %i, file = %s, function = %s\n\n", 
            __LINE__,
            __FILE__,
            __FUNCTION__
            );

    // do_while_example();
    // while_example();
    // for_example();
    square(10);

    printf("\n");
    triangle(10);

    printf("\n");
    rectangle(10);


    return 0;
}
