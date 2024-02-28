/**
 * file: cknkCh09Prj008.c
 * Author: Yaachaka
 */

/* START: Header inclusions*/
#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
/* END: Header inclusions*/

/* START: MACRO definitions*/

/* END: MACRO definitions*/

/* START: type definitions*/

/* END: type definitions*/

/* START: Variable declarations*/

/* END: Variable declarations*/

/* START: Function prototypes*/
int roll_dice(void);
bool play_game(void);
/* END: Function prototypes*/

int main(void)
{
    /* START: MACRO definitions*/
    
    /* END: MACRO definitions*/

    /* START: type definitions*/
    
    /* END: type definitions*/

    /* START: Variable declarations*/
    bool b_gameResult;
    int i_diceRollSum, i_winCount, i_lostCount;
    char ch;
    /* END: Variable declarations*/


    srand((unsigned long) time(NULL));

    i_winCount = 0;
    i_lostCount = 0;
    while(1)
    {
        b_gameResult = play_game();

        if(b_gameResult)
        {
            printf("You win!\n\n");
            i_winCount++;
        }    // if condition
        else
        {
            printf("You lose!\n\n");
            i_lostCount++;
        }    // else condition

        printf("Play again? ");
        scanf(" %c", &ch);
        if(tolower(ch) != 'y')
        {
            printf("Wins: %d Losses: %d\n", i_winCount, i_lostCount);
            break; // break out of while loop
        }    // if condition
    }    // while loop

    return 0;
}    // FUNCTION END: main

/**
 * function name: roll_dice
 * return type: 
 * return value description: 
 * parameters: 
 * parameter 1 description: 
 * parameter 2 description: 
 * parameter 3 description: 
 * Function description: 
 */
int roll_dice(void)
{
    int i_diceRollSum;

    // printf("Rolling dices\n");    // DEBUG CODE
    i_diceRollSum = rand() % 6 + 1;
    i_diceRollSum += rand() % 6 + 1;

    return i_diceRollSum;
}    // FUNCTION END: roll_dice

/**
 * function name: play_game
 * return type: 
 * return value description: 
 * parameters: 
 * parameter 1 description: 
 * parameter 2 description: 
 * parameter 3 description: 
 * Function description: 
 */
bool play_game(void)
{
    /* START: Variable declarations*/
    bool b_firstRoll;
    int i_diceRollSum, i_point;
    /* END: Variable declarations*/

    printf("\n---Started new game---\n");    // DEBUG CODE
    b_firstRoll = true;
    while(1)
    {
        i_diceRollSum = roll_dice();
        printf("You rolled %d\n", i_diceRollSum);

        if(b_firstRoll)
        {
            switch(i_diceRollSum)
            {
                case 7:
                case 11:
                    return true;    // return (won) from the function
                    break;
                case 2:
                case 3:
                case 12:
                    return false;    // return (lost) from the functioon
                    break;
                default:
                    i_point = i_diceRollSum;
                    printf("Your point is %d\n", i_point);
                    b_firstRoll = false;
                    break;
            }    // switch statement
        }    // if condition: first roll check
        else
        {
            if(i_diceRollSum == 7)
            {
                return false;    // return (lost) from the function
            }    // if condition
            else if(i_diceRollSum == i_point)
            {
                return true;    // return (lost) from the function
            }    // else if condition
            else
            {
                // Do nothing
            }    // else condition
            
        }    // else condition: not a first roll
    }    // while loop
}    // FUNCTION END: play_game