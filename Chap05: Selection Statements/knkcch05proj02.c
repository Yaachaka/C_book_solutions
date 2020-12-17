/*
--PROGRAM NAME: knkcch05proj02.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: Write a program that asks the user for a 24-hour time, then 
displays the time in 12-hour form:
	Enter a 24-hour time: 21:11
	Equivalent 12-hour time: 9:11 PM
Be careful not to display 12:00 as 0:00.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int hour,minute;
	
	//User input
	printf("Enter a 24-hour time (xx:xx): ");
	scanf("%d:%d",&hour,&minute);
	
	//Displaying result
	printf("Equivalent 12-hour time: ");
	if(hour*60+minute<720)  //11 hours 59 minutes = 719 minutes
		printf("%.2d:%.2d AM",hour?hour:hour+12,minute);
	else
		printf("%.2d:%.2d PM",hour%12?hour%12:12,minute);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//-----------------------------------------------------------------------------
/*
OUTPUT:
-- Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 00:45
Equivalent 12-hour time: 12:45 AM
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 12:48
Equivalent 12-hour time: 12:48 PM
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 23:23
Equivalent 12-hour time: 11:23 PM
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 4:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 12:00
Equivalent 12-hour time: 12:00 PM
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 5:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 00:00
Equivalent 12-hour time: 12:00 AM
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------