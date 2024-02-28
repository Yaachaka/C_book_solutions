/**
 * file: cknkCh09Prj004.c
 * Author: Yaachaka
 */

/* START: Header inclusions*/
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
/* END: Header inclusions*/

/* START: MACRO definitions*/
#define ALPHABET_COUNT 26
/* END: MACRO definitions*/

/* START: type definitions*/
typedef unsigned char Uint8;
/* END: type definitions*/

/* START: Variable declarations*/

/* END: Variable declarations*/

/* START: Function prototypes*/
void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);
/* END: Function prototypes*/

int main(void)
{
    /* START: MACRO definitions*/
    
    /* END: MACRO definitions*/

    /* START: type definitions*/
    
    /* END: type definitions*/

    /* START: Variable declarations*/
    Uint8 i, j;
    char ch;
    int counts1[ALPHABET_COUNT] = {0}, counts2[ALPHABET_COUNT] = {0};
    bool b_areAnagrams;
    /* END: Variable declarations*/

    // Getting the first word
    printf("Enter first word: ");
    read_word(counts1);

    // Getting the second word
    printf("Enter second word: ");
    read_word(counts2);

    // Call function: to check if the arrays are equal
    b_areAnagrams = equal_array(counts1, counts2);

    // print the result
    printf("The words are");
    if(!(b_areAnagrams))
    {
        printf(" not");
    }    // if condition
    printf(" anagrams.\n");

    return 0;
}    // FUNCTION END: main

/**
 * function name: read_word
 * return type: 
 * return value description: 
 * parameters: 
 * parameter 1 description: 
 * parameter 2 description: 
 * parameter 3 description: 
 * Function description: 
 */
void read_word(int counts[26])
{
    /* START: Variable declarations*/
    Uint8 i, j;
    char ch;
    /* END: Variable declarations*/
    
    while((ch = tolower(getchar())) != '\n')
    {
        if(isalpha(ch))
        {
            counts[ch - 'a']++;
        }    // if condition: is alphabet?
    }    // while loop: get first word
}    // FUNCTION END: read_word

/**
 * function name: equal_array
 * return type: 
 * return value description: 
 * parameters: 
 * parameter 1 description: 
 * parameter 2 description: 
 * parameter 3 description: 
 * Function description: 
 */
bool equal_array(int counts1[26], int counts2[26])
{
    /* START: Variable declarations*/
    Uint8 i, j;
    bool b_areAnagrams;
    /* END: Variable declarations*/

    b_areAnagrams = true;
    
    for(i = 0; i < ALPHABET_COUNT; i++)
    {
        if(counts1[i] != counts2[i])
        {
            b_areAnagrams = false;
            break;    // break out of the for loop
        }    // if condition
    }    // for loop: check if the counter array has all zeroes

    return b_areAnagrams;
}    // FUNCTION END: equal_array