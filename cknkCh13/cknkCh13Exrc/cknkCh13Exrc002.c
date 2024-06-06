/********************************************************************************
 * File: cknkCh13Exrc002.c
 * Author: Yaachaka
 * Purpose: NA
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
    char *p = "abc";

    // putchar(p);    // Generates warning
    // printf("a----------------------\n");
    putchar(*p);
    printf("b----------------------\n");
    puts(p);
    printf("c----------------------\n");
    // puts(*p);    // Creates a segmentation fault during execution
    // printf("d----------------------\n");
    
    printf("\n");
    return 0;
}	//FUNCTION END: main