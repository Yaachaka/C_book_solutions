/*
@@@@ PROGRAM NAME: knkcch13proj09.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Modify Programming Project 10 from Chapter 7 so that it includes the following function:

	int compute_vowel_count(const char *sentence) ;

The function returns the number of vowels in the string pointed to by the sentence
parameter.
*/
#include<stdio.h>
#include<ctype.h>  //tolower()
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
int compute_vowel_count(const char *sentence);
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char sentence[80];
	int count=0;
	
	printf("Enter a sentence: ");
	gets(sentence);  //gets() doesn't skip leading spaces. gets() reads until new-line character and new-line character is replaced with null character.

	count=compute_vowel_count(sentence);
	printf("Your sentence contains %d vowels.",count);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
int compute_vowel_count(const char *sentence)
{
	char ch;
	int count=0;

	while(ch=tolower(*sentence++))
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
			++count;
	return count;
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
Enter a sentence: How many vowels are there in this sentence?
Your sentence contains 13 vowels.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a sentence: MMS
Your sentence contains 0 vowels.
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