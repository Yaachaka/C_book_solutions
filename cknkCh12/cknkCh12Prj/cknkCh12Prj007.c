/********************************************************************************
 * File: cknkCh12Proj007.c
 * Author: Yaachaka
 * Purpose: Finds the largest and smallest elememts in an array (Using pointers)
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
void max_min(const int *a, int n, int *max, int *min);
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
    int b[N], i, big, small;

    printf("Enter %d numbers: ", N);
    for(i = 0; i < N; i++)
    {
        scanf("%d", &b[i]);
    }	// for statement: 
    
    max_min(b, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    printf("\n");
    return 0;
}	//FUNCTION END: main

/**
 * Function name: max_min
 * Return type: void
 * Return value description: 
 * Parameters: int a[], int n, int *max, int *min
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: Find the max and min values.
 */
void max_min(const int *a, int n, int *max, int *min)
{
    int i;
    const int *p = a;
    *max = *min = *p;
    
    for(p = a + 1; p < a + n; p++)
    {
        if(*p > *max)
        {
            *max = *p;
        }	// if condition: 
        else if(*p < *min)
        {
            *min = *p;
        }	// else-if condition: 
    }	// for statement: recurse throught the array to find the max and min values
}	// FUNCTION END: max_min