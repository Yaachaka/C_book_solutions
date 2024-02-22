/**
 * file: cknkCh07Prj010.c
 * Author: Yaachaka
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int i_nVowels;
    char ch;
    
    i_nVowels = 0;
    printf("Enter a sentence: ");
    while((ch = toupper(getchar())) != '\n')
    {
        switch(ch)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                i_nVowels += 1;
        }
    }    // while loop: get characters

    printf("Your sentence contains %d vowels.\n", i_nVowels);

    return 0;
}
