/*
@@@@ PROGRAM NAME: knkcch11proj01.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Modify Programming Project 7 from Chapter 2 so that it 
includes the following function:

	void pay_amount (int dollars, int *twenties, int *tens, int *fives, int *ones);

The function determines the smallest number of $20, $10, $5, and $1 bills necessary to pay
the amount represented by the dollars parameter. The twenties parameter points to a
variable in which the function will store the number of $20 bills required. The tens,
fives, and ones parameters are similar.
*/
#include<stdio.h>
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
void pay_amount (int dollars, int *twenties, int *tens, int *fives, int *ones);
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int dollars=0, twenties, tens, fives, ones;
	
	printf("Enter a dollar amount: $");
	scanf("%d",&dollars);
	
	pay_amount(dollars, &twenties, &tens, &fives, &ones);
	
	printf("$20 bills: %d",twenties);  //No of $20 bills.
	printf("\n$10 bills: %d",tens);
	printf("\n$5 bills: %d",fives);
	printf("\n$1 bills: %d",ones);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;  //exit(0) or exit(EXIT_SUCCESS) can be used.
}
//-------------------------END OF MAIN()---------------------------------------
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
	int bills=0;
	
	*twenties=dollars/20;  //No of $20 bills.
	bills=dollars%20;  //Remaining amount after extracting $20 bills.
	*tens=bills/10;
	bills=bills%10;  //Remaining amount after extracting $10 bills.
	*fives=bills/5;
	*ones=bills%5;  //Remaining amount after extracting $5 bills.
	
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a dollar amount: $96
$20 bills: 4
$10 bills: 1
$5 bills: 1
$1 bills: 1
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a dollar amount: $48
$20 bills: 2
$10 bills: 0
$5 bills: 1
$1 bills: 3
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a dollar amount: $235
$20 bills: 11
$10 bills: 1
$5 bills: 1
$1 bills: 0
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial4:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a dollar amount: $9
$20 bills: 0
$10 bills: 0
$5 bills: 1
$1 bills: 4
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial5:
@@@@ Trial6:
*/
//---------------------------------------------------------------------------