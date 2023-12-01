/**
 * File: cknkCh02Prj006.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int p = 0, x = 0;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    p = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6; // Horner's Rule

    printf("Value of the given polynomial: %d\n", p);
    
    return 0;
}
