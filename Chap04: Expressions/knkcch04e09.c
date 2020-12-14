/*
--PROGRAM NAME: knkcch04e09.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: Show the output produced by each of the following program 
fagments. Assume that i, j and k are int variables.
(a) i=7;j=8;
    i*=j+1;
    printf("%d %d",i,j);
(b) i=j=k=1;
    i+=j+=k;
    printf("%d %d %d",i,j,k);
(c) i=1; j=2; k=3;
    i-=j-=k;
    printf("%d %d %d",i,j,k);
(d) i=2;j=1;k=0;
    i*=j*=k;
    printf("%d %d %d",i,j,k);
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int i,j,k;
	
	//Option (a)
	i=7;j=8;
	i*=j+1;
	printf("(a): %d %d",i,j);
	//Option (b)
	i=j=k=1;
	i+=j+=k;
	printf("\n(b): %d %d %d",i,j,k);
	//Option (c)
	i=1;j=2;k=3;
	i-=j-=k;
	printf("\n(c): %d %d %d",i,j,k);
	//Option (d)
	i=2;j=1;k=0;
	i*=j*=k;
	printf("\n(d): %d %d %d",i,j,k);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//-----------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
(a): 63 8
(b): 3 2 1
(c): 2 -1 3
(d): 0 0 0
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------