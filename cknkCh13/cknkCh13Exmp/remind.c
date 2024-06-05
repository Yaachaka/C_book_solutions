/********************************************************************************
 * File: remind.c
 * Author: K. N. King
 * Purpose: Prints a one-month reminder list
 ********************************************************************************/

/* START: Header inclusions*/
#include <stdio.h>
#include <string.h>
/* END: Header inclusions*/

/* START: MACRO definitions*/
#define MAX_REMIND 50    /* maximum number of reminders */
#define MSG_LEN 60    /* max length of reminder message */
/* END: MACRO definitions*/

/* START: type definitions*/

/* END: type definitions*/

/* START: Variable declarations*/

/* END: Variable declarations*/

/* START: Function prototypes*/
int read_line(char str[], int n);
/* END: Function prototypes*/

/**
 * Function name: main
 * Return type: int
 * Return value description: 
 * Parameters: void
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: 
 */
int main(void)
{
    char reminders[MAX_REMIND][MSG_LEN + 3];
    char day_str[3], msg_str[MSG_LEN + 1];
    int day, i, j, num_remind = 0;

    for(; ; )
    {
        if(num_remind == MAX_REMIND)
        {
            printf("-- No space left --\n");
            break;    // break out of for loop
        }	// if condition: maximum reminder entries reached

        printf("Enter day and reminder: ");
        // Get the day of the reminder
        scanf("%2d", &day);    // as integer

        if(day == 0)
        {
            break;    // break out of the for loop
        }	// if condition: day input is 0
        sprintf(day_str, "%2d", day);    // as string
        
        // Get the new reminder message
        read_line(msg_str, MSG_LEN);

        for(i = 0; i < num_remind; i++)
        {
            if(strcmp(day_str, reminders[i]) < 0)
            {
                break;
            }	// if condition: 
        }	// for statement: Determine where the new reminder should be placed in the array.
        for(j = num_remind; j > i; j--)
        {
            strcpy(reminders[j], reminders[j - 1]);
        }	// for statement: Push down the other reminders.

        strcpy(reminders[i], day_str);    // Add to the array the day of the new reminder
        strcat(reminders[i], msg_str);    // Add to the array the message of the new reminder

        num_remind++;
    }	// for statement: 

    printf("\nDay Reminder\n");
    for(i = 0; i < num_remind; i++)
    {
        printf(" %s\n", reminders[i]);
    }	// for statement: Display the complete reminder list
    
    printf("\n");
    return 0;
}	//FUNCTION END: main

/**
 * Function name: read_line
 * Return type: int
 * Return value description: 
 * Parameters: char str[], int n
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: Get the the string from the user. Similar implementation to scanf.
 */
int read_line(char str[], int n)
{
    int ch, i = 0;

    while((ch = getchar()) != '\n')
    {
        if(i < n)
        {
            str[i++] = ch;
        }	// if condition: number of characters is less than the maximum number of characters allowed
        str[i] = '\0';
    }	// while statement: Get the characters until and excluding new-line character.
    return i;
}	// FUNCTION END: read_line