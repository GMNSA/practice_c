// Text File
// AUTHOR:   Dmitry Malikov
// FILE:     pointers.c
// ROLE:     TODO (Pointers)
// CREATED:  2019-01-08 20:10:22

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void fillArrayZero(int *Array, int ArraySize, int Consistently=0);


int main(void)
{
  int number = 15;
  int *p_number;
  int *p_arrayNumber;
  char *p_arrayChar;
  char string[] = "Dmitry Malikov";

  int array[10];
  int arraySize = 0;
  arraySize = sizeof(array) / sizeof(array[0]);

  fillArrayZero(array, arraySize, 1);

  p_number = &number;

  printf("Value - %d\n", *p_number);
  printf("Address - %p\n", p_number);

  printf("\nValue - %d\n", number);
  printf("Address - %p\n", &number);

  for (int i = 0; i < arraySize; i++) {
    p_arrayNumber = &array[i];
    printf("Index[%d], Value[%d], Address - %p\n",
        i, *p_arrayNumber, p_arrayNumber);
  }

  printf("\n\n");

  p_arrayChar = string;

  for (unsigned int i = 0; i < strlen(string); i++) { 
    if (*p_arrayChar == 'l' || *p_arrayChar == 'o') {
      *p_arrayChar = toupper(*p_arrayChar);
    }

    fprintf(stdout, "Symbol: %c\n", *p_arrayChar); 
    p_arrayChar++;
  }

  return 0;
}

// =========================================================================

void fillArrayZero(int *Array, int ArraySize, int Consistently) { 
  /*
   * Function: fillArrayZero
   * argumets: 
   *      Array(int) - The array,
   *      ArraySize(int) - Array size,
   *      Consistently(int) - We define as the array will be filled. 
   *                          Zeros(0) or consecutive(1) numbers (default = 0).
   * description: Fill the array
   * return: void
   *
   * */

  if (Consistently) {
    for (int i = 0; i < ArraySize; i++) { 
      Array[i] = i + 1;
    }

  } else {
    for (int i = 0; i < ArraySize; i++) { 
      Array[i] = 0;
    }

  } 

}
