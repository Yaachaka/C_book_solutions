/**
 * file: cknkCh07Prj009.c
 * Author: Yaachaka
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int i_hour12, i_minute12, i_hour24, i_minute24, i_choice, i_totalMinutes;

    char c_pmORam;
    
    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &i_hour12, &i_minute12, &c_pmORam);  // `m` is ignored if entered as part of input
    
    c_pmORam = toupper(c_pmORam);
    if(c_pmORam == 'A')    // For `am`
    {
        i_hour24 = i_hour12 % 12;
    }
    else if(i_hour12 < 12)    // For `pm`
    {
        i_hour24 = i_hour12 + 12;
    }
    else
    {
        i_hour24 = 12;
    }
    i_minute24 = i_minute12;

    printf("Equvalent 24-hour time: %.2d:%.2d\n", i_hour24, i_minute24);

    return 0;
}
