/*
@@@@ PROGRAM NAME: knkcch13proj02b.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Improve the remind.c program of Section 13.5 in the following ways:
(a) Have the program print an error message and ignore a reminder if the corresponding
day is negative or larger than 31. Hint: Use the continue statement.
(b) Allow the user to enter a day, a 24-hour time, and a reminder. The printed reminder list
should be sorted first by day, then by time. (The original program allows the user to
enter a time, but it’s treated as part of the reminder.)
(c) Have the program print a one-year reminder list. Require the user to enter days in the
form month / day.
*/
#include<stdio.h>
#include<string.h>
//-----------------------------------------------------------------------------
#define MAX_REMIND 50   /* maximum number of reminders */
#define MSG_LEN 60      /* max length of reminder message */
//-----------------------------------------------------------------------------
int read_line(char str[], int n);
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char reminders[MAX_REMIND][MSG_LEN+3];
	char day_str[3], msg_str[MSG_LEN+1], time_str[6], day_time_temp[9];
	int day, hh, mm, i, j, num_remind = 0;

	for (;;)
	{
		if (num_remind == MAX_REMIND)
		{
			printf("-- No space left --\n");
			break;
		}

		printf("Enter day, 24-hour time (HH:MM) and reminder: ");
		//Reading day
		scanf("%2d", &day);
		if (day == 0)
			break;
		sprintf(day_str, "%2d", day);
		//reading time
		scanf("%2d:%2d",&hh,&mm);
		sprintf(time_str,"%2d:%2d",hh,mm);
		//Reading reminder
		read_line(msg_str, MSG_LEN);

		//Joining day and time
		strcpy(day_time_temp,day_str);
		strcat(day_time_temp," ");
		strcat(day_time_temp,time_str);
		
		printf("%s",day_time_temp);
		for(i = 0; i < num_remind; i++)
			if (strcmp(day_time_temp, reminders[i]) < 0)
				break;
		for(j = num_remind; j > i; j--)
			strcpy(reminders[j], reminders[j-1]);

		//Joining day and time and the reminder
		strcpy(reminders[i], day_time_temp);
		strcat(reminders[i], msg_str);

		num_remind++;
	}

	printf("\nDay HH:MM Reminder\n");
	for (i = 0; i < num_remind; i++)
		printf(" %s\n", reminders[i]);

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
int read_line(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
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
Enter day, 24-hour time (HH:MM) and reminder: 4 12:32 afternoon
 4 12:32Enter day, 24-hour time (HH:MM) and reminder: 4 12:50 same afternoon
 4 12:50Enter day, 24-hour time (HH:MM) and reminder: 25 10:34 that day
25 10:34Enter day, 24-hour time (HH:MM) and reminder: 25 08:45 nothing will
25  8:45Enter day, 24-hour time (HH:MM) and reminder: 04 02:32 morning games
 4  2:32Enter day, 24-hour time (HH:MM) and reminder: 2 10:50 lets end
 2 10:50Enter day, 24-hour time (HH:MM) and reminder: 0 23:23 ok

Day HH:MM Reminder
  2 10:50 lets end
  4  2:32 morning games
  4 12:32 afternoon
  4 12:50 same afternoon
 25  8:45 nothing will
 25 10:34 that day

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
@@@@ Trial3:
@@@@ Trial4:
@@@@ Trial5:
@@@@ Trial6:
@@@@ Trial7:
@@@@ Trial8:
@@@@ Trial9:
*/
//---------------------------------------------------------------------------