// Name: Juan Perez
//Date: September 29, 2017
//COP 2220
/* Simple Interactive Program  2*/

//precompiler directives
#define _CRT_SECURE_NO_WARNINGS //to avoid scanf warning or error
#include <stdio.h>   //printf, scanf definitions
#include <ctype.h>
//user define functions
int GetInt(void);
double GetDouble(void);
char GetInitial(void);
// int FunctionOne(int x, double y);
// int FunctionTwo(char x);

int main() {
  //variables
  // int num1;
  // double num2;
  // char letter;
  //Returns user input from GetInt function
  printf("The number you entered is %d\n", GetInt());
  //returns user input from GetDouble function
  printf("The number you entered is %.2f\n", GetDouble());
  //returns user input from GetInitial finction
  printf("The letter you entered is %c\n", GetInitial());

  return 0;
}
//Gets number from user
int GetInt(void){
  int num1;
  printf("Please enter an integer\n");
  scanf("%d", &num1);
  return num1;
}
//Gets double from user
double GetDouble(void){
  double num2;
  printf("Please enter a double\n");
  scanf(" %lf", &num2);
  return num2;
}
//gets a letter from user
char GetInitial(void){
  char letter;
  printf("Please enter a letter\n");
  scanf(" %c", &letter);
  return letter;
}
