/*
@@@@ PROGRAM NAME: knkcch08proj15.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: One of the oldest known encryption techniques is the 
Caesar cipher, attributed to Julius Caesar. It involves replacing each letter in a 
message with another letter that is a fixed number of positions later in the alphabet. 
(If the replacement would go past the letter Z, the cipher “wraps around” to the 
beginning of the alphabet. For example, if each letter is replaced by the letter two 
positions after it, then Y would be replaced by A, and Z would be replaced by B.) Write 
a program that encrypts a message using a Caesar cipher. The user will enter the message 
to be encrypted and the shift amount (the number of positions by which letters should 
be shifted):

	Enter message to be encrypted: Go ahead, make my day.
	Enter shift amount (1-25): 3
	Encrypted message: Jr dkhdg, pdnh pb gdb.

Notice that the program can decrypt a message if the user enters 26 minus the original key:

	Enter message to be encrypted: Jr dkhdg, pdnh pb gdb.
	Enter shift amount (1-25): 23
	Encrypted message: Go ahead, make my day.

You may assume that the message does not exceed 80 characters. Characters other than 
letters should be left unchanged. Lower-case letters remain lower-case when encrypted, 
and upper-case letters remain upper-case. Hint: To handle the wrap-around problem, use the
expression ((ch - 'A') +n) % 26+ 'A' to calculate the encrypted version of an upper-case 
letter, where ch stores the letter and n stores the shift amount. (You'll need a similar
expression for lower-case letters.)
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char message[80];
	short i=0, shift=0,j=0;
	
	printf("Enter message to be encrypted: ");
	while((message[i]=getchar())!='\n')
		i++;

	printf("Enter shift amount (1-25): ");
	scanf("%2hd",&shift);  //don't use %d as format specifier for scanning short. Use %hd.

	for(j=0;j<i;j++)
	{
		if(message[j]>='A' && message[j]<='Z')
			message[j]=((message[j] - 'A') +shift) % 26+ 'A';
		if(message[j]>='a' && message[j]<='z')
			message[j]=((message[j] - 'a') +shift) % 26+ 'a';
		
	}
	
	j=0;
	printf("Encrypted message: ");
	while(j<i)
		printf("%c",message[j++],j);

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
Enter message to be encrypted: Hello world.
Enter shift amount (1-25): 3
Encrypted message: Khoor zruog.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter message to be encrypted: Khoor zruog.
Enter shift amount (1-25): 3
Encrypted message: Nkrru cuxrj.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter message to be encrypted: Khoor zruog.
Enter shift amount (1-25): 23
Encrypted message: Hello world.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------