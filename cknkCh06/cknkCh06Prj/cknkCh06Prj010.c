/**
 * file: cknkCh06Prj010.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int i_mm1, i_dd1, i_yy1, i_mm2, i_dd2, i_yy2, i_choice, i_zeroDate;

    // Getting date1
    printf("Enter a date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &i_mm1, &i_dd1, &i_yy1);
    i_zeroDate = i_mm1 + i_dd1 + i_yy1;
    
    // If date entered first is valid
    if(i_zeroDate)
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%2d/%2d/%2d", &i_mm2, &i_dd2, &i_yy2);
        i_zeroDate = i_mm2 + i_dd2 + i_yy2;
    }
    
    // If second date entered is also valid
    if(i_zeroDate != 0)
    {
        do
        {
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
            
            // Earliest date storing
            if(i_choice == 2)
            {
                i_mm1 = i_mm2;
                i_dd1 = i_dd2;
                i_yy1 = i_yy2;
            }
            
            // Getting date
            printf("Enter a date (mm/dd/yy): ");
            scanf("%2d/%2d/%2d", &i_mm2, &i_dd2, &i_yy2);

            i_zeroDate = i_mm2 + i_dd2 + i_yy2;
        }while(i_mm2 + i_dd2 + i_yy2 != 0);

        // Printing the operation result
        printf("%.2d/%.2d/%.2d is the earliest date.\n", i_mm1, i_dd1, i_yy1);
    } // if condition
    else if(i_mm1)
    {
        // Printing the operation result
        printf("%.2d/%.2d/%.2d is the earliest date.\n", i_mm1, i_dd1, i_yy1);
    }

    return 0;
}
