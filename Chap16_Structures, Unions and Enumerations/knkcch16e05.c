/*
@@@@ PROGRAM NAME: knkcch16e05.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Write the following functions, assuming that the date structure contains three members:
month, day, and year (all of type int).
(a) int day_of_year(struct date d);
Returns the day of the year (an integer between 1 and 366) that corresponds to the date d.
(b) int compare_dates(struct date d1, struct date d2);
Returns -1 if d1 is an earlier date than d2. +1 if d1 is a later date than d2, and 0 if 
d1 and d2 are the same.
*/
#include<stdio.h>
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
struct date
{
	int month, day, year ;
};
//---------------------------------------------------------------------------
int day_of_year (struct date d) ;
int compare_dates (struct date d1, struct date d2) ;
//---------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	struct date d1, d2; 

	printf("Enter date d1(mm/dd/yyy): ");
	scanf("%2d/%2d/%4d", &d1.month, &d1.day, &d1.year);
	printf("Enter date d2(mm/dd/yyy): ");
	scanf("%2d/%2d/%4d", &d2.month, &d2.day, &d2.year);

	printf("d1 is the %dth day of the year.", day_of_year(d1));
	printf("\nd2 is the %dth day of the year.", day_of_year(d2));
	
	printf("\nCompare d1 and d2 (1: d1>d2, -1: d1<d2 and 0: d1=d2): %d", compare_dates(d1,d2));

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
int day_of_year (struct date d)
{
	int day = d.day, days[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if(d.month > 1)
		for(short i=0;i<d.month && i<12;i++)
		{
			day+=days[i];
			if(i==1 && !(d.year%4))
				day++;
		}

	return day;
}
//---------------------------------------------------------------------------
int compare_dates (struct date d1, struct date d2)
{
	if(d1.year > d2.year)
		return 1;
	else if(d1.year < d2.year)
		return -1;
	else
	{
		if(d1.month > d2.month)
			return 1;
		else if(d1.month < d2.month)
			return -1;
		else
		{
			if(d1.day > d2.day)
				return 1;
			else if(d1.day < d2.day)
				return -1;
			else
				return 0;
		}
	}
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter date d1(mm/dd/yyy): 1/12/2021
Enter date d2(mm/dd/yyy): 5/13/2021
d1 is the 12th day of the year.
d2 is the 164th day of the year.
Compare d1 and d2 (1: d1>d2, -1: d1<d2 and 0: d1=d2): -1
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter date d1(mm/dd/yyy): 1/12/2021
Enter date d2(mm/dd/yyy): 1/12/2021
d1 is the 12th day of the year.
d2 is the 12th day of the year.
Compare d1 and d2 (1: d1>d2, -1: d1<d2 and 0: d1=d2): 0
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
@@@@ Trial4:
@@@@ Trial5:
@@@@ Trial6:
@@@@ Trial7:
@@@@ Trial8:
@@@@ Trial9:
*/
//---------------------------------------------------------------------------