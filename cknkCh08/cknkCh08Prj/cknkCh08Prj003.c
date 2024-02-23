/**
 * file: cknkCh08Prj003.c
 * Author: Yaachaka
 */

#include <stdio.h>
#include <stdbool.h>

#define ARR_LENGTH 10

int main(void)
{
    bool digit_seen[10] = {false};
    int digit;
    long n, i_number;

    do
    {
        printf("\nEnter a number: ");
        scanf("%ld", &i_number);
        if(i_number < 1)
            break;
        n = i_number;
        while(n > 0)
        {
            digit = n % 10;
            if(digit_seen[digit])
                break;
            digit_seen[digit] = true;
            n /= 10;
        }

        if(n > 0)
            printf("Repeated digits present");
        else
            printf("No repeated digits present");
         printf(" in the number %ld\n", i_number);
    }while(i_number > 0);

    return 0;
}
