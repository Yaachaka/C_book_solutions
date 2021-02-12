/*
@@@@ PROGRAM NAME: knkcch06proj01.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a program that finds the largest in a series 
of numbers entered by the user. The program must prompt the user to enter 
numbers one by one. When the user enters 0 or a negative number, the program 
must display the largest non-negative number entered:
	Enter a number: 60
	Enter a number: 38.3
	Enter a number: 4.89
	Enter a number: 100.62
	Enter a number: 75.2295
	Enter a number: 0
	The largest number entered was 100.62
Note that the number aren't necessarily integers.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	float number,max;
	
	printf("Enter a number: ");
	scanf("%f",&number);
	max=number;
	while(number>0)
	{
		printf("Enter a number: ");
		scanf("%f",&number);
		if(max<number)
			max=number;
	}
	
	printf("The largest number entered was: %.2f",max);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a number: 34
Enter a number: 76
Enter a number: 23
Enter a number: 98
Enter a number: 0
The largest number entered was: 98.00
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a number: 34
Enter a number: 23.22
Enter a number: 23.32
Enter a number: 56
Enter a number: -2
The largest number entered was: 56.00
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a number: 0
The largest number entered was: 0.00
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 4:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a number: -1
The largest number entered was: -1.00
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------