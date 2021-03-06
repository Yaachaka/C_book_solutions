/*
@@@@ PROGRAM NAME: knkcch09e05.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a function num_digits(n) that returns 
the number of digits in n (a positive integer), Hint: To determine the number of digits 
in a number n, divide it by 10 repeatedly. When n reaches 0, the number of divisions 
indicates how many digits n originally had.
*/
#include<stdio.h>
//---------------------------------------------------------------------------
short num_digits(int n);
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int n;

	printf("Enter a positive number: ");
	scanf("%d",&n);

	printf("The number contains %hd digits.",num_digits(n));
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
short num_digits(int n)
{
	short count=0;
	do
	{
		n/=10;
		count++;
	} while (n>0);
	return count;
}
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a positive number: 54323
The number contains 5 digits.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a positive number: 76897652
The number contains 8 digits.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------