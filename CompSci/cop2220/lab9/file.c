//Juan Perez
//11-04-16
//Lab 9

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//function prototypes

//prompts user for a number
double userPrompt();
//Multiply the double entered by the user by the integer from the file,
//and store the result in a double.
double doubleCalc(double userinput, int file_num);

int main() {
  //Declared variables
  int file_num = 0;
  double total = 0,
     userinput = 0;
  //opening file
  FILE * inPtr;
  //connect to file
  inPtr = fopen("numInput.txt", "r");



  for (size_t i = 0; i < 3; i++) {
    //get integer from file
    fscanf(inPtr, " %d", &file_num);
    userinput = userPrompt(file_num);
    total =doubleCalc(userinput, file_num);
    printf("Your total is %f\n", total);
  }

  //close file
  fclose(inPtr);
  return 0;
}
//function definitions
//function to prompt user for a double to be used as a factor
double userPrompt() {
  double userinput;
  printf("Please enter a number:");
  scanf("%lf", &userinput);
  return userinput;
}
//function for the product of the integer numInput and userPrompt
double doubleCalc(double userinput, int file_num) {
  return (file_num * userinput);
}
