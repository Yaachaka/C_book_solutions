/**
 * file: cknkCh07Prj004.c
 * Author: Yaachaka
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    char c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14;

    int i = 0;

    c1 = c2 = c3 = c4 = c5 = c6 = c7 = c8 = c9 = c10 = c11 = c12 = c13 = c14 = ' ';

    printf("Enter phone number: ");

    while((ch = toupper(getchar())) != '\n')
    {
        switch(ch)
        {
            case 'A':
            case 'B':
            case 'C':
                ch = '2';
                break;
            case 'D':
            case 'E':
            case 'F':
                ch = '3';
                break;
            case 'G':
            case 'H':
            case 'I':
                ch = '4';
                break;
            case 'J':
            case 'K':
            case 'L':
                ch = '5';
                break;
            case 'M':
            case 'N':
            case 'O':
                ch = '6';
                break;
            case 'P':
            case 'R':
            case 'S':
                ch = '7';
                break;
            case 'T':
            case 'U':
            case 'V':
                ch = '8';
                break;
            case 'W':
            case 'X':
            case 'Y':
                ch = '9';
                break;
        }    // switch statement

        switch(i)
        {
            case 0: c1 = ch; break;
            case 1: c2 = ch; break;
            case 2: c3 = ch; break;
            case 3: c4 = ch; break;
            case 4: c5 = ch; break;
            case 5: c6 = ch; break;
            case 6: c7 = ch; break;
            case 7: c8 = ch; break;
            case 8: c9 = ch; break;
            case 9: c10 = ch; break;
            case 10: c11 = ch; break;
            case 11: c12 = ch; break;
            case 12: c13 = ch; break;
            case 13: c14 = ch; break;
            
        }    // switch statement
        i++;
    }    // while loop getting the characters

    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14);

    return 0;
}
