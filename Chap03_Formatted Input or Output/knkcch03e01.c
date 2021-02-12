/*
--PROGRAM NAME: knkcch03e01.c
--PROGRAM STATEMENT: What output do the following calls of printf produce?
(a) printf("%6d,%4d",86,1040);
(b) printf("%12.5e",30.253);
(c) printf("%.4f",83.162);
(d) printf("%-6.2g",.0000009979);
*/
#include<stdio.h>

int main(void)
{
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	printf("(a) :%6d,%4d",86,1040);
	printf("\n(b) :%12.5e",30.253);
	printf("\n(c) :%.4f",83.162);
	printf("\n(d) :%-6.2g",.0000009979);
	
	printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}