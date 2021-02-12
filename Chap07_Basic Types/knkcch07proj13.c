/*
@@@@ PROGRAM NAME: knkcch07proj13.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a program that calculates the average word 
length for a sentence:
	Enter a sentence: It was deja vu all over again.
	Average word length: 3.4
Simplicity, your program should consider a punctuation mark to be part of the 
word to which it is attached. Display the average word length to one decimal 
place.

*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	float avg=0.00f;
	short lettercount=0, wordcount=0;
	char ch,chp;

	printf("Enter a sentence: ");

	ch=getchar();
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
	}while((ch=getchar())!='\n');
	if(chp!=' ')  //To avoid counting trailing spaces.
	{
		wordcount++;
		avg+=lettercount;
	}
	avg=avg/wordcount;

	printf("Average word length: %.1f",avg);	
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a sentence: It was Deja Vu all over again.
Average word length: 3.4
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a sentence: Good morning sunshine!!!
Average word length: 7.3
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a sentence: How was your day?
Average word length: 3.5
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------
