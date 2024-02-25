/**
 * file: cknkCh08Prj012.c
 * Author: Yaachaka
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    /* START: MACRO definitions*/
    #define MAX_ALPHABET_COUNT 26
    /* END: MACRO definitions*/

    /* START: type definitions*/
    
    /* END: type definitions*/

    /* START: Variable declarations*/
    int sum = 0;
    char ch;
    char c_alphabets[MAX_ALPHABET_COUNT] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    /* END: Variable declarations*/

    printf("Enter a word: ");
    while((ch = toupper(getchar())) != '\n')
    {
        sum += c_alphabets[ch - 'A'];
    }    // while loop: getting characters

    printf("Scrabble value: %d\n", sum);

    return 0;
}
