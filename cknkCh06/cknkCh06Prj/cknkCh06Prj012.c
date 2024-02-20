/**
 * file: cknkCh06Prj012.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    float e, f_epsilon_limit, f_epsilon;
    int i_factorial, i, j;

    printf("Enter the epsilon value (smallest term where you want to stop): ");
    scanf("%f", &f_epsilon_limit);

    e = 1.0;
    i_factorial = 1;

    for(i = 1; ; i++)
    {
        i_factorial *= i;
        f_epsilon = (1.00f / i_factorial);
        if(f_epsilon < f_epsilon_limit)
            break;
        e = e + f_epsilon;
    }

    printf("e = %.4f\n", e);

    return 0;
}
