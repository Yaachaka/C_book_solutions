/*
--PROGRAM NAME: knkcch04e11.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: Show that output produced by each of the following program 
fragments. Assume that i, j and k are int variables.
(a) i=1;
    printf("%d",i++ -1);
    printf("%d",i);
(b) i=10;j=5;
    printf("%d",i++ - ++j);
    printf("%d %d",i,j);
(c) i=7;j=8;
    printf("%d",i++ - --j);
    printf("%d %d",i,j);
(d) i=3;j=4;k=5;
    printf("%d",i++ - j++ + --k);
    printf("%d %d %d",i,j,k);
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int i,j,k;
	
	//Option (a)
	i=1;
	printf("(a): %d",i++ -1);
	printf("\t%d",i);
	//Option (b)
	i=10;j=5;
	printf("\n(b): %d",i++ - ++j);
	printf("\t%d %d",i,j);
	//Option (c)
	i=7;j=8;
	printf("\n(c): %d",i++ - --j);
	printf("\t%d %d",i,j);
	//Option (d)
	i=3;j=4;k=5;
	printf("\n(d): %d",i++ - j++ + --k);
	printf("\t%d %d %d",i,j,k);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
(a): 0  2
(b): 4  11 6
(c): 0  8 7
(d): 3  4 5 4
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------