/*
@@@@ PROGRAM NAME: knkcch07proj10.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a program that counts the number of vowels 
(a, e, i, o, and u) in a sentence:
	Enter a sentence: And that's the way it is.
	Your sentence contains 6 vowels.
*/
#include<stdio.h>
#include<ctype.h>  //tolower()
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char ch;
	int count=0;
	
	printf("Enter a sentence: ");
	while((ch=tolower(getchar()))!='\n')
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
			++count;
	
	printf("Your sentence contains %d vowels.",count);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a sentence: This might be the right time!!
Your sentence contains 7 vowels.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a sentence: brg
Your sentence contains 0 vowels.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a sentence: America
Your sentence contains 4 vowels.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------