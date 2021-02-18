/*
@@@@ PROGRAM NAME: knkcch10proj04.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Modify the poker.c program of Section 10.5 by having it 
recognize an additional category, “royal flush” (ace, king, queen, jack, ten of the 
same suit). A royal flush ranks higher than all other hands.
*/
#include<stdio.h>
#include <stdbool.h>   /* C99 only */
#include <stdlib.h>
//-----------------------------------------------------------------------------
#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* external variables */
int num_in_rank[NUM_RANKS];
int num_in_suit[NUM_SUITS];
bool straight, flush, four, three, royal_flush;
int pairs;   /* can be 0, 1, or 2 */
//-----------------------------------------------------------------------------
/* prototypes */
void read_cards();
void analyze_hand();
void print_result(void);
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	for (;;) 
	{
		printf("While entering card, enter 0c to exit game.\n");
		read_cards();
		analyze_hand();
		print_result();
	}
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------

/**********************************************************
 * read_cards: Reads the cards into the external          *
 *             variables num_in_rank and num_in_suit;     *
 *             checks for bad cards and duplicate cards.  *
 **********************************************************/
void read_cards()
{
	bool card_exists[NUM_RANKS][NUM_SUITS];
	char ch, rank_ch, suit_ch;
	int rank, suit;
	bool bad_card;
	int cards_read = 0;

	for (rank = 0; rank < NUM_RANKS; rank++)
	{
		num_in_rank[rank] = 0;
		for (suit = 0; suit < NUM_SUITS; suit++)
			card_exists[rank][suit] = false;
	}

	for (suit = 0; suit < NUM_SUITS; suit++)
		num_in_suit[suit] = 0;

	while (cards_read < NUM_CARDS)
	{
		bad_card = false;

		printf("Enter a card: ");

		rank_ch = getchar();
		switch (rank_ch)
		{
			case '0':           exit(EXIT_SUCCESS);
			case '2':           rank = 0; break;
			case '3':           rank = 1; break;
			case '4':           rank = 2; break;
			case '5':           rank = 3; break;
			case '6':           rank = 4; break;
			case '7':           rank = 5; break;
			case '8':           rank = 6; break;
			case '9':           rank = 7; break;
			case 't': case 'T': rank = 8; break;
			case 'j': case 'J': rank = 9; break;
			case 'q': case 'Q': rank = 10; break;
			case 'k': case 'K': rank = 11; break;
			case 'a': case 'A': rank = 12; break;
			default:            bad_card = true;
		}

		suit_ch = getchar();
		switch (suit_ch)
		{
			case 'c': case 'C': suit = 0; break;
			case 'd': case 'D': suit = 1; break;
			case 'h': case 'H': suit = 2; break;
			case 's': case 'S': suit = 3; break;
			default:            bad_card = true;
		}

		while ((ch = getchar()) != '\n')
			if (ch != ' ') bad_card = true;

		if (bad_card)
			printf("Bad card; ignored.\n");
		else if (card_exists[rank][suit])
			printf("Duplicate card; ignored.\n");
		else
		{
			num_in_rank[rank]++;
			num_in_suit[suit]++;
			card_exists[rank][suit] = true;
			cards_read++;
		}
	}
}

/**********************************************************
 * analyze_hand: Determines whether the hand contains a   *
 *               straight, a flush, four-of-a-kind,       *
 *               and/or three-of-a-kind; determines the   *
 *               number of pairs; stores the results into *
 *               the external variables straight, flush,  *
 *               four, three, and pairs.                  *
 **********************************************************/
void analyze_hand()
{
	int num_consec = 0;
	int rank, suit;

	straight = false;
	flush = false;
	four = false;
	three = false;
	royal_flush=false;
	pairs = 0;

	/* check for flush */
	for (suit = 0; suit < NUM_SUITS; suit++)
		if (num_in_suit[suit] == NUM_CARDS)
			flush = true;

	if(flush)
	{
		royal_flush=true;
		for(rank=8;rank<13;rank++)
		{
			if(!num_in_rank[rank])
			{
				royal_flush=false;
				break;
			}
		}
	}

	/* check for straight */
	rank = 0;
	while (num_in_rank[rank] == 0) rank++;
	for (; rank < NUM_RANKS && num_in_rank[rank] > 0; rank++)
		num_consec++;
	if (num_consec == NUM_CARDS) 
	{
		straight = true;
		return;
	}

	/* check for 4-of-a-kind, 3-of-a-kind, and pairs */
	for (rank = 0; rank < NUM_RANKS; rank++)
	{
		if (num_in_rank[rank] == 4) four = true;
		if (num_in_rank[rank] == 3) three = true;
		if (num_in_rank[rank] == 2) pairs++;
	}
}

/**********************************************************
 * print_result: Prints the classification of the hand,   *
 *               based on the values of the external      *
 *               variables straight, flush, four, three,  *
 *               and pairs.                               *
 **********************************************************/
void print_result(void)
{
	if(royal_flush)        printf("!!! ROYAL FLUSH !!!");
	else if (straight && flush) printf("Straight flush");
	else if (four)         printf("Four of a kind");
	else if (three && pairs == 1)   printf("Full house");
	else if (flush)        printf("Flush");
	else if (straight)     printf("Straight");
	else if (three)        printf("Three of a kind");
	else if (pairs == 2)   printf("Two pairs");
	else if (pairs == 1)   printf("Pair");
	else                   printf("High card");

	printf("\n\n");
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
While entering card, enter 0c to exit game.
Enter a card: ts
Enter a card: ks
Enter a card: as
Enter a card: qs
Enter a card: js
!!! ROYAL FLUSH !!!

While entering card, enter 0c to exit game.
Enter a card: ts
Enter a card: as
Enter a card: 9s
Enter a card: qs
Enter a card: js
Flush

While entering card, enter 0c to exit game.
Enter a card: ts
Enter a card: ks
Enter a card: ah
Enter a card: qs
Enter a card: js
Straight

While entering card, enter 0c to exit game.
Enter a card: 0

@@@@ Trial2:
@@@@ Trial3:
@@@@ Trial4:
@@@@ Trial5:
@@@@ Trial6:
*/
//---------------------------------------------------------------------------