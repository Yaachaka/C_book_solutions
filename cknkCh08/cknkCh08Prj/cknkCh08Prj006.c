/**
 * file: cknkCh08Prj006.c
 * Author: Yaachaka
 */

#include <stdio.h>
#include <ctype.h>

#define ARRAY_LENGTH 80

int main(void)
{
    int i;
    char ch, c_sentence[ARRAY_LENGTH] = {' '};

    printf("Enter message (max. 80 chars.): ");

    i = 0;
    while((ch = toupper(getchar())) != '\n')
    {
        switch(ch)
        {
            case 'A': c_sentence[i] = '4';break;
            case 'B': c_sentence[i] = '8';break;
            case 'E': c_sentence[i] = '3';break;
            case 'I': c_sentence[i] = '1';break;
            case 'O': c_sentence[i] = '0';break;
            case 'S': c_sentence[i] = '5';break;
            default:  c_sentence[i] = ch;break;
        }    // switch statement
        i++;
        if(i >= ARRAY_LENGTH)
            break;
    }

    printf("In B1FF-speak: ");
    //printng goes here
    for(int j = 0; j <= i; j++)
    {
        printf("%c", c_sentence[j]);
    }
    printf("!!!!!!!!!!\n");

    return 0;
}
