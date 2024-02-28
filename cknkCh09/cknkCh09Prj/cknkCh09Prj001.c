/**
 * file: cknkCh09Prj001.c
 * Author: Yaachaka
 */

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
void getArrayElements(int a[], int n);
void selection_sort(int a[], int n);
void printArrayElements(int a[], int n);
/* END: Function prototypes*/

int main(void)
{
    /* START: MACRO definitions*/
    
    /* END: MACRO definitions*/

    /* START: type definitions*/
    
    /* END: type definitions*/

    /* START: Variable declarations*/
    int i_nNumbers;
    /* END: Variable declarations*/

    // Getting the user input
    printf("How many numbers to sort?: ");
    scanf("%d", &i_nNumbers);

    int i_numbers[i_nNumbers];

    // Get the numbers to sort
    printf("Enter the numbers to sort: ");
    getArrayElements(i_numbers, i_nNumbers);

    // Start sorting
    selection_sort(i_numbers, i_nNumbers);

    // Print the sorted array
    printf("Sorted numbers: ");
    printArrayElements(i_numbers, i_nNumbers);

    printf("\n");
    return 0;
}    // FUNCTION END: main

/**
 * function name: selection_sort
 * return type: void
 * parameters: int a[], int n
 * parameter 1 description: int a[]: array containing the elements that will get sorted in ascending order.
 * parameter 2 description: int n: number of elements from the array that will be sorted.
 * Function description: To sort the array elements using selection sort algorithm. Recursive function implementation.
 */
void selection_sort(int a[], int n)
{
    int i_last, i_temp, i;
    
    // printf("Value of n: %d", n);    // DEBUG CODE
    if(n <= 1)
        return;

    i_last = n - 1;
    for(i = 0; i < n - 1; i++)
    {
        if(a[i_last] < a[i])
        {
            i_temp = a[i_last];
            a[i_last] = a[i];
            a[i] = i_temp;
        }    // if condition
    }    // for loop
    selection_sort(a, --n);    // recursive call
}    // FUNCTION END: selection_sort

/**
 * function name: getArrayElements
 * return type: void
 * parameters: int a[], int n
 * parameter 1 description: int a[]: array to store the elements obtained
 * parameter 2 description: int n: number of elements to get
 * Function description: get n number of elements from the user and store them in the array.
 */
void getArrayElements(int a[], int n)
{
    int i;
    
    // printf("Value of n: %d", n);    // DEBUG CODE
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }    // for loop
}    // FUNCTION END: getArrayElements

/**
 * function name: printArrayElements
 * return type: void
 * parameters: int a[], int n
 * parameter 1 description: int a[]: array with elements to print
 * parameter 2 description: int n: number of elements to print
 * Function description: print n number of elements from the array.
 */
void printArrayElements(int a[], int n)
{
    int i;
    
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }    // for loop
}    // FUNCTION END: printArrayElements