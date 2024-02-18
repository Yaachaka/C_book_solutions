/**
 * file: cknkCh05Prj008.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int i_hour24, i_minute24, i_choice, i_totalMinutes;

    #define MINS_480 480
    #define MINS_583 583
    #define MINS_679 679
    #define MINS_767 767
    #define MINS_840 840
    #define MINS_945 945
    #define MINS_1140 1140
    #define MINS_1305 1305
    
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &i_hour24, &i_minute24);

    i_totalMinutes = i_hour24 * 60 + i_minute24;

    if(i_totalMinutes < MINS_480)
    {
        i_choice = MINS_480;
    }
    else if(i_totalMinutes < MINS_583)
    {
        i_choice = ((MINS_480 + MINS_583) / 2) > i_totalMinutes ? (MINS_480) : (MINS_583);
    }
    else if(i_totalMinutes < MINS_679)
    {
        i_choice = ((MINS_583 + MINS_679) / 2) > i_totalMinutes ? (MINS_583) : (MINS_679);
    }
    else if(i_totalMinutes < MINS_767)
    {
        i_choice = ((MINS_679 + MINS_767) / 2) > i_totalMinutes ? (MINS_679) : (MINS_767);
    }
    else if(i_totalMinutes < MINS_840)
    {
        i_choice = ((MINS_767 + MINS_840) / 2) > i_totalMinutes ? (MINS_767) : (MINS_840);
    }
    else if(i_totalMinutes < MINS_945)
    {
        i_choice = ((MINS_840 + MINS_945) / 2) > i_totalMinutes ? (MINS_840) : (MINS_945);
    }
    else if(i_totalMinutes < MINS_1140)
    {
        i_choice = ((MINS_945 + MINS_1140) / 2) > i_totalMinutes ? (MINS_945) : (MINS_1140);
    }
    else if(i_totalMinutes < MINS_1305)
    {
        i_choice = ((MINS_1140 + MINS_1305) / 2) > i_totalMinutes ? (MINS_1140) : (MINS_1305);
    }
    else
    {
        i_choice = MINS_1305;
    }

    printf("Closest departure time is ");
    
    switch(i_choice)
    {
        case MINS_480: printf("8:00 a.m., arriving at 10:16 a.m.\n");break;
        case MINS_583: printf("9:43 a.m., arriving at 11:52 a.m.\n");break;
        case MINS_679: printf("11:19 p.m., arriving at 1:31 p.m.\n");break;
        case MINS_767: printf("12:47 p.m., arriving at 3:00 p.m.\n");break;
        case MINS_840: printf("2:00 p.m., arriving at 4:08 p.m.\n");break;
        case MINS_945: printf("3:45 p.m., arriving at 5:55 p.m.\n");break;
        case MINS_1140: printf("7:00 p.m., arriving at 9:20 p.m.\n");break;
        default: printf("9:45 p.m., arriving at 11:58 p.m.\n");break;
    }

    return 0;
}

