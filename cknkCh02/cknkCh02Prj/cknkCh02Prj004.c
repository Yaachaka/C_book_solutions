/**
 * File: cknkCh02Prj004.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    float amt = 0.0f, amt_tax = 0.0f;

    printf("Enter an amount: ");
    scanf("%f", &amt);

    amt_tax = amt * 0.05f + amt;

    printf("With tax added: $%.2f\n", amt_tax);
    
    return 0;
}
