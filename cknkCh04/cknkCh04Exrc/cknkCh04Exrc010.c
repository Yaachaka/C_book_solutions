/* 
 * file: cknkCh04Exrc010.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int i, j, k;

    // Sub question (a)
    i = 6;
    j = i += i;
    printf("(a) i = %d j = %d\n", i, j);
    
    // Sub question (b)
    i = 5;
    j = (i -= 2) + 1;
    printf("(b) i = %d j = %d\n", i, j);
    
    // Sub question (c)
    i = 7;
    j = 6 + (i = 2.5);
    printf("(c) i = %d j = %d\n", i, j);
    
    // Sub question (d)
    i = 2; j = 8;
    j = (i = 6) + (j = 3);
    printf("(d) i = %d j = %d\n", i, j);
    
    return 0;
}