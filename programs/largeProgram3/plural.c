//Juan Perez
//November 20, 2017
//COP 2220
/* Large Programming Assignment 3 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 20
//Function Prototypes
//User greeting and instructions
void GreetUser();
//Get word from the User
void GetWord(char a[]);

int main() {
  //declaring variables
  char userChoice;
  char word[SIZE] = " ";
  //User greeting and instructions
  GreetUser();
  //Asks user to continue
  do {
    printf("Would you like to enter a word? Y (YES) or N (NO) ");
    scanf(" %c", &userChoice);
    if (tolower(userChoice) == 'n') {
      return 0;
    }
    //word from userInput
    GetWord(word);

  } while (tolower(userChoice) == 'y');
  return 0;
}
//User greeting and instructions
void GreetUser(){
  printf("Welcome to pluralizer\n");
  printf("You can enter a word \n");
  printf("and I will give you the plural...\n");
}
//Get word from the User
void GetWord(char a[]){
  printf("Enter a word: ");
  scanf(" %s", a);
  printf("your word is %s\n", a);

}
