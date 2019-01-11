// Text File
// AUTHOR:   Dmitry Malicov
// FILE:     pointers.c
// ROLE:     TODO (some explanation)

#include <stdio.h>
#include <string.h>
#include "header.h"


int main(void)
{

  int number[SIZE_NUMBER];
  int *p_number1 = &number[0];
  int *p_number2 = &number[1];
  int *p_number3 = &number[2];
  int *p_numbers[3] = {p_number1, p_number2, p_number3};

  // ------------------------------------------------------------------------

  char arrayString[3][14];
  int countArrayString = sizeof(arrayString) / sizeof(arrayString[0]);
strcpy(arrayString[0], "I study ");
  strcpy(arrayString[1], "language ");
  strcpy(arrayString[2], "C/C++ ");


  // ------------------------------------------------------------------------

  for (int i = 0; i < SIZE_NUMBER; i++) {
    *p_numbers[i] = i * i;
  }

  for (int i = 0; i < SIZE_NUMBER; i++) { 
    printf("Position %d\nAdress[%p]\nvalue %d\n\n",
        i, p_numbers[i], *p_numbers[i]);
  }

  // ------------------------------------------------------------------------
  
  for (int i = 0; i < countArrayString; i++) { 
    fprintf(stdout, "countArrayString[%d] = %s\n", i,  arrayString[i]);
  }



  return 0;
}
