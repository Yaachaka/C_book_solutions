/*
--PROGRAM NAME: knkcch04e15.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: Give the values of i and j after each of the following 
expression statements has been executed. (Assume that i has the value 1 initially 
and j has the value 2.)
(a) i+=j;
(b) i--;
(c) i*j/i;
(d) i% ++j;
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int i=1,j=2;
	
	//Option (a)
	printf("Before i+=j; : i=%d,  j=%d",i,j);
	i+=j;
	printf("\nAfter i+=j; : i=%d,  j=%d",i,j);
	//Option (b)
	i=1;j=2;
	printf("\n\nBefore i--; : i=%d,  j=%d",i,j);
	i--;
	printf("\nAfter i--; : i=%d,  j=%d",i,j);
	//Option (c)
	i=1;j=2;
	printf("\n\nBefore i*j/i; : i=%d,  j=%d",i,j);
	i*j/i;
	printf("\nAfter i*j/i; : i=%d,  j=%d",i,j);
	//Option (d)
	i=1;j=2;
	printf("\n\nBefore i%% ++j; : i=%d,  j=%d",i,j);
	i% ++j;
	printf("\nAfter i%% ++j; : i=%d,  j=%d",i,j);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
knkcch04e15.c:32:5: warning: expression result unused [-Wunused-value]
        i*j/i;
        ~~~^~
knkcch04e15.c:37:3: warning: expression result unused [-Wunused-value]
        i% ++j;
        ~^ ~~~
2 warnings generated.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Before i+=j; : i=1,  j=2
After i+=j; : i=3,  j=2

Before i--; : i=1,  j=2
After i--; : i=0,  j=2

Before i*j/i; : i=1,  j=2
After i*j/i; : i=1,  j=2

Before i% ++j; : i=1,  j=2
After i% ++j; : i=1,  j=3
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------