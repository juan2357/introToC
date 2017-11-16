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
//Changes word to uppercase
void MakeUpper(char *a);
//concatenates 's' to word
void RuleOne(char *a);
//concatenates 'es' to word.
void RuleTwo(char *a);
//concatenates 'ies' to words ending in y.
void RuleThree(char *a);
//make word plural depending on user userInput
void Pluralize(char a[]);
//Save word to a FILE
void SaveWord(char a[], FILE * b);

int main() {
  //declaring variables
  char userChoice;
  char word[SIZE] = " ";
  FILE * outPtr = NULL;
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
    //Changes word to uppercase
    MakeUpper(word);
    //make word plural depending on user userInput
    Pluralize(word);
    //Save word to a FILE
    SaveWord(strcat(word, "\n"), outPtr);
  } while (tolower(userChoice) == 'y');
  fclose(outPtr);
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
}
//Changes word to uppercase
void MakeUpper(char *a){
  int i = 0;
  while (a[i] != '\0'){
    if (a[i] >= 'a' && a[i] <= 'z'){
      a[i] -=32;
    }
    i++;
  }
  printf("your word in uppercase is %s\n", a);
}
// takes word that ends in y and changes to 'ies'
void RuleOne(char *a){
  a[strlen(a) - 1] = '\0';
  strcat(a, "IES\0");
  printf("The plural of your word is: %s\n", a);
}
//concatenates 's' to word
void RuleTwo(char * a){
  strcat(a, "ES");
  printf("The plural of your word is %s\n", a);
}
//concatenates 'es' to word.
void RuleThree(char *a){
  strcat(a, "S");
  printf("The plural of your word is %s\n", a);
}
//make word plural depending on user userInput
void Pluralize(char a[]){
  if (a[strlen(a) - 1] == 'Y') {
    RuleOne(a);
  } else if (a[strlen(a) - 1] == 'S' ||
            (a[strlen(a) - 1] == 'H' && a[strlen(a) - 2] == 'C') ||
            (a[strlen(a) - 1] == 'H' && a[strlen(a) - 2] == 'S')) {
              RuleTwo(a);
            } else {
              RuleThree(a);
            }
}

//Save word to a FILE
void SaveWord(char a[], FILE * b){
  b = fopen("pluralWords.txt", "a");
  fprintf(b, "%s", a);
}
