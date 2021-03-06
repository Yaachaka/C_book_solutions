/*
@@@@ PROGRAM NAME: knkcch14e08.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Suppose we want a macro that expands into a string containing the current line number and
file name. In other words, we'd like to write

	const char *str = LINE_FILE;

and have it expand into

	const char *str = "Line 10 of file foo.c";

where foo.c is the file containing the program and 10 is the line on which the invocation
of LINE_FILE appears. Warning: This exercise is for experts only. Be sure to read the
Q&A section carefully before attempting!
*/
#include<stdio.h>
//---------------------------------------------------------------------------
#define LINE_FILE2(x) #x
#define LINE_FILE1(x) LINE_FILE2(x)
#define LINE_FILE ("Line "LINE_FILE1(__LINE__)" of file "__FILE__)
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	const char *str = LINE_FILE;

	printf("%s",str);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Line 31 of file knkcch14e08.c
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
@@@@ Trial3:
@@@@ Trial4:
@@@@ Trial5:
@@@@ Trial6:
@@@@ Trial7:
@@@@ Trial8:
@@@@ Trial9:
*/
//---------------------------------------------------------------------------