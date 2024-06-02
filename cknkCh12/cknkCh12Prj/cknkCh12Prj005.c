/********************************************************************************
 * File: cknkCh12Prj005.c
 * Author: Yaachaka
 * Purpose: Program to reverse the words in a sentence. (Using pointers to walk through the array)
 ********************************************************************************/

/* START: Header inclusions*/
#include <stdio.h>
/* END: Header inclusions*/

/* START: MACRO definitions*/

/* END: MACRO definitions*/

/* START: type definitions*/

/* END: type definitions*/

/* START: Variable declarations*/

/* END: Variable declarations*/

/* START: Function prototypes*/

/* END: Function prototypes*/

/**
 * Function name: main
 * Return type: int
 * Return value description: 
 * Parameters: void
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: 
 */
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

    Uint8 j;
    char *ch_p1, *ch_p2, *ch_p3;
    /* END: Variable declarations*/

    printf("Enter a sentence (max hundred characters): ");
    ch_p1 = c_sentence;
    ch_p2 = c_sentenceWordReversed;
    
    while((ch = getchar()) != '\n' && ch_p1 < (c_sentence + MAX_LENGTH_SENTENCE))
    {
        if(ch == '.' || ch == '?' || ch == '!')
        {
            c_lastPunctuation = ch;
            break;    // break out of the while loop
        }    // if condition: if character is a punctuation mark
        *ch_p1++ = ch;
    }    // while loop: getting sentence

    j = 0;
    ch_p1--;
    while(ch_p1 >= c_sentence)
    {
        if(*ch_p1 == ' ' || ch_p1 == c_sentence)
        {
            if(ch_p1 == c_sentence)
            {
                ch_p3 = ch_p1;
            }	// if condition: 
            else
            {
                ch_p3 = ch_p1 + 1;
            }	// else condition: 
            while(j-- > 0)
            {
                *(ch_p2++) = *(ch_p3++);
            }	// while statement: Copying the word
            j = 0;
            if(ch_p1 == c_sentence)
            {
                *(ch_p2++) = *(ch_p3++);
            }	// if condition: 
            else
            {
                *(ch_p2++) = ' ';
            }	// else condition: 
        }	// if condition: A word is ready to copy
        else
        {
            j++;
        }	// else condition: 
        ch_p1--;
    }    // while condition: 
    if(ch_p2 < c_sentenceWordReversed + MAX_LENGTH_SENTENCE - 2)
    {
        *(ch_p2++) = c_lastPunctuation;
        *(ch_p2++) = '\0';
    }    // if condition: 

    // Printing the reversed sentence.
    printf("Reversal of words in sentence: ");
    ch_p3 = c_sentenceWordReversed;
    while(*(ch_p3) != '\0' && ch_p3 < c_sentenceWordReversed + MAX_LENGTH_SENTENCE)
    {
        printf("%c", *(ch_p3++));
    }
    
    printf("\n");
    return 0;
}	//FUNCTION END: main