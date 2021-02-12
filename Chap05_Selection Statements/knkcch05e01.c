/*
--PROGRAM NAME: knkcch05e01.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: The following program fragments illustrate the relational 
and equality operators. Show the output produced by each, assuming that i,j, 
and k are int variables.
(a) i=2;j=3;
    k=i*j==6;
    printf("%d",k);
(b) i=5;j=10;k=1;
    printf("%d",k>i<j);
(c) i=3;j=2;k=1;
    printf("%d",i<j==j<k);
(d) i=3;j=4;k=5;
    printf("%d",i%j+i<k);
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int i=2,j=3,k;
	
	//Option (a)
	k=i*j==6;
	printf("(a): %d",k);
	//Option (b)
	i=5;j=10;k=1;
	printf("\n(b): %d",k>i<j);
	//Option (c)
	i=3;j=2;k=1;
	printf("\n(c): %d",i<j==j<k);
	//Option (d)
	i=3;j=4;k=5;
	printf("\n(d): %d",i%j+i<k);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
(a): 1
(b): 1
(c): 1
(d): 0
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------