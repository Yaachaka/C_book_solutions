/*
--PROGRAM NAME: knkcch03e06.c
--PROGRAM STATEMENT: Show how to modify the addfrac.c program of Section 3.2 so 
that the user is allowed to enter fractions that contain spaces before and after 
each / character.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int num1, denom1, num2, denom2, result_num, result_denom;

  printf("Enter first fraction: ");
  scanf("%d / %d", &num1, &denom1);

  printf("Enter second fraction: ");
  scanf("%d / %d", &num2, &denom2);

  result_num = num1 * denom2 + num2 * denom1;
  result_denom = denom1 * denom2;
  printf("The sum is %d/%d\n", result_num, result_denom);

	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
/*
OUTPUT:
--Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter first fraction: 45/34
Enter second fraction: 56/23
The sum is 2939/782

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
--Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter first fraction: 45 / 34
Enter second fraction: 56 / 23
The sum is 2939/782

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------