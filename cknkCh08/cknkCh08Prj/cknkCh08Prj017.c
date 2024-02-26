/**
 * file: cknkCh08Prj017.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    /* START: MACRO definitions*/
    
    /* END: MACRO definitions*/

    /* START: type definitions*/
    typedef unsigned char Uint8;
    /* END: type definitions*/

    /* START: Variable declarations*/
    Uint8 i, j, i_prev, j_prev;
    short s_sizeSquared, s_step, s_sizeOfMagicSquare;
    /* END: Variable declarations*/

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    // Getting user input
    printf("Enter size of magic square: ");
    scanf("%hd", &s_sizeOfMagicSquare);

    short s_magicSquare[s_sizeOfMagicSquare][s_sizeOfMagicSquare];

    // Preparation
    for(i = 0; i < s_sizeOfMagicSquare; i++)
    {
        for(j = 0; j < s_sizeOfMagicSquare; j++)
        {
            s_magicSquare[i][j] = 0;
        }    // for loop
    }    // for loop
    i = 0;
    j = s_sizeOfMagicSquare / 2;
    s_sizeSquared = (short) s_sizeOfMagicSquare * s_sizeOfMagicSquare;
    s_step = 1;

    // Starting filling the magic square
    s_magicSquare[i][j] = s_step++;
    while(s_step <= s_sizeSquared)
    {
        i_prev = i;
        j_prev = j;

        // prepare to go up
        if(i == 0)
        {
            i = s_sizeOfMagicSquare - 1;
        }    // if statement
        else
        {
            i--;
        }    // else statement
        // prepare to go right
        if(j == s_sizeOfMagicSquare - 1)
        {
            j = 0;
        }    // if statement
        else
        {
            j++;
        }    // else statement

        if(s_magicSquare[i][j] != 0)
        {
            i = i_prev;
            j = j_prev;

            // prepare to go down
            if(i == s_sizeOfMagicSquare - 1)
            {
                i = 0;
            }    // if condition
            else
            {
                i++;
            }    // else statement
        }    // if condition: if the place is empty
        s_magicSquare[i][j] = s_step++;

    }    // while loop: Filling the magic square

    // Printing the magic square
    for(i = 0; i < s_sizeOfMagicSquare; i++)
    {
        for(j = 0; j < s_sizeOfMagicSquare; j++)
        {
            printf("%4d ", s_magicSquare[i][j]);
        }    // for loop
        printf("\n");
    }    // for loop

    return 0;
}
