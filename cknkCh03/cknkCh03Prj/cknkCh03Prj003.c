/*
 * file: cknkCh03Prj003.c
 * Purpose: Chapter 03 Programming project 03
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    // Variable Declaractions
    int i_gs1Prefix = 0, i_groupIdentifier = 0, i_publisherCode = 0, i_itemNumber = 0, i_checkDigit = 0;

    // Getting user input
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &i_gs1Prefix, &i_groupIdentifier, &i_publisherCode, &i_itemNumber, &i_checkDigit);

    // Printing the groups from received ISBN
    printf("GS1 prefix: %d\n", i_gs1Prefix);
    printf("Group identifer: %d\n", i_groupIdentifier);
    printf("Publisher code: %d\n", i_publisherCode);
    printf("Item number: %d\n", i_itemNumber);
    printf("Check digit: %d\n", i_checkDigit);
    
    return 0;
}