/*
@@@@ PROGRAM NAME: knkcch07proj06.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a program that prints the values of 
sizeof(int), sizeof(short), sizeof(long), sizeof(float), sizeof(double) and 
sizeof(long double).
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	printf("Sizes of built in data types in bytes: ");
	printf("\nsizeof(int): %d",sizeof(int));
	printf("\nsizeof(short): %d",sizeof(short));
	printf("\nsizeof(long): %d",sizeof(long));
	printf("\nsizeof(float): %d",sizeof(float));
	printf("\nsizeof(double): %d",sizeof(double));
	printf("\nsizeof(long double): %d",sizeof(long double));
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Sizes of built in data types in bytes:
sizeof(int): 4
sizeof(short): 2
sizeof(long): 4
sizeof(float): 4
sizeof(double): 8
sizeof(long double): 8
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------