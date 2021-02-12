/*
--PROGRAM NAME: knkcch05proj01.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: Write a program that calculates how many digits a number 
contains:
	Ente a number: 374
	The number 374 has 3 digits
You may assume that the number has no more than four digits. Hint: Use if 
statements to test the number. For example, if the number is between 0 and 9, it 
has one digit. If the number is between 10 and 99, it has two digits.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int n,ndigits;
	
	printf("Enter a number: ");
	scanf("%4d",&n);
	
	if(n>=0 && n<10) ndigits=1;
	else if(n>=10 && n<100) ndigits=2;
	else if(n>=100 && n<1000) ndigits=3;
	else ndigits=4;
	
	printf("The number %d has %d digits.",n,ndigits);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
-- Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a number: 23
The number 23 has 2 digits.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a number: 345
The number 345 has 3 digits.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a number: 8
The number 8 has 1 digits.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 4:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a number: 0
The number 0 has 1 digits.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 5:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a number: 9999
The number 9999 has 4 digits.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------