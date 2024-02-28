/**
 * file: cknkCh09Prj007.c
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
int power(int x, int n);
/* END: Function prototypes*/

int main(void)
{
    /* START: MACRO definitions*/
    
    /* END: MACRO definitions*/

    /* START: type definitions*/
    
    /* END: type definitions*/

    /* START: Variable declarations*/
    int x, n;
    /* END: Variable declarations*/

    printf("This program computes the value for x raised to the power n\n");
    // User input: x and n
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Perform computation of x raised to n.
    printf("Value of x raised to n is %d\n", power(x, n));

    return 0;
}

/**
 * function name: power
 * return type: 
 * return value description: 
 * parameters: 
 * parameter 1 description: 
 * parameter 2 description: 
 * parameter 3 description: 
 * Function description: 
 */
int power(int x, int n)
{
    if(n == 0)
    {
        return 1;
    }    // if condition
    if(n == 1)
    {
        return x;
    }  // if condition

    if(n % 2)    // odd value of n
    {
        return (x * power(x, n-1));
    }    // if condition
    else    // even value of n
    {
        return (power(x, n / 2) * power(x, n / 2));
    }    // else condition
}    // FUNCTION END: power