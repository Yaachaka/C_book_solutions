/*
@@@@ PROGRAM NAME: knkcch10proj01.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Modify the stack example of Section 10.2 so that it 
stores characters instead of integers. Next, add a main function that asks the user to 
enter a series of parentheses and/or braces, then indicates whether or not they’re 
properly nested:

	Enter parentheses and/or braces: ((){}{()})
	Parentheses/braces are nested properly

Hint: As the program reads characters, have it push each left parenthesis or left brace. 
When it reads a right parenthesis or brace, have it pop the stack and check that the 
item popped is a matching parenthesis or brace. (If not, the parentheses/braces aren‘t 
nested properly.) When the program reads the new-line character, have it check whether 
the stack is empty: if so, the parentheses/braces are matched. If the stack isn't empty 
(or if stack_underflow is ever called), the parentheses/braces aren't matched. If 
stack_overflow is called, have the program print the message Stack overflow and terminate 
immediately.
*/
#include<stdio.h>
#include<stdlib.h>  //exit(), EXIT_FAILURE
#include<stdbool.h>  //bool, true, false.
//-----------------------------------------------------------------------------
#define STACK_SIZE 20

char contents[STACK_SIZE];
int top = 0;
//-----------------------------------------------------------------------------
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char c);
char pop(void);

//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char ch,ch2;
	bool flag=false;
	
	make_empty();  //Clear the stack.

	printf("Enter parentheses and/or braces: ");
	
	while((ch=getchar())!='\n')  //Start of [[WHILE1]]
	{
		if(ch=='(' || ch=='{')
			push(ch);
		else if(ch==')' || ch=='}')
		{
			ch2=pop();  //Pop for openening braces or parentheses
			//Now check if they are matching.
			if(ch=='(' && ch2!=')')
			{
				flag=true;
				break;
			}
			if(ch=='{' && ch2!='}')
			{
				flag=true;
				break;
			}
		}
	}//End of [[WHILE1]]

	if(flag || !is_empty())
		printf("Parentheses/braces are not nested properly.");
	else
		printf("Parentheses/braces are nested properly.");

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;  //exit(0) or exit(EXIT_SUCCESS) can be used.
}
//-------------------------END OF MAIN()---------------------------------------
void make_empty(void)
{
	top = 0;
}
//---------------------------------------------------------------------------
bool is_empty(void)
{
	return top == 0;
}
//---------------------------------------------------------------------------
bool is_full(void)
{
	return top == STACK_SIZE;
}
//---------------------------------------------------------------------------
void push(char c)
{
	if (is_full())
	{
		printf("Error in push: stack is full.");
		exit(EXIT_FAILURE);
	}
	contents[top++] = c;
}
//---------------------------------------------------------------------------
char pop(void)
{
	if (is_empty())
	{
		printf("Error in pop: stack is empty.");
		exit(EXIT_FAILURE);
	}
	return contents[--top];
}
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter parentheses and/or braces: ({)
Parentheses/braces are not nested properly.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter parentheses and/or braces: ((){}{()}
Parentheses/braces are not nested properly.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter parentheses and/or braces: ({}{()})
Parentheses/braces are nested properly.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial4:
@@@@ Trial5:
@@@@ Trial6:
*/
//---------------------------------------------------------------------------