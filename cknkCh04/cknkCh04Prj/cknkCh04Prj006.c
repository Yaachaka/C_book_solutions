/*
 * file: cknkCh04Prj006.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, j6, first_sum, second_sum, total;

    // Get first 12 digits of EAN from user
    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &j6);
    
    // Add the second, fourth, sixth, eight, tenth, and twelfth digits.
    first_sum = i1 + i3 + i5 + j2 + j4 + j6;
    // Add the first, third, fifth, seventh, ninth, and eleventh digits.
    second_sum = d + i2 + i4 + j1 + j3 + j5;
    // Multiply the first sum by 3 and add it to the second sum.
    total = 3 * first_sum + second_sum;

    // Subtract 1 from the total.
    // Compute the remainder when the adjusted total is divided by 10.
    // Subtract the remainder from 9.
    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}