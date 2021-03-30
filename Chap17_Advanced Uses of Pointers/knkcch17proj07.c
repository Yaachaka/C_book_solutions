/*
@@@@ PROGRAM NAME: knkcch17proj07.c
@@@@ FLAGS: -std=c99 -Wall - Wextra
@@@@ PROGRAM STATEMENT: (C99) Modify the remind2.c program of Section 
17.2 so that each element of the reminders array is a pointer to a vstring 
structure (see Section 17.9) rather than a pointer to an ordinary string.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//-----------------------------------------------------------------------------
#define MAX_REMIND 50   /* maximum number of reminders */
#define MSG_LEN 60      /* max length of reminder message */
//-----------------------------------------------------------------------------
int read_line(char str[], int n);
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
struct vstring
{
	int len;
	char msg[];
};
//-----------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("File: %s, C Version: %ld, Date: %s, Time: %s\n\n", __FILE__, __STDC_VERSION__, __DATE__, __TIME__);
	
	struct vstring *reminders[MAX_REMIND];  //Stores the reminders.
	char day_str[3], msg_str[MSG_LEN+1];  //day_str holds the day of the month, msg_str holds the message for the day day_str.
	int day, i, j, num_remind = 0;  //day variable is used to get the value for day_str. num_remind is the number of reminders.
	
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

		for (i = 0; i < num_remind; i++)
			if (strcmp(day_str, reminders[i]->msg) < 0)
				break;
		for (j = num_remind; j > i; j--)
			reminders[j] = reminders[j-1];

		reminders[i] = (struct vstring *)malloc(sizeof(struct vstring) + 2 + strlen(msg_str) + 1);
		if (reminders[i] == NULL)
		{
			printf("-- No space left --: malloc failed.\n");
			break;
		}
		reminders[i]->len = 2 + strlen(msg_str) + 1;
		
		strcpy(reminders[i]->msg, day_str);
		strcat(reminders[i]->msg, msg_str);

		num_remind++;
	}

	//Display reminders
	printf("\nDay Reminder\n");
	for (i = 0; i < num_remind; i++)
	{
		printf(" %s\n", reminders[i]->msg);
		free(reminders[i]);
	}
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
File: knkcch17proj07.c, C Version: 199901, Date: Mar 30 2021, Time: 11:09:13

Enter day and reminder: 03 hello there
Enter day and reminder: 05 hi guys
Enter day and reminder: 02 hhehehe
Enter day and reminder: 23 asdbasd
Enter day and reminder: 5 asdsadksd
Enter day and reminder:
0

Day Reminder
  2 hhehehe
  3 hello there
  5 asdsadksd
  5 hi guys
 23 asdbasd

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