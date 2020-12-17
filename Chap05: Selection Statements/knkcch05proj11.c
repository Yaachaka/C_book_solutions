/*
@@@@ PROGRAM NAME: knkcch05proj11.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a program that asks the user for a two-digit 
number, then prints the English word for the number:
	Enter a two-digit number: 45
	You entered the number forty-five.
Hint: Break the number into two digits. Use one switch statement to print the 
word for the first digit ("twenty", "thirty", and so forth). Use a second switch 
statement to print the word for the second digit. Don't forget that the numbers 
between 11 and 19 require special treatment.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int number;
	
	printf("Enter a two-digit number: ");
	scanf("%2d",&number);
	printf("You entered the number ");
	
	if(number>19)
	{
		switch(number/10)
		{
			case 2:printf("Twenty");break;
			case 3:printf("Thirty");break;
			case 4:printf("Fourty");break;
			case 5:printf("Fifty");break;
			case 6:printf("Sixty");break;
			case 7:printf("Seventy");break;
			case 8:printf("Eighty");break;
			case 9:printf("Ninety");break;
		}
	}
	
	if(number<10)
		printf("\b");  //Remove extra space.
	
	if(number>9 && number<20)
	{
		switch(number)
		{
			case 10: printf("Ten");break;
			case 11: printf("Eleven");break;
			case 12: printf("Twelve");break;
			case 13: printf("Thirteen");break;
			case 14: printf("Fourteen");break;
			case 15: printf("Fifteen");break;
			case 16: printf("Sixteen");break;
			case 17: printf("Seventeen");break;
			case 18: printf("Eighteen");break;
			case 19: printf("Nineteen");break;
		}
	}
	else
		switch(number%10)
		{
			case 1:printf(" One");break;
			case 2:printf(" Two");break;
			case 3:printf(" Three");break;
			case 4:printf(" Four");break;
			case 5:printf(" Five");break;
			case 6:printf(" Six");break;
			case 7:printf(" Seven");break;
			case 8:printf(" Eight");break;
			case 9:printf(" Nine");break;
		}
		
	if(number==0)
		printf(" Zero");
	printf(".");
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a two-digit number: 99
You entered the number Ninety Nine.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a two-digit number: 78
You entered the number Seventy Eight.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a two-digit number: 18
You entered the number Eighteen.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 4:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a two-digit number: 10
You entered the number Ten.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 5:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a two-digit number: 08
You entered the number Eight.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 5:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a two-digit number: 00
You entered the number Zero.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 6:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a two-digit number: 7
You entered the number Seven.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------