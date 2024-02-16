/*
 * file: cknkCh04Prj004.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int i_DecimalNumber = 0, i_octalNumber = 0;
    
    // Get the integer from user
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &i_DecimalNumber);

    // Conversion and printing
    i_octalNumber = (i_DecimalNumber % 8);
    i_DecimalNumber = i_DecimalNumber / 8;
    i_octalNumber = i_octalNumber + (i_DecimalNumber % 8) * 10;
    i_DecimalNumber = i_DecimalNumber / 8;
    i_octalNumber = i_octalNumber + (i_DecimalNumber % 8) * 100;
    i_DecimalNumber = i_DecimalNumber / 8;
    i_octalNumber = i_octalNumber + (i_DecimalNumber % 8) * 1000;
    i_DecimalNumber = i_DecimalNumber / 8;
    i_octalNumber = i_octalNumber + (i_DecimalNumber % 8) * 10000;
    
    printf("In octal, your number is: %5.5d\n", i_octalNumber);

    return 0;
}