/*
--PROGRAM NAME: knkcch04proj06.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: European countries use a 13 digit code known as 
European Article Number (EAN) instead of the 12-digit Universal Product Code 
(UPC) found in North America. Each EAN ends with a check digit, just as a UPC 
does. The technique for calculating the check digit is also similar:
		Add the second, fourth, sixth eighth, tenth, and twelfth digits.
		Add the first, third, fifth, seventh, ninth, and eleventh digits.
		Multiply the first sum by 3 and add it to the second sum.
		Subtract 1 from the total.
		Compute the remainder when the adjusted total is dived by 10.
		Subtract the remainder from 9.
For example, consider Gulluoglu Turkish Delight Pisthachio & Coconut, which has 
an EAN of 8691484260008. The first sum is 6+1+8+2+0+0=17, and the second sum is 
8+9+4+4+6+0=31. Multiplying this first sum by 3 and adding the second yields 82. 
Subtracting 1 gives 81. The remainder upon dividing by 10 is 1. When the 
remainder is subtracted from 9, the result is 8, which matches the last digit of 
the original code. Your job is to modify the upc.c program of Section 4.1 so 
that it calculates the check digit for an EAN. The user will enter the first 12 
digits of the EAN as a single number.
	Enter the first 12 digits of an EAN: 869148426000
	Check digit: 8
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int d12,d11,d10,d9,d8,d7,d6,d5,d4,d3,d2,d1,sum1,sum2,total,check_digit;
	
	//User input
	printf("Enter the first 12 digits of an EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
	    &d12,&d11,&d10,&d9,&d8,&d7,&d6,&d5,&d4,&d3,&d2,&d1);
	
	//calculations
	sum1=d11+d9+d7+d5+d3+d1;
	sum2=d12+d10+d8+d6+d4+d2;
	total=sum1*3+sum2;
	check_digit=9-((total-1)%10);
	
	printf("Check digit: %1d",check_digit);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter the first 12 digits of an EAN: 869148426000
Check digit: 8
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------