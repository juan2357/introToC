//Juan Perez
//10-27-17
//Pointers

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//takes two double arguments and returns the sum of the two arguments
double CalculateSum(double num1, double num2);
// takes two double arguments and returns the difference of the two arguments
double CalculateDifference(double num1, double num2);
//takes two double arguments and two double pointer arguments
//1. calculate the sum and stores the result in sumPtr
//2. calculate the difference and store the result in diffPtr
//3. calculate the product and stores the result in prodPtr
void CalculateBoth(double num1, double num2, double* sumPtr, double *diffPtr);

int main() {
  double num1 = 0,
         num2 = 0,
         sum1 = 0,
         diff1 = 0,
         prod = 0,
         sumPtr = 0,
         diffPtr = 0;

  //Prompts user for two numbers
  printf("Please choose a number: ");
  scanf("%lf", &num1);
  printf("Please choose another number: ");
  scanf("%lf", &num2);
  //Call the sum of user input
  sum1 = CalculateSum(num1, num2);
  printf("The sum of the two numbers you chose is %.2f\n", sum1);
  //Calls the difference of user input
  diff1 = CalculateDifference(num1, num2);
  printf("The difference of the two numbers you chose is %.2f\n", diff1);
  //Calls the sum, difference, and product in stored pointers
  CalculateBoth(num1,num2,&sumPtr,&diffPtr);
  printf("The sum, difference, you chose is\n%.2f\n%.2f\n", sumPtr, diffPtr);

  return 0;
}
//Function definitation that calculates sum
double CalculateSum(double num1, double num2) {
  return (num1 + num2);
}
//Function definitation that calculates difference
double CalculateDifference(double num1, double num2) {
  return (num1 - num2);
}
//Function definition that calculates all three
void CalculateBoth(double num1, double num2, double* sumPtr, double *diffPtr) {
  *sumPtr = (num1 + num2);
  *diffPtr = (num1 - num2);
}
