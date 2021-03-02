/*
@@@@ PROGRAM NAME: knkcch13proj10.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Modify Programming Project 11 from Chapter 7 so that it includes the following function:

	void reverse_name(char *name);

The function expects name to point to a string containing a first name followed by a last
name. It modifies the string so that the last name comes first, followed by a comma, 
a space, the first initial, and a period. The original string may contain extra spaces 
before the first name, between the first and last names, and after the last name.
*/
#include<stdio.h>
#include<ctype.h>  //toupper();
#include<string.h>  //strcpy().
#include<stdbool.h>  //bool, true, false.
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
void reverse_name(char *name);
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char name[20];
	
	printf("Enter a first and Last name: ");
	gets(name);

	reverse_name(name);
	puts(name);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
void reverse_name(char *name)
{
	char name_copy[20], first_name_initial,*name2;
	bool leading_spaces=true;
	
	strcpy(name_copy,name);
	name2=name_copy;

	//Leading spaces before first name
	while(leading_spaces)
		if(*name2++!=' ')
			leading_spaces=false;
	
	//Storing initial character of first name.
	first_name_initial=*(name2-1);
	
	//pass through first name
	while(*name2++!=' ')
	;

	//Leading spaces before second name.
	leading_spaces=true;
	while(leading_spaces && *name)
		if(*name2++!=' ')
			leading_spaces=false;

	name2--;
	//Load second name to the word
	while((*name=*name2)!=' ' && *name2)
	{
		name++;
		name2++;
	}
	//Append comma, space and the initial of the first name.
	*name++=',';
	*name++=' ';
	*name++=first_name_initial;
	*name='\0';
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
Enter a first and Last name: William smith
smith, W

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a first and Last name:   William   Smith
Smith, W

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a first and Last name:    Fosdick   Lloyd
Lloyd, F

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial4:
@@@@ Trial5:
@@@@ Trial6:
@@@@ Trial7:
@@@@ Trial8:
@@@@ Trial9:
*/
//---------------------------------------------------------------------------