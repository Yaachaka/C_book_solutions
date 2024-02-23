/**
 * file: cknkCh08Prj002.c
 * Author: Yaachaka
 */

#include <stdio.h>
#include <stdbool.h>

#define ARR_LENGTH 10

int main(void)
{
    int digit;
    long n;
    
    int i_DigitOccurences[ARR_LENGTH] = {0};

    printf("Enter a number: ");
    scanf("%ld", &n);

    // Capturing repetitions
    while(n > 0)
    {
        digit = n % 10;
        i_DigitOccurences[digit]++;
        n /= 10;
    }   // while loop

    // Printing the captures
    printf("Digit:        0  1  2  3  4  5  6  7  8  9\n");
    printf("Occurrences:");
    for(int i = 0; i < ARR_LENGTH; i++)
    {
        printf("  %d", i_DigitOccurences[i]);
    }    // for loop
    printf("\n");
    
    return 0;
}
