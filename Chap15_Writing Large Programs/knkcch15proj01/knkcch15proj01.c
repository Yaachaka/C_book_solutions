/*
@@@@ PROGRAM NAME: knkcch15proj01.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
The justify program of Section 15.3 justifies lines by inserting extra spaces between
words. The way the write_line function currently works, the words closer to the end of
a line tend to have slightly wider gaps between them than the words at the beginning. (For
example, the words closer to the end might have three spaces between them, while the
words closer to the beginning might be separated by only two spaces.) Improve the program
by having write_line alternate between putting the larger gaps at the end of the line and
putting them at the beginning of the line.
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
		if(word_len > MAX_WORD_LEN)
			word[MAX_WORD_LEN] = '*';
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