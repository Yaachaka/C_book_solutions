/*
@@@@ PROGRAM NAME: knkcch07e09.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Suppose that i and j are variables of 
type int. What is the type of the expression i/j+'a'?

*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int i,j;
	
	printf("Size of i/j+\'a\' is %d bytes.",sizeof(i/j+'a'));
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Size of i/j+'a' is 4 bytes.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------