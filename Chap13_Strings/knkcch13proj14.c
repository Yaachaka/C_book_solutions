/*
@@@@ PROGRAM NAME: knkcch13proj14.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Modify Programming Project 16 from Chapter 8 so that it includes the following function:

	bool are_anagrams(const char *word1, const char *word2) ;

The function returns true if the strings pointed to by word1 and word2 are anagrams.
*/
#include<stdio.h>
#include<ctype.h>  //tolower(), isalpha().
#include<string.h>  //strlen().
#include<stdbool.h>  //bool, true, false
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
bool are_anagrams(const char *word1, const char *word2);
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char alphas[26]={0},ch,word1[10],word2[10];
	short flag=0;

	//Getting words
	printf("Enter first word: ");
	scanf("%s",word1);
	
	printf("Enter second word: ");
	scanf("%s",word2);
	
	//Check if they are anagrams and print accordingly.
	flag=are_anagrams(word1,word2);	
	if(flag)
		printf("The words are anagrams.");
	else
		printf("The words are not anagrams.");


	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
bool are_anagrams(const char *word1, const char *word2)
{
	char alphas[26]={0},ch;
	
	if(strlen(word1) != strlen(word2))
		return false;

	//count occurence of each characters in word1
	while(ch=tolower(*word1++))
		if(isalpha(ch))
			alphas[ch-'a']++;
	
	//count occurence of each characters in word2
	while(ch=tolower(*word2++))
		if(isalpha(ch))
			alphas[ch-'a']--;
	
	for(short i=0;i<26;i++)
		if(alphas[i])
			return false;
	
	return true;

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
Enter first word: tab
Enter second word: bat
The words are anagrams.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter first word: car
Enter second word: mat
The words are not anagrams.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter first word: draw
Enter second word: ward
The words are anagrams.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial4:
@@@@ Trial5:
@@@@ Trial6:
@@@@ Trial7:
@@@@ Trial8:
@@@@ Trial9:
*/
//---------------------------------------------------------------------------