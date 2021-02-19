/*
@@@@ PROGRAM NAME: knkcch09proj06.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a function that computes the value of the 
following polynomial:
	3x⁵+2x⁴-5x³-x²+7x-6
Write a program that asks the user to enter a value for x, calls the function to compute the
value of the polynomial, and then displays the value returned by the function.
*/
#include<stdio.h>
//------------------------------------------------------------------------------
int polynomial(int x);
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int x;

	printf("Enter the value of x: ");
	scanf("%d",&x);

	printf("Value of the polynomial 3x⁵+2x⁴-5x³-x²+7x-6 at x= %d is %d.",x,polynomial(x));

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
int polynomial(int x)
{
	return 3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6;
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
*/
//---------------------------------------------------------------------------