/* 
 * file: cknkCh04Exrc009.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int i, j, k;

    // Sub question (a)
    i = 7; j = 8;
    i *= j + 1;
    printf("(a) i = %d j = %d\n", i, j);
    
    // Sub question (b)
    i = j = k = 1;
    i += j += k;
    printf("(b) i = %d j = %d k = %d\n", i, j, k);
    
    // Sub question (c)
    i = 1; j = 2; k = 3;
    i -= j -= k;
    printf("(c) i = %d j = %d k = %d\n", i, j, k);
    
    // Sub question (d)
    i = 2; j = 1; k = 0;
    i *= j *= k;
    printf("(d) i = %d j = %d k = %d\n", i, j, k);

    return 0;
}