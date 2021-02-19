/*
@@@@ PROGRAM NAME: knkcch09e19.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Consider the following "mystery" function:

	void pb(int n)
	{
		if (n != 0) {
			pb(n / 2);
			putchar('0' +n % 2);
		}
	}

Trace the execution of the function by hand. Then write a program that calls the function,
passing it a number entered by the user. What does the function do?
*/
#include<stdio.h>
//---------------------------------------------------------------------------
void pb(int n);
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int n;

	printf("Enter a positive integer: ");
	scanf("%d",&n);

	pb(n);	
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
void pb(int n)
{
	if (n != 0) {
		pb(n / 2);
		putchar('0' +n % 2);
	}
}
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a positive integer: 10
1010
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------