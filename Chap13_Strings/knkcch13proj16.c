/*
@@@@ PROGRAM NAME: knkcch13proj16.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Modify Programming Project 1 from Chapter 12 so that it includes the following function:

	void reverse(char *message);

The function reverses the string pointed to by message. Hint: Use two pointers, one 
initially pointing to the first character of the string and the other initially 
pointing to the last character. Have the function reverse these characters and then move 
the pointers toward each other, repeating the process until the pointers meet.
*/
#include<stdio.h>
#include<string.h>  //strlen()
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
void reverse(char *message);
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char message[80];

	printf("Enter a message: ");
	gets(message);
	
	reverse(message);
	printf("Reversal is: ");
	puts(message);

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
void reverse(char *message)
{
	char temp, *p=message+strlen(message)-1;

	while(p>message)
	{
		temp=*message;
		*message++=*p;
		*p--=temp;
	}
}
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
Enter a message: Hello there how re you?
Reversal is: ?uoy er woh ereht olleH

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