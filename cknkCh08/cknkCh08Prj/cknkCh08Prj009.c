/**
 * file: cknkCh08Prj009.c
 * Author: Yaachaka
 */

#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

#define N_ROWS 10
#define N_COLS 10
#define N_DIRECTIONS 4

#define UP 0
#define RIGHT 1
#define DOWN 2
#define LEFT 3

int main(void)
{
    typedef unsigned char Uint8;

    char c_alphabet;
    char c_randomWalk[N_ROWS][N_COLS];
    Uint8 u8_prematureTermination;

    Uint8 i, j, u8_directionNotAllowed[4] = {0}, u8_direction, u8_walkedOk;

    srand((unsigned) time(NULL));
    
    // initial state of the matrix
    for(i = 0; i < N_ROWS; i++)
    {
        for(j = 0; j < N_COLS; j++)
        {
            c_randomWalk[i][j] = '.';
        }
    }

    c_alphabet = 'A';
    c_randomWalk[0][0] = c_alphabet++;

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
                if((i > 0) && (c_randomWalk[i - 1][j] == '.'))
                {
                    i = i - 1;
                    c_randomWalk[i][j] = c_alphabet++;
                    u8_walkedOk = 1;
                }    // if condition.
                else
                {
                    u8_directionNotAllowed[UP] = true;
                }
                break;
            case RIGHT:
                if((j < N_COLS - 1) && (c_randomWalk[i][j + 1] == '.'))
                {
                    j = j + 1;
                    c_randomWalk[i][j] = c_alphabet++;
                    u8_walkedOk = 1;
                }    // if condition.
                else
                {
                    u8_directionNotAllowed[RIGHT] = true;
                }
                break;
            case DOWN:
                if((i < N_ROWS - 1) && (c_randomWalk[i + 1][j] == '.'))
                {
                    i = i + 1;
                    c_randomWalk[i][j] = c_alphabet++;
                    u8_walkedOk = 1;
                }    // if condition.
                else
                {
                    u8_directionNotAllowed[DOWN] = true;
                }
                break;
            case LEFT:
                if((j > 0) && (c_randomWalk[i][j - 1] == '.'))
                {
                    j = j - 1;
                    c_randomWalk[i][j] = c_alphabet++;
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

    // Final state of the matrix
    for(i = 0; i < N_ROWS; i++)
    {
        for(j = 0; j < N_COLS; j++)
        {
            printf("%c ", c_randomWalk[i][j]);
        }
        printf("\n");
    }

    return 0;
}
