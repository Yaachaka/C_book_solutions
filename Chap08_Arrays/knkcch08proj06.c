/*
@@@@ PROGRAM NAME: knkcch08proj06.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: The prototypical Internet newbie is a fellow named BIFF, 
who has a unique way of Writing messages. Here’s a typical BIFF communiqué:

	H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!

Write a “BIFF filter” that reads a message entered by the user and translates it into 
BIFF-speak:

	Enter message: Hey dude, C is rilly cool
	In BIFF-speak: H3Y DUD3, C 15 RILLY C00L!!!!!!!!!!

Your program should convert the message to upper-case letters, substitute digits for 
certain letters (A→4, B→8, E→3, I→1, O→0, S→5), and then append 10 or so exclamation 
marks. Hint: Store the original message in an array of characters, then go back through 
the array, translating and printing characters one by one.
*/
#include<stdio.h>
#include<ctype.h>  //toupper()
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char message[80];
	int length=(int)(sizeof(message)/sizeof(message[0])),length2,i=0;

	//Getting message
	printf("Enter message: ");
	while((message[i++]=getchar())!='\n')
		length2++;
	
	//Uppercasing and Encoding message with BIFF
	for(int i=0;i<length2;i++)
		switch(message[i]=toupper(message[i]))
		{
			case 'A': message[i]='4';break;
			case 'B': message[i]='8';break;
			case 'E': message[i]='3';break;
			case 'I': message[i]='1';break;
			case 'O': message[i]='0';break;
			case 'S': message[i]='5';break;
			
		}
	
	//Appending 10 exclamatory symbols
	for(int i=length2;i<(length2+10) && i<length;i++)
		message[i]='!';
	
	//Displaying message in BIFF.
	printf("In BIFF-speak: ");
	for(int i=0;i<length2+10 && i<length;i++)
		printf("%c",message[i]);
	
	
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
Enter message: Hello there... How are you??
In BIFF-speak: H3LL0 TH3R3... H0W 4R3 Y0U??!!!!!!!!!!
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter message: Hey dude, C is rilly cool
In BIFF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------