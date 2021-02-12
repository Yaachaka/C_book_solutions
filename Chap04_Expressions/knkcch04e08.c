/*
--PROGRAM NAME: knkcch04e08.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: Would the upc.c program still work if the expression 
9-((total-1)%10) were replaced by (10-(total%10))%10?
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
			first_sum, second_sum, total;

	printf("Enter the first (single) digit: ");
	scanf("%1d", &d);
	printf("Enter first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
	printf("Enter second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;

	printf("Check digit (Expression: 9-((total-1)%%10)): %d", 9-((total-1)%10));
	printf("\nCheck digit (Expression: (10-(total%%10))%%10): %d", (10-(total%10))%10);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//-----------------------------------------------------------------------------
/*
OUTPUT:
-- Trial 1:
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter the first (single) digit: 0
Enter first group of five digits: 51500
Enter second group of five digits: 24128
Check digit (Expression: 9-((total-1)%10)): 8
Check digit (Expression: (10-(total%10))%10): 8
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter the first (single) digit: 0
Enter first group of five digits: 51500
Enter second group of five digits: 24108
Check digit (Expression: 9-((total-1)%10)): 0
Check digit (Expression: (10-(total%10))%10): 0
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------