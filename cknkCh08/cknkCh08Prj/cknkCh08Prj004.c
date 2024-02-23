/**
 * file: cknkCh08Prj004.c
 * Author: Yaachaka
 */

#include <stdio.h>

#define N 10
#define ARRAY_LENGTH (int)(sizeof(a) / sizeof(a[0]))

int main(void)
{
    int a[N], i;

    printf("Enter %d numbers: ", ARRAY_LENGTH);
    for(i = 0; i < ARRAY_LENGTH; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("In reverse order:");
    for(i = ARRAY_LENGTH - 1; i >= 0; i--)
    {
        printf(" %d", a[i]);
    }
    printf("\n");
    
    return 0;
}