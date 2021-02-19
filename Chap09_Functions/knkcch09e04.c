/*
@@@@ PROGRAM NAME: knkcch09e04.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a function day_of_year(month, day, year) 
that returns the day of the year (an integer between 1 and 366) specified by the three 
arguments.
*/
#include<stdio.h>
//---------------------------------------------------------------------------
short day_of_year(short month, short day, short year);
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	short month,day,year,tot_days;

	printf("Enter month, day and year to see the total number of days: ");
	scanf("%2hd %2hd %4hd",&month,&day,&year);
	
	tot_days=day_of_year(month,day,year);
	printf("MM:DD:YYYY : %.2hd:%.2hd:%.4hd is the %hdth day of the year.",month,day,year,tot_days);

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
short day_of_year(short month, short day, short year)
{
	short tot_days_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	short r_day=day;

	for(short i=0;i<month-1 && i<12;i++)
	{
		r_day+=tot_days_month[i];
		if(!(year%4) && month==2)  //If leap year add one more day in month of february.
			++r_day;
	}
	return r_day;
}
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter month, day and year to see the total number of days: 2 15 2021
MM:DD:YYYY : 02:15:2021 is the 46th day of the year.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------