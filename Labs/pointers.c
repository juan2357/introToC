//Juan Perez
//09-09-16
//lab2

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//takes two double arguments and returns the sum of the two arguments
double CalculateSum(double num1, double num2);
// takes two double arguments and returns the difference of the two arguments
double CalculateDifference(double num1, double num2);
//takes two double arguments and returns the product of the two arguments
double CalculateProd(double num1, double num2);
//takes two double arguments and two double pointer arguments
//1. calculate the sum and stores the result in sumPtr
//2. calculate the difference and store the result in diffPtr
//3. calculate the product and stores the result in prodPtr
void CalculateBoth(double num1, double num2, double* sumPtr, double *diffPtr, double* prodPtr);

int main() {
  double num1 = 0,
         num2 = 0,
         sum = 0,
         diff = 0,
         prod = 0,
         sumPtr = 0,
         diffPtr = 0,
         prodPtr = 0;
  //Prompts user for two numbers
  printf("Please choose a number: ");
  scanf("%lf", &num1);
  printf("Please choose another number: ");
  scanf("%lf", &num2);
  //Call the sum of user input
  sum = CalculateSum(num1, num2);
  printf("The sum of the two numbers you chose is %f\n", sum);
  //Calls the difference of user input
  diff = CalculateDifference(num1, num2);
  printf("The difference of the two numbers you chose is %f\n", diff);
  //Calls the product of user input
  prod = CalculateProd(num1, num2);
  printf("The product of the two numbers you chose is %f\n", prod);
  //Calls the sum, difference, and product in stored pointers
  CalculateBoth(num1,num2,&sumPtr,&diffPtr,&prodPtr);

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
//Function definitation that calculates product
double CalculateProd(double num1, double num2) {
  return (num1 * num2);
}
//Function definition that calculates all three
void CalculateBoth(double num1, double num2, double* sumPtr, double *diffPtr, double* prodPtr) {
  *sumPtr = (num1 + num2);
  *diffPtr = (num1 - num2);
  *prodPtr = (num1 * num2);
  printf("The sum, difference, product of the two numbers you chose is\n%f\n%f\n%f\n", *sumPtr, *diffPtr, *prodPtr);
}
