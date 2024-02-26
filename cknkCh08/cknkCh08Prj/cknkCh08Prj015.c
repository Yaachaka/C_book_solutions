/**
 * file: cknkCh08Prj015.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    /* START: MACRO definitions*/
    #define MAX_N_CHARS 80
    /* END: MACRO definitions*/

    /* START: type definitions*/
    typedef unsigned char Uint8;
    /* END: type definitions*/

    /* START: Variable declarations*/
    Uint8 i, j, u8_characterCount;
    short s_shiftAmount;
    char c_actualMessage[MAX_N_CHARS] = {'\0'}, c_encryptedMessage[MAX_N_CHARS] = {'\0'}, ch;
    /* END: Variable declarations*/

    // Preparation
    u8_characterCount = 0;
    
    // Getting message from user
    printf("Enter message to be encrypted: ");
    
    while((ch = getchar()) != '\n')
    {
        c_actualMessage[u8_characterCount++] = ch;
        if(u8_characterCount >= MAX_N_CHARS)
        {
            break;    // break out of the while loop
        }    // if statement
    }    // while loop: getting sentences
    if(u8_characterCount < MAX_N_CHARS)
    {
        c_actualMessage[u8_characterCount] = '\n';
    }    // if statement: message inputting completed

    // Getting user input: sshift amount
    printf("Enter shift amount (1 - 25): ");
    scanf("%hd", &s_shiftAmount);

    // Starting encryption
    i = 0;
    while((ch = c_actualMessage[i]) != '\n')
    {
        if(ch >= 'A' && ch <= 'Z')
        {
            c_encryptedMessage[i] = (((ch -'A') + s_shiftAmount) % 26) + 'A';
        }    // if condition: for Capital case letters
        else if(ch >= 'a' && ch <= 'z')
        {
            c_encryptedMessage[i] = (((ch -'a') + s_shiftAmount) % 26) + 'a';
        }    // if condition for small case letters
        else
        {
            c_encryptedMessage[i] = ch;
        }
        i++;
    }    // while loop
    if(i < MAX_N_CHARS)
    {
        c_encryptedMessage[i] = '\n';
    }    // if statement: encrypting completes here


    // Printing the encrypted message
    i = 0;
    while((ch = c_encryptedMessage[i++]) != '\n')
    {
        putchar(ch);
    }    // while loop: printing encrypted message
    printf("\n");

    return 0;
}
