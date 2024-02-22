/**
 * file: cknkCh07Prj014.c
 * Author: Yaachaka
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y, d_division, d_average, d_fabsDiff;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    d_average = 1.00;

    do
    {
        y = d_average;
        d_division = x / y;
        d_average = (y + d_division) / 2;
    }while((fabs(d_average - y)) > (0.00001 * y));    // do loop

    printf("Square root: %lf\n", d_average);

    return 0;
}
