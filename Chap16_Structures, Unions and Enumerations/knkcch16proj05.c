/*
@@@@ PROGRAM NAME: knkcch16proj05.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Modify Programming Project 8 from Chapter 5 so that the times are stored in a single array.
The elements of the array will be structures, each containing a departure time and the 
corresponding arrival time. (Each time will be an integer, representing the number of 
minutes since midnight.) The program will use a loop to search the array for the departure 
time closest to the time entered by the user.

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
#include <stdio.h>
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
struct time
{
	int departure_time, arrival_time;
};
//-----------------------------------------------------------------------------
void disp_time(int min);
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("File: %s (Date: %s, Time: %s) C version: %d\n", __FILE__, __DATE__, __TIME__, __STDC_VERSION__);
	
	struct time times[8] = {{480,616},{583,712},{679,811},{767,900},{840,968},{945,1075},{1140,1280},{1305,1438}}, tclose;
	int hour,min,user_min,tdif1,tdif2;
	
	//Ueser input for time in 24 hour format.
	printf("Enter a 24-hour time (xx:xx): ");
	scanf("%2d:%2d",&hour,&min);
	
	user_min = hour * 60 + min;
	
	tclose = times[0];
	//Finding the closest flight hours
	tdif1 = user_min > times[0].departure_time ? user_min - times[0].departure_time : times[0].departure_time - user_min;  //Finding difference between user time and the first available time.
	for(short i=1;i<8;i++)
	{
		tdif2 = user_min > times[i].departure_time ? user_min - times[i].departure_time : times[i].departure_time - user_min;  //Finding difference between user time and the second available time.
		if(tdif1 > tdif2){tclose = times[i]; tdif1 = tdif2;}  //Choosing the closest time to user entered.
	}

	//Displaying the departure and arrival time.
	printf("Closest departure time is ");
	disp_time(tclose.departure_time);
	printf(", arriving at ");
	disp_time(tclose.arrival_time);
	

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
void disp_time(int min)
{
	if(min < 720)
	{
		printf("%.2d:%.2d a.m.", (min < 60) ? 12 : min/60, min%60);
	}
	else
	{
		printf("%.2d:%.2d p.m.", (min / 60) % 12 ? (min / 60)%12 : 12, min%60);
	}
}
//---------------------------------------------------------------------------
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
File: knkcch16proj05.c (Date: Mar 13 2021, Time: 23:45:55) C version: 199901
Enter a 24-hour time (xx:xx): 08:00
Closest departure time is 08:00 a.m., arriving at 10:16 a.m.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
File: knkcch16proj05.c (Date: Mar 13 2021, Time: 23:45:55) C version: 199901
Enter a 24-hour time (xx:xx): 9:50
Closest departure time is 09:43 a.m., arriving at 11:52 a.m.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
File: knkcch16proj05.c (Date: Mar 13 2021, Time: 23:45:55) C version: 199901
Enter a 24-hour time (xx:xx): 11:23
Closest departure time is 11:19 a.m., arriving at 01:31 p.m.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

@@@@ Trial4:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
File: knkcch16proj05.c (Date: Mar 13 2021, Time: 23:45:55) C version: 199901
Enter a 24-hour time (xx:xx): 12:50
Closest departure time is 12:47 p.m., arriving at 03:00 p.m.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

@@@@ Trial5:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
File: knkcch16proj05.c (Date: Mar 13 2021, Time: 23:45:55) C version: 199901
Enter a 24-hour time (xx:xx): 14:13
Closest departure time is 02:00 p.m., arriving at 04:08 p.m.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

@@@@ Trial6:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
File: knkcch16proj05.c (Date: Mar 13 2021, Time: 23:45:55) C version: 199901
Enter a 24-hour time (xx:xx): 15:48
Closest departure time is 03:45 p.m., arriving at 05:55 p.m.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

@@@@ Trial7:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
File: knkcch16proj05.c (Date: Mar 13 2021, Time: 23:45:55) C version: 199901
Enter a 24-hour time (xx:xx): 20:20
Closest departure time is 07:00 p.m., arriving at 09:20 p.m.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

@@@@ Trial8:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
File: knkcch16proj05.c (Date: Mar 13 2021, Time: 23:45:55) C version: 199901
Enter a 24-hour time (xx:xx): 22:32
Closest departure time is 09:45 p.m., arriving at 11:58 p.m.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

@@@@ Trial9:
*/
//---------------------------------------------------------------------------