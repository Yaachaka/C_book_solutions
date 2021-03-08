#include <stdio.h>
#include<stdlib.h>  //exit(), EXIT_FAILURE
#include<stdbool.h>  //bool, true, false.
#include "stack.h"
//---------------------------------------------------------------------------
int contents[STACK_SIZE];
int top = 0;
//-----------------------------------------------------------------------------
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
void push(int c)
{
	if (is_full())
	{
		printf("Expression is too complex.\n");
		exit(EXIT_FAILURE);
	}
	contents[top++] = c;
	//printf("Pushing %d\n",contents[top-1]);
}
//---------------------------------------------------------------------------
int pop(void)
{
	if (is_empty())
	{
		printf("Not enough operands in expression.\n");
		exit(EXIT_FAILURE);
	}
	//printf("Popping %d\n",contents[top-1]);
	return contents[--top];
	
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
