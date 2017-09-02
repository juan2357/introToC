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
//in the partial solution
int LetterMatch(char arr[], char guess, int numcorrect);
//Compares matching words
int CompareWord(char arrA[], char arrB[]);
//Update to word in progess with the correct word.
void updatePrgressWord(char arr[], char guess, int numguess);
//Check to see if you won
void ForTheWin(int wordmatch);


int main (){
  //Declared variables
  int i = 0,
      numguess = 0,
      numcorrect = 0,
      wordresult = 0,
      wordmatch = 0;
  char solution[SIZE] = {'\0'},
       scrambledword[SIZE] = {'\0'},
       lettermatch[SIZE] = {'\0'},
       progressword[SIZE] = {'\0'},
       guess = '\0';
  FILE * fp;   //open file
  fp = fopen("scrambledwords.txt", "r");//Connect to file
  numcorrect = strlen(scrambledword);

  //Display game rules
  GameRules();
  //Get scrambled word
  fscanf(fp, "%s %s", solution, scrambledword);
  //Game Start
  SingleGame(scrambledword);

  while (numguess <= 3) {
    //Print guess letters
    printf("Here are the letters you guessed so far:\n");
    for (i = 0; i < progressword[i]; i++) {
        progressword[i] = '*';
        printf("*%c", progressword[i]);
    }
    //Takes user guess and lowers it
    guess = tolower(GetLetter());
    printf("Here is what you have so far:\n");
    lettermatch[numguess] = guess;
    SingleGame(lettermatch);
    SingleGame(progressword);
    wordresult = LetterMatch(scrambledword, guess, numcorrect);
    printf("The word so far: %d", wordresult);
    updatePrgressWord(progressword, guess, wordresult);
    wordmatch = LetterMatch(scrambledword, guess, numguess);
    printf("\nDoes %d match?", wordmatch);
    numguess++;
  }
  progressword[i] = '\0';



  fclose(fp);//close file
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

char GetLetter() {
  char guess = '\0';
  int numguess = 0;
  while (guess <= MAXGUESSES) {
    printf("\n\nPick a letter:");
    scanf(" %c", &guess);
  }
  numguess++;
  return guess;
}
int CompareWord(char arrA[], char arrB[]){
  int wordmatch = 0;
  wordmatch = strcmp(arrA, arrB);
  return wordmatch;
}
int LetterMatch(char arr[], char guess, int numcorrect){
  int i;
  for (i  = 0;  i < numcorrect; i++) {
    printf("The correct guess is: %d", numcorrect);
    if (arr[i] == guess) {
      return i;
    }
    else {
      printf("\nSorry, %d is not a letter\n", numcorrect);
    }
    return -1;
  }
  return 0;
}
void updatePrgressWord(char arr[], char guess, int numguess) {
  printf("%c\n", guess);
  printf("%d\n", numguess);
  printf("Word in progress %s\n", arr);
  if(numguess != -1){
    arr[numguess] = guess;
  }
}
void ForTheWin(int wordmatch){
  if (wordmatch == 1) {
    printf("Hooray you won!\n");
  }
  else if (wordmatch) {
    printf("Sorry, try again :(\n");
  }
}
