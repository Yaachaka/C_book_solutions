/********************************************************************************
 * File: cknkCh10Prj007.c
 * Author: Yaachaka
 * Purpose: NA
 ********************************************************************************/

/* START: Header inclusions*/
#include <stdio.h>
/* END: Header inclusions*/

/* START: MACRO definitions*/
#define MAX_DIGITS 10
#define CHAR_LEN_PER_DIGIT 4
/* END: MACRO definitions*/

/* START: type definitions*/

/* END: type definitions*/

/* START: Variable declarations*/
int i_n_digits_read;

const int segments[10][7] = {
   //0, 1, 2, 3, 4, 5, 6
    {1, 1, 1, 1, 1, 1, 0},    // 0
    {0, 1, 1, 0, 0, 0, 0},    // 1
    {1, 1, 0, 1, 1, 0, 1},    // 2
    {1, 1, 1, 1, 0, 0, 1},    // 3
    {0, 1, 1, 0, 0, 1, 1},    // 4
    {1, 0, 1, 1, 0, 1, 1},    // 5
    {1, 0, 1, 1, 1, 1, 1},    // 6
    {1, 1, 1, 0, 0, 0, 0},    // 7
    {1, 1, 1, 1, 1, 1, 1},    // 8
    {1, 1, 1, 1, 0, 1, 1},    // 9
    };

char digits[CHAR_LEN_PER_DIGIT][MAX_DIGITS * 4];
/* END: Variable declarations*/

/* START: Function prototypes*/
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);
/* END: Function prototypes*/

/**
 * Function name: main
 * Return type: int
 * Return value description: 
 * Parameters: void
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: 
 */
int main(void)
{
    char ch;
    int digit;

    clear_digits_array();
    printf("Enter a number: ");

    while((ch = getchar()) != '\n' && i_n_digits_read < MAX_DIGITS)
    {
        if(ch >= '0' && ch <= '9')
        {
            digit = ch - '0';
            process_digit(digit, i_n_digits_read);
            i_n_digits_read++;
        }	// if condition: is a digit
    }

    print_digits_array();
    
    printf("\n");
    return 0;
}	//FUNCTION END: main

/**
 * Function name: clear_digits_array
 * Return type: void
 * Return value description: 
 * Parameters: void
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: Store blank characters into all elements of the 'digits' array.
 */
void clear_digits_array(void)
{
    int i, j;

    for(i = 0; i < CHAR_LEN_PER_DIGIT; i++)
    {
        for(j = 0; j < MAX_DIGITS * 4; j++)
        {
            digits[i][j] = ' ';
        }	// for statement: 
    }	// for statement: 
}	// FUNCTION END: clear_digits_array

/**
 * Function name: process_digit
 * Return type: void
 * Return value description: 
 * Parameters: int digit, int position
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: Store the seven segment representation of the digit into a specified position in the 'digits' array (position range from 0 to 'MAX_DIGITS - 1').
 */
void process_digit(int digit, int position)
{
    int i, j;

    j = position * 3;
    for(i = 0; i < 7; i++)
    {
        if(segments[digit][i])
        {    
            switch(i)
            {
                case 0:
                    digits[0][j + 1] = '_';
                    break;
                case 1:
                    digits[1][j + 2] = '|';
                    break;
                case 2:
                    digits[2][j + 2] = '|';
                    break;
                case 3:
                    digits[3][j + 1] = '_';
                    break;
                case 4:
                    digits[2][j] = '|';
                    break;
                case 5:
                    digits[1][j] = '|';
                    break;
                case 6:
                    digits[1][j + 1] = '_';
                    break;
                default:
                    /* Do Nothing */
                    break;
                
            }	// switch statement: segment selection
        }	// if condition: segment exists in digit
    }	// for statement: 
}	// FUNCTION END: process_digit

/**
 * Function name: print_digits_array
 * Return type: void
 * Return value description: 
 * Parameters: void
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: Displays the rows of the 'digits' array, each on a single line, producing output.
 */
void print_digits_array(void)
{
    int i, j, k;

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < (i_n_digits_read * 3); j++)
        {
            printf("%c", digits[i][j]);
        }	// for statement:  
        printf("\n");
    }	// for statement: 
}	// FUNCTION END: print_digits_array