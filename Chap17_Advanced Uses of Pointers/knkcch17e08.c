/*
@@@@ PROGRAM NAME: knkcch17e08.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Section 15.2 describes a file, 
stack.c, that provides functions for storing integers in a stack. In that 
section, the stack was implemented as an array. Modify stack.c so that a stack 
is now stored as a linked list. Replace the contents and top variables by a 
single variable that points to the first node in the list (the “top” of the 
stack). Write the functions in stack.c so that they use this pointer. Remove the 
is_full function, instead having push return either true (if memory was 
available to create a node) or false (if not).
*/
#include <stdio.h>
#include <stdbool.h>   /* C99 only */
#include <stdlib.h>
//---------------------------------------------------------------------------
struct node {
  int value;
  struct node *next;
};
//---------------------------------------------------------------------------
struct node *top = NULL;
//---------------------------------------------------------------------------
void make_empty(void);
bool is_empty(void);
bool push(int i);
int pop(void);
//---------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("File: %s, C Version: %d, Date: %s, Time: %s\n\n", __FILE__, __STDC_VERSION__, __DATE__, __TIME__);



	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
void make_empty(void)
{
	struct node *temp;

	while (top != NULL)
	{
		temp = top;
		top = top->next;
		free(temp);
	}
}
//---------------------------------------------------------------------------
bool is_empty(void)
{
  return top == NULL;
}
//---------------------------------------------------------------------------
bool push(int i)
{
	struct node *new_node;

	new_node = malloc(sizeof(struct node));
	if (new_node == NULL)
		return false;

	new_node->value = i;
	new_node->next = top;
	top = new_node;

	return true;
}
//---------------------------------------------------------------------------
int pop(void)
{
	struct node *temp;
	int i;

	if (is_empty())
	{
		printf("*** Stack underflow; program terminated. ***\n");
		exit(EXIT_FAILURE);
	}

	i = top->value;
	temp = top;
	top = top->next;
	free(temp);

	return i;
}
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
File: knkcch17e08.c, C Version: 199901, Date: Mar 16 2021, Time: 15:25:49


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