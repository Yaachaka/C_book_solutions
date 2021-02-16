/*
@@@@ PROGRAM NAME: knkcch09proj01.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a program that asks the user to enter a series of 
integers (which it stores in an array), then sorts the integers by calling the function 
selection_sort. When given an array with n elements, selection_sort must do the following:

1. Search the array to find the largest element, then move it to the last position in 
the array.
2. Call itself recursively to sort the first n - 1 elements of the array.
*/
#include<stdio.h>
//-----------------------------------------------------------------------------
void selection_sort(int a[],int n);
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int n;

	printf("Enter no. of elements to sort: ");
	scanf("%d",&n);

	int a[n];  //VLA (Variable Length Array) should be declared after reading its length.

	printf("Enter %d elements: ",n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	selection_sort(a,n);

	printf("The array after sorting: ");
	for(short i=0;i<n;i++)
		printf("%4d",a[i]);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
void selection_sort(int a[],int n)
{
	int temp;
	
	for(short i=1;i<n;i++)
		if(a[i-1]>a[i])
		{
			temp=a[i-1];
			a[i-1]=a[i];
			a[i]=temp;
		}
		
	if(n>1)
		selection_sort(a,n-1);
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter no. of elements to sort: 5
Enter 5 elements: 71 26 2 3 8
The array after sorting:    2   3   8  26  71
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter no. of elements to sort: 8
Enter 8 elements: 34 2 45 65 23 45 72 33
The array after sorting:    2  23  33  34  45  45  65  72
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------