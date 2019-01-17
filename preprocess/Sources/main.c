#include <stdio.h>

int get_integer(char *msg);

int main(void)
{
    int i = 0;
    char message[] = "Enter the number -> ";

    i =  get_integer(message);

    switch (i) {
        #include "../Headers/h_1.h"
        #include "../Headers/h_2.h"
        #include "../Headers/h_3.h"
    }

  return 0;
}

// ==========================================================================

int get_integer(char *msg) {
    char answer[256];
    int n = 0;

    printf("%s", msg);
    fgets(answer, sizeof(answer), stdin);

    while (sscanf(answer, "%d", &n) != 1) {
        fprintf(stdout, "Incoreect input. Try again.\n");
        fgets(answer, sizeof(answer), stdin);
    }

    return n;
}
