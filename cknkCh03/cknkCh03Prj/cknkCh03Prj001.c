/**
 * file: cknkCh03Prj001.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int mm = 0, dd = 0, yyyy = 0;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    printf("You entered the date %4.4d%2.2d%2.2d\n", yyyy, mm, dd);

    return 0;
}