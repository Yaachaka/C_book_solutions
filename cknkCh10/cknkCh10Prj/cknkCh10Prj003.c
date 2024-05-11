/********************************************************************************
 * File: cknkCh10Prj003.c
 * Author: Yaachaka
 * Purpose: NA
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
int i_hand[NUM_CARDS][2];
bool straight, flush, four, three;
int pairs; /* can be 0, 1, or 2 */
/* END: External Variable declarations*/

/* START: Function prototypes*/
void read_cards(void);
void analyze_hand(void);
void print_result(void);
void quicksort(int n, int i_arr[][n], int i_low, int i_high);
int split(int n, int i_arr[][n], int i_low, int i_high);
void print_hand(int n, int i_arr[][n], int m);
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
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card, b_duplicate_card;
    int cards_read = 0;

    for(rank = 0; rank < NUM_RANKS; rank++)
    {
        for(suit = 0; suit < NUM_SUITS; suit++)
        {
            i_hand[rank][suit] = false;
        }	// for statement: 
    }	// for statement: clear card exists

    while(cards_read < NUM_CARDS)
    {
        bad_card = false;
        b_duplicate_card = false;

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

        for (int i = 0; i < cards_read; i++)
        {
            if(rank == i_hand[i][0] && suit == i_hand[i][1])
            {
                b_duplicate_card = true;
                break;
            }
        }    // for loop: making sure there is no duplicate card
        

        if(bad_card)
        {
            printf("Bad card; ignored.\n");
        }	// if condition: 
        else if(b_duplicate_card)
        {
            printf("Duplicate card; ignored.\n");
        }	// else-if condition: 
        else
        {
            i_hand[cards_read][0] = rank;
            i_hand[cards_read][1] = suit;
            cards_read++;
        }	// else condition: valid card into hand
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
    int rank, suit, i;
    int i_same, i_not_same, i_same_value, i_full; 

    straight = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0;

    /* Sorting the hand */
    // printf("Before sorting: \n");    // DEBUG CODE
    // print_hand(2, i_hand, NUM_CARDS);    // DEBUG CODE
    quicksort(2, i_hand, 0, NUM_CARDS-1);
    // printf("After sorting: \n");    // DEBUG CODE
    // print_hand(2, i_hand, NUM_CARDS);    // DEBUG CODE
    
    /* check for flush (Five cards of the same suit) */
    flush = true;
    for(i = 1; i < NUM_CARDS; i++)
    {
        if(i_hand[i-1][1] != i_hand[i][1])
        {
            flush = false;
            break;    // break out of for loop.
        }	// if condition: not same suit
    }	// for statement: Check for flush
    
    /* check for straight (Five cards with consecutive ranks) */
    straight = true;
    for(i = 1; i < NUM_CARDS; i++)
    {
        if(i_hand[i][0] - i_hand[i-1][0] != 1)
        {
            straight = false;
            break;    // break out of for loop.
        }	// if condition: not consecutive
    }	// for statement: Check for straight

    /* check for 4-of-a-kind, 3-of-a-kind, and pairs */
    i_same = i_not_same = i_same_value = i_full = 0;

    for(i = 1; i < NUM_CARDS; i++)
    {
        if(i_hand[i-1][0] == i_hand[i][0])
        {
            i_same++;
            if(i_same == 1)
            {
                i_same_value = i_hand[i][0];
            }	// if condition: same is 1
            if(i_same_value != i_hand[i][0])
            {
                i_full = 1;
            }	// if condition: match but not same as previous
        }	// if condition: elements math
    }	// for statement: four, three, two-pairs, pair

    switch(i_same)
    {
        case 3:
            if(i_full == 0)
            {
                four = true;
            }	// if condition: four or full house
            else
            {
                three = true;
                pairs = 1;
            }	// else condition: 
            break;
        case 2:
            if(i_full == 0)
            {
                three = true;
            }	// if condition: not two-pairs
            else
            {
                pairs = 2;
            }	// else condition: 
            break;
        case 1:
            pairs = 1;
            break;
        
    }	// switch statement: four, three, pair
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
    if(straight && flush)    // Both straight and a flush
    {
        printf("Straight flush");
    }	// if condition: 
    else if(four)    // four-of-a-kind: four cards of the same rank
    {
        printf("Four of a kind");
    }	// else-if condition: 
    else if(three && pairs == 1)    // three-of-a-kind and a pair
    {
        printf("Full house");
    }	// else-if condition: 
    else if(flush)    // flush: five cards of the same suit
    {
        printf("Flush");
    }	// else-if condition: 
    else if(straight)    // Straight: five cards with consecutive ranks
    {
        printf("Straight");
    }	// else-if condition: 
    else if(three)    // three-of-a-kind: three cards of the same rank
    {
        printf("Three of a kind");
    }	// else-if condition: 
    else if(pairs == 2)    // Two pairs
    {
        printf("Two pairs");
    }	// else-if condition: 
    else if(pairs == 1)    // Pair: Two cards of the same rank
    {
        printf("Pair");
    }	// else-if condition: 
    else
    {
        printf("High card");    // High card: Any other card
    }	// else condition: 
    printf("\n\n");
}	// FUNCTION END: print_result

/**
 * Function name: quicksort
 * Return type: void
 * Return value description: 
 * Parameters: int n, int i_arr[], int i_low, int i_high
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: Sort the array in ascending order using quicksort algorithm.
 */
void quicksort(int n, int i_arr[][n], int i_low, int i_high)
{
    int i_middle;
    if(i_low >= i_high) return;
    i_middle = split(n, i_arr, i_low, i_high);
    quicksort(n, i_arr, i_low, i_middle - 1);
    quicksort(n, i_arr, i_middle + 1, i_high) ;
}	// FUNCTION END: quicksort

/**
 * Function name: split
 * Return type: int
 * Return value description: 
 * Parameters:int n, int i_arr[], int i_low, int i_high
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: Supporting function for the quick sort algorithm. Targetted for divide-and-rule implementation.
 */
int split(int n, int i_arr[][n], int i_low, int i_high)
{
    int i_parting_element[1][2] = {{i_arr[i_low][0], i_arr[i_low][1]}};

    for(;;)
    {
        while(i_low < i_high && i_parting_element[0][0] <= i_arr[i_high][0] )
        i_high--;
        if(i_low >= i_high) break;
        i_arr[i_low][0] = i_arr[i_high][0];
        i_arr[i_low][1] = i_arr[i_high][1];
        i_low++;

        while(i_low < i_high && i_arr[i_low][0] <= i_parting_element[0][0])
            i_low++;

        if(i_low >= i_high) break;
        i_arr[i_high][0] = i_arr[i_low][0];
        i_arr[i_high][1] = i_arr[i_low][1];
        i_high--;
    }

    i_arr[i_high][0] = i_parting_element[0][0];
    i_arr[i_high][1] = i_parting_element[0][1];
    return i_high;
}	// FUNCTION END: split

/**
 * Function name: print_hand
 * Return type: void
 * Return value description: 
 * Parameters: int n, int i_arr[][n], int m
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: JUST A DEBUG CODE. Purpose is to print the hand.
 */
void print_hand(int n, int i_arr[][n], int m)
{
    for(int i = 0; i < m; i++)
    {
        printf("%.2d-%d\n", i_arr[i][0], i_arr[i][1]);
    }	// for statement: print hand    
}	// FUNCTION END: print_hand