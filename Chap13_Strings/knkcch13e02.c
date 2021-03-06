/*
@@@@ PROGRAM NAME: knkcch13e.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Suppose that p has been declared as follows:

	char *p = "abc";

Which of the following function calls are legal? Show the output produced by each legal
call, and explain why the others are illegal.

(a) putchar(p);
(b) putchar(*p);
(c) puts(p);
(d) puts(*p);

*/
#include<stdio.h>
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char *p = "abc";

	//putchar(p);  //p is not a charcter
	putchar(*p);  //*p is a charcter i.e., a.
	puts(p);  //Works. The function expects a pointer and p is a pointer as needed.
	//puts(*p);  //Doesn't work. The function expects a pointer and 8p is a character.

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
aabc

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