/**
 * file: cknkCh08Prj011.c
 * Author: Yaachaka
 */

#include <stdio.h>

#include <ctype.h>

int main(void)
{
    /* START: MACRO definitions*/
    #define MAX_LENGTH 15
    /* END: MACRO definitions*/

    /* START: type definitions*/
    typedef unsigned char Uint8;
    /* END: type definitions*/

    /* START: Variable declarations*/
    char ch, c_phoneNumber[MAX_LENGTH] = {'\0'};
    Uint8 i;
    /* END: Variable declarations*/

    // Getting user input
    printf("Enter phone number: ");

    // Preparations
    i = 0;
    
    while((ch = toupper(getchar())) != '\n')
    {
        switch(ch)
        {
            case 'A':
            case 'B':
            case 'C':
                ch = '2';
                break;    // break out of switch statement
            case 'D':
            case 'E':
            case 'F':
                ch = '3';
                break;    // break out of switch statement
            case 'G':
            case 'H':
            case 'I':
                ch = '4';
                break;    // break out of switch statement
            case 'J':
            case 'K':
            case 'L':
                ch = '5';
                break;    // break out of switch statement
            case 'M':
            case 'N':
            case 'O':
                ch = '6';
                break;    // break out of switch statement
            case 'P':
            case 'R':
            case 'S':
                ch = '7';
                break;    // break out of switch statement
            case 'T':
            case 'U':
            case 'V':
                ch = '8';
                break;    // break out of switch statement
            case 'W':
            case 'X':
            case 'Y':
                ch = '9';
                break;    // break out of switch statement
        }    // switch statement

        c_phoneNumber[i++] = ch;
        if(i >= 15)
        {
            break;    // break out of while loop
        }
    }    // while loop getting the characters (phone number)

    // Printing the output
    printf("In numeric form: ");
    for(i = 0; i < MAX_LENGTH; i++)
    {
        printf("%c", c_phoneNumber[i]);
    }    // for loop: printing the phone number
    printf("\n");

    return 0;
}
