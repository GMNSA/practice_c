// Text File
// AUTHOR:   _who
// FILE:     fgets_fputs.c
// ROLE:     TODO (Functions output and input)
// CREATED:  2019-01-11 01:44:08

#include <stdio.h>
#include "header.h"


int main(void)
{
  char array[SIZE];
  char symbol = 'A';

  // ------------------------------------------------------------------------

  printf("Enter string: ");
  // fscanf(stdin, "%[^\n]", array);
  //fprintf(stdout, "%s\n", array);
  
  // fgets(array, sizeof(array), stdin);
  // fputs(array, stdout);

  printf("%c\n", symbol);
  printf("%c\n", symbol + 32);

  return 0;
}
