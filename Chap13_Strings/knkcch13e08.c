/*
@@@@ PROGRAM NAME: knkcch13e08.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
What will be the value of the string str after the following statements have been executed?

	strcpy(str, "tire-bouchon") ;
	strcpy(&str[4], "d-or-wi") ;
	strcat(str, "red?");
*/
#include<stdio.h>
#include<string.h>  //strcpy(), strcat()
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char str[80];

	strcpy(str, "tire-bouchon") ;
	printf("str= %s",str);
	strcpy(&str[4], "d-or-wi") ;
	printf("\nstr= %s",str);
	strcat(str, "red?");
	printf("\nstr= %s",str);
	
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
str= tire-bouchon
str= tired-or-wi
str= tired-or-wired?
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