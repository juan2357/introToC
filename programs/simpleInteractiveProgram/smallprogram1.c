// Name: Juan Perez
//Date: September 2, 2017
//COP 2220
/* Simple Interactive Program */

//precompiler directives
#define _CRT_SECURE_NO_WARNINGS //to avoid scanf warning or error
#include <stdio.h>   //printf, scanf definitions
int main(void) {

  double number;

  printf("Hello there, my name is Juan\n");

  printf("Please enter a number: ");
  scanf(" %lf", &number);
  printf("The product of %.0f and 3 is %.0f\n", number, (number)*3);

  

  return (0);
}
