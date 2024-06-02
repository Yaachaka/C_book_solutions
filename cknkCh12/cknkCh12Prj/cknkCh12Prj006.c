/********************************************************************************
 * File: cknkCh12Prj006.c
 * Author: Yaachaka
 * Purpose: qsort (using pointers)
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
void quicksort(int a[], int *low, int *high);
int* split(int a[], int *low, int *high);
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
    int a[N], i;
    printf("Enter %d numbers to be sorted: ", N);

    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);

    quicksort(a, a, a + N - 1);

    printf("In sorted order: ");
    for(i = 0; i < N; i++)
        printf("%d ", a[i]);
    
    printf("\n");
    return 0;
}	//FUNCTION END: main

/**
 * Function name: quicksort
 * Return type: void
 * Return value description: 
 * Parameters: int a[], int *low, int *high
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: sort an array
 */
void quicksort(int a[], int *low, int *high)
{
    int *middle;
    if(low >= high) return;
    middle = split(a, low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high) ;
}	// FUNCTION END: quicksort

/**
 * Function name: split
 * Return type: int*
 * Return value description: 
 * Parameters: int a[], int *low, int *high
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: split an array
 */
int* split(int a[], int *low, int *high)
{
    int part_element = *low;

    for(;;)
    {
        while(low < high && part_element <= *high )
        high--;
        if(low >= high) break;
        *low++ = *high;

        while(low < high && *low <= part_element)
            low++;

        if(low >= high) break;
        *high-- = *low;
    }

    *high = part_element;
    return high;
}	// FUNCTION END: split