/**
 * file: cknkCh09Prj003.c
 * Author: Yaachaka
 */

/* START: Header inclusions*/
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
/* END: Header inclusions*/

/* START: MACRO definitions*/
#define N_ROWS 10
#define N_COLS 10
#define N_DIRECTIONS 4

#define UP 0
#define RIGHT 1
#define DOWN 2
#define LEFT 3
/* END: MACRO definitions*/

/* START: type definitions*/
typedef unsigned char Uint8;
/* END: type definitions*/

/* START: Variable declarations*/

/* END: Variable declarations*/

/* START: Function prototypes*/
void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);
/* END: Function prototypes*/

int main(void)
{
    /* START: MACRO definitions*/
    
    /* END: MACRO definitions*/

    /* START: type definitions*/
    /* END: type definitions*/

    /* START: Variable declarations*/
    char walk[N_ROWS][N_COLS];
    /* END: Variable declarations*/

    srand((unsigned) time(NULL));
    
    // Start the random walk
    generate_random_walk(walk);

    // Final state of the matrix
    print_array(walk);

    return 0;
}    // FUNCTION END: main

/**
 * function name: generate_random_walk
 * return type: void
 * return value description: 
 * parameters: char walk[10][10]
 * parameter 1 description: 
 * parameter 2 description: 
 * parameter 3 description: 
 * Function description: 
 */
void generate_random_walk(char walk[10][10])
{
    /* START: type definitions*/
    /* END: type definitions*/

    /* START: Variable declarations*/
    char c_alphabet;
    Uint8 u8_prematureTermination;

    Uint8 i, j, u8_directionNotAllowed[4] = {0}, u8_direction, u8_walkedOk;
    /* END: Variable declarations*/

    // initial state of the matrix
    for(i = 0; i < N_ROWS; i++)
    {
        for(j = 0; j < N_COLS; j++)
        {
            walk[i][j] = '.';
        }
    }

    c_alphabet = 'A';
    walk[0][0] = c_alphabet++;

    i = j = 0;
    u8_prematureTermination = 4;
    // Walking
    while(c_alphabet <= 'Z')
    {
        u8_direction = rand() % N_DIRECTIONS;

        u8_walkedOk = 0;
        switch(u8_direction)
        {
            case UP:
                if((i > 0) && (walk[i - 1][j] == '.'))
                {
                    i = i - 1;
                    walk[i][j] = c_alphabet++;
                    u8_walkedOk = 1;
                }    // if condition.
                else
                {
                    u8_directionNotAllowed[UP] = true;
                }
                break;
            case RIGHT:
                if((j < N_COLS - 1) && (walk[i][j + 1] == '.'))
                {
                    j = j + 1;
                    walk[i][j] = c_alphabet++;
                    u8_walkedOk = 1;
                }    // if condition.
                else
                {
                    u8_directionNotAllowed[RIGHT] = true;
                }
                break;
            case DOWN:
                if((i < N_ROWS - 1) && (walk[i + 1][j] == '.'))
                {
                    i = i + 1;
                    walk[i][j] = c_alphabet++;
                    u8_walkedOk = 1;
                }    // if condition.
                else
                {
                    u8_directionNotAllowed[DOWN] = true;
                }
                break;
            case LEFT:
                if((j > 0) && (walk[i][j - 1] == '.'))
                {
                    j = j - 1;
                    walk[i][j] = c_alphabet++;
                    u8_walkedOk = 1;
                }    // if condition.
                else
                {
                    u8_directionNotAllowed[LEFT] = true;
                }
                break;
            
        }    // switch direction

        if(u8_walkedOk)
        {
            for(Uint8 i = 0; i < N_DIRECTIONS; i++)
            {
                u8_directionNotAllowed[i] = 0;
            }
        }    // if condition

        // Check if all four directions are blocked.
        for(Uint8 i = 0; i < N_DIRECTIONS; i++)
        {
            u8_prematureTermination -= u8_directionNotAllowed[i];
        }    // for loop: u8_prematureTermination should be 0 before exiting the loop to consider as all directions blocked.

        if(!(u8_prematureTermination))
        {
            printf("Note: Premature termination...\n");
            break;
        }
        else
        {
            u8_prematureTermination = 4;
        }
    }    // while loop: recurse through to Z
}    // FUNCTION END: generate_random_walk

/**
 * function name: print_array
 * return type: 
 * return value description: 
 * parameters: char walk[10][10]
 * parameter 1 description: 
 * parameter 2 description: 
 * parameter 3 description: 
 * Function description: 
 */
void print_array(char walk[10][10])
{
    /* START: Variable declarations*/
    Uint8 i, j;
    /* END: Variable declarations*/
    for(i = 0; i < N_ROWS; i++)
    {
        for(j = 0; j < N_COLS; j++)
        {
            printf("%c ", walk[i][j]);
        }
        printf("\n");
    }
}    // FUNCTION END: print_array
