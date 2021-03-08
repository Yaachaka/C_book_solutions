/*
@@@@ PROGRAM NAME: knkcch15proj02.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Modify the justify program of Section 15.3 by having the read_word function
(instead of main) store the * character at the end of a word that’s been truncated.
*/
#include <stdio.h>
#include <string.h>
//-----------------------------------------------------------------------------
#include "line.h"
#include "word.h"
//-----------------------------------------------------------------------------
#define MAX_WORD_LEN 20
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char word[MAX_WORD_LEN+2];
	int word_len;

	clear_line();
	for (;;)
	{
		read_word(word, MAX_WORD_LEN+1);  //read_word() function in word.h
		word_len = strlen(word);
		if(word_len == 0)
		{
			flush_line();  //flush_line() in line.c and line.h
			return 0;
		}
		if(word_len + 1 > space_remaining())  //space_remaining() in line.c and line.h
		{
			write_line();  //write_line() in line.c and line.h
			clear_line();  //clear_line() in line.c and line.h
		}
		add_word(word);  //word_line() in line.c and line.h
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