/*
@@@@ PROGRAM NAME: knkcch08proj14.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a program that reverses the words in a sentence:

	Enter a sentence: you can cage a swallow can't you?
	Reversal of sentence: you can't swallow a cage can you?

Hint: Use a loop to read the characters one by one and store them in a one-dimensional
char array. Have the loop stop at a period, question mark, or exclamation point (the 
“terminating character”), which is saved in a separate char variable. Then use a second 
loop to search backward through the array for the beginning of the last word. Print the 
last word, then search backward for the next-to-last word. Repeat until the beginning of 
the array is reached. Finally, print the terminating character.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	short i=0;
	char sentence[80], r_sentence[80];

	//Getting a statement
	printf("Enter a sentence [max. 80 chars]: ");
	while((sentence[i]=getchar())!='.' && sentence[i]!='!' && sentence[i]!='?' && i<80)
		i++;

	printf("Reversed sentence: ");
	r_sentence[i]=sentence[i];
	for(short j=i-1,k=0;j>=0;j--)
	{
		short count=0;
		//searching for word from the end in the given sentence.
		while(sentence[j]!=' ' && j>=0)
		{	
			count++;
			j--;
		}
		//Storing the aquired word into the reversed sentence storage.
		for(short k2=0;k2<count;k2++,k++)
			r_sentence[k]=sentence[k2+j+1];
			
		//Filling up the spaces in the reversed sentence storage.
		if(j>0)
			r_sentence[k++]=' ';
	}

	for(short j=0;j<=i;j++)
		printf("%c",r_sentence[j]);

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a sentence [max. 80 chars]: hello world.
Reversed sentence: world hello.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a sentence [max. 80 chars]: you can cage a swallow can't you?
Reversed sentence: you can't swallow a cage can you?
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------