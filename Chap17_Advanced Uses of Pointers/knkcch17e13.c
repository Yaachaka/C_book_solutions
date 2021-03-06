/*
@@@@ PROGRAM NAME: knkcch17e13.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
The following function is supposed 
to insert a new node into its proper place in an ordered list, returning a 
pointer to the first node in the modified list. Unfortunately, the function 
doesn’t work correctly in all cases. Explain what’s wrong with it and show how 
to fix it. Assume that the node structure is the one defined in Section 17.5.

	struct node *insert_into_ordered_list(struct node *list,struct node *new_node)
	{
		struct node *cur = list, *prev = NULL;
		while (cur->value <= new_node->value) {
			prev = cur;
			cur = cur->next;
		}
		prev->next = new_node;
		new_node->next = cur;
		return list;
	}
*/
#include <stdio.h>
#include <stdlib.h>  //NULL
//---------------------------------------------------------------------------
struct node
{
	int value;
	struct node *next;
};
//---------------------------------------------------------------------------
struct node *insert_into_ordered_list(struct node *list,struct node *new_node);
//---------------------------------------------------------------------------
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
struct node *insert_into_ordered_list(struct node *list, struct node *new_node)
{
	struct node *cur = list, *prev = NULL;
	while (cur->value <= new_node->value && cur)
	{
		prev = cur;
		cur = cur->next;
	}
	if(!cur)
		cur=new_node;
	else
	{
		prev->next = new_node;
		new_node->next = cur;
	}
	return list;
}
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
File: knkcch17e13.c, C Version: 199901, Date: Mar 16 2021, Time: 22:08:16


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