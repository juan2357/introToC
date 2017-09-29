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
int FunctionOne(int x, double y);
// int FunctionTwo(char x);

int main() {
  //variables
  int num1;
  double num2;
  // char letter;
  num1 = GetInt();
  num2 = GetDouble();
  //Returns user input from GetInt function
  printf("The number you entered is %d\n", num1);
  //returns user input from GetDouble function
  printf("The number you entered is %.2f\n", num2);
  //returns user input from GetInitial finction
  printf("The letter you entered is %c\n", GetInitial());
  //returns user input and prints FunctionOne
  FunctionOne(num1, num2);
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
// takes two arguments, an integer  and a double
// adds 10 to the integer
// multiplies the double argument by .5 and prints the result onto the screen
// returns the result of integer addition
int FunctionOne(int x, double y){
  int num1 = x + 10;
  printf("Your number multplied by half is %.2lf\n", y*.5);
  return num1;
}
