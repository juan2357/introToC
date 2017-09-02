//Juan Perez
//09-30-16
//Assignment 1

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAXGUESSES 5
//function prototypes with a comment for each one describing what the function does. //Copy and paste from assignment
void GameRules();
int SingleGame(char file_letter);
char RetrieveGuess();
int GuessedIt(char answer, char input_letter);


int main() {
  // declare additional variables
  char file_letter = 0;
  int PlayGames = 0,
      i = 0;

  //open file
  FILE * inPtr;
  inPtr = fopen("lettersin.txt", "r");//connect to file
  //display instructions
  GameRules();
  //get number of games to play
  printf("How many games would you like to play today (1-4)? ");
  scanf(" %d", &PlayGames);


  for(i=0; i<PlayGames; i++) {
  //get a letter from file
    fscanf(inPtr, " %c", &file_letter); //input first letter in the file
  //Play one game
    printf("Let's play game %d\n", i+1);

    SingleGame(file_letter);


  }
  fclose(inPtr);
  //close file
  return 0;
}
  //Function definitions
  void GameRules() {
    printf("Welcome to the Letter Guessing Game\nYou will enter the number of games you want to play (1-4 games)\nYou have 5 chances to guess each letter\nLet us begin...\n");
    return;
  }


  int SingleGame(char file_letter) {
    //Gets user input and copares to file_letter

    int numGuesses = 0;
    while(numGuesses < MAXGUESSES) {
      char RetrieveGuess = 0;
      printf("Enter a letter: \n");
      scanf(" %c", &RetrieveGuess);
        if (file_letter == RetrieveGuess) {
          printf("You Guessed It!!!\n");
          return 0;
        }
        else if (file_letter > RetrieveGuess) {
            printf("The letter you are guessing comes before %c\n", RetrieveGuess);
        }
        else if (file_letter < RetrieveGuess){
            printf("The letter you are guessing comes after %c\n", RetrieveGuess);
        }
        else {
          printf("You did not get the correct letter. The letter is %c\n", file_letter);
        }
        numGuesses = numGuesses +1;
      }
      return 0;
    }
