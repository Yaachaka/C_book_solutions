/********************************************************************************
 * File: cknkCh11Prj002.c
 * Author: Yaachaka
 * Purpose: NA
 ********************************************************************************/

/* START: Header inclusions*/
#include <stdio.h>
/* END: Header inclusions*/

/* START: MACRO definitions*/
#define N_SLOTS 8U
/* END: MACRO definitions*/

/* START: type definitions*/

/* END: type definitions*/

/* START: Variable declarations*/

/* END: Variable declarations*/

/* START: Function prototypes*/
void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);
void time_totalMinsTo12(int i_totalMins, int *i_hr, int *i_min, char *c_ap);
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
    int i_hour24, i_minute24, i_totalMinutes;
    int departure_time, arrival_time;
    int i_hour12, i_minute12;
    char c_ap;
    
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &i_hour24, &i_minute24);

    i_totalMinutes = i_hour24 * 60 + i_minute24;

    find_closest_flight(i_totalMinutes, &departure_time, &arrival_time);

    printf("Closest departure time is ");
    time_totalMinsTo12(departure_time, &i_hour12, &i_minute12, &c_ap);
    printf("%.2d:%.2d %c.m., arriving at ", i_hour12, i_minute12, c_ap);
    time_totalMinsTo12(arrival_time, &i_hour12, &i_minute12, &c_ap);
    printf("%.2d:%.2d %c.m.\n", i_hour12, i_minute12, c_ap);
    
    printf("\n");
    return 0;
}	//FUNCTION END: main

/**
 * Function name: find_closest_flight
 * Return type: void
 * Return value description: 
 * Parameters: int desired_time, int *departure_time, int *arrival_time
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: Find the closest flight
 */
void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    int i_choice, i;
    
    int i_departureTimes[N_SLOTS] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int i_arrivalTimes[N_SLOTS] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

    // finding closest flight
    if(desired_time <= i_departureTimes[0])
    {
        *departure_time = i_departureTimes[0];
        *arrival_time = i_arrivalTimes[0];
    }	// if condition: 
    else if(desired_time >= i_departureTimes[N_SLOTS - 1])
    {
        *departure_time = i_departureTimes[N_SLOTS - 1];
        *arrival_time = i_arrivalTimes[N_SLOTS - 1];
    }	// else-if condition: 
    else
    {
        int i_midValue = 0;
        for(i = 0; i < N_SLOTS - 1; i++)
        {
            i_midValue = (i_departureTimes[i] + i_departureTimes[i + 1]) / 2;
            if(desired_time < i_midValue)
            {
                *departure_time = i_departureTimes[i];
                *arrival_time = i_arrivalTimes[i];
                break;    // Break out of for loop
            }
            else if(desired_time < i_departureTimes[i + 1])
            {
                *departure_time = i_departureTimes[i];
                *arrival_time = i_arrivalTimes[i];
                break;    // Break out of for loop
            }	// else-if condition: 
        }    // for loop:     
    }	// else condition: 
}	// FUNCTION END: find_closest_flight

/**
 * Function name: time_totalMinsTo12
 * Return type: void
 * Return value description: 
 * Parameters: int i_totalMins, int *i_hr, int *i_min, char *c_ap
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: 
 */
void time_totalMinsTo12(int i_totalMins, int *i_hr, int *i_min, char *c_ap)
{
    if(i_totalMins > 719)
    {
        *c_ap = 'p';
        i_totalMins -= 720;
        *i_hr = i_totalMins / 60;
        *i_min = i_totalMins % 60;
        if(*i_hr == 0)
        {
            *i_hr = 12;
        }	// if condition: 
    }	// if condition: pm
    else
    {
        *c_ap = 'a';
        if(i_totalMins < 60)
        {
            *i_hr = 12;
            *i_min = i_totalMins;
        }	// if condition: 
        else
        {
            *i_hr = i_totalMins / 60;
            *i_min = i_totalMins % 60;
        }	// else condition: 
    }	// else condition: am

}	// FUNCTION END: time_totalMinsTo12