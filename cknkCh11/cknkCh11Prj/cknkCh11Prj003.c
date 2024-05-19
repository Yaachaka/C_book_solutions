/********************************************************************************
 * File: cknkCh11Prj003.c
 * Author: Yaachaka
 * Purpose: NA
 ********************************************************************************/

/* START: Header inclusions*/
#include <stdio.h>
/* END: Header inclusions*/

/* START: MACRO definitions*/

/* END: MACRO definitions*/

/* START: type definitions*/

/* END: type definitions*/

/* START: Variable declarations*/

/* END: Variable declarations*/

/* START: Function prototypes*/
void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);
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
    int n, m, r, i_numerator, i_denominator;

    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);

    reduce(m, n, &i_numerator, &i_denominator);

    printf("In lowest terms: %d/%d\n", i_numerator, i_denominator);
    
    printf("\n");
    return 0;
}	//FUNCTION END: main

/**
 * Function name: reduce
 * Return type: void
 * Return value description: 
 * Parameters: int numerator, int denominator, int *reduced_numerator, int *reduced_denominator
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: Reduce the numerator and denominators
 */
void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int i_remainder;

    *reduced_numerator = numerator;
    *reduced_denominator = denominator;

    while(denominator > 0)
    {
        i_remainder = numerator % denominator;
        numerator = denominator;
        denominator = i_remainder;
    }

    *reduced_numerator /= numerator;
    *reduced_denominator /= numerator;

}	// FUNCTION END: reduce