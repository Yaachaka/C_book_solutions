/*
@@@@ PROGRAM NAME: knkcch08proj13.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Modify Programming Project 11 from Chapter 7 so that the 
program labels its output:

	Enter a first and last name: Lloyd Fosdick
	You entered the name: Fosdick, L.

The program will need to store the last name (but not the first name) in an array of 
characters until it can be printed. You may assume that the last name is no more than 
20 characters long.
*/
#include<stdio.h>
#include<ctype.h>  //toupper();
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char fn0,ln[20],ch;
	
	printf("Enter a first and Last name: ");
	//Getting first name
	fn0=toupper(getchar());
	while((ch=getchar())!=' ')
	;

	int i=0,j=0;
	//Getting last name
	while((ln[i++]=getchar())!='\n' && i<20)
	;
	
	ln[0]=toupper(ln[0]);

	while(--i)
		printf("%c",ln[j++]);
	
	printf(", %c",toupper(fn0));
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a first and Last name: fosdick Lawson
Lawson, F
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a first and Last name: Lloyd fosdick
Fosdick, L
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------