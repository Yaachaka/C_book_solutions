/*
@@@@ PROGRAM NAME: knkcch10proj03.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Remove the num_in_rank, num_in_suit, and card_exists 
arrays from the poker.c program of Section 10.5. Have the program store the cards in 
a 5 X 2 array instead. Each row of the array will represent a card. For example, if the 
array is named hand, then hand [0][0] will store the rank of the first card and 
hand [0][1] will store the suit of the first card.
*/
#include<stdio.h>
#include <stdbool.h>   /* C99 only */
#include <stdlib.h>  //EXIT_SUCCESS
#include<ctype.h>  //tolower()
//-----------------------------------------------------------------------------
#define NUM_RANKS 13  //2 to 9, J, Q, K, A
#define NUM_SUITS 4  //spades, heart, clubs, diamonds
#define NUM_CARDS 5  //Number of cards in hand.

/* external variables */
char hand[NUM_CARDS][2];
bool straight, flush, four, three;
int pairs;   /* can be 0, 1, or 2 */
//-----------------------------------------------------------------------------
/* prototypes */
void read_cards(void);
void analyze_hand(void);
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
void read_cards(void)
{
	bool card_exists=false;
	char ch, rank_ch, suit_ch;
	bool bad_card;
	int cards_read = 0;
	short i=0;

	//Making a hand empty.
	for(short i=0;i<NUM_CARDS;i++)
		hand[i][0]=hand[i][1]='\0';

	//Read cards to hand.
	while (cards_read < NUM_CARDS)  //Start of [[WHILE1]]
	{
		bad_card = false;

		printf("Enter a card: ");

		rank_ch = tolower(getchar());
		if(rank_ch=='0')
			exit(EXIT_SUCCESS);
		else if(rank_ch<'2' || rank_ch>'9' && rank_ch!='t' && rank_ch!='j' && rank_ch!='q' && rank_ch!='k' && rank_ch!='a')
			bad_card=true;
		
		suit_ch = tolower(getchar());
		if(suit_ch!='c' && suit_ch!='d' && suit_ch!='h' && suit_ch!='s')
			bad_card=true;
		
		while ((ch = getchar()) != '\n')
			if (ch != ' ') bad_card = true;

		if (bad_card)
			printf("Bad card; ignored.\n");
		else
		{
			for(short i=cards_read;i>=0;i--)
			{
				if(hand[i][0]==rank_ch)
					if(hand[i][1]==suit_ch)
						card_exists=true;
			}
			if (card_exists)
			{
				printf("Duplicate card; ignored.\n");
				card_exists=false;
			}
			else
			{
				cards_read++;
				hand[i][0]=rank_ch;
				hand[i++][1]=suit_ch;
				
			}
		}
	}  //End of [[WHILE1]]
}

/**********************************************************
 * analyze_hand: Determines whether the hand contains a   *
 *               straight, a flush, four-of-a-kind,       *
 *               and/or three-of-a-kind; determines the   *
 *               number of pairs; stores the results into *
 *               the external variables straight, flush,  *
 *               four, three, and pairs.                  *
 **********************************************************/
void analyze_hand(void)
{
	int num_consec = 0;
	int rank;

	straight=false;
	flush = true;
	four = false;
	three = false;
	pairs = 0;

	/* check for flush */  //If all the cards are of same suit.
	for (short suit = 1; suit < NUM_CARDS; suit++)
		if (hand[suit][1] != hand[0][1])
		{
			flush = false;
			break;
		}

	

	/* check for 4-of-a-kind, 3-of-a-kind, and pairs */
	short count=1,store1=0,store2=0;
	for (rank = 0; rank < NUM_CARDS-1; rank++)  //Start of [[FOR1]]
	{
		if(store1==hand[rank][0] || store2==hand[rank][0])
			continue;
		for(short i=rank+1;i<NUM_CARDS;i++)  //Start of [[FOR2]]
		{
			if(hand[i][0]==hand[rank][0])
			{
				count++;
				if(store1)
				{
					if(store1!=hand[rank][0])
						store2=hand[rank][0];
				}
				else
					store1=hand[rank][0];
			}
			
		}  //End of [[FOR2]]

		if (count == 4) four = true;
		if (count == 3) three = true;
		if (count == 2) pairs++;
		count=1;
		if(pairs && three || four)
			break;
		
		
	}  //End of [[FOR1]]
	
	/* check for straight */ //if there are no repetition of rank.
	if(!four && !three && !pairs)  //none of them repeated
	{
		straight=true;
		bool a[13]={false};

		for(short i=0;i<NUM_CARDS;i++)
		{
			switch(hand[i][0])
			{
				case '2':a[0]=true;break;
				case '3':a[1]=true;break;
				case '4':a[2]=true;break;
				case '5':a[3]=true;break;
				case '6':a[4]=true;break;
				case '7':a[5]=true;break;
				case '8':a[6]=true;break;
				case '9':a[7]=true;break;
				case 't':a[8]=true;break;
				case 'j':a[9]=true;break;
				case 'q':a[10]=true;break;
				case 'k':a[11]=true;break;
				case 'a':a[12]=true;break;
				
			}
		}
		short i=0;
		while(i<9 && !a[i])
			i++;
		for(short j=i+1;j<i+5;j++)
		{
			if(!a[j])
			{
				straight=false;
				break;
			}

		}

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
	if (straight && flush) printf("Straight flush");
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
Enter a card: 6s
Enter a card: 8s
Enter a card: 5s
Enter a card: 6s
Duplicate card; ignored.
Enter a card: 9s
Enter a card: 7g
Bad card; ignored.
Enter a card: 7s
Straight flush

While entering card, enter 0c to exit game.
Enter a card: 6s
Enter a card: 6d
Enter a card: 5d
Enter a card: 6h
Enter a card: 6c
Four of a kind

While entering card, enter 0c to exit game.
Enter a card: 7s
Enter a card: as
Enter a card: 7h
Enter a card: ad
Enter a card: 7c
Full house

While entering card, enter 0c to exit game.
Enter a card: 9d
Enter a card: 6d
Enter a card: 7d
Enter a card: 2d
Enter a card: 5d
Flush

While entering card, enter 0c to exit game.
Enter a card: 9s
Enter a card: 5d
Enter a card: 7c
Enter a card: 8h
Enter a card: 6s
Straight

While entering card, enter 0c to exit game.
Enter a card: 6s
Enter a card: 5h
Enter a card: 9d
Enter a card: 6c
Enter a card: 6h
Three of a kind

While entering card, enter 0c to exit game.
Enter a card: 5h
Enter a card: 6d
Enter a card: 7s
Enter a card: 6c
Enter a card: 5s
Two pairs

While entering card, enter 0c to exit game.
Enter a card: 6h
Enter a card: 9d
Enter a card: 4s
Enter a card: 6d
Enter a card: 7s
Pair

While entering card, enter 0c to exit game.
Enter a card: 9s
Enter a card: 5h
Enter a card: 3c
Enter a card: 7h
Enter a card: 6c
High card

While entering card, enter 0c to exit game.
Enter a card: 0c

@@@@ Trial2:
@@@@ Trial3:
@@@@ Trial4:
@@@@ Trial5:
@@@@ Trial6:
*/
//---------------------------------------------------------------------------