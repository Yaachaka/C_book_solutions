/*
@@@@ PROGRAM NAME: knkcch07e15.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Use typedef to create types names 
Int8, Int16, and Int32. Define the types so that they represent 8-bit, 16-bit, 
and 32-bit integers on your machine.
*/
#include<stdio.h>
#include<stdint.h> //to typedef int8_t, int16_t and int32_t. But still, successfully 
                    //compiled and executed without including this library.
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	typedef int8_t Int8;
	typedef int16_t Int16;
	typedef int32_t Int32;
	
	printf("sizeof(Int8)= %d byte(s).",sizeof(Int8));
	printf("\nsizeof(Int16)= %d byte(s).",sizeof(Int16));
	printf("\nsizeof(Int32)= %d byte(s).",sizeof(Int32));
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
sizeof(Int8)= 1 byte(s).
sizeof(Int16)= 2 byte(s).
sizeof(Int32)= 4 byte(s).
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------