/*
--PROGRAM NAME: knkcch05proj06.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: Modify the upc.c program of Section 4.1 so that it 
checks whether a UPC is valid. After the user enters a UPC, the program will 
display either VALID or NOT VALID.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, cd,
        first_sum, second_sum, total, check_digit;
	
	printf("Enter 12-digit UPC code: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&d,&i1,&i2,&i3,&i4,&i5,&j1,&j2,&j3,&j4,&j5,&cd);
	
	first_sum = d+i2+i4+j1+j3+j5;
	second_sum = i1+i3+i5+j2+j4;
	total = 3 * first_sum + second_sum;
	check_digit=9 - ((total - 1) % 10);
	
	if(check_digit==cd)
		printf("Valid UPC");
	else
		printf("Invalid UPC");
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
-- Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter 12-digit UPC code: 013800151735
Valid UPC
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter 12-digit UPC code: 013800151734
Invalid UPC
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter 12-digit UPC code: 031200020057
Invalid UPC
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------