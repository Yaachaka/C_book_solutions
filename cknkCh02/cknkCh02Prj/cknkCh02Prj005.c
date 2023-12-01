/**
 * File: cknkCh02Prj005.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int p = 0, x = 0;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    p = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;

    printf("Value of the given polynomial: %d\n", p);
    
    return 0;
}
