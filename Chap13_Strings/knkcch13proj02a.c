/*
@@@@ PROGRAM NAME: knkcch13proj02a.c
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
	char day_str[3], msg_str[MSG_LEN+1];
	int day, i, j, num_remind = 0;

	for (;;)
	{
		if (num_remind == MAX_REMIND)
		{
			printf("-- No space left --\n");
			break;
		}

		printf("Enter day and reminder: ");
		scanf("%2d", &day);
		if (day == 0)
			break;
		sprintf(day_str, "%2d", day);
		read_line(msg_str, MSG_LEN);

		if(day<0 || day>31)
		{
			printf("The day you entered is not valid.\n");
			continue;
		}
		
		for(i = 0; i < num_remind; i++)
			if (strcmp(day_str, reminders[i]) < 0)
				break;
		for(j = num_remind; j > i; j--)
			strcpy(reminders[j], reminders[j-1]);

		strcpy(reminders[i], day_str);
		strcat(reminders[i], msg_str);

		num_remind++;
	}

	printf("\nDay Reminder\n");
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
Enter day and reminder: 04 good ay
Enter day and reminder: 32 ba day
The day you entered is not valid.
Enter day and reminder: -2 tri thys
The day you entered is not valid.
Enter day and reminder: 25 alright
Enter day and reminder: 1 try this
Enter day and reminder: 0 Lets end

Day Reminder
  1 try this
  4 good ay
 25 alright

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