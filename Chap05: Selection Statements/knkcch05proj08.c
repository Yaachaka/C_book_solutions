/*
--PROGRAM NAME: knkcch05proj08.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: The following table shows the daily flights from 
one city to another:
Departure time              Arrival time
  08:00 a.m.                 10:16 a.m.
  09:43 a.m.                 11:52 a.m.
  11:19 a.m.                 01:31 p.m.
  12:47 p.m.                 03:00 p.m.
  02:00 p.m.                 04:08 p.m.
  03:45 p.m.                 05:55 p.m.
  07:00 p.m.                 09:20 p.m.
  09:45 p.m.                 11:58 p.m.
Write a program that asks the user to enter a time (expressed in hours and 
minutes, using the 24-hour clock). The program then displays the departure and 
arriavl times for the flight whose departure time is closest to that entered by 
the user:
	Enter a 24-hour time: 13:45
	Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
Hint: Convert the input into a time expressed in minutes since midnight, and 
compare it to the departure times, also expressed in minutes since midnight. For 
example, 13:15 is 13 x 60 + 15 =795 minutes since midnight, which is closer to 
12:47 p.m. (767 minutes since midnight) than to any of the other departure times.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int min1=480,min2=583,min3=679,min4=767,min5=840,min6=945,min7=1140,min8=1305,
	    hour,min,user_min,tdif1,tdif2,tclose;
	
	//Ueser input for time in 24 hour format.
	printf("Enter a 24-hour time (xx:xx): ");
	scanf("%2d:%2d",&hour,&min);
	
	user_min=hour*60+min;
	
	//Finding the closest flight hours
	tclose=min1;  //Temporarily considering first available time as closest to user entered time.
	tdif1=user_min>min1?user_min-min1:min1-user_min;  //Finding difference between user time and the first available time.
	tdif2=user_min>min2?user_min-min2:min2-user_min;  //Finding difference between user time and the second available time.
	if(tdif1>tdif2){tclose=min2;tdif1=tdif2;}  //Choosing the closest time to user entered.
	tdif2=user_min>min3?user_min-min3:min3-user_min;  //Finding difference between user time and the third available time.
	if(tdif1>tdif2){tclose=min3;tdif1=tdif2;}  //Choosing the closest time to user entered.
	tdif2=user_min>min4?user_min-min4:min4-user_min;  //Finding difference between user time and the fourth available time.
	if(tdif1>tdif2){tclose=min4;tdif1=tdif2;}  //Choosing the closest time to user entered.
	tdif2=user_min>min5?user_min-min5:min5-user_min;  //Finding difference between user time and the fifth available time.
	if(tdif1>tdif2){tclose=min5;tdif1=tdif2;}  //Choosing the closest time to user entered.
	tdif2=user_min>min6?user_min-min6:min6-user_min;  //Finding difference between user time and the sixth available time.
	if(tdif1>tdif2){tclose=min6;tdif1=tdif2;}  //Choosing the closest time to user entered.
	tdif2=user_min>min7?user_min-min7:min7-user_min;  //Finding difference between user time and the seventh available time.
	if(tdif1>tdif2){tclose=min7;tdif1=tdif2;}  //Choosing the closest time to user entered.
	tdif2=user_min>min8?user_min-min8:min8-user_min;  //Finding difference between user time and the eigth available time.
	if(tdif1>tdif2){tclose=min8;tdif1=tdif2;}  //Choosing the closest time to user entered.
	
	//Displaying the departure and arrival time.
	switch(tclose)
	{
		case 480:
			printf("Closest departure time is 08:00 a.m., arriving at 10:16 a.m.");
			break;
		case 583:
			printf("Closest departure time is 09:43 a.m., arriving at 11:52 a.m.");
			break;
		case 679:
			printf("Closest departure time is 11:19 a.m., arriving at 01:31 p.m.");
			break;
		case 767:
			printf("Closest departure time is 12:47 p.m., arriving at 03:00 p.m.");
			break;
		case 840:
			printf("Closest departure time is 02:00 p.m., arriving at 04:08 p.m.");
			break;
		case 945:
			printf("Closest departure time is 03:45 p.m., arriving at 05:55 p.m.");
			break;
		case 1140:
			printf("Closest departure time is 07:00 p.m., arriving at 09:20 p.m.");
			break;
		case 1305:
			printf("Closest departure time is 09:45 p.m., arriving at 11:58 p.m.");
			break;
		
	}
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
-- Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 20:00
Closest departure time is 07:00 p.m., arriving at 09:20 p.m.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 10:38
Closest departure time is 11:19 a.m., arriving at 01:31 p.m.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 23:58
Closest departure time is 09:45 p.m., arriving at 11:58 p.m.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 4:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 02:00
Closest departure time is 08:00 a.m., arriving at 10:16 a.m.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 5:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 01:45
Closest departure time is 08:00 a.m., arriving at 10:16 a.m.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 6:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 01:30
Closest departure time is 08:00 a.m., arriving at 10:16 a.m.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 7:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 01:00
Closest departure time is 08:00 a.m., arriving at 10:16 a.m.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 8:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 00:45
Closest departure time is 08:00 a.m., arriving at 10:16 a.m.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 9:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 23:59
Closest departure time is 09:45 p.m., arriving at 11:58 p.m.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 10:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 00:00
Closest departure time is 08:00 a.m., arriving at 10:16 a.m.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------