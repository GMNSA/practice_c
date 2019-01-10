// C / C++ File
// AUTHOR:   _who
// FILE:     func_pointers.c
// ROLE:     TODO (Points as arguments)
// CREATED:  2019-01-08 23:48:03

#include <stdio.h>
#include "header.h"



int main(void)
{

  int number = 20;
  int *p_ptr = &number;

  char str[SIZE_STR];

  // ------------------------------------------------------------------------

  fprintf(stdout, "number = %d\n", number);
  addNumber(p_ptr);
  fprintf(stdout, "number = %d\n", number);

  // ------------------------------------------------------------------------

  printf("Enter the string to encrypt: ");
  fgets(str, SIZE_STR, stdin);
  encrypt(str);
  printf("string: %s\n", str);

  printf("Decrypt string \n");
  decrypt(str);
  printf("string: %s\n", str);

  return 0;
}
