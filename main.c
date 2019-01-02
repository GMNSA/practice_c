#include <stdio.h>
#include "header.h"
#define SIZE 100


int main(void)
{
  short a = 120, b = 150;
  unsigned int resSum = 0;
  
  char str[SIZE] = "This is Programming in C Language...\n";

  printString();
  printStringArg(str);
  resSum = summ(a, b);
  fprintf(stdout, "Result: %d + %d = %d\n", a, b, resSum);


  return 0;
}
