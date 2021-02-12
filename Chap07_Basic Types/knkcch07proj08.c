/*
@@@@ PROGRAM NAME: knkcch07proj08.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Modify Programming Project 8 from Chapter 5 so that 
the user enters a time using the 12-hour clock. The input will have the form 
hours:minutes followed by either A, P, AM, or PM (either lower-case or 
upper-case). White space allowed (but not required) between the numerical time 
and the AM/PM indicator. Examples of valid input:
1:15P
1:15PM
1:15p
1:15pm
1:15 P
1:15 PM
1:15 p
1:15 pm
You may assume that the input has one of these forms; there is no need to test 
for errors.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int min1=480,min2=583,min3=679,min4=767,min5=840,min6=945,min7=1140,min8=1305,
	    hour,min,user_min,tdif1,tdif2,tclose;
	char c;
	
	//Ueser input for time in 24 hour format.
	printf("Enter a 12-hour time (xx:xx XM): ");
	scanf("%2d:%2d%c",&hour,&min,&c);
	
	if(c=='p' || c=='P')
		c='P';
	else
		c='A';
	
	//converting to 24 hour time format to keep the following statements as they are.
	if(c=='A' && hour==12)
		user_min=min;
	else if(c=='P' && hour!=12)
		user_min=hour*60+min+720;  //720 = 12 * 60
	else
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
@@@@ Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 12-hour time (xx:xx XM): 12:45 p
Closest departure time is 12:47 p.m., arriving at 03:00 p.m.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 12-hour time (xx:xx XM): 12:00am
Closest departure time is 08:00 a.m., arriving at 10:16 a.m.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a 12-hour time (xx:xx XM): 7:30 pm  PM
Closest departure time is 07:00 p.m., arriving at 09:20 p.m.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------