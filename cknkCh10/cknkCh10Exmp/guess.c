/********************************************************************************
 * File: guess.c
 * Author: K. N. King
 * Purpose: Asks user to guess a hidden number
 ********************************************************************************/

/* START: Header inclusions*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* END: Header inclusions*/

/* START: MACRO definitions*/
#define MAX_NUMBER 100
/* END: MACRO definitions*/

/* START: type definitions*/

/* END: type definitions*/

/* START: External Variable declarations*/
int secret_number;
/* END: External Variable declarations*/

/* START: Function prototypes*/
void initialize_number_generator(void);
void choose_new_secret_number(void);
void read_guesses(void);
/* END: Function prototypes*/

int main(void)
{
    char command;

    printf("Guess the number between 1 and %d. \n\n", MAX_NUMBER);
    initialize_number_generator();
    do
    {
        choose_new_secret_number();
        printf("A new number has been chosen.\n");
        read_guesses();
        printf("Play again? (Y/N) ");
        scanf(" %c", &command);
        printf("\n");
    }while(command == 'y' || command == 'Y');	// do-while statement: 
    
    printf("\n");
    return 0;
}	//FUNCTION END: main

/**
 * Function name: initialize_number_generator
 * Return type: void
 * Return value description: 
 * Parameters: void
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: Initializes the random number generator using the time of day.
 */
void initialize_number_generator(void)
{
    srand((unsigned) time(NULL));
}	// FUNCTION END: initialize_number_generator

/**
 * Function name: choose_new_secret_number
 * Return type: void
 * Return value description: 
 * Parameters: void
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: Randomly selects a number between 1 and MAX_NUMBER and stores it in secret_number.
 */
void choose_new_secret_number(void)
{
    secret_number = rand() % MAX_NUMBER + 1;
}	// FUNCTION END: choose_new_secret_number

/**
 * Function name: read_guesses
 * Return type: void
 * Return value description: 
 * Parameters: void
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: Repeatedly reads user guesses and tells the user whether each guess is too low, too high, or correct. When the guess is correct, prints the total number of guesses and returns.
 */
void read_guesses(void)
{
    int guess, num_guesses = 0;

    for(; ; )
    {
        num_guesses++;
        printf("Enter guess: ");
        scanf("%d", &guess);
        if(guess == secret_number)
        {
            printf("You won in %d guesses!\n\n", num_guesses);
            return;
        }	// if condition: 
        else if (guess < secret_number)
        {
            printf("Too low; try again.\n");
        }	// else-if condition: 
        else
        {
            printf("Too high; try again.\n");
        }	// else condition: 
    }	// for statement: 
}	// FUNCTION END: read_guesses