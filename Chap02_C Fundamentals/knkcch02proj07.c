/*
--PROGRAM NAME: knkcch02proj07.c
--PROGRAM STATEMENT: Write a program that asks user to enter a U.S. 
dollar amount and then shows how to pay that amount using the smallest number of 
$20, $10, $5, and $1 bills:
	Enter a dollar amount: 93
	$20 bills: 4
	$10 bills: 1
	$5 bills: 0
	$1 bills: 3
Hint: Divide the amount by 20 to determine the number of $20 bills needed, and 
then reduce the amount by the total value of the $20 bills. Repeat for the other 
bill sizes. Be sure to use integer value throughout, not floating-point numbers.
*/
#include<stdio.h>
//---------------------START OF MAIN()---------------------------------
int main(void)
{
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	int dollars=0, bills=0;
	
	printf("Enter a dollar amount: $");;
	scanf("%d",&dollars);
	
	printf("$20 bills: %d",dollars/20);  //No of $20 bills.
	bills=dollars-(dollars/20)*20;  //Remaining amount after extracting $20 bills.
	printf("\n$10 bills: %d",bills/10);
	bills=bills-(bills/10)*10;  //Remaining amount after extracting $10 bills.
	printf("\n$5 bills: %d",bills/5);
	bills=bills-(bills/5)*5;  //Remaining amount after extracting $5 bills.
	printf("\n$1 bills: %d",bills);
	
	printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	return 0;
}
//-----------------------END OF MAIN()-----------------------------------------
/*
OUTPUT:
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a dollar amount: $106
$20 bills: 5
$10 bills: 0
$5 bills: 1
$1 bills: 1
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
