/*
@@@@ PROGRAM NAME: knkcch17e.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Write the following function:
	int *create_array(int n, int initial_value) ;

The function should return a pointer to a dynamically allocated int array with 
n members, each of which is initialized to initial_value. The return value 
should be NULL if the array can’t be allocated.
*/
#include <stdio.h>
#include <stdlib.h>  //NULL, malloc()
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
int *create_array(int n, int initial_value) ;
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("File: %s, C Version: %d, Date: %s, Time: %s\n\n", __FILE__, __STDC_VERSION__, __DATE__, __TIME__);

	int initial_value = 8, n = 5, *a;

	a = create_array(n, initial_value);

	printf("a[%d] = {", n);

	for(short i=0;i < n; i++)
		printf(" %d", a[i]);
	printf("}");

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
int *create_array(int n, int initial_value)
{
	int *p = malloc(n), *q=p;
	if(!p)
		return NULL;
	while(n--)
		*q++ = initial_value;
	return p;
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
File: knkcch17e03.c, C Version: 199901, Date: Mar 15 2021, Time: 22:03:18

a[5] = { 8 8 8 8 8}
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