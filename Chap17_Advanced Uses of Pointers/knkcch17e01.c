/*
@@@@ PROGRAM NAME: knkcch17e01.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Having to check the return value of 
malloc (or any other memory allocation function) each time we call it can be an 
annoyance. Write a function named my_malloc that serves as a “wrapper” for 
malloc. When we call my_malloc and ask it to allocate n bytes, it in turn calls 
malloc, tests to make sure that malloc doesn’t return a null pointer, and then 
returns the pointer from malloc. Have my_malloc print an error message and 
terminate the program if malloc returns a null pointer.
*/
#include <stdio.h>
#include <stdlib.h>  //NULL, malloc()
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
void* my_malloc(size_t size);
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("File: %s, C Version: %d, Date: %s, Time: %s\n\n", __FILE__, __STDC_VERSION__, __DATE__, __TIME__);



	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
void* my_malloc(size_t size)
{
	void *p = malloc(size);
	if(p)
		return p;
	printf("Error: Memory allocation failed.");
	exit(EXIT_FAILURE);
}
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
File: knkcch17e01.c, C Version: 199901, Date: Mar 15 2021, Time: 21:11:27


++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

@@@@ Trial2:
@@@@ Trial3:
@@@@ Trial4:
@@@@ Trial5:
@@@@ Trial6:
@@@@ Trial7:
@@@@ Trial8:
@@@@ Trial9:
*/
//---------------------------------------------------------------------------