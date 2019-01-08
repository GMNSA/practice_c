// C/C++ File
// AUTHOR:   _who
// FILE:     function.c
// ROLE:     TODO (Function and arguments)
// CREATED:  2019-01-03 08:11:14
// MODIFIED: 2019-01-03 09:26:14

#include <stdio.h>
#include <string.h>

void getString(char str[]);
int sumNumber(int FirstNumber, int SecondNumber);
int getInteger(const char *Message);


int main(void)
{

  char str[] = "Function String";
  int total = 0;

  getString(str);
  fprintf(stdout, "%d\n", sumNumber(32, 99));
  
  
  return 0;
}


// --------------------------------------------------------------------------


void getString(char str[]) { 
  fprintf(stdout, "Inside Function %s\n", str);
}

// --------------------------------------------------------------------------

int sumNumber(int FirstNumber, int SecondNumber) {
  return FirstNumber + SecondNumber;
}

// --------------------------------------------------------------------------

int getInteger(const char *Message) {
  char answer[256];

  printf("%s", answer);
  return 0;
}

