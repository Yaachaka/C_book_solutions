/*
@@@@ PROGRAM NAME: knkcch06proj03.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a program that asks the user to enter a 
fraction, then reduces the fraction to lowest terms:
	Enter a fraction: 6/12
	In lowest terms: 1/2
Hint: To reduce a fraction to lowest terms, first compute the GCD of the 
numerator  and denominator. Then divide both the numerator and denominator by 
the GCD.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int num,den;
	
	printf("Enter a fraction: ");
	scanf("%d/%d",&num,&den);
	
	int numerator=num,denominator=den,remainder;
	if(num<den)
		{numerator=den;denominator=num;}
	
	do
	{
		remainder=numerator%denominator;
		numerator=denominator;
		denominator=remainder;
	}while(remainder>0);
	int gcd=numerator;
	
	printf("In lowest terms: %d/%d",num/gcd,den/gcd);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a fraction: 18/16
In lowest terms: 9/8
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a fraction: 13/93
In lowest terms: 13/93
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a fraction: 15/18
In lowest terms: 5/6
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------