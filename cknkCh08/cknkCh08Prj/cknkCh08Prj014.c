/**
 * file: cknkCh08Prj014.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    /* START: MACRO definitions*/
    #define MAX_LENGTH_SENTENCE 100
    /* END: MACRO definitions*/

    /* START: type definitions*/
    typedef unsigned char Uint8;
    /* END: type definitions*/

    /* START: Variable declarations*/
    char ch, c_lastPunctuation, c_sentence[MAX_LENGTH_SENTENCE] = {'\0'}, c_sentenceWordReversed[MAX_LENGTH_SENTENCE] = {'\0'};

    Uint8 u8_characterCount, i, j, k, u8_characterCount2;
    /* END: Variable declarations*/

    printf("Enter a sentence (max hundred characters): ");
    i = 0;
    j = 0;
    u8_characterCount = 0;
    while((ch = getchar()) != '\n')
    {
        if(ch == '.' || ch == '?' || ch == '!')
        {
            c_lastPunctuation = ch;
            break;    // break out of the while loop
        }    // if condition: if character is a punctuation mark
        c_sentence[u8_characterCount++] = ch;
        if(u8_characterCount >= MAX_LENGTH_SENTENCE)
        {
            break;    // Break out of while loop
        }    // if condition: character count exceeded
    }    // while loop: getting sentence

    // printf("No. of characters read in the sentence: %d\n", u8_characterCount);    // DEBUG CODE
    // printf("Starting the reversing process...\n");    // DEBUG CODE
    u8_characterCount2 = 0;
    j = 0;
    for(i = u8_characterCount; i >= 0; i--)
    {
        // printf("Outer for loop: i = %d, j = %d, k = %d\n", i, j, k);    // DEBUG CODE
        j++;
        if((c_sentence[i] == ' ') || (i == 0))
        {
            if(i == 0)
            {
                k = i;
                j++;
            }    // if condition
            else
            {
                k = i + 1;
            }    // else condition
            for(; --j; k++)
            {
                // printf("Inner for loop: i = %d, j = %d, k = %d\n", i, j, k);    // DEBUG CODE
                c_sentenceWordReversed[u8_characterCount2++] = c_sentence[k];
            }    // for loop
            j = 0;
            if(i)
            {
                c_sentenceWordReversed[u8_characterCount2++] = ' ';
            }    // if condition
        }    // if statemnet: space?
        if(!i)
            break;    // Needed to break the infinite loop
    }    // for loop: go through obtained sentence. Reversing completes here.

    // Printing the reversed sentence.
    printf("Reversal of sentence: ");
    for(i = 0; i < u8_characterCount2; i++)
    {
        printf("%c", c_sentenceWordReversed[i]);
    }
    printf("%c\n", c_lastPunctuation);

    return 0;
}
