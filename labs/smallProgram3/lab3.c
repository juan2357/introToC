// Name: Juan Perez
//Date: October 16, 2017
//COP 2220
/* Loops */

//precompiler directives
#define _CRT_SECURE_NO_WARNINGS //to avoid scanf warning or error
#include <stdio.h>   //printf, scanf definitions
#include <ctype.h>
//User define functions
//This function get a number from the user.
int getNum(int a);

int main() {
  int num;

  num = getNum(num);

  int i = 1;
  while (i <= num) {
    printf("%d. FAU Owls - Hoot Hoot\n", i);
    i++;
  }

  for (i = 1; i <= num; i++) {
    printf("%d. Programming is fun\n", i);
  }

  int j = 1; //needed a different variable or would cont for loop.
  do {
    printf("%d. Florida beaches are beautiful\n", j);
    j++;
  } while(j <= num);


  return 0;
}
//Get number from the user
int getNum(int a){
  int num;
  printf("Please enter a number from 1-9: ");
  scanf("%d", &num);
  return num;
}
