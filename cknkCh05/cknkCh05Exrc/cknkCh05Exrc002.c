/*
 * file: cknkCh05Exrc002.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int i = 0, j = 0, k = 0;

    // for (a)
    i = 10; j = 5;
    printf("(a) %d\n", (!i) < j);
    
    // for (b)
    i = 2; j = 1;
    printf("(b) %d\n", (!(!i)) + (!j));
    
    // for (c)
    i = 5; j = 0; k = -5;
    printf("(c) %d\n", i && j || k);
    
    // for (d)
    i = 1; j = 2; k = 3;
    printf("(d) %d\n", i < j || k);

    return 0;
}