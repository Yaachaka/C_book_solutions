/**
 * file: cknkCh05Prj005.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    float f_taxableIncome= 0.0f, f_taxDue = 0.0f;

    printf("Please enter your taxable income: $");
    scanf("%f", &f_taxableIncome);

    if(f_taxableIncome <= 750.00f)
    {
        f_taxDue = 0.01f * f_taxableIncome;
    }
    else if(f_taxableIncome <= 2250.00f)
    {
        f_taxDue = 7.50f + (0.02f * f_taxableIncome);
    }
    else if(f_taxableIncome <= 3750.00f)
    {
        f_taxDue = 37.50f + (0.03f * f_taxableIncome);
    }
    else if(f_taxableIncome <= 5250.00f)
    {
        f_taxDue = 82.50f + (0.04f * f_taxableIncome);
    }
    else if(f_taxableIncome <= 7000.00f)
    {
        f_taxDue = 142.50f + (0.05f * f_taxableIncome);
    }
    else
    {
        f_taxDue = 230.00f + (0.06f * f_taxableIncome);
    }

    printf("Tax due: $%.2f\n", f_taxDue);

    return 0;
}

