/*
@@@@ PROGRAM NAME: knkcch09e02.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a function check(x, y, n) that returns 
1 if both x and y fall between 0 and n - 1, inclusive. The function should return 0 
otherwise. Assume that x, y, and n are all of type int.
*/
#include<stdio.h>
//---------------------------------------------------------------------------
int check(int x, int y, int n);
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int x,y,limit;

	printf("Enter x and y the limit: ");
	scanf("%d %d %d",&x,&y,&limit);

	if(check(x,y,limit))
		printf("The two values are in range.");
	else
		printf("Either or both the values are out of range.");
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
int check(int x, int y, int n)
{
	return (x>=0 && x<=n-1)?((y>=0 && y<=n-1)?1:0):0;
}
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter x and y the limit: 4 2 2
Either or both the values are out of range.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter x and y the limit: 23 34 78
The two values are in range.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------