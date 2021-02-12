/*
@@@@ PROGRAM NAME: knkcch07e03.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Which of the following are not legal 
types in C?
(a) short unsigned int
(b) short float
(c) long double
(d) unsigned long
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	short unsigned int a;
	short float b;
	long double c;
	unsigned long d;
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
knkcch07e03.c:18:2: error: 'short float' is invalid
        short float b;
        ^
1 error generated.
*/
//---------------------------------------------------------------------------