/**
 * file: cknkCh05Prj003.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    float commission, value, f_pricePerShare, f_commission_2;
    int i_nShares;

    printf("Enter the number of shares: ");
    scanf("%d", &i_nShares);
    printf("Enter the price per share: ");
    scanf("%f", &f_pricePerShare);

    value = i_nShares * f_pricePerShare;

    if (value < 2500.00f)
    {
        commission = 30.00f + (0.017f * value);
    }
    else if (value < 6250.00f)
    {
        commission = 56.00f + (0.0066f * value);
    }
    else if (value < 20000.00f)
    {
        commission = 76.00f + (0.0034f + value);
    }
    else if (value < 50000.00f)
    {
        commission = 100.00f + (0.0022f * value);
    }
    else if (value < 500000.00f)
    {
        commission = 155.00f + (0.0011f * value);
    }
    else
    {
        commission = 255.00f + (0.0009f * value);
    }

    if (commission < 39.00f)
    {
        commission = 39.00f;
    }

    printf("Commission (by original broker): $%.2f\n", commission);
    
    
    if(i_nShares < 2000)
    {
        f_commission_2 = 33 + 0.03f * i_nShares;
    }
    else
    {
        f_commission_2 = 33 + 0.02f * i_nShares;
    }

    printf("Commission (by rival broker): $%.2f\n", f_commission_2);

    return 0;
}

