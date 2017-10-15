// Name: Juan Perez
//Date: September 2, 2017
//COP 2220
/* Simple Interactive Program */

//precompiler directives
#define _CRT_SECURE_NO_WARNINGS //to avoid scanf warning or error
#include <stdio.h>   //printf, scanf definitions
#include <ctype.h>

int main(void) {

  printf("Hello there, my name is Juan\n");

  double number;

  printf("Please enter a number: ");
  scanf(" %lf", &number); //asking user for a number
  printf("The product of %.0f and 3 is %.0f\n", number, (number)*3); // displaying the result of

  char letter;

  printf("Let's try something else...\nPlease enter a letter: ");
  scanf(" %c", &letter);
  printf("The letter you entered in lowercase is %c,\n", tolower(letter));
  printf("the letter you entered in uppercase is %c\n", toupper(letter));

  return (0);
}
