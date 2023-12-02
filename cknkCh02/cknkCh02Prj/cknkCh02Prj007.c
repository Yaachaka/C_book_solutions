/**
 * File: cknkCh02Prj007.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int amt = 0;
    int n_twenty = 0;
    int n_ten = 0;
    int n_five = 0;
    int n_one = 0;
    int temp = 0;

    printf("Enter a U.S. Dollar amount: ");
    scanf("%d", &amt);

    n_twenty = amt / 20;
    temp = amt - n_twenty * 20;
    n_ten = temp / 10;
    temp = temp - n_ten * 10;
    n_five = temp / 5;
    temp = temp - n_five * 5;
    n_one = temp;

   printf("$20 bills: %d\n", n_twenty);
   printf("$10 bills: %d\n", n_ten);
   printf(" $5 bills: %d\n", n_five);
   printf(" $1 bills: %d\n", n_one);
    
    return 0;
}
