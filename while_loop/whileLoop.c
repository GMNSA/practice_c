/*******************************************************************/
/* Original File Name: whileLoop.c                                 */
/* Date: 2019-01-02                                                */
/* Developer: Jigurda                                              */
/* Copyright: Jigurda                                              */
/* Description: while loop                                         */
/*******************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned int GetRandomNumber(unsigned int restriction);
void GuessNumber(unsigned int secretNumber);
void DisplayNumberFrom1To10(void);


int main(void)
{

  unsigned int secretNumber = 0;

  // get a secret number
  secretNumber = GetRandomNumber(10);

  GuessNumber(secretNumber);


  return 0;
}


// ==========================================================================


unsigned int GetRandomNumber(unsigned int Restriction) {
  /*
   * Return random number from 1 to restriction.
   *
   * return: unsigned int
   * */

  time_t t = 0;

  /* Intialized random nubmer generator */
  srand((unsigned) time(&t));
  
  return rand() % Restriction + 1;
}


// --------------------------------------------------------------------------


void GuessNumber(unsigned int SecretNumber) {
  /*
   * Guess a number display a
   * keywords: secretNumber
   * */

  char symbol = 'y';
  unsigned int numberOfGuess = 0;

  // Guess the number until we drop
  while (symbol == 'y') {
    fprintf(stdout, "Guess the nubmer --> ");
    fscanf(stdin, "%d", &numberOfGuess);

    if (SecretNumber == numberOfGuess) {
      fprintf(stdout, "You win!\n");
      fprintf(stdout, "Barbara Strahan a dancing!!!\n\n");
    } else {
      fprintf(stdout, "You lose!!!\nThe number was %d.\n\n", SecretNumber);
    }
    fprintf(stdout, "Try again? (y/n)");
    fscanf(stdin, "%s", &symbol);
  }

  fprintf(stdout, "by, by...\n");
  fprintf(stdout, "\\_:)_/");

}


// --------------------------------------------------------------------------


void DisplayNumberFrom1To10(void) {
  /*
   * Display number from 1 to 10
   *
   * return: void
   * */

  fprintf(stdout, "Display numbers from 1 to 10\n");

  unsigned int number = 1;

  while (number <= 10) {
    fprintf(stdout, "%d\n", number);
    number++;
  }

}
