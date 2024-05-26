/********************************************************************************
 * File: reverse3.c
 * Author: K. N. King
 * Purpose: Reverses a series of numbers (pointer version)
 ********************************************************************************/

/* START: Header inclusions*/
#include <stdio.h>
/* END: Header inclusions*/

/* START: MACRO definitions*/
#define N 10
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
    int a[N], *p;

    printf("Enter %d numbers: ", N);
    for(p = a; p < a + N; p++)
    {
        scanf("%d", p);
    }	// for statement: get the numbers

    printf("In reverse order: ");
    for(p = a + N - 1; p >= a; p--)
    {
        printf(" %d", *p);
    }	// for statement: print the numbers in reverse order
    
    printf("\n");
    return 0;
}	//FUNCTION END: main