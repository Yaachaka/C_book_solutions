/**
 * file: cknkCh05Prj006.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{

    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, i_checkDigit, first_sum, second_sum, total, i_checkDigitCalculated;

    printf("Enter the UPC number (12 digits): ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &i_checkDigit);
    
    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    i_checkDigitCalculated = 9 - ((total - 1) % 10);
    if(i_checkDigit == i_checkDigitCalculated)
    {
        printf("UPC is VALID\n");
    }
    else
    {
        printf("UPC is NOT_VALID\n");
    }

    return 0;
}

