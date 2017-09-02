//Juan Perez
//09-29-16
//lab5

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//function declaration
//take two variables from user and displays the product of the two variables
double SalesTax(double price);
//main function that prompts user for price of item and displays final cost
int main() {
  double price = 0,
      tax = 0,
      cost = 0;
  //prompts user input once to be used to determine SalesTax rate
  printf("Enter price of the item: ");
  scanf(" %lf", &price);
  //function call for for the price and tax
  tax = SalesTax(price);
  //displays price of item from user input and SalesTax rate
  printf("The original price of your item is %.2f, the tax on this item is %.2f.\n",price, tax);
  //the sum of price and SalesTax rate
  cost = price + tax;
  //displays the total price of item
  printf("The total price of your item is %.2f.\n", cost);
  return 0;
}
//function definition
//takes user input variable to determine tax rate
double SalesTax(double price) {
  double smallTax = .08;
  double largeTax = .065;
  //if else statement that returns final cost
  if (price < 450) {
    return smallTax * price;
  }
  else {
    return largeTax * price;
  }
}
