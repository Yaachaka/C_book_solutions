/*
@@@@ PROGRAM NAME: knkcch13proj03.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Modify the deal.c program of Section 8.2 so that it prints the full names of the cards it
deals:
	Enter number of cards in hand: 5
	Your hand:
	Seven of clubs
	Two of spades
	Five of diamonds
	Ace of spades
	Two of hearts
Hint: Replace rank_code and suit_code by arrays containing pointers to strings.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>   /* C99 only */
//-----------------------------------------------------------------------------
#define NUM_SUITS 4
#define NUM_RANKS 13
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
	int num_cards, rank, suit;
	const char *rank_code[] = {"Two","Three","Four","Five","Six","Seven","Eight",
							"Nine","Ten","Joker","Queen","King","Ace"};
	const char *suit_code[] = {"Clubs","Diamonds","Hearts","Spades"};

	srand((unsigned) time(NULL));

	printf("Enter number of cards in hand: ");
	scanf("%d", &num_cards);

	printf("Your hand:");
	while (num_cards > 0)
	{
		suit = rand() % NUM_SUITS;     /* picks a random suit */
		rank = rand() % NUM_RANKS;     /* picks a random rank */
		if(!in_hand[suit][rank])
		{
			in_hand[suit][rank] = true;
			num_cards--;
			printf("\n %s of %s", rank_code[rank], suit_code[suit]);
		}
	}
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter number of cards in hand: 5
Your hand:
 Queen of Hearts
 Nine of Diamonds
 Six of Diamonds
 Two of Clubs
 Eight of Clubs
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter number of cards in hand: 9
Your hand:
 Two of Clubs
 Three of Diamonds
 Joker of Hearts
 Ten of Spades
 Eight of Clubs
 Joker of Clubs
 Five of Spades
 Seven of Diamonds
 Seven of Hearts
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
@@@@ Trial4:
@@@@ Trial5:
@@@@ Trial6:
@@@@ Trial7:
@@@@ Trial8:
@@@@ Trial9:
*/
//---------------------------------------------------------------------------