/**
 * file: cknkCh05Prj009.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int i_mm1, i_dd1, i_yy1, i_mm2, i_dd2, i_yy2, i_choice;

    // Getting date1
    printf("Enter first date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &i_mm1, &i_dd1, &i_yy1);
    
    // Getting date2
    printf("Enter second date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &i_mm2, &i_dd2, &i_yy2);
    
    // Performing comparision
    if(i_yy1 == i_yy2)
    {
        if(i_mm1 == i_mm2)
        {
            if(i_dd1 == i_dd2)
            {
                i_choice = 3;
            }
            else
            {
                i_choice = (i_dd1 < i_dd2) ? (1) : (2);
            }
        }
        else
        {
            i_choice = (i_mm1 < i_mm2) ? (1) : (2);    
        }
    }   
    else
    {
        i_choice = (i_yy1 < i_yy2) ? (1) : (2);
    } 
    
    // Printing the operation result
    switch(i_choice)
    {
        case 1:
            printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", i_mm1, i_dd1, i_yy1, i_mm2, i_dd2, i_yy2);
            break;
        case 2:
            printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", i_mm2, i_dd2, i_yy2, i_mm1, i_dd1, i_yy1);
            break;
        default:
            printf("Both the dates are same.\n");
            break;
    }

    return 0;
}

