/*
@@@@ PROGRAM NAME: knkcch16proj06.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Modify Programming Project 9 from Chapter 5 so that each date entered by the user is
stored in a date structure (see Exercise 5). Incorporate the compare_dates function of
Exercise 5 into your program.
*/
#include <stdio.h>
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
struct date
{
	int month, day, year ;
};
//---------------------------------------------------------------------------
int compare_dates (struct date d1, struct date d2) ;
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("File: %s (Date: %s, Time: %s)\n", __FILE__, __DATE__, __TIME__);
	
	struct date d1, d2; 
	
	//Getting dates from the user.
	printf("Enter first date (mm/dd/yyyy): ");
	scanf("%2d/%2d/%4d", &d1.month, &d1.day, &d1.year);
	printf("Enter second date (mm/dd/yyyy): ");
	scanf("%2d/%2d/%4d", &d2.month, &d2.day, &d2.year);

	int i = compare_dates(d1,d2);
	//Finding the earlier date among and displaying the same.
	if(i == 1)
		printf("%.2d/%.2d/%.4d is earlier than %.2d/%.2d/%.4d", d2.month, d2.day, d2.year, d1.month, d1.day, d1.year);
	else if(i == -1)
		printf("%.2d/%.2d/%.4d is earlier than %.2d/%.2d/%.4d", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
	else 
		printf("Both the dates are same.");

	
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
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
File: knkcch16proj06.c (Date: Mar 14 2021, Time: 00:05:25)
Enter first date (mm/dd/yyyy): 03/14/2021
Enter second date (mm/dd/yyyy): 03/10/2021
03/10/2021 is earlier than 03/14/2021
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
File: knkcch16proj06.c (Date: Mar 14 2021, Time: 00:05:50)
Enter first date (mm/dd/yyyy): 03/14/2021
Enter second date (mm/dd/yyyy): 03/20/2021
03/14/2021 is earlier than 03/20/2021
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
File: knkcch16proj06.c (Date: Mar 14 2021, Time: 00:05:50)
Enter first date (mm/dd/yyyy): 03/14/2021
Enter second date (mm/dd/yyyy): 03/14/2021
Both the dates are same.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

@@@@ Trial4:
@@@@ Trial5:
@@@@ Trial6:
@@@@ Trial7:
@@@@ Trial8:
@@@@ Trial9:
*/
//---------------------------------------------------------------------------