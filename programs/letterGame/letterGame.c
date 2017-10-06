

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

int main()
{
	//declare additional variables
	//declare FILE pointer
	int numGames, i = 0;
  char solution;
	char letter;//letter from file
  char guess;


	//display game rules
  GameRules();

	//Ask and get number of games to play
  printf("How many games would you like to play?\n");
  scanf(" %d", &numGames);
	//connect to the file HINT: use fopen
  FILE * input;
  input = fopen("letterList.txt", "r");
  fscanf(input, "%c\n", &letter);
	//this for loop will allow the player to play more than one game
	//without recompiling
	for (i = 1; i <= numGames; i++)
	{
    printf("Get ready to play game %d\n", i);
		//get a solution letter from file - use fscanf
    fscanf(input, "%c\n", &letter);
		//change the solution to lowercase
    solution = tolower(letter);
		//print the solution back onto the screen to test
    printf("The letter is %c\n", tolower(letter));
		//call the GuessTheLetter function and pass it the solution
    GuessTheLetter(guess);
	}
	//close file pointer
  fclose(input);
	return 0;
}
//prints games rules
void GameRules(){
  printf("Welcome to the Letter Guessing Game.\n");
  printf("First, you will enter the number of fames you want to play (1 - 8)\n");
  printf("For each game, you will have 5 chances to guess each letter\n");
  printf("Let's begin: \n");
}
//this function runs one game.
//input: character from the file, void return type
//all other functions to Play one round of a game
//are called from within the GuessTheLetter function
//this function lets the user know if they have won or lost the game
void GuessTheLetter(char solution) {
	int win = 0;
	int numGuesses = 0;
	//declare additional variables
	while (numGuesses < MAXGUESSES && win == 0) {
		//get a guess from the user  by calling the GetTheGuess function
		//change the guess to lowercase
    GetTheGuess();
    //win = call the function to compare the guess with the solution
		numGuesses++;//count the number of guesses so far
    if (numGuesses > MAXGUESSES) {
      printf("Sorry, you lose...\n");
    }
	}

  //use conditions to let the user know if they won or lost the round of the game
}

char GetTheGuess(){
  char guess;
  char letter;
  printf("Guess the letter: \n");
  scanf(" %c", &guess);
  CompareLetters(guess, letter);
  return guess;
}

int CompareLetters(char guess, char letter){
  if (guess == letter) {
    printf("Congrats! You Won!\n");
    return 1;
  } else if (guess < letter){
      printf("The correct answer comes after your letter\n");
      GetTheGuess();

  } else if (guess < letter) {
      printf("The correct answer comes before your letter\n");
      GetTheGuess();
      
  }
  return 0;
}
