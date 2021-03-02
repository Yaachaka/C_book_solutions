/*
@@@@ PROGRAM NAME: knkcch13proj2c.c
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
	char msg_str[MSG_LEN+1],month_day_str[6];
	int day, month, i, j, num_remind = 0;

	for (;;)
	{
		if (num_remind == MAX_REMIND)
		{
			printf("-- No space left --\n");
			break;
		}

		printf("Enter month/day and reminder: ");
		scanf("%2d/%2d", &month,&day);
		if (day == 0 || month == 0)
			break;
		sprintf(month_day_str, "%2d/%2d", month,day);
		read_line(msg_str, MSG_LEN);

		for(i = 0; i < num_remind; i++)
			if (strcmp(month_day_str, reminders[i]) < 0)
				break;
		for(j = num_remind; j > i; j--)
			strcpy(reminders[j], reminders[j-1]);

		strcpy(reminders[i], month_day_str);
		strcat(reminders[i], msg_str);

		num_remind++;
	}

	printf("\nDay    Reminder\n");
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
Enter month/day and reminder: 2/24 hey
Enter month/day and reminder: 10/20 This octo
Enter month/day and reminder: 2/23 lets go
Enter month/day and reminder: 12/31 last month last day
Enter month/day and reminder: 1/10 first month
Enter month/day and reminder: 0/10 stop

Day    Reminder
  1/10 first month
  2/23 lets go
  2/24 hey
 10/20 This octo
 12/31 last month last day

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