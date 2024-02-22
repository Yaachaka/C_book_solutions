/**
 * file: cknkCh07Prj011.c
 * Author: Yaachaka
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c_firstName1, c_secondName1, c_secondName2, c_secondName3, c_secondName4, c_secondName5, c_secondName6, c_secondName7, c_secondName8, c_secondName9, c_secondName10, c_secondName11, c_secondName12, c_secondName13, c_secondName14, c_secondName15;

    char ch;
    int i_counter;

    c_firstName1 = c_secondName1 = c_secondName2 = c_secondName3 = c_secondName4 = c_secondName5 = c_secondName6 = c_secondName7 = c_secondName8 = c_secondName9 = c_secondName10 = c_secondName11 = c_secondName12 = c_secondName13 = c_secondName14 = c_secondName15 = '\0';
    
    printf("Enter a first and last name (separated by a space): ");

    // Getting first name: Save only first chaarcter    
    c_firstName1 = toupper(getchar());
    while(getchar() != ' ');

    i_counter = 1;

    // Getting Last name
    while((ch = getchar()) != '\n')
    {
        switch(i_counter)
        {
            case 1: c_secondName1 = toupper(ch);break;
            case 2: c_secondName2 = ch;break;
            case 3: c_secondName3 = ch;break;
            case 4: c_secondName4 = ch;break;
            case 5: c_secondName5 = ch;break;
            case 6: c_secondName6 = ch;break;
            case 7: c_secondName7 = ch;break;
            case 8: c_secondName8 = ch;break;
            case 9: c_secondName9 = ch;break;
            case 10: c_secondName10 = ch;break;
            case 11: c_secondName11 = ch;break;
            case 12: c_secondName12 = ch;break;
            case 13: c_secondName13 = ch;break;
            case 14: c_secondName14 = ch;break;
            case 15: c_secondName15 = ch;break;
        }    //switch statement
        i_counter++;
    }    // while loop: get second name

    putchar(c_secondName1);
    putchar(c_secondName2);
    putchar(c_secondName3);
    putchar(c_secondName4);
    putchar(c_secondName5);
    putchar(c_secondName6);
    putchar(c_secondName7);
    putchar(c_secondName8);
    putchar(c_secondName9);
    putchar(c_secondName10);
    putchar(c_secondName11);
    putchar(c_secondName12);
    putchar(c_secondName13);
    putchar(c_secondName14);
    putchar(c_secondName15);
    putchar(',');
    putchar(' ');
    putchar(c_firstName1);
    
    
    printf("\n");

    return 0;
}
