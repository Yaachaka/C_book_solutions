/*
@@@@ PROGRAM NAME: knkcch09proj08.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a program that simulates the game of craps, which 
is played with two dice. On the first roll, the player wins if the sum of the dice is 7 
or 11. The player loses if the sum is 2, 3, or 12. Any other roll is called the “point” 
and the game continues. On each subsequent roll, the player wins if he or she rolls the 
point again. The player loses by rolling 7. Any other roll is ignored and the game 
continues. At the end of each game, the program will ask the user whether or not to play 
again. When the user enters a response other than y or Y. the program will display the 
number of wins and losses and then terminate.

You rolled: 8
Your point is 8
You rolled: 3
You rolled: 10
You rolled: 8
You win!

Play again? y

You rolled: 6
Your point is 6
You rolled: 5
You rolled: 12
You rolled: 3
You rolled: 7
You lose!

Play again? y

You rolled: 11
You win!

Play again? n
Wins: 2 Losses: 1

Write your program as three functions: main, roll_dice and play_game. Here are
the prototypes for the latter two functions:

	int roll_dice(void) ;
	bool play_game (void) ;

roll_dice should generate two random numbers, each between 1 and 6, and return their
sum. play_game should play one craps game (calling roll_dice to determine the outcome 
of each dice roll); it will return true if the player wins and false if the player loses.
play_game is also responsible for displaying messages showing the results of the player's
dice rolls. main will call play_game repeatedly. keeping track of the number of wins and
losses and displaying the “you win” and “you lose” messages. Hint: Use the rand function
to generate random numbers. See the deal.c program in Section 8.2 for an example of
how to call rand and the related srand function.
*/
#include<stdio.h>
#include<stdlib.h>  //rand(),srand()
#include<time.h>  //time()
#include<stdbool.h>  //bool, true, false.
//-----------------------------------------------------------------------------
int roll_dice(void);
bool play_game(void);
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	srand(time(NULL));
	bool won;
	int wins=0,losses=0;
	char q='y';

	printf("Let's roll!!!\n");

	while(q=='y' || q=='Y')
	{
		won=play_game();
		if(won)
			wins++;
		else
			losses++;

		printf("\n\nPlay again(y/n)?: ");
		scanf("%c%*c",&q);  //We used %*c to not store keystroke '\n' which is ENTER key in the input stream.
		  //Otherwise it gets loaded to q on next scanf just before we enter new value for q and the loop ends.
		
	}
	
	printf("Wins: %d   Losses: %d",wins,losses);

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
int roll_dice(void)
{
	short dice1,dice2;
	dice1=rand()%(6-1+1)+1;  //range minimum to maximum= rand()%(maximum-minimum+1)+minimum;
	dice2=rand()%(6-1+1)+1;  //range minimum to maximum= rand()%(maximum-minimum+1)+minimum;
	return dice1+dice2;
}
//---------------------------------------------------------------------------
bool play_game (void)
{
	bool won=false,lost=false,first=true;
	int point, point2;
	while(1)  //Start of [[WHILE1]]
	{
		point=roll_dice();
		printf("\nYou rolled: %d",point);
		//First roll
		if(first)
		{
			if(point==7 || point==11)
				won=true;
			else if(point==2 || point==3 || point==12)
				lost=true;
			else
				point2=point;
			first=false;
		}
		//Second roll onwards
		else
		{
			if(point==point2)
				won=true;
			if(point==7)
				lost=true;
		}
		//What happened in the last roll?
		if(won)
		{
			printf("\nYou win!");
			return won;
		}
		if(lost)
		{
			printf("\nYou lose!");
			return false;
		}

	}  //End of [[WHILE1]]
	
}
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Let's roll!!!

You rolled: 5
You rolled: 7
You lose!

Play again(y/n)?: y

You rolled: 3
You lose!

Play again(y/n)?: y

You rolled: 7
You win!

Play again(y/n)?: y

You rolled: 7
You win!

Play again(y/n)?: y

You rolled: 9
You rolled: 6
You rolled: 7
You lose!

Play again(y/n)?: n
Wins: 2   Losses: 3
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------