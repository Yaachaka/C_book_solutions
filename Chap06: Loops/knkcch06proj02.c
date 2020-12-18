/*
@@@@ PROGRAM NAME: knkcch06proj02.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a program that asks the user to enter two 
integers, then calculates and displays their greatest common divisor (GCD):
	Enter two integers: 10 28
	Greatest Common Divisor: 4
Hint: The classic algorithm for computing the GCD, known as Euclid's algorithm, 
goes as follows: Let m and n be variables containing the two numbers. If n is 0, 
then stop: m contains the GCD. Otherwise, compute the remainder when m is divided 
by n. Copy n into m and copy the remainder into n. Then repeat the process, 
starting with testing whether n is 0.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	
	int n1,n2,remainder,gcd;
	
	printf("Enter two integers: ");
	scanf("%d %d",&n1,&n2);
	
	if(n1 && n2)  //To check if any of the two integers is zero.
	{
		int numerator=n1,denominator=n2;
		if(n1<n2)
			{numerator=n2;denominator=n1;}
		
		do
		{
			remainder=numerator%denominator;
			numerator=denominator;
			denominator=remainder;
		}while(remainder>0);
		gcd=numerator;
	}
	else if(n1)  //If n2 is 0, n1 is the gcd.
		gcd=n1;
	else   //If n1 is 0, n2 is the gcd.
		gcd=n2;
	
	printf("The GCD of %d and %d is %d",n1,n2,gcd);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter two integers: 18 15
The GCD of 18 and 15 is 3
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter two integers: 10 48
The GCD of 10 and 48 is 2
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter two integers: 17 91
The GCD of 17 and 91 is 1
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 4:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter two integers: 34 0
The GCD of 34 and 0 is 34
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------