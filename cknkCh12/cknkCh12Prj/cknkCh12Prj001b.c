/********************************************************************************
 * File: cknkCh12Prj001b.c
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
    char message[N], ch, *ch_p;
    int i_nChars = 0;

    ch_p = message;

    printf("Enter a message: ");
    while(ch_p < (message + N) && (*ch_p++ = getchar()) != '\n')
    {
        ;
    }	// while statement: Getting the message

    --ch_p;
    printf("Reversal is: ");
    while(--ch_p >= message)
    {
        printf("%c", *ch_p);
    }
    
    printf("\n");
    return 0;
}	//FUNCTION END: main