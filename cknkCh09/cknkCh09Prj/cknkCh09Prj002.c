/**
 * file: cknkCh09Prj002.c
 * Author: Yaachaka
 */

/* START: Header inclusions*/
#include <stdio.h>

/* END: Header inclusions*/

/* START: MACRO definitions*/

/* END: MACRO definitions*/

/* START: type definitions*/

/* END: type definitions*/

/* START: Variable declarations*/

/* END: Variable declarations*/

/* START: Function prototypes*/
float calculateTaxDue(float f_taxableIncome);
/* END: Function prototypes*/

int main(void)
{
    /* START: MACRO definitions*/
    
    /* END: MACRO definitions*/

    /* START: type definitions*/
    
    /* END: type definitions*/

    /* START: Variable declarations*/
    float f_taxableIncome= 0.0f, f_taxDue = 0.0f;
    /* END: Variable declarations*/

    // User input: taxable income
    printf("Please enter your taxable income: $");
    scanf("%f", &f_taxableIncome);

    // call function: to calculate the tax due
    f_taxDue = calculateTaxDue(f_taxableIncome);
    
    // Print the tax due
    printf("Tax due: $%.2f\n", f_taxDue);

    return 0;
}    // FUNCTION END: main

/**
 * function name: calculateTaxDue
 * return type: float
 * parameters: float f_taxableIncome
 * parameter 1 description: float f_taxableIncome: 
 * parameter 2 description: 
 * parameter 3 description: 
 * Function description: Get the taxable income as an input and provide the tax due.
 */
float calculateTaxDue(float f_taxableIncome)
{
    /* START: MACRO definitions*/
    #define N_INCOMERANGES 5    
    /* END: MACRO definitions*/
    
    /* START: Variable declarations*/
    int i = 0;
    float f_taxDue;
    float f_incomeRanges[N_INCOMERANGES] = {750.00f, 2250.00f, 3750.00f, 5250.00f, 7000.00f};
    float f_commisionRatePart1[N_INCOMERANGES + 1] = {0.0f, 7.50f, 37.50f, 82.50f, 142.50f, 230.00f};
    float f_commisionRatePart2[N_INCOMERANGES + 1] = {0.01f, 0.02f, 0.03f, 0.04f, 0.05f, 0.06f};
    /* END: Variable declarations*/
    
    for(i = 0; i < N_INCOMERANGES; i++)
    {
        if(f_taxableIncome <= f_incomeRanges[i])
        {
            f_taxDue = f_commisionRatePart1[i] + (f_commisionRatePart2[i] * f_taxableIncome);
            break;    // break out of the loop
        }    // if condition
        else if(i == N_INCOMERANGES - 1)
        {
            f_taxDue = f_commisionRatePart1[i + 1] + (f_commisionRatePart2[i + 1] * f_taxableIncome);
            break;    // break out of the loop
        }    // else if condition
    }    // for loop
    
    return f_taxDue;
}    // FUNCTION END: 
