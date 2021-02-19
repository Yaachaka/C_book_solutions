/*
@@@@ PROGRAM NAME: knkcch09proj04.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Modify Programming Project 16 from Chapter 8 so that it 
includes the following functions:

	void read_word(int counts[26]);
	bool equal_array(int counts1[26], int counts2[26]) ;

main will call read_word twice, once for each of the two words entered by the user. As it
reads a word. read_word will use the letters in the word to update the counts array, as
described in the original project. (main will declare two arrays, one for each word. These
arrays are used to track how many times each letter occurs in the words.) main will then
call equal_array, passing it the two arrays. equal_array will return true if the elements 
in the two arrays are identical (indicating that the words are anagrams) and false 
otherwise.
*/
#include<stdio.h>
#include<ctype.h>  //tolower(), isalpha()
#include<stdbool.h>  //bool, true, false.
//-----------------------------------------------------------------------------
void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int counts[26]={0},counts1[26]={0};
	bool flag=0;

	//getting first word
	printf("Enter first word: ");
	read_word(counts);
	
	//getting second word
	printf("Enter second word: ");
	read_word(counts1);
	
	//Check if they are anagrams
	flag=equal_array(counts,counts1);

	//Tell if they are anagrams.
	if(flag)
		printf("The words are not anagrams.");
	else
		printf("The words are anagrams.");


	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
void read_word(int counts[26])
{
	char ch;
	while((ch=tolower(getchar()))!='\n' && ch!=' ')
		if(isalpha(ch))
			counts[ch-'a']++;
	
}
//---------------------------------------------------------------------------
bool equal_array(int counts1[26], int counts2[26])
{
	bool flag=false;
	for(short i=0;i<26;i++)
		if(counts1[i]!=counts2[i])
		{
			flag=true;
			break;
		}
	return flag;
}
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter first word: net
Enter second word: ten
The words are anagrams.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter first word: graph
Enter second word: rough
The words are not anagrams.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter first word: sentence
Enter second word: tennice
The words are not anagrams.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial4:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter first word: note
Enter second word: tone
The words are anagrams.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------