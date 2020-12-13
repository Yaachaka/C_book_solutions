/*
--PROGRAM NAME: knkcch04e13.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: Only one of the expressions ++i and i++ is exactly the same 
as (i+=1);. Which is it? Justify your answer.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int i=7,j=0;
	
	//case: prefix
	printf("i (before j=++i;): %d",i);
	printf("\nj (before j=++i;): %d",j);
	j=++i;
	printf("\ni (after j=++i;): %d",i);
	printf("\nj (after j=++i;): %d",j);
	
	//case: postfix
	i=7;j=0;
	printf("\n\ni (before j=i++;): %d",i);
	printf("\nj (before j=i++;): %d",j);
	j=i++;
	printf("\ni (after j=i++;): %d",i);
	printf("\nj (after j=i++;): %d",j);
	
	//case: (i+=1)
	i=7;j=0;
	printf("\n\ni (before j=(i+=1);): %d",i);
	printf("\nj (before j=(i+=1);): %d",j);
	j=(i+=1);
	printf("\ni (after j=(i+=1);): %d",i);
	printf("\nj (after j=(i+=1);): %d",j);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//-----------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
i (before j=++i;): 7
j (before j=++i;): 0
i (after j=++i;): 8
j (after j=++i;): 8

i (before j=i++;): 7
j (before j=i++;): 0
i (after j=i++;): 8
j (after j=i++;): 7

i (before j=(i+=1);): 7
j (before j=(i+=1);): 0
i (after j=(i+=1);): 8
j (after j=(i+=1);): 8
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------