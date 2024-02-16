/*
 * file: cknkCh04Prj001.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int i_twoDigitNumber = 0, i_reversal = 0;

    // Read the two digit number
    printf("Enter a two-digit number: ");
    scanf("%2d", &i_twoDigitNumber);

    // Reversing and printing
    i_reversal = ((i_twoDigitNumber % 10) * 10) + (i_twoDigitNumber / 10);
    printf("The reversal is: %2.2d\n", i_reversal);
    

    return 0;
}