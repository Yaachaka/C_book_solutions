/*
 * file: cknkCh05Exrc011.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int area_code = 0;

    printf("Please enter the area code to get the area name: ");
    scanf("%3d", &area_code);

    switch (area_code)
    {
        
        case 229: printf("Area name: Albany\n");break;
        case 404: 
        case 678: 
        case 770: 
        case 470: printf("Area name: Atlanta\n");break;
        case 478: printf("Area name: Macon\n");break;
        case 706: 
        case 762: printf("Area name: Columbus\n");break;
        case 912: printf("Area name: Savannah\n");break;
        default: printf("Area code not recognized\n");break;
    }

    return 0;
}