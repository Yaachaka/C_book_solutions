/*
@@@@ PROGRAM NAME: knkcch13proj05.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
*/
#include<stdio.h>
#include<stdlib.h>  //atoi() - ascii to int conversion
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(int argc, char *argv[])
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int sum=0;

	for(int i=argc-1;i>0;i--)
		sum+=atoi(argv[i]);

	printf("Total: %d",sum);

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
./knkcch13/knkcch13proj05 23 45 21
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Total: 89
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
./knkcch13/knkcch13proj05 23 45 29
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Total: 97
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
@@@@ Trial4:
@@@@ Trial5:
@@@@ Trial6:
@@@@ Trial7:
@@@@ Trial8:
@@@@ Trial9:
*/
//---------------------------------------------------------------------------