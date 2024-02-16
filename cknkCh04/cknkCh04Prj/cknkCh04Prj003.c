/*
 * file: cknkCh04Prj003.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int i1, i2, i3;

    // Read the three digit number
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &i1, &i2, &i3);
    
    // Reversing and printing
    printf("The reversal is: %1.1d%1.1d%1.1d\n", i3, i2, i1);

    return 0;
}