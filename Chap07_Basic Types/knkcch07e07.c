/*
@@@@ PROGRAM NAME: knkcch07e07.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: For each of the following character 
escape, give the equivalent octal escape. (Assume that the character set is 
ASCII.) You may wish to consult Appendix E, which lists the numerical codes for 
ASCII characters.
(a) \b
(b) \n
(c) \r
(d) \t
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	printf("I am Learning\010 Octal escape for \\b");
	printf("\nI am Learning\012 Octal escape for \\n");
	printf("\nI am Learning\015 Octal escape for \\r");
	printf("\nI am Learning\011 Octal escape for \\t");
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
I am Learnin Octal escape for \b
I am Learning
 Octal escape for \n
 Octal escape for \r
I am Learning    Octal escape for \t
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------