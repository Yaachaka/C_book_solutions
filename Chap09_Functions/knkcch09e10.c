/*
@@@@ PROGRAM NAME: knkcch09e10.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write functions that return the following 
values. (Assume that a and n are parameters, where a is an array of int values and n is 
the length of the array.)
(a) The largest element in a.
(b) The average of all elements in a.
(c) The number of positive elements in a.
*/
#include<stdio.h>
//---------------------------------------------------------------------------
int largest(int a[],short n);
float average(int a[],short n);
short n_positive(int a[],short n);
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	short n=10;
	int a[10]={15,25,5,86,-45,-23,56,4,87,52};

	printf("The largest element in a is %d",largest(a,n));
	printf("\nThe average of all elements in a is %.2f",average(a,n));
	printf("\nThe number of +ve elements in a is %hd",n_positive(a,n));
	
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
int largest(int a[],short n)
{
	int largest=a[0];
	for(short i=1;i<n;i++)
	{
		if(largest<a[i])
			largest=a[i];
	}
	return largest;
}
//---------------------------------------------------------------------------
float average(int a[],short n)
{
	float average=0;
	for(short i=0;i<n;i++)
	{
		average+=a[i];
	}
	average/=n;
	return average;
}
//---------------------------------------------------------------------------
short n_positive(int a[],short n)
{
	short count=0;
	for(short i=0;i<n;i++)
		if(a[i]>0)
			count++;
	return count;
}
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
The largest element in a is 87
The average of all elements in a is 26.20
The number of +ve elements in a is 8
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------