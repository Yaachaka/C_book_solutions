/*
--PROGRAM NAME: knkcch04proj01.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: Write a program that asks the user to enter a two-digit 
number, then prints the number with its digits reversed.	A session with the 
program should have following appearance:
	Enter a two-digit number: 28
	The reversal is: 82
Read the number using %d, then break it into two-digits. Hint: If n is an 
integer, then n%10 is the last digit in n and n/10 is n with the last digit 
removed.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int n;
	
	//User input
	printf("Enter a two-digit number: ");
	scanf("%2d",&n);
	
	//Output
	printf("The reversal is: %d.",(n%10)*10+n/10);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a two-digit number: 83
The reversal is: 38.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------