/*
@@@@ PROGRAM NAME: knkcch13proj13.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Modify Programming Project 15 from Chapter 8 so that it includes the following function:

	void encrypt(char *message, int shift);

The function expects message to point to a string containing the message to be encrypted;
shift represents the amount by which each letter in the message is to be shifted.
*/
#include<stdio.h>
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
void encrypt(char *message, int shift);
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char message[80];
	short shift=0;
	
	printf("Enter message to be encrypted: ");
	gets(message);
	
	printf("Enter shift amount (1-25): ");
	scanf("%2hd",&shift);  //don't use %d as format specifier for scanning short. Use %hd.

	encrypt(message,shift);
	printf("Encrypted message: ");
	puts(message);

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
void encrypt(char *message, int shift)
{
	short i=0,j=0;
	
	do
	{
		if(*message>='A' && *message<='Z')
			*message=((*message - 'A') +shift) % 26+ 'A';
		if(*message>='a' && *message<='z')
			*message=((*message - 'a') +shift) % 26+ 'a';
		
	} while(*++message);
	
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
Enter message to be encrypted: There is a secret room in the house.
Enter shift amount (1-25): 5
Encrypted message: Ymjwj nx f xjhwjy wttr ns ymj mtzxj.

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter message to be encrypted: Ymjwj nx f xjhwjy wttr ns ymj mtzxj.
Enter shift amount (1-25): 21
Encrypted message: There is a secret room in the house.

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