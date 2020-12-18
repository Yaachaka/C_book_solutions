/*
@@@@ PROGRAM NAME: knkcch06e03.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: What output does the following for 
statement produce?
	for(i=5,j=i-1;i>0,j>0;--i,j=i-1)
		printf("%d ",i);
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int i,j;
	for(i=5,j=i-1;i>0,j>0;--i,j=i-1)
		printf("%d ",i);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
knkcch06e03.c:16:17: warning: relational comparison result unused [-Wunused-comparison]
        for(i=5,j=i-1;i>0,j>0;--i,j=i-1)
                      ~^~
1 warning generated.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
5 4 3 2
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------