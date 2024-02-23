/**
 * file: cknkCh08Prj001.c
 * Author: Yaachaka
 */

#include <stdio.h>
#include <stdbool.h>

#define ARR_LENGTH 10

int main(void)
{
    bool digit_seen[ARR_LENGTH] = {false};
    int digit;
    long n;
    
    typedef unsigned char Uint8;
    
    Uint8 u8_nDigitsRepeated = 0;
    int i_repeatedDigits[ARR_LENGTH] = {0};

    printf("Enter a number: ");
    scanf("%ld", &n);

    while(n > 0)
    {
        digit = n % 10;
        if(digit_seen[digit])
        {
            u8_nDigitsRepeated++;
            i_repeatedDigits[digit] = 1;
        }    // if condition
        digit_seen[digit] = true;
        n /= 10;
    }   // while loop

    if(u8_nDigitsRepeated)
    {
        printf("Repeated digit(s):");
        for(int i = 0; i < ARR_LENGTH; i++)
        {
            if(i_repeatedDigits[i])
                printf(" %d", i);
        }    // for loop
        printf("\n");
    }    // if condition
    else
    {
        printf("No digits repeated\n");
    }    // else condition
    
    return 0;
}
