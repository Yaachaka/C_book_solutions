/********************************************************************************
 * File: cknkCh12Prj001a.c
 * Author: Yaachaka
 * Purpose: Reversal of a message.
 ********************************************************************************/

/* START: Header inclusions*/
#include <stdio.h>
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
    char message[N], ch;
    int i_nChars = 0;

    printf("Enter a message: ");
    while((ch = getchar()) != '\n' && i_nChars < N)
    {
        message[i_nChars++] = ch;
    }	// while statement: Getting the message

    printf("Reversal is: ");
    while(i_nChars >= 0)
    {
        printf("%c", message[--i_nChars]);
    }
    
    printf("\n");
    return 0;
}	//FUNCTION END: main