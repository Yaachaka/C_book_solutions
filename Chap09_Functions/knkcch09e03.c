/*
@@@@ PROGRAM NAME: knkcch09e03.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a function gcd (m, n) that calculates 
the greatest common divisor of the integers m and n. (Programming Project 2 in Chapter 6 
describes Euclid’s algorithm for computing the GCD.)

*/
#include<stdio.h>
//---------------------------------------------------------------------------
int gcd(int m,int n);
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int numerator,denominator,gcd_value;
	
	printf("Enter numerator and denominator (both positive): ");
	scanf("%d %d",&numerator, &denominator);

	gcd_value=gcd(numerator,denominator);

	printf("The GCD of %d and %d is %d",numerator,denominator,gcd_value);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
int gcd(int m,int n)
{
	int remainder;
	do
	{
		remainder=m%n;
		m=n;
		n=remainder;
	} while (remainder!=0);

	return m;
}
	//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter numerator and denominator (both positive): 26 22
The GCD of 26 and 22 is 2
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter numerator and denominator (both positive): 13 15
The GCD of 13 and 15 is 1
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter numerator and denominator (both positive): 32 48
The GCD of 32 and 48 is 16
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------