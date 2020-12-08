/*
--PROGRAM NAME: knkcch03e04.c
--PROGRAM STATEMENT: Suppose that we call scanf as follows:
	scanf("%d%f%d",&i,&x,&j);
If the user enters,
	10.3 5 6
what will be the values of i, x, and j after the call? (Assume that i and j are 
int variables and x is a float variable.)
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int i,j;
	float x;
	
	printf("Enter input (for i, x and j) as 10.3 5 6: ");
	scanf("%d%f%d",&i,&x,&j);
	printf("i=%d\nx=%.2f\nj=%d",i,x,j);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter input (for i, x and j) as 10.3 5 6: 10.3 5 6
i=10
x=0.30
j=5
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------