// handler.c

#include <stdio.h>

void addNumber(int *Number) {
  /*
   * Function: addNumber
   * argumets: *Number(int)
   *
   * describe: The sum of the number on itself.
   * return: void
   *
   **/

  *Number = *Number + *Number;
}

// --------------------------------------------------------------------------

void firstLevel(char *String) {
  /*
   * Function: firstLevel
   * argumets: *String(char)
   *
   * describe: encrypt string xor
   * return: void
   *
   **/

  while (*String) {
    *String = *String ^ 28;
    String++;
  }
}

// --------------------------------------------------------------------------

void secondLevel(char *String) {
  /*
   * Function: secondLevel
   * argumets: *String(char)
   *
   * describe: encrypt string xor
   * return: void
   *
   **/

  while (*String) {
    *String = *String ^ 47;
    String++;
  }
}

// --------------------------------------------------------------------------

void encrypt(char *String) {
  /*
   * Function: encrypt
   * argumets: *String(char)
   *
   * describe: encrypts a string of two levels.
   * return: void
   *
   **/

  firstLevel(String);
  secondLevel(String);
}

// --------------------------------------------------------------------------

void decrypt(char *String) {
  /*
   * Function: decrypt
   * argumets: *String(char)
   *
   * describe: decrypts a string.
   * return: void
   *
   **/

  secondLevel(String);
  firstLevel(String);
}
