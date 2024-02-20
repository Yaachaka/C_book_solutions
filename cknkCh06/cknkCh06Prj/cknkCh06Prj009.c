/**
 * file: cknkCh06Prj009.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int i_nMonthlyPayments = 0;
    float f_amountOfLoan = 0.0f;
    float f_interestRate = 0.0f;
    float f_monthlyPayment = 0.0f;

    float f_balancePayment = 0.0f;
    float f_monthlyInterestAmount = 0.0f; // In dollars.

    // Getting the loan amount, interest rate, monthly payment and number of payments
    printf("Enter amount of loan: ");
    scanf("%f", &f_amountOfLoan);
    printf("Enter interest rate: ");
    scanf("%f", &f_interestRate);
    printf("Enter monthly payment: ");
    scanf("%f", &f_monthlyPayment);
    printf("Enter number of monthly payments: ");
    scanf("%d", &i_nMonthlyPayments);
    
    f_balancePayment = f_amountOfLoan;
        
    for(int i = 0; i <= i_nMonthlyPayments; i++)
    {
        f_monthlyInterestAmount = (f_interestRate * 0.01f * f_balancePayment) / 12; // 
        f_balancePayment = f_balancePayment - f_monthlyPayment + f_monthlyInterestAmount; // Loan balance after first payment
        printf("Balance remaining: $%.2f\n", f_balancePayment);

    }

    return 0;
}
