/*
@@@@ PROGRAM NAME: knkcch11proj02.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Modify Programming Project 8 from Chapter 5 so that it 
includes the following function:

	void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

This function will find the flight whose departure time is closest to desired_time
(expressed in minutes since midnight). It will store the departure and arrival times 
of this flight (also expressed in minutes since midnight) in the variables pointed to by
departure_time und arrival_time, respectively.
*/
/*
Departure time              Arrival time
  08:00 a.m.                 10:16 a.m.
  09:43 a.m.                 11:52 a.m.
  11:19 a.m.                 01:31 p.m.
  12:47 p.m.                 03:00 p.m.
  02:00 p.m.                 04:08 p.m.
  03:45 p.m.                 05:55 p.m.
  07:00 p.m.                 09:20 p.m.
  09:45 p.m.                 11:58 p.m.
*/
#include<stdio.h>
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);
void disptime12(int min);
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int hour,min,desired_time,departure_time,arrival_time;
	
	//Ueser input for time in 24 hour format.
	printf("Enter a 24-hour time (xx:xx): ");
	scanf("%2d:%2d",&hour,&min);
	
	desired_time=hour*60+min;
	
	find_closest_flight(desired_time, &departure_time, &arrival_time);

	//Displaying the departure and arrival time.
	printf("Closest departure time is ");
	disptime12(departure_time);
	printf(", arriving at ");
	disptime12(arrival_time);
	printf(".");

	

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;  //exit(0) or exit(EXIT_SUCCESS) can be used.
}
//-------------------------END OF MAIN()---------------------------------------
void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
	int min[8]={480,583,679,767,840,945,1140,1305},
	arriv_min[8]={616,712,811,900,968,1075,1160,1438},tdif1,tdif2;

		//Finding the closest flight hours
	*departure_time=min[0];  //Temporarily considering first available time as closest to user entered time.
	*arrival_time=arriv_min[0];
	tdif1=desired_time>min[0]?desired_time-min[0]:min[0]-desired_time;  //Finding difference between user time and the first available time.
	for(short i=1;i<8;i++)
	{
		tdif2=desired_time>min[i]?desired_time-min[i]:min[i]-desired_time;  //Finding difference between user time and the second available time.
		if(tdif1>tdif2){*departure_time=min[i];*arrival_time=arriv_min[i];tdif1=tdif2;}  //Choosing the closest time to user entered.
	
	}

	
}
//---------------------------------------------------------------------------
void disptime12(int min)
{
	int m=min,h=(min/60)%12;min=min%60;
	h=h?h:12;
	
	printf("%.2d:%.2d",h,min);
	if(m<720)
		printf("a.m.");
	else
		printf("p.m.");
	
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 06:47
Closest departure time is 08:00a.m., arriving at 10:16a.m..
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 08:59
Closest departure time is 09:43a.m., arriving at 11:52a.m..
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 11:00
Closest departure time is 11:19a.m., arriving at 01:31a.m..
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial4:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 12:00
Closest departure time is 11:19a.m., arriving at 01:31a.m..
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial5:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 12:15
Closest departure time is 12:47p.m., arriving at 03:00p.m..
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial6:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 13:40
Closest departure time is 02:00p.m., arriving at 04:08p.m..
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial7:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 15:47
Closest departure time is 03:45p.m., arriving at 05:55p.m..
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial8:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 23:08
Closest departure time is 09:45p.m., arriving at 11:58p.m..
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------