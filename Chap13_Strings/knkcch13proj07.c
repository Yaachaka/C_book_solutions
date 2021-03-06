/*
@@@@ PROGRAM NAME: knkcch13proj07.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Modify Programming Project 11 from Chapter 5 so that it uses arrays containing pointers to
strings instead of switch statements. For example, instead of using a switch statement
to print the word for the first digit, use the digit as an index into an array that 
contains the strings "twenty", "thirty", and so forth.
*/
#include<stdio.h>
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int number;
	
	char *below_ten[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"},
	*ten_to_nineteen[]={"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"},
	*twenty_to_ninety[]={"Twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Ninety"};
	
	printf("Enter a two-digit number: ");
	scanf("%2d",&number);
	printf("You entered the number ");
	
	if(number>19)
		printf("%s",twenty_to_ninety[number/10-2]);
	
	if(number<10)
		printf("\b");  //Remove extra space.
	
	if(number>9 && number<20)
		printf("%s",ten_to_nineteen[number-10]);
	else if(number%10)
		printf(" %s",below_ten[number%10]);
		
	if(number==0)
		printf(" %s",below_ten[0]);
	printf(".");
	

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
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
Enter a two-digit number: 0
You entered the number Zero.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a two-digit number: 20
You entered the number Twenty.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a two-digit number: 10
You entered the number Ten.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial4:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a two-digit number: 17
You entered the number Seventeen.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial5:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a two-digit number: 34
You entered the number Thirty Four.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial6:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a two-digit number: 10
You entered the number Ten.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial7:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a two-digit number: 6
You entered the number Six.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial8:
@@@@ Trial9:
*/
//---------------------------------------------------------------------------