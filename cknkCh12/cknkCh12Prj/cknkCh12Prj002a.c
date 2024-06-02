/********************************************************************************
 * File: cknkCh12Prj002a.c
 * Author: Yaachaka
 * Purpose: Check if the input statement is a palindrome. (Using Arrays and integers)
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
    char message[N], ch;
    int i_nChars = 0, i_temp;

    printf("Enter a message: ");
    
    while(i_nChars < N && (ch = tolower(getchar())) != '\n')
    {
        if(ch >= 'a' && ch <= 'z')
        {
            message[i_nChars++] = ch;
        }	// if condition: the character is an alphabet
    }    // while loop: get the message

    // Check if palindrome
    i_nChars--;
    i_temp = 0;
    b_palindrome = true;
    while(i_temp < i_nChars)
    {
        if(message[i_temp] != message[i_nChars])
        {
            b_palindrome = false;
            break;
        }    // if condition: charaters not matching
        i_temp++;
        i_nChars--;
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