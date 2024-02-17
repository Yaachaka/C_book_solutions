/**
 * file: cknkCh05Prj002.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int i_hours_24 = 0, i_minutes_24 = 0, i_hours_12 = 0, i_minutes_12 = 0;
    
    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &i_hours_24, &i_minutes_24);

    i_minutes_12 = i_minutes_24;
    printf("Equivalent 12-hour time: ");
    
    if(i_hours_24 > 11)
    {
        i_hours_12 = (i_hours_24 % 12) ? (i_hours_24 % 12) : (12);
        printf("%2.2d:%2.2d PM\n", i_hours_12, i_minutes_12);
    }
    else
    {
        i_hours_12 = (i_hours_24) ? (i_hours_24) : (12);
        printf("%2.2d:%2.2d AM\n", i_hours_12, i_minutes_12);
    }

    return 0;
}

