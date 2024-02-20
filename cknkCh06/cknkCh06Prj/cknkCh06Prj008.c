/**
 * file: cknkCh06Prj008.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int i, j, i_nDaysInMonth, i_startingDayOfWeek;

    // Get the user input
    printf("Enter number of days in month: ");
    scanf("%d", &i_nDaysInMonth);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &i_startingDayOfWeek);

    // Start printing the month of the calendar
    for(i = 1, j = 0; i <= i_nDaysInMonth; j++)
    {
        // For spaces in the beginning of the calendar
        if(j < (i_startingDayOfWeek - 1))
        {
            printf("   ");
        }
        else
        {
            // For going to next week
            if(!(j % 7))
            {
                printf("\n");
            }
            
            // print the day (number)
            printf("%2d ", i);
            i++;
        }
    }
    printf("\n");

    return 0;
}
