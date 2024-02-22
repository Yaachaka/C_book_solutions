/**
 * file: cknkCh07Prj013.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int i_totalChars, i_nCharsInWord, i_nWords;
    float f_averageWordLength;
    char c_char;

    i_totalChars = i_nCharsInWord = i_nWords = 0;

    printf("Enter a sentence: ");

    while((c_char = getchar()) != '\n')
    {
        i_nCharsInWord++;
        while((c_char = getchar()) != ' ' && c_char != '\n')
        {
            i_nCharsInWord++;
        }
        i_nWords++;
        i_totalChars += i_nCharsInWord;
        i_nCharsInWord = 0;
        if(c_char == '\n')
            break;
    }

    // Computing average
    f_averageWordLength = (float) i_totalChars / i_nWords;

    // Output to the screen
    printf("Average word length: %.2f\n", f_averageWordLength);

    return 0;
}
