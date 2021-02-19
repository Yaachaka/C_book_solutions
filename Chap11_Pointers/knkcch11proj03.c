/*
@@@@ PROGRAM NAME: knkcch11proj03.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Modify Programming Project 3 from Chapter 6 so that it 
includes the following function:

	void reduce(int numerator, int denominator, int *reduced_ numerator, int *reduced_denominator);

numerator and denominator are the numerator and denominator of a fraction.
reduced_numerator and reduced_denominator are pointers to variables in which the 
function will store the numerator and denominator of the fraction once it has been
reduced to lowest terms.
*/
#include<stdio.h>
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int numerator,denominator;
	
	printf("Enter a fraction: ");
	scanf("%d/%d",&numerator,&denominator);
	
	reduce(numerator, denominator, &numerator, &denominator);
	
	printf("In lowest terms: %d/%d",numerator,denominator);
	

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;  //exit(0) or exit(EXIT_SUCCESS) can be used.
}
//-------------------------END OF MAIN()---------------------------------------
void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
	int remainder;
	if(numerator<denominator)
	{
		int temp=numerator;
		numerator=denominator;
		denominator=temp;
	}
	
	do
	{
		remainder=numerator%denominator;
		numerator=denominator;
		denominator=remainder;
	}while(remainder>0);
	*reduced_numerator/=numerator;
	*reduced_denominator/=numerator;
	
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
Enter a fraction: 20/4
In lowest terms: 5/1
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a fraction: 13/65
In lowest terms: 1/5
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a fraction: 17/13
In lowest terms: 17/13
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial4:
@@@@ Trial5:
@@@@ Trial6:
*/
//---------------------------------------------------------------------------