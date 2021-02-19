/*
@@@@ PROGRAM NAME: knkcch09proj02.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Modify Programming Project 5 from Chapter 5 so that it 
uses a function to compute the amount of income tax. When passed an amount of taxable 
income, the function will return the tax due.
*/
#include<stdio.h>
//-----------------------------------------------------------------------------
float calc_tax_due(int amount);
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int amount;
	float tax_due;
	
	//User input for taxable income.
	printf("Enter the amount of taxable income: $");
	scanf("%d",&amount);
	
	tax_due=calc_tax_due(amount);
	
	//Displaying tax due amount.
	printf("Tax due= $%.2f",tax_due);
	

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
float calc_tax_due(int amount)
{
	float tax_due;

	//Calculations to find out due tax amount.
	if(amount<751) tax_due=0.01f*amount;
	else if(amount<2251) tax_due=7.5f+0.02f*amount;
	else if(amount<3751) tax_due=37.5f+0.03f*amount;
	else if(amount<5251) tax_due=82.5f+0.04f*amount;
	else if(amount<7001) tax_due=142.5f+0.05f*amount;
	else tax_due=230.0f+0.06*amount;
	
	return tax_due;
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter the amount of taxable income: $100
Tax due= $1.00
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter the amount of taxable income: $1250
Tax due= $32.50
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter the amount of taxable income: $5000
Tax due= $282.50
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------