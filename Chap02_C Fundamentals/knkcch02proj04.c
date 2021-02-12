/*
--PROGRAM NAME: knkcch02proj04.c
--PROGRAM STATEMENT: Write a program that asks the user to enter a 
dollars_and_cents amounts, then display the amount with 5% tax added: 
	Enter an amount: 100.00
	With tax added: $105.00
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------
int main(void)
{
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	float amt;
	//User input
	printf("Enter an amount: ");
	scanf("%f",&amt);
	//Displaying necessaries
	printf("Total amount(=amount+TAX): $%.2f",amt+0.05*amt);
	printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	return 0;
}
//-------------------------END OF MAIN()---------------------------------
//-----------------------------------------------------------------------
/*
OUTPUT:
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter an amount: 65.25
Total amount(=amount+TAX): $68.51
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//-----------------------------------------------------------------------
