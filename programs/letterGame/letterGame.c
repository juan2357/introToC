

//add name , date, and description here


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXGUESSES 5



//paste all the function prototypes here
//with the comments


int main()
{
	//declare additional variables
	//declare FILE pointer
	int numGames, i = 0;

	char letter;//letter from file

	//display game rules

	//Ask and get number of games to play

	//connect to the file HINT: use fopen

	//this for loop will allow the player to play more than one game
	//without recompiling
	for (i = 0; i < numGames; i++)
	{
		//get a solution letter from file - use fscanf
		//change the solution to lowercase
		//print the solution back onto the screen to test

		//call the GuessTheLetter function and pass it the solution


	}

	//close file pointer
	return 0;
}

//this function runs one game.
//input: character from the file, void return type
//all other functions to Play one round of a game
//are called from within the GuessTheLetter function
//this function lets the user know if they have won or lost the game
void GuessTheLetter(char solution)
{
	int win = 0;
	int numGuesses = 0;
	//declare additional variables

	while (numGuesses < MAXGUESSES && win == 0)
	{
		//get a guess from the user  by calling the GetTheGuess function
		//change the guess to lowercase
	    	//win = call the function to compare the guess with the solution
		numGuesses++;//count the number of guesses so far
	}
	//use conditions to let the user know if they won or lost the round of the game

}
