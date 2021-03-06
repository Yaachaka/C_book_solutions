/*
@@@@ PROGRAM NAME: knkcch06e09.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Translate the for statement of Exercise 
8 into an equivalent while statement. You will need one statement in addition to 
the while loop itself.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int i=10;
	
	while(i>1)
	{
		printf("%d ",i++);
		i/=2;
	}
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
10 5 3 2
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------