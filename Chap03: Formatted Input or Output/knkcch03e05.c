/*
--PROGRAM NAME: knkcch03e05.c
--PROGRAM STATEMENT: Suppose that we call scanf as follows:
	scanf("%f%d%f",&x,&i,&y);
If the user enters
	12.3 45.6 789
what will be the values of x, i and y after the call? (Assume that x and y are 
float variables and i is an int variable).
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int i;
	float x,y;
	
	printf("Enter input (for x, i and y) as 12.3 45.6 789: ");
	scanf("%f%d%f",&x,&i,&y);
	printf("x=%.2f\ni=%d\ny=%.2f",x,i,y);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter input (for x, i and y) as 12.3 45.6 789: 12.3 45.6 789
x=12.30
i=45
y=0.60
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------