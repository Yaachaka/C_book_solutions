/*
--PROGRAM NAME: knkcch05e06.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: Is the following if statement legal?
	if(n == 1-10)
		printf("n is between 1 and 10\n");
If so, what does it do when n is equal to 5?
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int n=9;
	printf("n=%d: ",n);
	if(n == 1-10)
		printf("n is between 1 and 10");
	n=5;
	printf("\nn=%d: ",n);
	if(n == 1-10)
		printf("n is between 1 and 10");
	n=-9;
	printf("\nn=%d: ",n);
	if(n == 1-10)
		printf("n is between 1 and 10");
	n=-5;
	printf("\nn=%d: ",n);
	if(n == 1-10)
		printf("n is between 1 and 10");
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
n=9:
n=5:
n=-9: n is between 1 and 10
n=-5:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------