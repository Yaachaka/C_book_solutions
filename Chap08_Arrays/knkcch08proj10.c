/*
@@@@ PROGRAM NAME: knkcch08proj10.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Modify Programming Project 8 from Chapter 5 so that the 
departure times are stored in an array and the arrival times are stored in a second array. 
(The times are integers, representing the number of minutes since midnight.) The program 
will use a loop to search the array of departure times for the one closest to the time entered by the user.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int min[8]={480,583,679,767,840,945,1140,1305},
	    hour,user_min,tdif1,tdif2,tclose;
	
	//Ueser input for time in 24 hour format.
	printf("Enter a 24-hour time (xx:xx): ");
	scanf("%2d:%2d",&hour,&user_min);
	
	user_min=hour*60+user_min;
	
	//Finding the closest flight hours
	tclose=min[0];  //Temporarily considering first available time as closest to user entered time.
	tdif1=user_min>min[0]?user_min-min[0]:min[0]-user_min;  //Finding difference between user time and the first available time.
	for(short i=1;i<8;i++)
	{
		tdif2=user_min>min[i]?user_min-min[i]:min[i]-user_min;  //Finding difference between user time and the second available time.
		if(tdif1>tdif2)  //Choosing the closest time to user entered.
		{
			tclose=min[i];
			tdif1=tdif2;
		}
	}
	
	//Displaying the departure and arrival time.
	printf("Closest departure time is ");
	switch(tclose)
	{
		case 480:printf("08:00 a.m., arriving at 10:16 a.m.");break;
		case 583:printf("09:43 a.m., arriving at 11:52 a.m.");break;
		case 679:printf("11:19 a.m., arriving at 01:31 p.m.");break;
		case 767:printf("12:47 p.m., arriving at 03:00 p.m.");break;
		case 840:printf("02:00 p.m., arriving at 04:08 p.m.");break;
		case 945:printf("03:45 p.m., arriving at 05:55 p.m.");break;
		case 1140:printf("07:00 p.m., arriving at 09:20 p.m.");break;
		case 1305:printf("09:45 p.m., arriving at 11:58 p.m.");break;
		
	}
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 15:34
Closest departure time is 03:45 p.m., arriving at 05:55 p.m.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 10:59
Closest departure time is 11:19 a.m., arriving at 01:31 p.m.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 23:45
Closest departure time is 09:45 p.m., arriving at 11:58 p.m.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial4:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 23:59
Closest departure time is 09:45 p.m., arriving at 11:58 p.m.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial5:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 24-hour time (xx:xx): 3:00
Closest departure time is 08:00 a.m., arriving at 10:16 a.m.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------