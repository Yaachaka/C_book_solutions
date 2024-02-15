/*
 * file: cknkCh03Prj005.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    // Variable declrations
    int i_num1 = 0, i_num2 = 0, i_num3 = 0, i_num4 = 0, i_num5 = 0, i_num6 = 0, i_num7 = 0, i_num8 = 0, i_num9 = 0, i_num10 = 0, i_num11 = 0, i_num12 = 0, i_num13 = 0, i_num14 = 0, i_num15 = 0, i_num16 = 0;
    
    // Getting user input
    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &i_num1, &i_num2, &i_num3, &i_num4, &i_num5, &i_num6, &i_num7, &i_num8, &i_num9, &i_num10, &i_num11, &i_num12, &i_num13, &i_num14, &i_num15, &i_num16);

    // Displaying numbers in 4 by 4 arrangements
    printf("\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n", i_num1, i_num2, i_num3, i_num4, i_num5, i_num6, i_num7, i_num8, i_num9, i_num10, i_num11, i_num12, i_num13, i_num14, i_num15, i_num16);

    // Displaying Row sums
    printf("\nRow sums: %2d %2d %2d %2d\n", i_num1 + i_num2 + i_num3 + i_num4, i_num5 + i_num6 + i_num7 + i_num8, i_num9 + i_num10 + i_num11 + i_num12, i_num13 + i_num14 + i_num15 + i_num16);

    // Displaying Column sums
    printf("Column sums: %2d %2d %2d %2d\n", i_num1 + i_num5 + i_num9 + i_num13, i_num2 + i_num6 + i_num10 + i_num14, i_num3 + i_num7 + i_num11 + i_num15, i_num4 + i_num8 + i_num12 + i_num16);

    // Displaying Diagonal sums
    printf("Diagonal sums: %2d %2d\n", i_num1 + i_num6 + i_num11 + i_num16, i_num4 + i_num7 + i_num10 + i_num13);

    return 0;
}