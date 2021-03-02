/*
@@@@ PROGRAM NAME: knkcch13proj01.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Write a program that finds the “smallest” and “largest” in a series of words. After the user
enters the words, the program will determine which words would come first and last if the
words were listed in dictionary order. The program must stop accepting input when the user
enters a four-letter word. Assume that no word is more than 20 letters long. An interactive
session with the program might look like this:

	Enter word: dog
	Enter word: zebra
	Enter word: rabbit
	Enter word: catfish
	Enter word: walrus
	Enter word: cat
	Enter word: fish

Smallest word: cat
Largest word: zebra

Hint: Use two strings named smallest_word and largest_word to keep track of the
“smallest” and “largest” words entered so far. Each time the user enters a new word, use
strcmp to compare it with smallest_word if the new word is “smaller”, use strcpy
to save it in smallest_word. Do a similar comparison with largest_word. Use
strlen to determine when the user has entered a four-letter word.
*/
#include<stdio.h>
#include<string.h>
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
	
	char smallest_word[21],largest_word[21],word[21];

	printf("Enter word: ");
	scanf("%s",word);

	strcpy(smallest_word,word);
	strcpy(largest_word,word);

	while(strlen(word)!=4)
	{
		printf("Enter word: ");
		scanf("%s",word);

		if(strcmp(smallest_word,word)>0)
			strcpy(smallest_word,word);
		if(strcmp(largest_word,word)<0)
			strcpy(largest_word,word);
		
	}
	
	printf("\nLargest word: %s",largest_word);
	printf("\nSmallest word: %s",smallest_word);
	
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
Enter word: dog
Enter word: zebra
Enter word: rabbit
Enter word: catfish
Enter word: walrus
Enter word: cat
Enter word: fish

Largest word: zebra
Smallest word: cat
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter word: word

Largest word: word
Smallest word: word
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter word: hint

Largest word: hint
Smallest word: hint
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial4:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter word: strings
Enter word: largest
Enter word: smallest
Enter word: similar
Enter word: output
Enter word: user

Largest word: user
Smallest word: largest
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial5:
@@@@ Trial6:
@@@@ Trial7:
@@@@ Trial8:
@@@@ Trial9:
*/
//---------------------------------------------------------------------------