/*
@@@@ PROGRAM NAME: knkcch13e14.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
What does the following program print?

	#include <stdio.h>
	
	int main (void)
	{
		char s[] = "Hsjodi", *p;
		
		for (p = s; *p; p++)
			--*p;
		puts(s) ;
		return 0;	
	}
*/
#include<stdio.h>
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char s[] = "Hsjodi", *p;
	
	for (p = s; *p; p++)
		--*p;
	puts(s) ;

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
Grinch

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