/**
 * file: cknkCh08Prj013.c
 * Author: Yaachaka
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    /* START: MACRO definitions*/
    #define MAX_LENGTH_LASTNAME 26
    /* END: MACRO definitions*/

    /* START: type definitions*/
    typedef unsigned char Uint8;
    /* END: type definitions*/

    /* START: Variable declarations*/
    char c_firstName1, c_secondName[MAX_LENGTH_LASTNAME] = {'\0'}, ch;

    Uint8 u8_counter;
    /* END: Variable declarations*/
    
    // Getting the name
    printf("Enter a first and last name (separated by a space): ");

    // Getting first name: Save only first chaarcter    
    c_firstName1 = toupper(getchar());
    while(getchar() != ' ');

    u8_counter = 0;

    // Getting Last name
    while((ch = getchar()) != '\n')
    {
        c_secondName[u8_counter++] = ch;
        if(u8_counter >= MAX_LENGTH_LASTNAME)
            break;    // break out of the while loop
    }    // while loop: get second name
    c_secondName[0] = toupper(c_secondName[0]);

    // Printing the name as required
    printf("You entered the name: ");
    u8_counter = 0;
    while((ch = c_secondName[u8_counter++]) != '\0')
    {
        putchar(ch);
    }    // while loop: printing the last name
    printf(", %c.\n", c_firstName1);

    return 0;
}
