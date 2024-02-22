/**
 * file: cknkCh07Prj015.c
 * Author: Yaachaka
 */

#include <stdio.h>
#include <limits.h>

int main(void)
{
    long i, n;
    short s_prevFactorial, s_currFactorial;
    int i_prevFactorial, i_currFactorial;
    long l_prevFactorial, l_currFactorial;

    long long ll_prevFactorial, ll_currFactorial, ll_factorial, ll_i;
    float f_prevFactorial, f_currFactorial, f_i;
    double d_prevFactorial, d_currFactorial, d_i;
    long double ld_prevFactorial, ld_currFactorial, ld_i;

    printf("This program is to compute the factorial of a given positive integer and also determine the largest value of n for which the computed factorial can be stored correctly in each basic types.\n\n");
    
    // Computing the factorial
    printf("Enter a positive integer: ");
    scanf("%ld", &n);

    ll_factorial = 1L;
    for(i = n; i > 1; i--)
    {
        ll_factorial = ll_factorial * i;
    }
    
    printf("Factorial of %ld: %Ld\n", n, ll_factorial);
    
    // Finding the limits

    /* Trying for short */
    printf("\nTesting for `short` type.\n");
    s_currFactorial = s_prevFactorial = 1;
    for(i = 2; ; i++)
    {
        s_currFactorial = s_currFactorial * i;
        
        if(s_currFactorial > s_prevFactorial)
        {
            s_prevFactorial = s_currFactorial;
        }    // if statement
        else
        {
            printf("Failed at n equal to %ld.\n", i);
            printf("Last successfull storage was at n = %ld with factorial value of %hd.\n", i-1, s_prevFactorial);
            break;
        }    // else statement
    }    // for loop: trying for short type.

    /* Trying for int */
    printf("\nTesting for `int` type.\n");
    i_currFactorial = i_prevFactorial = 1;
    for(i = 2; ; i++)
    {
        i_currFactorial = i_currFactorial * i;
        
        if(i_currFactorial > i_prevFactorial)
        {
            i_prevFactorial = i_currFactorial;
        }    // if statement
        else
        {
            printf("Failed at n equal to %ld.\n", i);
            printf("Last successfull storage was at n = %ld with factorial value of %d.\n", i-1, i_prevFactorial);
            break;
        }    // else statement
    }    // for loop: trying for int type.

    /* Trying for long */
    printf("\nTesting for `long` type.\n");
    l_currFactorial = l_prevFactorial = 1;
    for(i = 2; ; i++)
    {
        l_currFactorial = l_currFactorial * i;
        
        if(l_currFactorial > l_prevFactorial)
        {
            l_prevFactorial = l_currFactorial;
        }    // if statement
        else
        {
            printf("Failed at n equal to %ld.\n", i);
            printf("Last successfull storage was at n = %ld with factorial value of %ld.\n", i-1, l_prevFactorial);
            break;
        }    // else statement
    }    // for loop: trying for long type.

    /* Trying for long long */
    printf("\nTesting for `long long` type.\n");
    ll_currFactorial = ll_prevFactorial = 1L;
    for(ll_i = 2L; ; ll_i++)
    {
        ll_currFactorial = ll_currFactorial * ll_i;
        
        if(ll_currFactorial > ll_prevFactorial)
        {
            ll_prevFactorial = ll_currFactorial;
        }    // if statement
        else
        {
            printf("Failed at n equal to %lld.\n", ll_i);
            printf("Last successfull storage was at n = %lld with factorial value of %lld.\n", ll_i-1, ll_prevFactorial);
            break;
        }    // else statement
    }    // for loop: trying for long long type.

    /* Trying for float */
    printf("\nTesting for `float` type.\n");
    f_currFactorial = f_prevFactorial = 1L;
    for(f_i = 2L; ; f_i++)
    {
        f_currFactorial = f_currFactorial * f_i;
        if(f_i > 30)
            printf("n = %f; factorial value of %f.\n", f_i, f_currFactorial);
        if(f_currFactorial > f_prevFactorial)
        {
            f_prevFactorial = f_currFactorial;
        }    // if statement
        else
        {
            printf("Failed at n equal to %f.\n", f_i);
            printf("Last successfull storage was at n = %f with factorial value of %f.\n", f_i-1, f_prevFactorial);
            break;
        }    // else statement
    }    // for loop: trying for float type.

    /* Trying for double */
    printf("\nTesting for `double` type.\n");
    d_currFactorial = d_prevFactorial = 1L;
    for(d_i = 2L; ; d_i++)
    {
        d_currFactorial = d_currFactorial * d_i;
        if(d_i > 168)
            printf("n = %lf; factorial value of %lf.\n", d_i, d_currFactorial);
        if(d_currFactorial > d_prevFactorial)
        {
            d_prevFactorial = d_currFactorial;
        }    // if statement
        else
        {
            printf("Failed at n equal to %lf.\n", d_i);
            printf("Last successfull storage was at n = %lf with factorial value of %lf.\n", d_i-1, d_prevFactorial);
            break;
        }    // else statement
    }    // for loop: trying for double type.

    /* Trying for long double */
    printf("\nTesting for `long double` type.\n");
    ld_currFactorial = ld_prevFactorial = 1L;
    for(ld_i = 2L; ; ld_i++)
    {
        ld_currFactorial = ld_currFactorial * ld_i;
        if(ld_i > 1752)
            printf("n = %Lf; factorial value of %Lf.\n", ld_i, ld_currFactorial);
        if(ld_currFactorial > ld_prevFactorial)
        {
            ld_prevFactorial = ld_currFactorial;
        }    // if statement
        else
        {
            printf("Failed at n equal to %Lf.\n", ld_i);
            printf("Last successfull storage was at n = %Lf with factorial value of %Lf.\n", ld_i-1, ld_prevFactorial);
            break;
        }    // else statement
    }    // for loop: trying for long double type.

    return 0;
}
