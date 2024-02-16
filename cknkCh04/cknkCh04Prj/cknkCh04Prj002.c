/*
 * file: cknkCh04Prj002.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int i_threeDigitNumber = 0, i_reversal = 0;

    // Read the three digit number
    printf("Enter a three-digit number: ");
    scanf("%3d", &i_threeDigitNumber);

    // Reversing and printing
    i_reversal = ((i_threeDigitNumber % 10) * 100);
    i_threeDigitNumber = i_threeDigitNumber / 10;
    i_reversal = i_reversal + ((i_threeDigitNumber % 10) * 10);
    i_reversal = i_reversal + i_threeDigitNumber / 10;
    printf("The reversal is: %3.3d\n", i_reversal);
    

    return 0;
}