/********************************************************************************
 * File: cknkCh13Exrc006.c
 * Author: Yaachaka
 * Purpose: censor function to replacing every occurrence of foo by xxx.
 ********************************************************************************/

/* START: Header inclusions*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/* END: Header inclusions*/

/* START: MACRO definitions*/
#define STR_LEN 60    /* max length of string */
/* END: MACRO definitions*/

/* START: type definitions*/

/* END: type definitions*/

/* START: Variable declarations*/

/* END: Variable declarations*/

/* START: Function prototypes*/
int read_line(char str[], int n);
void censor(char str[]);
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
    char str1[STR_LEN + 1];

    printf("Enter your message: ");
    read_line(str1, STR_LEN);

    censor(str1);
    printf("The message after censoring: ");
    printf("%s\n", str1);
    
    printf("\n");
    return 0;
}	//FUNCTION END: main

/**
 * Function name: read_line
 * Return type: int
 * Return value description: 
 * Parameters: char str[], int n
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: Get the the string from the user. Similar implementation to scanf.
 */
int read_line(char str[], int n)
{
    int ch, i = 0;

    while((ch = getchar()) != '\n')
    {
        if(i < n)
        {
            str[i++] = ch;
        }	// if condition: number of characters is less than the maximum number of characters allowed
        str[i] = '\0';
    }	// while statement: Get the characters until and excluding new-line character.
    if(i >= n)
    {
        i = n;
        str[n] = '\0';
    }	// if condition: 
    return i;
}	// FUNCTION END: read_line

/**
 * Function name: censor
 * Return type: void
 * Return value description: 
 * Parameters: char str[]
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: censor each character in the string
 */
void censor(char str[])
{
    char arr[4] = {'\0'}, *str2;

    while(*(str+2))
    {
        str2 = arr;
        strncpy(str2, str, 3);
        while(*str2)
        {
            *str2++ = tolower(*str2);
        }	// while statement: 
        if(strcmp(arr, "foo") == 0)
        {
            *str++ = 'x';
            *str++ = 'x';
            *str = 'x';
        }	// if condition: the substring is foo
        str++;
    }	// while statement: *str does not have null character
}	// FUNCTION END: censor