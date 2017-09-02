// Juan Perez
// 11-18-2016
// Program 3

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAXGAMES 6
#define MAXGUESSES 3
#define SIZE 5
//function prototypes
//Diplays intructions on how to play the game
void GameRules();
//Function to plays one entire game
void SingleGame(char scrambledword[]);
//Returns letter uer has GuessedIt
char GetLetter();
//Locates and places the selected letter where it belongs
//int the partial solution
// char LetterMatch(char answer, char letter_guess)
int main (){
  //Declared variables
  int i,
      c
  char solution[SIZE],
       scrambledword[SIZE],
       progressword;
  FILE * fp;   //open file
  fp = fopen("scrambledwords.txt", "r");//Connect to file
  //Display game rules
  GameRules();
  //Get scrambled word
  fscanf(fp, "%s %s", solution, scrambledword);
  //Game Start
  SingleGame(scrambledword);
  //Print guess letters
  printf("Here are the letters you guessed so far:\n");
  for (i = 0; i < scrambledword[i]; i++) {
      printf("*");
  }
  c = GetChar();
  compare = strcmp(&c, &scrambledword[i]);
  if (compare != 0) {
    printf("*\n");
  }

  fclose(inPtr);//close file
  return 0;
}
//Function definitions
//Game Rules
void GameRules(){
  printf("Welcome to the Scrambled Up Game!\n");
  printf("You will see a word in scambled form.\n");
  printf("You will pick a letter and \n");
  printf("I will show where the letter belongs in the word.\n");
  printf("...You can then guess the word...\n");
  printf("If you can't guess it, don't worry.\n");
  printf("You will have three quesses to figure it out!\n");
  return;
}
//Single game
void SingleGame(char scrambledword[]){
  printf("Here is you scrambled word:\n%s\n\n", scrambledword);
}

char GetChar() {
  char UserGuess = 0;
  while (UserGuess <+ MAXGUESSES) {
    printf("\n\nPick a letter:");
    scanf(" %c", &UserGuess);
  }
  return UserGuess;
}
