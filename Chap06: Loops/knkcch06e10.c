/*
@@@@ PROGRAM NAME: knkcch06e10.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Show how to replace a continue 
statement by an equivalent goto statement.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	//Using continue
	printf("Using \'continue\' in for loop: \n");
	for(int i=0;i<5;i++)
	{
		if(i==3)
			continue;
		printf("%d ",i);
	}
	//Using goto
	printf("\nUsing \'goto\' in for loop: \n");
	for(int i=0;i<5;i++)
	{
		if(i==3)
			goto skip1;
		printf("%d ",i);
		skip1: ;
	}
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Using 'continue' in for loop:
0 1 2 4
Using 'goto' in for loop:
0 1 2 4
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------