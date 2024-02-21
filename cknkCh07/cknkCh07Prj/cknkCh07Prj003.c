/**
 * file: cknkCh07Prj003.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    double n, sum = 0;

    printf("This program sums a series of floating-point (double) numbers.\n");
    printf("Enter enter floating-point (double) numbers (0.000 to terminate): ");

    scanf("%lf", &n);
    while(n != 0.000)
    {
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sum is: %lf\n", sum);

    return 0;
}
