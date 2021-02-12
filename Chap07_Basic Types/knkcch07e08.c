/*
@@@@ PROGRAM NAME: knkcch07e08.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Repeat Exercise 7, but give the 
equivalent hexadecimal escape.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	printf("I am Learning\x08 Hexadecimal escape for \\b");
	printf("\nI am Learning\x0a Hexadecimal escape for \\n");
	printf("\nI am Learning\x0d Hexadecimal escape for \\r");
	printf("\nI am Learning\x09 Hexadecimal escape for \\t");
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
I am Learnin Hexadecimal escape for \b
I am Learning
 Hexadecimal escape for \n
 Hexadecimal escape for \r
I am Learning    Hexadecimal escape for \t
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------