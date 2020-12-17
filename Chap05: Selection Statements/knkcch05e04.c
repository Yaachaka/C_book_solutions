/*
--PROGRAM NAME: knkcch05e04.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: Write a single expression whose value is either -1, 0, or 
+1, depending on whether i is less than or equal to or greater than j, 
respectively.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int i=1,j=2;
	printf("i=%d  j=%d  result of (i<j?-1:(i==j?0:1)) is %d",i,j,(i<j?-1:(i==j?0:1)));
	i=45,j=2;
	printf("\ni=%d  j=%d  result of (i<j?-1:(i==j?0:1)) is %d",i,j,(i<j?-1:(i==j?0:1)));
	i=2,j=2;
	printf("\ni=%d  j=%d  result of (i<j?-1:(i==j?0:1)) is %d",i,j,(i<j?-1:(i==j?0:1)));
	i=1,j=-2;
	printf("\ni=%d  j=%d  result of (i<j?-1:(i==j?0:1)) is %d",i,j,(i<j?-1:(i==j?0:1)));
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
i=1  j=2  result of (i<j?-1:(i==j?0:1)) is -1
i=45  j=2  result of (i<j?-1:(i==j?0:1)) is 1
i=2  j=2  result of (i<j?-1:(i==j?0:1)) is 0
i=1  j=-2  result of (i<j?-1:(i==j?0:1)) is 1
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------