/*
@@@@ PROGRAM NAME: knkcch13proj11.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Modify Programming Project 13 from Chapter 7 so that it includes the following function:

	double compute_average_word_length(const char *sentence);

The function returns the average length of the words in the string pointed to by sentence.
*/
#include<stdio.h>
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
double compute_average_word_length(const char *sentence);
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	double avg=0.00;
	char sentence[80];

	printf("Enter a sentence: ");
	gets(sentence);

	avg=compute_average_word_length(sentence);	
	printf("Average word length: %.1lf",avg);	


	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
double compute_average_word_length(const char *sentence)
{
	double avg=0.00;
	short lettercount=0, wordcount=0;
	char ch,chp;

	ch=*sentence++;
	do
	{
		if(ch==' ')
		{
			avg+=lettercount;
			wordcount++;
			lettercount=0;
		}
		else
			lettercount++;
		chp=ch;
	}while(ch=*sentence++);
	if(chp!=' ')  //To avoid counting trailing spaces.
	{
		wordcount++;
		avg+=lettercount;
	}
	avg=avg/wordcount;

	return avg;
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
Enter a sentence: Is it not a good day?
Average word length: 2.7
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a sentence: It was Deja Vu all over again.
Average word length: 3.4
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a sentence: Good morning sunshine!!!
Average word length: 7.3
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial4:
@@@@ Trial5:
@@@@ Trial6:
@@@@ Trial7:
@@@@ Trial8:
@@@@ Trial9:
*/
//---------------------------------------------------------------------------