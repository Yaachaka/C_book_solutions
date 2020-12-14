/*
--PROGRAM NAME: knkcch04proj05.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: Rewrite the upc.c program of Section 4.1 so that the 
user enters 11 digits at one time, instead of entering 1 digit, the 5 digits, 
then another 5 digits.
	Enter the first 11 digits of UPC: 01380015173
	Check digit: 5
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
      first_sum, second_sum, total;

  printf("Enter the first 11 digits of UPC: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
      &d,&i1,&i2,&i3,&i4,&i5,&j1,&j2,&j3,&j4,&j5);
  
  first_sum = d + i2 + i4 + j1 + j3 + j5;
  second_sum = i1 + i3 + i5 + j2 + j4;
  total = 3 * first_sum + second_sum;

  printf("Check digit: %d", 9 - ((total - 1) % 10));
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
-- Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter the first 11 digits of UPC: 01380015173
Check digit: 5
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter the first 11 digits of UPC: 05150024128
Check digit: 8
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter the first 11 digits of UPC: 03120001005
Check digit: 6
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------