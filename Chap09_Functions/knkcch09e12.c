/*
@@@@ PROGRAM NAME: knkcch09e12.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write the following function:
	double inner_product(double a[], double b[], int n);
The function should return a[0]*b[0] +a[1]*b[1] +...+ a[n-1]*b[n-1].
*/
#include<stdio.h>
//----------------------------------------------------------------------------
double inner_product(double a[], double b[], int n);
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	double a[5]={10.2,24,41,21.5,75.9},b[5]={10.2,24,41,21.5,75.9},c;
	int n=5;

	c=inner_product(a,b,n);
	
	printf("The sum of inner products is %.2f.",c);

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
double inner_product(double a[], double b[], int n)
{
	double c=0.0f;
	for(int i=0;i<n;i++)
	{
		c+=a[i]*b[i];
	}
	return c;
}
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
The sum of inner products is 8584.10.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------