/*
--PROGRAM NAME: knkcch04e01.c
--PROGRAM STATEMENT: Show the output produced by each of the following program 
fragments. Assume that i,j, and k are int variables.
(a) i=5;j=3;
    printf("%d %d",i/j,i%j);
(b) i=2;j=3;
    printf("%d",(i+10)%j);
(c) i=7;j=8;k=9;
    printf("%d",(i+10)%k/j);
(d) i=1;j=2;k=3;
    printf("%d",(i+5)%(j+2)/k);
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int i=5,j=3,k;
	printf("(a): %d %d",i/j,i%j);
	i=2;j=3;
	printf("\n(b): %d",(i+10)%j);
	i=7;j=8;k=9;
	printf("\n(c): %d",(i+10)%k/j);
	i=1;j=2;k=3;
	printf("\n(d): %d",(i+5)%(j+2)/k);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
(a): 1 2
(b): 0
(c): 1
(d): 0
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------