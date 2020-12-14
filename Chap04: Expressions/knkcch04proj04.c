/*
--PROGRAM NAME: knkcch04proj04.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: Write a program that reads an integer entered by the 
user and display it in octal (Base 8):
	Enter a number between 0 and 32767: 1953
	In Octal, your number is: 03641
The output should be displayed using 5 digits, even if fewer digits are 
sufficient. Hint: To convert the number to octal, first divide it by 8; the 
remainder is the last digit of the octal number (1, in this case). Then divide 
the original number by 8 and repeat the process to arrive at the last digit. 
(printf is capable of displaying numbers in base 8, as we will see in Chapter 8, 
actually there is an easier way to write this program.)
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int b10,b8,temp;
	
	//User input to get decimal number
	printf("Enter a number between 0 and 32767: ");
	scanf("%5d",&b10);
	
	b8=b10%8;  //last digit of octal number
	temp=b10/8;
	b8+=temp%8*10;  //last but one digit of octal number.
	temp/=8;
	b8+=temp%8*100;  //last but two digit of octal number.
	temp/=8;
	b8+=temp%8*1000;  //last but three digit of octal number.
	temp/=8;
	b8+=temp%8*10000;  //last but four digit of octal number.
	
	//Output octal number
	printf("In Octal, your number is: %.5d",b8);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
-- Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a number between 0 and 32767: 1953
In Octal, your number is: 03641
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a number between 0 and 32767: 32767
In Octal, your number is: 77777
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a number between 0 and 32767: 195
In Octal, your number is: 00303
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------