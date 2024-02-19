/**
 * file: cknkCh06Exrc011.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int i, sum;

    sum = 0;
    for (i = 0; i < 10;i++){
        if(i % 2)
            continue;
        sum += i;
    }
    printf("%d\n", sum);

    return 0;
}

