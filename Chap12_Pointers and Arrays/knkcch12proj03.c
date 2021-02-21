/*
@@@@ PROGRAM NAME: knkcch12proj03.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Simplify Programming Project 1(b) by taking advantage 
of the fact that an array name can be used as a pointer.
*/
#include<stdio.h>
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	const short n=80;
	short i=0;
	char ch, a[n];

	printf("Enter a message: ");
	while((ch=getchar())!='\n' && i<n)
		*(a+i++)=ch;  //Binary + has lower precedence than unary * (the dereference operator). *a+i++ won't work as expected.
	
	printf("Reversal is: ");
	while(--i>=0)
		printf("%c",*(a+i));
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a message: hello there. How are you?
Reversal is: ?uoy era woH .ereht olleh
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