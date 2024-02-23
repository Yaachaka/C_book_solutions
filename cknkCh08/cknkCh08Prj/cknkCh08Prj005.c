/**
 * file: cknkCh08Prj005.c
 * Author: Yaachaka
 */

#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void)
{
    int i, j, num_years, year;
    double value[5];
    float low_rate, f_monthlyInterestRate;

    // Getting the interest rate and the number of years
    printf("Enter interest rate: ");
    scanf("%f", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);

    // Prinnting the initial state
    printf("\nYears   ");
    for(i = 0; i < NUM_RATES; i++)
    {
        printf("%5.2f%% ", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    // computing and printing the compounds amounts
    for(year = 1; year <= num_years; year++)
    {
        printf("%3d    ", year);
        for(i = 0; i < NUM_RATES; i++)
        {
            f_monthlyInterestRate = ((low_rate + i) / 100.0) / 12;
            for(j = 0; j < 12; j++)
            {
                value[i] += f_monthlyInterestRate * value[i];
            }
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }

    return 0;
}