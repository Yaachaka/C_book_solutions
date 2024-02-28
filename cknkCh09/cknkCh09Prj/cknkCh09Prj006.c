/**
 * file: cknkCh09Prj006.c
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
int polynomial(int x);
int power1(int x, int n);
/* END: Function prototypes*/

int main(void)
{
    /* START: MACRO definitions*/
    
    /* END: MACRO definitions*/

    /* START: type definitions*/
    
    /* END: type definitions*/

    /* START: Variable declarations*/
    int x, value;
    /* END: Variable declarations*/

    // Get the value of x
    printf("Enter the value of x; ");
    scanf("%d", &x);

    // function call: compute the polynomial value
    value = polynomial(x);

    // print the polynomial value
    printf("The value of the given polynomial when x = %d is %d.\n", x, value);

    return 0;
}

/**
 * function name: polynomial
 * return type: 
 * return value description: 
 * parameters: 
 * parameter 1 description: 
 * parameter 2 description: 
 * parameter 3 description: 
 * Function description: 
 */
int polynomial(int x)
{
    return (3 * power1(x, 5) + 2 * power1(x, 4) - 5 * power1(x, 3) - 1 * power1(x, 2) + 7 * power1(x, 1) - 6 * power1(x, 0));
}    // FUNCTION END: polynomial

/**
 * function name: power1
 * return type: 
 * return value description: 
 * parameters: 
 * parameter 1 description: 
 * parameter 2 description: 
 * parameter 3 description: 
 * Function description: 
 */
int power1(int x, int n)
{
    int powered = 1;
    for(int i = 0; i < n; i++)
    {
        powered *= x;
    }    // for loop
    return powered;
}    // FUNCTION END: power1