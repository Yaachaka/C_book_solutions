/*
@@@@ PROGRAM NAME: knkcch08proj11.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Modify Programming Project 4 from Chapter 7 so that the 
program labels its output:

	Enter phone number: 1-800-COL-LECT
	In numeric form: 1-800-265-5328

The program will need to store the phone number (either in its original form or in its
numeric form) in an array of characters until it can be printed. You may assume that the
phone number is no more than 15 characters long.
*/
#include<stdio.h>
#include<ctype.h>  //toupper().
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char c,ch[15];
	short i=0;

	printf("Enter phone number: ");
	
	while((c=toupper(getchar()))!='\n' && i<15)  //Start of if for character ch[i]
	{
		if(c=='-' || (c>='0'&&c<='9') || (c>='A'&&c<='Z'))
		{
			if(c>='A'&&c<='Z')
				switch(c)
				{
					case 'A':case 'B':case 'C':ch[i]='2';break;
					case 'D':case 'E':case 'F':ch[i]='3';break;
					case 'G':case 'H':case 'I':ch[i]='4';break;
					case 'J':case 'K':case 'L':ch[i]='5';break;
					case 'M':case 'N':case 'O':ch[i]='6';break;
					case 'P':case 'Q':case 'R':case 'S':ch[i]='7';break;
					case 'T':case 'U':case 'V':ch[i]='8';break;
					case 'W':case 'X':case 'Y':case 'Z':ch[i]='9';break;
				}
			else
				ch[i]=c;
			i++;
		}
	}

	printf("In numeric form: ");
	for(short i=0;i<15;i++)
		printf("%c",ch[i]);
	
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
Enter phone number: 1-800-COL-lect
In numeric form: 1-800-265-5328
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter phone number: 2800collec
In numeric form: 2800265532▒▒
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------