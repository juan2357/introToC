//Juan Perez
//10-28-16
//Program 2

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define CREDITLIMIT -2000


// Displays the list of user’s options available
//Displays the user’s selections and sets the value of the choice
void entryMenu(int *option);
// //Displays the types of account they would like to access and sets the
// //value of the chosen account type
void ChoiceMenu( char *AcctType);
// //Prompts the user for the amount of their deposit and updates the selected account
// void MakeDeposit( double *bankBal);
// // //Asks the user if they want another transaction
// void DoMore(char * moreToDo);
// // //Displays the user’s current account balance for the selected account
// void DisplayBalance( double bankBal);
// // //Prompts the user for the amount of the withdrawal, determines if there are
// // //sufficient funds and updates the selected account if funds are dispensed
// void MoneyToSpend( double *bankBal, char acctType);

int main(){
//declare all variables
int option = 0;
char AcctType = 0;
double checking = 897.23,
       savings = 3750.00,
       credit = -750.00;
//Initialize bank account variables to amounts specified in the assignment
printf("Welcome to MyBank\n");

// do{
//Display Choice Menu
ChoiceMenu(&AcctType);
// Get user’s choice
//Display Entry menu
entryMenu(&option);
//Get user’s choice

//Use Conditional statements to determine which function(s) to call
// and which account balance to pass
//Deposit - pass balance of account (by pointer)
// MakeDeposit(*bankBal);
//
// //Withdrawal – pass balance of account (by pointer) AND type of account
// MoneyToSpend( double *bankBal, char acctType);
//
// //Display Balance - pass balance of account
// DisplayBalance( double bankBal);

//Call function to ask for another transaction
// }while(DoMore == y);
return 0;
}
//Function Definitions
// entryMenu – displays options for deposit, withdrawal and balance
void entryMenu(int *option){
  printf("Choose C for Checking\n");
  printf("Choose S for Savings\n");
  printf("Choose R for Credit\n");
  scanf("%c\n", AcctType);

}

// ChoiceMenu – Displays list of account types available
void ChoiceMenu( char *AcctType){

    printf("Please choose from one of the following menu options:\n");
    printf("DEPOSIT............1\n");
    printf("WITHDRAWAL.........1\n");
    printf("ACCOUNT BANLANCE...1\n");
    printf("To transfer money between accounts,\n");
    printf("select (2) for WITHDRAWAL, then (1) for DEPOSIT\n");
    scanf("%d\n", option);

}

// MakeDeposit – takes account balance by pointer , prompts for amount of deposit, adds deposit amount
// to account balance
// void MakeDeposit( double *bankBal);
//
// // DoMore – asks if user want to perform another transaction
// void DoMore(char * moreToDo){
//   printf("Would you like another transaction?\n");
//   printf("y or n: \n", );
// }
//
// // DisplayBalance – Displays the balance of the user account
// void DisplayBalance( double bankBal);
//
// // MoneyToSpend – takes account balance and account type, asks for amount of withdrawal,
// // if account type is checking or savings, compare withdrawal to account balance.
// // Transaction denied if account balance is less that withdrawal amount.
// // If withdrawal amount is less than or equal to balance, subtract from balance.
// // If account type is Credit, compare to difference of account balance and credit limit
// // Transaction denied if difference is less that withdrawal amount.
// // If withdrawal amount is less than or equal to difference, subtract from balance.
// // (Since credit balance is negative subtraction works)
// void MoneyToSpend( double *bankBal, char acctType);
