/*
@@@@ PROGRAM NAME: knkcch15e04.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Assume that debug.h is a header file with the following contents:

	#ifdef DEBUG
	#define PRINT_DEBUG(n) printf("Value of " #n ": %d\n", n)
	#else
	#define PRINT_DEBUG(n)
	#endif
	
Let testdebug.c be the following source file:
	
	#include <stdio.h>
	
	#define DEBUG
	#include "debug.h"
	
	int main (void)
	{
		int i = 1, j = 2, k = 3;
		#ifdef DEBUG
			printf("Output if DEBUG is defined:\n") ;
		#else
			printf("Output if DEBUG is not defined:\n");
		#endif
		
		PRINT_DEBUG(i);
		PRINT_DEBUG(j);
		PRINT_DEBUG(k);
		PRINT_DEBUG(i + j);
		PRINT_DEBUG(2 * i + j - k);
		
		return 0;
	}
(a) What is the output when the program is executed?
(b) What is the output if the #define directive is removed from testdebug.c?
(c) Explain why the output is different in parts (a) and (b).
(d) Is it necessary for the DEBUG macro to be defined before debug.h is included in order
for PRINT_DEBUG to have the desired effect? Justify your answer.
*/
#include<stdio.h>
//---------------------------------------------------------------------------
#include "debug.h"
#define DEBUG
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int i = 1, j = 2, k = 3;
	#ifdef DEBUG
		printf("Output if DEBUG is defined:\n") ;
	#else
		printf("Output if DEBUG is not defined:\n");
	#endif
	
	PRINT_DEBUG(i);
	PRINT_DEBUG(j);
	PRINT_DEBUG(k);
	PRINT_DEBUG(i + j);
	PRINT_DEBUG(2 * i + j - k);
	

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Output if DEBUG is defined:
Value of i: 1
Value of j: 2
Value of k: 3
Value of i + j: 3
Value of 2 * i + j - k: 1

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Output if DEBUG is not defined:

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
@@@@ Trial4:
@@@@ Trial5:
@@@@ Trial6:
@@@@ Trial7:
@@@@ Trial8:
@@@@ Trial9:
*/
//---------------------------------------------------------------------------