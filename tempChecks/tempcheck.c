/*
 * file: tempcheck.c
 * Purpose: This file is for temporary usage to clearify some doubts during the reading
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int a, b, c;

    a = 5;

    c = (b = a + 2) - (a = 1);

    printf("%d\n", c);

    return 0;
}