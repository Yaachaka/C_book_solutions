/********************************************************************************
 * File: cknkCh13Exrc004c.c
 * Author: Yaachaka
 * Purpose: read_line function modification to stop reading at the first new-line character, then store the new-line character in the string.
 ********************************************************************************/

/* START: Header inclusions*/
#include <stdio.h>
/* END: Header inclusions*/

/* START: MACRO definitions*/
#define STR_LEN 60    /* max length of string */
/* END: MACRO definitions*/

/* START: type definitions*/

/* END: type definitions*/

/* START: Variable declarations*/

/* END: Variable declarations*/

/* START: Function prototypes*/
int read_line(char str[], int n);
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
    char str1[STR_LEN + 1];

    printf("Enter your message: ");
    read_line(str1, STR_LEN);

    printf("The message that got stored: ");
    printf("%s\n", str1);
    
    printf("----------------------\n");
    printf("\n");
    return 0;
}	//FUNCTION END: main

/**
 * Function name: read_line
 * Return type: int
 * Return value description: 
 * Parameters: char str[], int n
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: Get the the string from the user. Similar implementation to scanf.
 */
int read_line(char str[], int n)
{
    int ch, i = 0;

    while((ch = getchar()) != '\n')
    {
        if(i < n)
        {
            str[i++] = ch;
        }	// if condition: number of characters is less than the maximum number of characters allowed
        str[i] = '\0';
    }	// while statement: Get the characters until and excluding new-line character.
    str[i++] = '\n';
    
    return i;
}	// FUNCTION END: read_line