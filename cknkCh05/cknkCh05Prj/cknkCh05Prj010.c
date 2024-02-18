/**
 * file: cknkCh05Prj010.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int i_numericalGrade, i_quotient;
    
    // Getting user input
    printf("Enter numerical grade: ");
    scanf("%d", &i_numericalGrade);

    // Extracting second or higher digits
    i_quotient = i_numericalGrade / 10;

    // Printing the result
    printf("Letter grade: ");
    switch(i_quotient)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:printf("F\n");break;
        case 6:printf("D\n");break;
        case 7:printf("C\n");break;
        case 8:printf("B\n");break;
        default:printf("A\n");break;
    }

    printf("\n");
    return 0;
}

