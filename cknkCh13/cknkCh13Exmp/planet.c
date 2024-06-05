/********************************************************************************
 * File: planet.c
 * Author: K. N. King
 * Purpose: Checks planet names. Command line arguments
 ********************************************************************************/
/* START: Header inclusions*/
#include <stdio.h>
#include <string.h>
/* END: Header inclusions*/

/* START: MACRO definitions*/
#define NUM_PLANETS 9 
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
 * Parameters: int argc, char *argv[]
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: 
 */
int main(int argc, char *argv[])
{
    char *planets[] = {
        "Mercury", "Venus", "Earth",
        "Mars", "Jupiter", "Saturn",
        "Uranus", "Neptune", "Pluto"
    };

    int i, j;

    for(i = 1; i < argc; i++)
    {
        for(j = 0; j < NUM_PLANETS; j++)
        {
            if(strcmp(argv[i], planets[j]) == 0)
            {
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }	// if condition: command line argument is a planet
        }	// for statement: go through each elements in planets array
        if(j == NUM_PLANETS)
        {
            printf("%s is not a planet\n", argv[i]);
        }	// if condition: command line argument is not among planets' elements
    }	// for statement: go through each command line argument.
    
    printf("\n");
    return 0;
}	//FUNCTION END: main