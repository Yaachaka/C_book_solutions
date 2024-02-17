/**
 * file: cknkCh05Prj001.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int i_nDigits = 0, i_number = 0;

    printf("Enter a number (max. digits: 4): ");
    scanf("%4d", &i_number);

    if (i_number < 10)
    {
        i_nDigits = 1;
    }
    else if(i_number < 100)
    {
        i_nDigits = 2;
    }
    else if(i_number < 1000)
    {
        i_nDigits = 3;
    }
    else
    {
        i_nDigits = 4;
    }

    printf("The number %d has %d digits.\n", i_number, i_nDigits);
    return 0;
}

