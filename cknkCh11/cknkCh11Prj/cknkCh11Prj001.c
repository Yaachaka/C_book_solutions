/********************************************************************************
 * File: cknkCh11Prj001.c
 * Author: Yaachaka
 * Purpose: NA
 ********************************************************************************/

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
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);
/* END: Function prototypes*/

/**
 * Function name: main
 * Return type: int
 * Return value description: 
 * Parameters: void
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: 
 */
int main(void)
{
    int amt = 0;
    int n_twenty = 0;
    int n_ten = 0;
    int n_five = 0;
    int n_one = 0;
    
    printf("Enter a U.S. Dollar amount: ");
    scanf("%d", &amt);

    pay_amount(amt, &n_twenty, &n_ten, &n_five, &n_one);

    printf("$20 bills: %d\n", n_twenty);
    printf("$10 bills: %d\n", n_ten);
    printf(" $5 bills: %d\n", n_five);
    printf(" $1 bills: %d\n", n_one);
    
    printf("\n");
    return 0;
}	//FUNCTION END: main

/**
 * Function name: pay_amount
 * Return type: void
 * Return value description: 
 * Parameters: int dollars, int *twenties, int * tens, int *fives, int *ones
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: Total amount in terms of valid dollar bills.
 */
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    int temp = 0;

    *twenties = dollars / 20;
    temp = dollars - *twenties * 20;
    *tens = temp / 10;
    temp = temp - *tens * 10;
    *fives = temp / 5;
    temp = temp - *fives * 5;
    *ones = temp;
}	// FUNCTION END: pay_amount