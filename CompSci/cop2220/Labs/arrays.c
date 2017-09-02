//Juan Perez
//10-28-16
//Program 2

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// Displays the list of user’s options available
//Displays the user’s selections and sets the value of the choice
void entryMenu(int *option);
//Displays the types of account they would like to access and sets the
//value of the chosen account type
void ChoiceMenu( char *AcctType);
//Prompts the user for the amount of their deposit and updates the selected account
void MakeDeposit( double *bankBal);
//Asks the user if they want another transaction
void DoMore(char * moreToDo);
//Displays the user’s current account balance for the selected account
void DisplayBalance( double bankBal);
//Prompts the user for the amount of the withdrawal, determines if there are
//sufficient funds and updates the selected account if funds are dispensed
void MoneyToSpend( double *bankBal, char acctType);

int main(){
//declare all variables
int a = 0;
char b = 0;
double checking = 897.23,
       savings = 3750.00,
       credit = -750.00;
//Initialize bank account variables to amounts specified in the assignment

do{
//Display Choice Menu

// Get user’s choice
//Display Entry menu
//Get user’s choice
//Use Conditional statements to determine which function(s) to call
// and which account balance to pass
//Deposit - pass balance of account (by pointer)
//Withdrawal – pass balance of account (by pointer) AND type of account
//Display Balance - pass balance of account
//Call function to ask for another transaction
}while(the response to DoMore is yes);
return 0;
}
//Function Definitions
entryMenu – displays options for deposit, withdrawal and balance – see sample output
ChoiceMenu – Displays list of account types available – see sample output
MakeDeposit – takes account balance by pointer , prompts for amount of deposit, adds deposit amount
to account balance
DoMore – asks if user want to perform another transaction
DisplayBalance – Displays the balance of the user account
MoneyToSpend – takes account balance and account type, asks for amount of withdrawal,
if account type is checking or savings, compare withdrawal to account balance.
Transaction denied if account balance is less that withdrawal amount.
If withdrawal amount is less than or equal to balance, subtract from balance.
If account type is Credit, compare to difference of account balance and credit limit
Transaction denied if difference is less that withdrawal amount.
If withdrawal amount is less than or equal to difference, subtract from balance.
(Since credit balance is negative subtraction works)
