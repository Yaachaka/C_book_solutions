/**
 * file: cknkCh07Prj001.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int i, n;
    short s_prevSquare, s_currSquare;
    int i_prevSquare, i_currSquare;
    long l_prevSquare, l_currSquare;

    printf("This program is to determine the smallest value of n for which value of `i * i` can't be stored correctly in specified integer types.\n");
    
    /* Trying for short */
    s_currSquare = s_prevSquare = 10;
    printf("\n");
    printf("Testing for `short` type.\n");
    for(i = 11; ; i++)
    {
        s_currSquare = i * i;
        if(s_currSquare > s_prevSquare)
        {
            s_prevSquare = s_currSquare;
        }
        else
        {
            printf("Failed at n equal to %d with (i * i) value of %hd.\n", i, s_currSquare);
            printf("Last successfull storage was at n = %d with (I * I) value of %hd.\n", i-1, s_prevSquare);
            break;
        }
    }

    /* Trying for int */
    i_currSquare = i_prevSquare = 10;
    
    printf("\n");
    printf("Testing for `int` type.\n");
    for(i = 11; ; i++)
    {
        i_currSquare = i * i;
        if(i_currSquare > i_prevSquare)
        {
            i_prevSquare = i_currSquare;
        }
        else
        {
            printf("Failed at n equal to %d with (i * i) value of %d.\n", i, i_currSquare);
            printf("Last successfull storage was at n = %d with (I * I) value of %d.\n", i-1, i_prevSquare);
            break;
        }
    }

    /* Trying for long */
    l_currSquare = l_prevSquare = 10;
    
    printf("\n");
    printf("Testing for `long` type.\n");
    for(i = 11; ; i++)
    {
        l_currSquare = i * i;
        if(l_currSquare > l_prevSquare)
        {
            l_prevSquare = l_currSquare;
        }
        else
        {
            printf("Failed at n equal to %d with (i * i) value of %ld.\n", i, l_currSquare);
            printf("Last successfull storage was at n = %d with (I * I) value of %ld.\n", i-1, l_prevSquare);
            break;
        }
    }

    return 0;
}
