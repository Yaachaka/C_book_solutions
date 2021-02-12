/*
--PROGRAM NAME: knkcch03proj01.c
--PROGRAM STATEMENT: Write a program that accepts a date from the user 
in the form mm/dd/yyyy and then displays it in the form yyyymmdd:
	Enter a date (mm/dd/yyyy): 2/17/2011
	You entered the date 20110217
*/
#include<stdio.h>
//--------------------------START OF MAIN()-----------------------------------
int main(void)
{
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int day,month,year;
	
	//User inputs
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d",&month,&day,&year);
	
	//Display
	printf("You entered the date %.4d%.2d%.2d",year,month,day);
	
	printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//--------------------------END OF MAIN()-------------------------------------
/*
OUTPUT:
--Trial 1:
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a date (mm/dd/yyyy): 2/4/196
You entered the date 01960204
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
--Trial 2:
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a date (mm/dd/yyyy): 2/23/2018
You entered the date 20180223
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//----------------------------------------------------------------------------