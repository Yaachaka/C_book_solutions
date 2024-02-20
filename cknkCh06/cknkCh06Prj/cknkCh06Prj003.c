/**
 * file: cknkCh06Prj003.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int n, m, r, i_numerator, i_denominator;

    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);

    i_numerator = m;
    i_denominator = n;

    while(n > 0)
    {
        r = m % n;
        m = n;
        n = r;
    }

    i_numerator /= m;
    i_denominator /= m;

    printf("In lowest terms: %d/%d\n", i_numerator, i_denominator);

    return 0;
}
