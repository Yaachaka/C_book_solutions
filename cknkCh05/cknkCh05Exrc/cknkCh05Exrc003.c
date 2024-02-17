/*
 * file: cknkCh05Exrc003.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int i = 0, j = 0, k = 0;

    // for (a)
    i = 3; j = 4; k = 5;
    printf("(a) %d ", i < j || ++j < k);
    printf("%d %d %d\n", i, j, k);
    
    // for (b)
    i = 7; j = 8; k = 9;
    printf("(b) %d ", i - 7 && j++ < k);
    printf("%d %d %d\n", i, j, k);
    
    // for (c)
    i = 7; j = 8; k = 9;
    printf("(c) %d ", (i = j) || (j = k));
    printf("%d %d %d\n", i, j, k);
    
    // for (d)
    i = 1; j = 1; k = 1;
    printf("(d) %d ", ++i || ++j && ++k);
    printf("%d %d %d\n", i, j, k);

    return 0;
}