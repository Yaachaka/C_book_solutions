/*
@@@@ PROGRAM NAME: knkcch17proj04.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Modify the justify program of Section 15.3 by 
rewriting the line.c file so that it stores the current line in a linked list. 
Each node in the list will store a single word. The line array will be replaced 
by a variable that points to the node containing the first word. This variable 
will store a null pointer whenever the line is empty.
*/
#include <stdio.h>
#include <string.h>  //strlen()
#include "line.h"
#include "word.h"
//-----------------------------------------------------------------------------
#define MAX_WORD_LEN 20
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("File: %s, C Version: %d, Date: %s, Time: %s\n\n", __FILE__, __STDC_VERSION__, __DATE__, __TIME__);
	
	char word[MAX_WORD_LEN+2];
	int word_len;
	
		
	clear_line();
	for (;;)
	{
		read_word(word, MAX_WORD_LEN+1);
		word_len = strlen(word);
		if (word_len == 0)
		{
			flush_line();
			printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			return 0;
		}
		if (word_len > MAX_WORD_LEN)
			word[MAX_WORD_LEN] = '*';
		if (word_len + 1 > space_remaining())
		{
			write_line();
			clear_line();
		}
		add_word(word);
	}

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
