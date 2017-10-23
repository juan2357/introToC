//Juan Perez
//October 20, 2017
//COP 2220
/* Large Programming Assignment 2 */

// Displays the list of apps available
//prompts for the user’s selection and sets the value of the selection
void DisplayApps(char *selectionPtr);
//sets the cost of the item based on value stored in purchase
void SetCost(char selection, double *costPtr);
//Displays the codes for the user to input money - gets user input amounts
//compares the int codes and updates the deposit amount
void PaymentOptions(double *depositPtr, double cost);
//compares the amount the user has in deposits to the price of app selected.
//It returns 1 if the amount is enough to cover the cost, 0 if there is not enough.
int Compare(double deposit, double choiceCost);
//uses PaymentOptions function to display and collect dollar amounts from the user
//uses Compare function to keep comparing the added deposited amount to the item cost.
void Pay(double *depositPtr, double choiceCost);
//calculates the amount of leftover from your deposits
void GetChange(double *depositPtr, double choiceCost);
//Asks the user if they want another app
void DoItAgain(char *quitPtr);

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main() {

  double *depositPtr;
  double deposit = 0;
  *depositPtr = deposit;




  printf("Welcome to THE APP STORE\n\n");

  printf("You have $%.2f in your bank.\n\n", *depositPtr);

  char *selectionPtr;
  char selection, l, v, f, t, m;
  DisplayApps(&selection);

  double cost;
  double *costPtr;
  SetCost(selection, &cost);

  return 0;
}

void DisplayApps(char *selectionPtr) {
  char selection;



  printf("HERE ARE THE SELECTIONS:\n");
  printf("L--LogMeIn Ignition $1399.99\n");
  printf("V--VIP Black        $ 999.99\n");
  printf("F--FaceTune         $   3.99\n");
  printf("T--Tap Menu         $ 399.99\n");
  printf("M--MineCraft        $   6.99\n");
  printf("Please enter a selection: ");
  scanf(" %c", &selection);
  printf("you selected %c\n", selection);
  *selectionPtr = selection;

}

void SetCost(char selection, double *costPtr){
  double cost;
  printf("%c\n", selection);
  switch (selection) {
    case 'l':
      cost = 1399.99;
      break;
    case 'v':
      cost = 999.99;
      break;
    case 'f':
      cost = 3.99;
      break;
    case 't':
      cost = 399.99;
      break;
    case 'm':
      cost = 6.99;
  }
    printf("%.2f\n", cost);
}

// void PaymentOptions(double *depositPtr, double cost){
//   if (deposit < cost) {
//     printf("You do not have enough.");
//   }
// }
