/*
@@@@ PROGRAM NAME: knkcch13proj12.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Modify Programming Project 14 from Chapter 8 so that it stores the words in a two-
dimensional char array as it reads the sentence, with each row of the array storing a 
single word. Assume that the sentence contains no more than 30 words and no word is more
than 20 characters long. Be sure to store a null character at the end of each word so 
that it can be treated as a string.
*/
#include<stdio.h>
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	short i=0,j=0;
	char ch, n_words[30][20];

	//Getting a statement
	printf("Enter a sentence [max. 80 chars]: ");
	ch=getchar();
	while(ch!='.' && ch!='!' && ch!='?' && i<30)
	{
		if(ch==' ')
		{
			n_words[i][j]='\0';
			i++;
			j=0;
		}
		else
		{
			n_words[i][j++]=ch;
			if(j>=19)
				n_words[i][19]='\0';
		}
		ch=getchar();
	}
	n_words[i][j]='\0';  //Null character to the last word of the sentence.

	printf("Reversed sentence: ");
	
	for(short j=i;j>=0;j--)
		printf("%s ",n_words[j]);
	printf("\b%c",ch);


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
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a sentence [max. 80 chars]: Null character at the end of each word. hi
Reversed sentence: word each of end the at character Null.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a sentence [max. 80 chars]: Abracadabragilligillijhum is a funny word.
Reversed sentence: word funny a is Abracadabragilligil.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
@@@@ Trial4:
@@@@ Trial5:
@@@@ Trial6:
@@@@ Trial7:
@@@@ Trial8:
@@@@ Trial9:
*/
//---------------------------------------------------------------------------