/********************************************************************************
 * File: cknkCh13Exrc001.c
 * Author: Yaachaka
 * Purpose: To clear the doubts/re-verify the understandings
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
    /* Exrc001 */
    printf("%c", '\n');
    printf("a-----------------\n");
    printf("%c", "\n");
    printf("b-----------------\n");
    // printf("%s", '\n');    // Creates a Segmentation fault during the execution of the program.
    // printf("c-----------------\n");
    printf("%s", "\n");
    printf("d-----------------\n");
    // printf('\n');    // Creates a Segmentation fault during the execution of the program.
    // printf("e-----------------\n");
    printf("\n");
    printf("f-----------------\n");
    putchar('\n');
    printf("g-----------------\n");
    // putchar("\n");    // No Segmentation fault during the execution
    // printf("h-----------------\n");
    // puts('\n');    // Creates a Segmentation fault during the execution of the program.
    // printf("i-----------------\n");
    puts("\n");
    printf("j-----------------\n");
    puts("");
    printf("k-----------------\n");
    
    printf("\n");
    return 0;
}	//FUNCTION END: main