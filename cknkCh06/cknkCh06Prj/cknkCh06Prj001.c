/**
 * file: cknkCh06Prj001.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    float f_num, f_largest;
    
    printf("Enter a number: ");
    scanf("%f", &f_num);

    f_largest = f_num;

    while(f_num > 0)
    {
        if(f_largest < f_num)
        {
            f_largest = f_num;
        }
        printf("Enter a number: ");
        scanf("%f", &f_num);
    }

    printf("The largest number entered was %.2f\n", f_largest);

    return 0;
}
