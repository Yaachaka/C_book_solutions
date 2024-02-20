/**
 * file: cknkCh06Prj005.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int i_number = 0, i_reversal = 0, i_remainder = 0;

    // Read the number
    printf("Enter an integer: ");
    scanf("%d", &i_number);

    // Reversing and printing
    i_reversal = 0;
    do
    {
        i_remainder = i_number % 10;
        i_reversal = (i_reversal * 10) + i_remainder;
        i_number /= 10;
    }while(i_number > 0);
    
    printf("The reversal is: %2.2d\n", i_reversal);

    return 0;
}
