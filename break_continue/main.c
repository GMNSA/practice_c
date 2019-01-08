// C/C++ File
// AUTHOR:   _who
// FILE:     main.c
// ROLE:     TODO (break, continue and goto)
// CREATED:  2019-01-02 19:39:54
// MODIFIED: 2019-01-02 19:52:13

#include <stdio.h>

int main(void)
{
  fprintf(stdout, "Use in cycles break, continue, goto\n");
  for (int i = 0; i <= 10; i++) { 
    if (i == 5) {
      continue;
    } else if (i == 9) {
      break;
    }
    fprintf(stdout, "%d\n", i);
  }
  
  return 0;
}
