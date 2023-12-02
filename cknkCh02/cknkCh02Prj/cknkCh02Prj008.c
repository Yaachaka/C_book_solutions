/**
 * File: cknkCh02Prj008.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    float f_amountOfLoan = 0.0f;
    float f_interestRate = 0.0f;
    float f_monthlyPayment = 0.0f;

    float f_balancePayment = 0.0f;
    float f_monthlyInterestAmount = 0.0f; // In dollars.

    printf("Enter amount of loan: ");
    scanf("%f", &f_amountOfLoan);
    printf("Enter interest rate: ");
    scanf("%f", &f_interestRate);
    printf("Enter monthly payment: ");
    scanf("%f", &f_monthlyPayment);
    
    f_balancePayment = f_amountOfLoan;
    f_monthlyInterestAmount = (f_interestRate * 0.01f * f_balancePayment) / 12; // monthlyInterestAmount = interestAmountOfLoanBalance / 12 months
    // Let's say the first payment is done.
    f_balancePayment = f_balancePayment - f_monthlyPayment + f_monthlyInterestAmount; // Loan balance after first payment
    printf("Balance remaining after first payment: $%.2f\n", f_balancePayment);

    f_monthlyInterestAmount = (f_interestRate * 0.01f * f_balancePayment) / 12; // monthlyInterestAmount = interestAmountOfLoanBalance / 12 months
    // Let's say the second payment is done.
    f_balancePayment = f_balancePayment - f_monthlyPayment + f_monthlyInterestAmount; // Loan balance after second payment
    printf("Balance remaining after second payment: $%.2f\n", f_balancePayment);

f_monthlyInterestAmount = (f_interestRate * 0.01f * f_balancePayment) / 12; // monthlyInterestAmount = interestAmountOfLoanBalance / 12 months
    // Let's say the third payment is done.
    f_balancePayment = f_balancePayment - f_monthlyPayment + f_monthlyInterestAmount; // Loan balance after third payment
    printf("Balance remaining after third payment: $%.2f\n", f_balancePayment);

    return 0;
}
