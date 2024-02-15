/*
 * file: cknkCh03Prj004.c
 * Purpose: Chpater 03 Programming project 4
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    // Variable initialization
    int i_telephoneNumberPart1 = 0, i_telephoneNumberPart2 = 0, i_telephoneNumberPart3 = 0;
    
    // Getting user input
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &i_telephoneNumberPart1, &i_telephoneNumberPart2, &i_telephoneNumberPart3);

    // Printing the telephone number back to screen
    printf("You entered %d.%d.%d\n", i_telephoneNumberPart1, i_telephoneNumberPart2, i_telephoneNumberPart3);

    return 0;
}