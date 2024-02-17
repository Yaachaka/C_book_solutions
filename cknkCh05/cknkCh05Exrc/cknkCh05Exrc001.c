/*
 * file: cknkCh05Exrc001.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int i, j, k;

    // for (a)
    i = 2; j = 3;
    k = i * j == 6;
    printf("(a) %d\n", k);
    
    // for (b)
    i = 5; j = 10; k = 1;
    printf("(b) %d\n", k > i < j);
    
    // for (c)
    i = 3; j = 2; k = 1;
    printf("(c) %d\n", i < j == j < k);
    
    // for (d)
    i = 3; j = 4; k = 5;
    printf("(d) %d\n", i % j + i < k);

    return 0;
}