/*
 * file: cknkCh03Prj002.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int i_mm = 0, i_dd = 0, i_yyyy = 0, i_itemNumber = 0;
    float f_unitPrice = 0.0f;
    
    printf("Enter item number: ");
    scanf("%d", &i_itemNumber);

    printf("Enter unit price: ");
    scanf("%f", &f_unitPrice);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &i_mm, &i_dd, &i_yyyy);

    printf("Item\t\t\tUnit\t\t\tPurchase\n");
    printf("\t\t\tPrice\t\t\tDate\n");
    printf("%-1d\t\t\t$%7.2f\t\t%2.2d/%2.2d/%4.4d\n", i_itemNumber, f_unitPrice, i_mm, i_dd, i_yyyy);

    return 0;
}