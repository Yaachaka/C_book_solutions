/**
 * file: cknkCh06Exrc002.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int i = 9384;
    do {
        printf("%d ", i);
        i /= 10;
    } while (i > 0);

    return 0;
}

