/**
 * file: cknkCh08Prj010.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    /* START: type definitions */
    typedef unsigned char Uint8;
    typedef short Sint16;
    /* END: type definitions */
    
    /* START: MACRO definitions */
    #define N_CHOICES 8
    #define MINS_DEPARTURE_01 480
    #define MINS_DEPARTURE_02 583
    #define MINS_DEPARTURE_03 679
    #define MINS_DEPARTURE_04 767
    #define MINS_DEPARTURE_05 840
    #define MINS_DEPARTURE_06 945
    #define MINS_DEPARTURE_07 1140
    #define MINS_DEPARTURE_08 1305
    
    #define MINS_ARRIVAL_01 616
    #define MINS_ARRIVAL_02 712
    #define MINS_ARRIVAL_03 811
    #define MINS_ARRIVAL_04 800
    #define MINS_ARRIVAL_05 968
    #define MINS_ARRIVAL_06 1075
    #define MINS_ARRIVAL_07 1280
    #define MINS_ARRIVAL_08 1438
    
    /* END: MACRO definitions*/

    /* START: Variable declarations */
    char c_amOrpm;
    Sint16 s16_totalMinutes, s16_nEntries, s16_hour24, s16_minute24;
    Uint8 i, j, u8_choice, u8_hour12, u8_minute12;
    
    Sint16 s16_departureTimes[N_CHOICES] = {
        MINS_DEPARTURE_01, 
        MINS_DEPARTURE_02, 
        MINS_DEPARTURE_03, 
        MINS_DEPARTURE_04, 
        MINS_DEPARTURE_05, 
        MINS_DEPARTURE_06, 
        MINS_DEPARTURE_07, 
        MINS_DEPARTURE_08
    };

    Sint16 s16_arrivalTimes[N_CHOICES] = {
        MINS_ARRIVAL_01, 
        MINS_ARRIVAL_02, 
        MINS_ARRIVAL_03, 
        MINS_ARRIVAL_04, 
        MINS_ARRIVAL_05, 
        MINS_ARRIVAL_06, 
        MINS_ARRIVAL_07, 
        MINS_ARRIVAL_08
    };

    /* END: Variable declarations */

    // Getting user input
    printf("Enter a 24-hour time: ");
    scanf("%hd:%hd", &s16_hour24, &s16_minute24);
    // printf("Obtained time %.2d:%.2d\n", s16_hour24, s16_minute24);    // DEBUG CODE

    // Preparation
    // Convertion of the obtained time into minutes
    s16_totalMinutes = s16_hour24 * 60 + s16_minute24;
    c_amOrpm = 'a';
    u8_choice = 0;
    s16_nEntries = (Sint16)((sizeof(s16_departureTimes))/sizeof((s16_departureTimes[0])));
    // printf("Total minutes = %hd and total number of choices = %hd\n", s16_totalMinutes, s16_nEntries);    // DEBUG CODE

    // Determining the closest departure time
    if(s16_totalMinutes < s16_departureTimes[0])
    {
        // printf("Total minutes is less than the value of the first choice\n");    // DEBUG CODE
        u8_choice = 0;
    }    // if condition
    else if(s16_totalMinutes >= s16_departureTimes[s16_nEntries - 1])
    {
        // printf("Total minutes is more than the value of the last choice\n");    // DEBUG CODE
        u8_choice = s16_nEntries - 1;
    }    // else if condition
    else
    {
        // printf("Total minutes is between the value of the first and last choices\n");    // DEBUG CODE
        for(i = 0; i < s16_nEntries - 1; i++)
        {
            if(s16_totalMinutes >= s16_departureTimes[i] && s16_totalMinutes <= s16_departureTimes[i + 1])
            {
                Sint16 s16_midValue;
                // printf("Total minutes is between the values positioned at %d and %d\n", i, i + 1);    // DEBUG CODE
                s16_midValue = (s16_departureTimes[i] + s16_departureTimes[i + 1]) / 2;
                u8_choice = (s16_totalMinutes < s16_midValue) ? (i) : (i + 1);
                break;    // break out of the for loop
            }    // if condition: check if in between
        }    // for statement
    }    // else condition: Determining the closest departure time completes here
    // printf("Determined choice: %d\n", u8_choice);    // DEBUG CODE

    // Conversion of minutes into 12 hour format
    u8_minute12 = s16_departureTimes[u8_choice] % 60;
    u8_hour12 = ((s16_departureTimes[u8_choice]) / 60) % 12;
    if(u8_hour12 == 0)
    {
        u8_hour12 = 12;
    }    // if condition
    if(s16_totalMinutes < 720)
    {
        c_amOrpm = 'a';
    }    // if condition
    else
    {
        c_amOrpm = 'p';
    }    // else condition

    printf("Closest departure time is %.2d:%.2d %cm, ", u8_hour12, u8_minute12, c_amOrpm);
    
    u8_minute12 = s16_arrivalTimes[u8_choice] % 60;
    u8_hour12 = ((s16_arrivalTimes[u8_choice] - u8_minute12) / 60) % 12;
    if(u8_hour12 == 0)
    {
        u8_hour12 = 12;
    }    // if condition
    if(s16_totalMinutes < 720)
    {
        c_amOrpm = 'a';
    }    // if condition
    else
    {
        c_amOrpm = 'p';
    }    // else condition

    printf("arriving at %.2d:%.2d %cm\n", u8_hour12, u8_minute12, c_amOrpm);
    
    return 0;
}
