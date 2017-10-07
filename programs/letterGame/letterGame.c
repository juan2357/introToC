

//add name , date, and description here


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#define MAXGUESSES 5
//FUNCTION PROTOTYPES
//this function provides intructions
//on how to play the game
void GameRules();
//this function runs one game.
//input character from the file, void return type
//all other functions to play one round of a game
//are called within the GuessTheLetter function
void GuessTheLetter(char);
// this function prompts the user to make a guess and returns that guess
//this function is called from the inside of the GuessTheLetter
//function described above
char GetTheGuess();
// this function take two arguments, the guess from the player
// and the solution letter from the file.
// The function returns 1 if the guess matches the
// solution and returns a 0 if they do not match.
// This function also lets the user know if the guess comes alphobetically
// before or after the answer.
int CompareLetters(char, char);
//this function prints stars in a loop
void printStars();

int main()
{
	//declare additional variables
	//declare FILE pointer
  FILE * input;
	int numGames, i = 0;
  char solution;
	char letter;//letter from file
  char guess;
	//display game rules
  GameRules();
	//Ask and get number of games to play
  printf("\nHow many games would you like to play? ");
  scanf(" %d", &numGames);

	//connect to the file HINT: use fopen
  input = fopen("letterList.txt", "r");
	//this for loop will allow the player to play more than one game
	//without recompiling
	for (i = 1; i <= numGames; i++)
	{
    printf("\nGet ready to play game %d\n", i);
		//get a solution letter from file - use fscanf
    fscanf(input, "%c\n", &letter);
		//change the solution to lowercase
    solution = tolower(letter);
		//print the solution back onto the screen to test
    // printf("\nThe letter is %c\n", tolower(letter));
		//call the GuessTheLetter function and pass it the solution
    GuessTheLetter(solution);
	}
	//close file pointer
  fclose(input);
	return 0;
}
//prints games rules
void GameRules(){
  printStars();
  printf("\nWelcome to the Letter Guessing Game.\n");
  printf("\nFirst, you will enter the number of fames you want to play (1 - 8)\n");
  printf("\nFor each game, you will have 5 chances to guess each letter\n");
  printf("\nLet's begin! \n");
  printStars();
}
//this function runs one game.
//input: character from the file, void return type
//all other functions to Play one round of a game
//are called from within the GuessTheLetter function
//this function lets the user know if they have won or lost the game
void GuessTheLetter(char solution) {
	int win = 0;
	int numGuesses = 0;
  char guess;
  char letter;
	//declare additional variables

	while (numGuesses < MAXGUESSES && win == 0) {
		//get a guess from the user  by calling the GetTheGuess function
		//change the guess to lowercase
    guess = GetTheGuess();
    //win = call the function to compare the guess with the solution
    win = CompareLetters(guess, solution);
    numGuesses++;//count the number of guesses so far
	}
  //use conditions to let the user know if they won or lost the round of the game
  if (numGuesses >= MAXGUESSES) {
    printf("\nSorry, you lose...\n");
  }
}
//This function get a letter from user
char GetTheGuess(){
  char guess;
  printf("\nGuess the letter: ");
  scanf(" %c", &guess);
  return guess;
}
//This function compares the user letter with the letter from file.
int CompareLetters(char guess, char solution){
  if (guess == solution) {
    printf("\nCongrats! You Won!\n");
    return 1;
  } else {
    if (guess < solution){
      printf("\nThe correct answer comes after your letter\n");
      return 0;
    } if (guess > solution) {
      printf("\nThe correct answer comes before your letter\n");
      return 0;
    }
  }
  return 0;
}
//This function prints stars just because.
void printStars(){
  for (int i = 0; i < 30; i++) {
    printf("%c ", '*');
  }
}
