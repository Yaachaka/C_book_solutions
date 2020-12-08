/*
--PROGRAM NAME: knkcch03e02.c
--PROGRAM STATEMENT: Write calls of printf that displays a float variable x 
in the following formats.
(a) Exponential notation; left-justified in a field of size 8; one digit after 
the decimal point.
(b) Exponential notation; right-justified in a field of size 10; six digits 
after the decimal point.
(c) Fixed decimal notation; left-justified in a field of size 8; three digits 
after the decimal point.
(d) Fixed decimal notation; right-justified in a field of size 6; no digits 
after the decimal point.
*/
#include<stdio.h>
//---------------------------START OF MAIN()----------------------------------
int main(void)
{
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	float f=82.34f;
	
	printf("(a) :%-8.1e",f);
	printf("\n(b) :%10.6e",f);
	printf("\n(c) :%-8.3f",f);
	printf("\n(d) :%6.f",f);
	
	printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//------------------------------END OF MAIN()---------------------------------
//----------------------------------------------------------------------------
/*
OUTPUT:
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
(a) :8.2e+01
(b) :8.234000e+01
(c) :82.340
(d) :    82
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//----------------------------------------------------------------------------