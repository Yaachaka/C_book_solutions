/**
 * file: cknkCh08Prj016.c
 * Author: Yaachaka
 */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    /* START: MACRO definitions*/
    #define ALPHABET_COUNT 26
    /* END: MACRO definitions*/

    /* START: type definitions*/
    typedef unsigned char Uint8;
    /* END: type definitions*/

    /* START: Variable declarations*/
    Uint8 i, j;
    Uint8 u8_alphabetHitCount[ALPHABET_COUNT] = {0};
    char ch;
    bool b_areAnagrams;
    /* END: Variable declarations*/

    
    // Getting the first word
    printf("Enter first word: ");
    while((ch = tolower(getchar())) != '\n')
    {
        if(isalpha(ch))
        {
            u8_alphabetHitCount[ch - 'a']++;
        }    // if condition: is alphabet?
    }    // while loop: get first word

    // Getting the second word
    printf("Enter second word: ");
    while((ch = tolower(getchar())) != '\n')
    {
        if(isalpha(ch))
        {
            u8_alphabetHitCount[ch - 'a']--;
        }    // if condition: is alphabet?
    }    // while loop: get first word

    b_areAnagrams = true;
    for(i = 0; i < ALPHABET_COUNT; i++)
    {
        if(u8_alphabetHitCount[i])
        {
            b_areAnagrams = false;
            break;
        }
    }    // for loop: check if the counter array has all zeroes

    printf("The words are");
    if(!(b_areAnagrams))
    {
        printf(" not");
    }    // if condition
    printf(" anagrams.\n");

    return 0;
}
