/*
@@@@ PROGRAM NAME: knkcch07proj09.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a program that asks the user for a 12-hour 
time, then displays the time in 24-hour form:
	Enter a 12-hour time: 9:11 PM
	Equivalent 24-hour time: 21:11
See Programming Project 8 for a description of the input format.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int hour,min;
	char c;
	
	printf("Enter a 12-hour time: ");
	scanf("%2d:%2d %c",&hour,&min,&c);
	
	if((c=='a' || c=='A') && hour==12)
		hour=0;
	if(c=='p' || c=='P')
	{
		hour=hour*60+min+720;
		hour/=60;
	}
	
	printf("Equivalent 24-hour time: %.2d:%.2d",hour,min);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 12-hour time: 3:4 pm
Equivalent 24-hour time: 15:04
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 12-hour time: 8:5am
Equivalent 24-hour time: 08:05
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------