/**
 * file: cknkCh05Prj004.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    float f_speed_knots;


    printf("Please enter wind speed (knots): ");
    scanf("%f", &f_speed_knots);

    printf("Wind condition: ");

    if(f_speed_knots < 1)
    {
        printf("Calm\n");
    }
    else if(f_speed_knots < 4)
    {
        printf("Light air\n");
    }
    else if(f_speed_knots < 28)
    {
        printf("Breeze\n");
    }
    else if(f_speed_knots < 48)
    {
        printf("Gale\n");
    }
    else if(f_speed_knots < 64)
    {
        printf("Storm\n");
    }
    else
    {
        printf("Hurricane\n");
    }

    return 0;
}

