/**
 * file: cknkCh06Prj006.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int n, i_squared;

    // Get a number from the user
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    // print the even squares between 1 and n
    i_squared = 4;
    for(int i = 3; i_squared <= n; i++)
    {
        if(!(i_squared % 2))
            printf("%d\n", i_squared);
        i_squared = i * i;
    }

    return 0;
}
