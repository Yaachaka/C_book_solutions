/*
--PROGRAM NAME: knkccho2e04.c
--PROGRAM STATEMENT: Write a program that declares several 
int and float variables-without initializing them-and then prints their values. 
Is there any pattern to the values? (Usually there isn't).
*/
//-------------------------------------------------------------------------
#include<stdio.h>
//------------------------START OF MAIN()----------------------------------
int main(void)
{
	int a,b,c;
	float d,e,f;
	printf("ints: a= %d, b=%d, c=%d\n",a,b,c);
	printf("floats: d= %0.2f, e=%0.2f, f=%0.2f\n",d,e,f);
	
	return 0;
}
//-------------------------END OF MAIN()----------------------------------
/*
OUTPUT:
ints: a= -1225607468, b=1, c=-1093784612
floats: d= -0.40, e=0.00, f=0.00
*/
//-------------------------------------------------------------------------
