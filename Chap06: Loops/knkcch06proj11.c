/*
@@@@ PROGRAM NAME: knkcch06proj11.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: The value of the mathematical constant e can be 
expressed as an infinite series:
e=1+1/1!+1/2!+1/3!+...
Write a program that approximates e by computing the value of
1+1/1!+1/2!+1/3!+ ... +1/n!
where n is an integer entered by the user.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	float e=1.00f;
	int n,facto;
	
	printf("Let us find the value of e (a mathematical constant) within our limits.\n");
	printf("Enter value of n: ");
	scanf("%2d",&n);  //Limiting n value to 2 digits.
	
	//Calculating the value of e.
	for(int i=1;i<=n;i++)
	{
		facto=1;
		for(int j=1;j<=i;j++)  //Finding the factorial.
			facto*=j;
		e+=1.00f/facto;
	}
	
	printf("The value of e is %.4f",e);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Let us find the value of e (a mathematical constant) within our limits.
Enter value of n: 3
The value of e is 2.6667
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Let us find the value of e (a mathematical constant) within our limits.
Enter value of n: 5
The value of e is 2.7167
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Let us find the value of e (a mathematical constant) within our limits.
Enter value of n: 12
The value of e is 2.7183
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------