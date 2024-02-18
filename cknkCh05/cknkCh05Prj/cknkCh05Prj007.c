/**
 * file: cknkCh05Prj007.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int i_num1, i_num2, i_num3, i_num4, i_largest, i_smallest, i_largest1, i_smallest1;
    
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &i_num1, &i_num2, &i_num3, &i_num4);

    if(i_num1 <= i_num2)
    {
        i_smallest = i_num1;
        i_largest = i_num2;
    }
    else
    {
        i_smallest = i_num2;
        i_largest = i_num1;
    }

    if(i_num3 <= i_num4)
    {
        i_smallest1 = i_num3;
        i_largest1 = i_num4;
    }
    else
    {
        i_smallest1 = i_num4;
        i_largest1 = i_num3;
    }

    if(i_smallest > i_smallest1)
    {
        i_smallest = i_smallest1;
    }

    if(i_largest < i_largest1)
    {
        i_largest = i_largest1;
    }

    printf("Largest: %d\n", i_largest);
    printf("Smallest: %d\n", i_smallest);

    return 0;
}

