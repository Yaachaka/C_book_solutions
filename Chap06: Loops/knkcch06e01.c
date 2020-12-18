/*
@@@@ PROGRAM NAME: knkcch06e01.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: knkcch06e01: What output does the following program 
fragment produce?
	i=1;
	while(i<=128){
		printf("%d ",i);
		i*=2;
	}
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int i=1;
	while(i<=128){
		printf("%d ",i);
		i*=2;
	}
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
1 2 4 8 16 32 64 128
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------