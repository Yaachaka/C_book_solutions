/*
 * file: cknkCh04Exrc011.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int i, j, k;

    // For (a)
    i = 1;
    printf("(a) %d ", i++ - 1);
    printf("%d\n", i);
    
    // For (b)
    i = 10; j = 5;
    printf("(b) %d ", i++ - ++j);
    printf("%d %d\n", i, j);
    
    // For (c)
    i = 7; j = 8;
    printf("(c) %d ", i++ - --j);
    printf("%d %d\n", i, j);
    
    // For (d)
    i = 3; j = 4; k = 5;
    printf("(d) %d ", i++ - j++ + --k);
    printf("%d %d %d\n", i, j, k);

    return 0;
}