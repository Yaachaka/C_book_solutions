/**
 * file: cknkCh06Prj011.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    float e;
    int i_factorial, i, j, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    e = 1.0;
    i_factorial = 1;

    for(i = 1; i <= n; i++)
    {
        i_factorial *= i;
        e = e + (1.00f / i_factorial);
    }

    printf("e = %.4f\n", e);

    return 0;
}
