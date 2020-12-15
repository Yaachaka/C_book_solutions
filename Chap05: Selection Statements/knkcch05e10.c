/*
--PROGRAM NAME: knkcch05e10.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: What output does the following program fragment produce? 
(Assume that i is an integer variable.)
	i=1;
	switch(i%3){
		case 0: printf("zero");
		case 1: printf("one");
		case 2: printf("two");
	}
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int i=1;
	switch(i%3){
		case 0: printf("zero");
		case 1: printf("one");
		case 2: printf("two");
	}
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
onetwo
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------