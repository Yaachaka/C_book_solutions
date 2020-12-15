/*
--PROGRAM NAME: knkcch05e05.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: Is the following if statement legal?
	if(n >= 1 <= 10)
		printf("n is between 1 and 10\n");
If so, what does it do when n is equal to 0?
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int n=5;
	printf("n=%d: ",n);
	if(n >= 1 <= 10)
		printf("n is between 1 and 10");
	n=0;
	printf("\nn=%d: ",n);
	if(n >= 1 <= 10)
		printf("n is between 1 and 10");
	n=11;
	printf("\nn=%d: ",n);
	if(n >= 1 <= 10)
		printf("n is between 1 and 10");
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
knkcch05e05.c:17:12: warning: result of comparison of constant 10 with boolean expression
      is always true [-Wtautological-constant-out-of-range-compare]
        if(n >= 1 <= 10)
           ~~~~~~ ^  ~~
knkcch05e05.c:21:12: warning: result of comparison of constant 10 with boolean expression
      is always true [-Wtautological-constant-out-of-range-compare]
        if(n >= 1 <= 10)
           ~~~~~~ ^  ~~
knkcch05e05.c:25:12: warning: result of comparison of constant 10 with boolean expression
      is always true [-Wtautological-constant-out-of-range-compare]
        if(n >= 1 <= 10)
           ~~~~~~ ^  ~~
3 warnings generated.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
n=5: n is between 1 and 10
n=0: n is between 1 and 10
n=11: n is between 1 and 10
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------