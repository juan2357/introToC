//Juan Perez
//10-14-16
//lab6

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//function declaration || prototype
//takes one varible from user
int GetNum();
//Takes in first number from user
int GetNextNum();
// takes in second number from user
void GetNextNumber (int*zptr);
int AddSum(int, int);
//main function call
int main() {
  int x = 0,
      y = 0,
      z = 0,
      zptr = 0,
      total = 0;
  //Takes user input to display messages in a for loop
  y = GetNum();
  for (x=1; x <= y; x++) {
    printf("I would rather be doing something else.\n");
  }
  //Takes user input to display messages in a while loop
  x=1;
  while (x <= y) {
    printf("Prgramming is easy.\n");
    x++;
  }
  //Takes user input to display messages in a do/while loop
  x = 1;
  do {
    printf("I like to have fun.\n");
    x++;
   }
  while(x <= y);
  //Takes first user input
  z = GetNextNum();
  if (z == -1) {
    printf("Have a Great Day!\n");
    return 0;
  }
  else {
    printf("You entered %d\n", z);
  }
  //Takes second user input and displays sum of previous user ipnut with current user input
  GetNextNumber(&zptr);
  total = AddSum(z, zptr);
  if (zptr > 0) {
    printf("You chose %d, you new number is %d\n",z, total);
  }
  else {
    printf("Have a Great Day!\n");
    return 0;
  }
}
//function definition
//Prompts user for a number to display number of messages
int GetNum() {
  int userinput = 0;
  printf("Please enter a number between 1 and 25:\n");
  scanf("%d", &userinput);
  if (userinput >= 25 || userinput < 1) {
    printf("Invalid Entry, Try Again\n");
  }
  else {
    return userinput;
  }
  return GetNum();
}
//prompts user for a number to be used as first addend
int GetNextNum(int a) {
  int userinput = 0;
  printf("Please enter a number or -1 to exit:\n");
  scanf("%d", &userinput);

  return userinput;
}
//Prompts user for a second addend
void GetNextNumber(int*zptr) {
  printf("please choose another number or -1 to exit\n");
  scanf("%d", zptr);
}
//function used to return the sum of the previous two addends
int AddSum(int a, int b) {
  return (a+b);
}
