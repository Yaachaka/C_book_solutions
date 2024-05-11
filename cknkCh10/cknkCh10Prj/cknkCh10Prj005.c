/********************************************************************************
 * File: cknkCh10Prj005.c
 * Author: Yaachaka
 * Purpose: Analyze poker hand: Ace-low
 ********************************************************************************/

/* START: Header inclusions*/
#include <stdbool.h>    /* C99 only */
#include <stdio.h>
#include <stdlib.h>
/* END: Header inclusions*/

/* START: MACRO definitions*/
#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5
/* END: MACRO definitions*/

/* START: type definitions*/

/* END: type definitions*/

/* START: External Variable declarations*/
int num_in_rank[NUM_RANKS];
int num_in_suit[NUM_SUITS];
bool straight, flush, four, three, b_ace_low;
int pairs; /* can be 0, 1, or 2 */
/* END: External Variable declarations*/

/* START: Function prototypes*/
void read_cards(void);
void analyze_hand(void);
void print_result(void);
/* END: Function prototypes*/

/**
 * Function name: main
 * Return type: int
 * Return value description: 
 * Parameters: void
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: Calls read_cards, analyze_hand, and print_result repeatedly.
 */
int main(void)
{
    for(; ; )
    {
        read_cards();
        analyze_hand();
        print_result();
    }	// for statement: 
    
    printf("\n");
    return 0;
}	//FUNCTION END: main


/**
 * Function name: read_cards
 * Return type: void
 * Return value description: 
 * Parameters: void
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: Reads the cards into the external variables num_in_rank and num_in_suit; checks for bad cards and duplicate cards.
 */
void read_cards(void)
{
    bool card_exists[NUM_RANKS][NUM_SUITS];
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int cards_read = 0;

    for(rank = 0; rank < NUM_RANKS; rank++)
    {
        num_in_rank[rank] = 0;
        for(suit = 0; suit < NUM_SUITS; suit++)
        {
            card_exists[rank][suit] = false;
        }	// for statement: 
    }	// for statement: clear card_exists

    for(suit = 0; suit < NUM_SUITS; suit++)
    {
        num_in_suit[suit] = 0;
    }	// for statement: 

    while(cards_read < NUM_CARDS)
    {
        bad_card = false;

        printf("Enter a card: ");

        rank_ch = getchar();
        switch(rank_ch)
        {
            case '0': exit(EXIT_SUCCESS); break;
            case '2': rank = 0;break;
            case '3': rank = 1;break;
            case '4': rank = 2;break;
            case '5': rank = 3;break;
            case '6': rank = 4;break;
            case '7': rank = 5;break;
            case '8': rank = 6;break;
            case '9': rank = 7;break;
            case 't': case 'T': rank = 8;break;
            case 'j': case 'J': rank = 9;break;
            case 'q': case 'Q': rank = 10;break;
            case 'k': case 'K': rank = 11;break;
            case 'a': case 'A': rank = 12;break;
            default: bad_card = true; break;
        }	// switch statement: rank

        suit_ch = getchar();
        switch(suit_ch)
        {
            case 'c': case 'C': suit = 0; break;
            case 'd': case 'D': suit = 1; break;
            case 'h': case 'H': suit = 2; break;
            case 's': case 'S': suit = 3; break;
            default: bad_card = true; break;
            
        }	// switch statement: suit

        while((ch = getchar()) != '\n')
        {
            if(ch != ' ')
            {
                bad_card = true;
            }	// if condition: 
        }	// while statement: 
        if(bad_card)
        {
            printf("Bad card; ignored.\n");
        }	// if condition: 
        else if(card_exists[rank][suit])
        {
            printf("Duplicate card; ignored.\n");
        }	// else-if condition: 
        else
        {
            num_in_rank[rank]++;
            num_in_suit[suit]++;
            card_exists[rank][suit] = true;
            cards_read++;
        }	// else condition: 
    }	// while statement: allowed number of cards read

}	// FUNCTION END: read_cards

/**
 * Function name: analyze_hand
 * Return type: void
 * Return value description: 
 * Parameters: void
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: Determines whether the hand contains a straight, a flush, four-of-a-kind, and/or three-of-a-kind; determines the number of pairs; stores the results into the external variables straight, flush, four, three, and pairs.
 */
void analyze_hand(void)
{
    int num_consec = 0;
    int rank, suit;
    
    b_ace_low = false;
    straight = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0;

    /* check for flush */
    for(suit = 0; suit < NUM_SUITS; suit++)
    {
        if(num_in_suit[suit] == NUM_CARDS)
        {
            flush = true;
        }	// if condition: 
    }	// for statement: 
    /* check for straight */
    rank = 0;
    while(num_in_rank[rank] == 0)
    {
        rank++;
    }	// while statement: 
    for(; rank < NUM_RANKS && num_in_rank[rank] > 0; rank++)
    {
        num_consec++;
    }	// for statement: 
    if(num_consec == NUM_CARDS)
    {
        straight = true;
        return;    // return out of the function
    }	// if condition: 
    if(
        (num_in_rank[0] == 1) 
        + (num_in_rank[1] == 1) 
        + (num_in_rank[2] == 1) 
        + (num_in_rank[3] == 1) 
        + (num_in_rank[12] == 1)
        )
    {
        b_ace_low = true;
        return;
    }	// if condition: royal
    
    /* check for 4-of-a-kind, 3-of-a-kind, and pairs */
    for(rank = 0; rank < NUM_RANKS; rank++)
    {
        if(num_in_rank[rank] == 4)
        {
            four = true;
        }	// if condition: 
        if(num_in_rank[rank] == 3)
        {
            three = true;
        }	// if condition: 
        if(num_in_rank[rank] == 2)
        {
            pairs++;
        }	// if condition: 
    }	// for statement: 
}	// FUNCTION END: analyze_hand

/**
 * Function name: print_result
 * Return type: void
 * Return value description: 
 * Parameters: void
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: Prints the classification of the hand, based on the values of the external variables straight, flush, four, three, and pairs.
 */
void print_result(void)
{
    if(b_ace_low && flush)
    {
        printf("Ace-Low Straight flush");
    }	// if condition: 
    else if(straight && flush)
    {
        printf("Straight flush");
    }	// if condition: 
    else if(four)
    {
        printf("Four of a kind");
    }	// else-if condition: 
    else if(three && pairs == 1)
    {
        printf("Full house");
    }	// else-if condition: 
    else if(flush)
    {
        printf("Flush");
    }	// else-if condition: 
    else if(b_ace_low)
    {
        printf("Ace-Low Straight");
    }	// else-if condition: 
    else if(straight)
    {
        printf("Straight");
    }	// else-if condition: 
    else if(three)
    {
        printf("Three of a kind");
    }	// else-if condition: 
    else if(pairs == 2)
    {
        printf("Two pairs");
    }	// else-if condition: 
    else if(pairs == 1)
    {
        printf("Pair");
    }	// else-if condition: 
    else
    {
        printf("High card");
    }	// else condition: 
    printf("\n\n");
}	// FUNCTION END: print_result