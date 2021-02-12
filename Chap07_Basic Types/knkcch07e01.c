/*
@@@@ PROGRAM NAME: knkcch07e01.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Give the decimal values of each of the 
following integer constants.
(a) 077
(b) 0x77
(c) 0XABC

*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int a=077,b=0x77,c=0xABC;
	
	printf("(a) 077: \n\tOctal conversion specification= %o \n\tDecimal conversion specification= %d",a,a);
	printf("\n(b) 0x77: \n\tHexadecimal conversion specification= %x \n\tDecimal conversion specification= %d",b,b);
	printf("\n(c) 0xABC \n\tHexadecimal conversion specification= %x \n\tDecimal conversion specification= %d",c,c);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
(a) 077:
        Octal conversion specification= 77
        Decimal conversion specification= 63
(b) 0x77:
        Hexadecimal conversion specification= 77
        Decimal conversion specification= 119
(c) 0xABC
        Hexadecimal conversion specification= abc
        Decimal conversion specification= 2748
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------