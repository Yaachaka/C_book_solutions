/**
 * file: cknkCh09Prj005.c
 * Author: Yaachaka
 */

/* START: Header inclusions*/
#include <stdio.h>

/* END: Header inclusions*/

/* START: MACRO definitions*/

/* END: MACRO definitions*/

/* START: type definitions*/
typedef unsigned char Uint8;
/* END: type definitions*/

/* START: Variable declarations*/

/* END: Variable declarations*/

/* START: Function prototypes*/
void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);
/* END: Function prototypes*/

int main(void)
{
    /* START: MACRO definitions*/
    
    /* END: MACRO definitions*/

    /* START: type definitions*/
    
    /* END: type definitions*/

    /* START: Variable declarations*/
    int n;
    /* END: Variable declarations*/

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    // Getting user input
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    char magic_square[n][n];

    // Start creting the magic square
    create_magic_square(n, magic_square);

    // Printing the magic square
    print_magic_square(n, magic_square);

    return 0;
}    // FUNCTION END: main

/**
 * function name: create_magic_square
 * return type: 
 * return value description: 
 * parameters: 
 * parameter 1 description: 
 * parameter 2 description: 
 * parameter 3 description: 
 * Function description: 
 */
void create_magic_square(int n, char magic_square[n][n])
{
    /* START: Variable declarations*/
    Uint8 i, j, i_prev, j_prev;
    short s_sizeSquared, s_step;
    /* END: Variable declarations*/

    // Preparation
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            magic_square[i][j] = 0;
        }    // for loop
    }    // for loop
    i = 0;
    j = n / 2;
    s_sizeSquared = (short) n * n;
    s_step = 1;

    // Starting filling the magic square
    magic_square[i][j] = s_step++;
    while(s_step <= s_sizeSquared)
    {
        i_prev = i;
        j_prev = j;

        // prepare to go up
        if(i == 0)
        {
            i = n - 1;
        }    // if statement
        else
        {
            i--;
        }    // else statement
        // prepare to go right
        if(j == n - 1)
        {
            j = 0;
        }    // if statement
        else
        {
            j++;
        }    // else statement

        if(magic_square[i][j] != 0)
        {
            i = i_prev;
            j = j_prev;

            // prepare to go down
            if(i == n - 1)
            {
                i = 0;
            }    // if condition
            else
            {
                i++;
            }    // else statement
        }    // if condition: if the place is empty
        magic_square[i][j] = s_step++;

    }    // while loop: Filling the magic square
}    // FUNCTION END: create_magic_square

/**
 * function name: print_magic_square
 * return type: 
 * return value description: 
 * parameters: 
 * parameter 1 description: 
 * parameter 2 description: 
 * parameter 3 description: 
 * Function description: 
 */
void print_magic_square(int n, char magic_square[n][n])
{
    /* START: Variable declarations*/
    Uint8 i, j;
    /* END: Variable declarations*/

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%4d ", magic_square[i][j]);
        }    // for loop
        printf("\n");
    }    // for loop
}    // FUNCTION END: print_magic_square