/*
--PROGRAM NAME: knkcch05e07.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: What does the following statement print if i has the value 
17? What does it print if i has the value -17?
	printf("%d\n",i >= 0 ? i : -i);
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int i=17;
	printf("i=17: %d",i >= 0 ? i : -i);
	i=-17;
	printf("\ni=-17: %d",i >= 0 ? i : -i);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
i=17: 17
i=-17: 17
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------