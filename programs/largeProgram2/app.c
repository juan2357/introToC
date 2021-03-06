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

  double deposit = 0,
         depositPtr = 0,
         cost = 0,
         costPtr = 0,
         choiceCost = 0;
  char selection,
       selectionPtr,
       quit = 'y',
       quitPtr;


  printf("Welcome to THE APP STORE\n\n");

  printf("You have $%.2f in your bank.\n\n", deposit);

  do {

    DisplayApps(&selection);

    SetCost(selection, &cost);

    PaymentOptions(&depositPtr, cost);

    Pay(&depositPtr, cost);

    GetChange(&depositPtr, cost);

    DoItAgain(&quit);

  } while (quit == 'y');
  return 0;
}

void DisplayApps(char *selectionPtr) {
  char selection;

  printf("\nHERE ARE THE SELECTIONS:\n");
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
    printf("The item costs %.2f\n", cost);
    *costPtr = tolower(cost);
}

void PaymentOptions(double *depositPtr, double cost){
  int input;

  printf("Please credit your money by selection: \n");
  printf("--- 1 $1000.00\n");
  printf("--- 2 $ 500.00\n");
  printf("--- 3 $ 100.00\n");
  printf("--- 4 $ 10.00\n");
  scanf("%d", &input);
  switch (input) {
    case 1:
      *depositPtr = *depositPtr + 1000;
      printf("You have deposited $1000.00\n");
      break;
    case 2:
      *depositPtr = *depositPtr + 500;
      printf("You have deposited $500.00\n");
      break;
    case 3:
      *depositPtr = *depositPtr + 100;
      printf("You have deposited $100.00\n");
      break;
    case 4:
      *depositPtr = *depositPtr + 10;
      printf("You have deposited $10.00\n");
      break;
  }
}

int Compare(double deposit, double choiceCost){

  if (deposit >= choiceCost) {
    return 1;
  }
    return 0;
}

void Pay(double *depositPtr, double choiceCost){

  while (Compare(*depositPtr, choiceCost) == 0) {
    PaymentOptions(depositPtr, choiceCost);
  }

}

void GetChange(double *depositPtr, double choiceCost){
  double deposit;
  deposit = *depositPtr - choiceCost;
  printf("You have %.2f available in you bank\n", deposit);
}

void DoItAgain(char *quitPtr) {
  printf("Would you like to continue (Y/N)? ");
  scanf(" %c", quitPtr);
  *quitPtr = tolower(*quitPtr);
}
