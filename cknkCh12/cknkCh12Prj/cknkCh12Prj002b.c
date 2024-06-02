/********************************************************************************
 * File: cknkCh12Prj002b.c
 * Author: Yaachaka
 * Purpose: Check if the input statement is a palindrome. (Using Arrays and pointers to walk through the array)
 ********************************************************************************/

/* START: Header inclusions*/
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
/* END: Header inclusions*/

/* START: MACRO definitions*/
#define N 30
/* END: MACRO definitions*/

/* START: type definitions*/

/* END: type definitions*/

/* START: Variable declarations*/

/* END: Variable declarations*/

/* START: Function prototypes*/

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
    bool b_palindrome = false;
    char message[N], *ch_p1, *ch_p2;
    
    ch_p1 = message;
    printf("Enter a message: ");
    
    while(ch_p1 < message + N && (*ch_p1 = tolower(getchar())) != '\n')
    {
        if(*ch_p1 >= 'a' && *ch_p1 <= 'z')
        {
            ch_p1++;
        }	// if condition: the character is an alphabet
    }    // while loop: get the message

    // Check if palindrome
    ch_p1--;
    ch_p2 = message;
    b_palindrome = true;
    while(ch_p2 < ch_p1)
    {
        if(*ch_p1 != *ch_p2)
        {
            b_palindrome = false;
            break;
        }    // if condition: charaters not matching
        ch_p2++;
        ch_p1--;
    }    // while loop: 

    // Result
    if(!b_palindrome)
    {
        printf("Not a ");    
    }	// if condition: 
    
    printf("Palindrome\n");

    printf("\n");
    return 0;
}	//FUNCTION END: main