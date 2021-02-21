/*
@@@@ PROGRAM NAME: knkcch12proj05.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Modify Programming Project 14 from Chapter 8 so that 
it uses a pointer instead of an integer to keep track of the current position in the 
array that contains the sentence.
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
	
	const int n=80;
	short char_count=0;
	char sentence[n], r_sentence[n],*p=sentence,*q=r_sentence;

	//Getting a statement
	printf("Enter a sentence [max. 80 chars]: ");
	while((*p=getchar())!='.' && *p!='!' && *p!='?' && p<sentence+n)
	{
		p++;
		char_count++;
	}
	
	*(q + (p - sentence))=*p;  //. or ! or ? into the reversed sentence.
	
	for(--p;p>=sentence;p--)
	{
		short count1=0,count2=0;
		//searching for word from the end in the given sentence.
		while(*p!=' ' && p>=sentence)
		{
			count1++;
			p--;
		}
		p++;
		count2=count1;
		//Storing the acquired word into the reversed sentence storage.
		while(count1--)
			*q++ = *p++;
		
		p=p-count2-1;
		
		//Filling up the spaces in the reversed sentence storage.
		if(p>sentence)
			*q++=' ';
	}

	printf("Reversed sentence: ");
	q=r_sentence;
	while(char_count-- + 1)
		printf("%c",*q++);


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
Enter a sentence [max. 80 chars]: Hello people.
Reversed sentence: people Hello.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a sentence [max. 80 chars]: Isn't it a good time?
Reversed sentence: time good a it Isn't?
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