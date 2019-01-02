// for loop
#include <stdio.h>
#include <string.h>

int main(void)
{
  const int N = 10;           // number of elements in array
  int arrayBox[N];            // create array
  int countArrayBox = 0;      // counting elements in an array
  char symbols[] = "QWERTY";  
  char str[]={"My string"};


  fprintf(stdout, "Display number from 1 to 10:\n");
  for (int i = 1; i <= 10; i++) {
    fprintf(stdout, "%d\n", i);
  }

  printf("\n");
  countArrayBox = sizeof(arrayBox) / sizeof(int);

  /* Fill the array with zeros */
  for (int i = 0; i < countArrayBox; i++) { 
    arrayBox[i] = 0;
    fprintf(stdout, "arrayBox[%d] == %d\n", i,  arrayBox[i]);
  }

  printf("\n\n");

  for (unsigned int i = 0; i < strlen(symbols); i++) { 
    fprintf(stdout, "symbols[%d] == %c\n", i, symbols[i]);
  }

  printf("\n");

  for (unsigned int i = 0; i < strlen(str); i++) { 
    fprintf(stdout, "%c", str[i]);
  }

  printf("\n");


  
  return 0;
}
