/*
--PROGRAM NAME: knkcch05proj05.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: In one state, single residents are subject to the 
following income tax:
Income                    Amount of tax
Not over $750             1% of income
$750 - $2,250             $7.50 plus 2% of amount over $750
$2,250 - $3,750           $37.50 plus 3% of amount over $2,250
$3,750 - $5,250           $82.50 plus 4% of amount over $3,750
$5,250 - $7,000           $142.50 plus 5% of amount over $5,250
Over $7,000               $230.00 plus 6% of amount over $7,000
Write a program that asks the user to enter the amount of taxable income, then 
dosplay the tax due.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int amount;
	float tax_due;
	
	//User input for taxable income.
	printf("Enter the amount of taxable income: $");
	scanf("%d",&amount);
	
	//Calculations to find out due tax amount.
	if(amount<751) tax_due=0.01f*amount;
	else if(amount<2251) tax_due=7.5f+0.02f*amount;
	else if(amount<3751) tax_due=37.5f+0.03f*amount;
	else if(amount<5251) tax_due=82.5f+0.04f*amount;
	else if(amount<7001) tax_due=142.5f+0.05f*amount;
	else tax_due=230.0f+0.06*amount;
	
	//Displaying tax due amount.
	printf("Tax due= $%.2f",tax_due);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
-- Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter the amount of taxable income: $7660
Tax due= $689.60
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter the amount of taxable income: $278
Tax due= $2.78
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter the amount of taxable income: $3400
Tax due= $139.50
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 4:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter the amount of taxable income: $4259
Tax due= $252.86
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------