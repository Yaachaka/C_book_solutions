/*
@@@@ PROGRAM NAME: knkcch07proj03.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Modify the sum2.c program of Section 7.1 to sum a 
series of double values.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	double n, sum = 0;

  printf("This program sums a series of integers.\n");
  printf("Enter doubles (0 to terminate): ");

  scanf("%lf", &n);
  while (n != 0) {
    sum += n;
    scanf("%lf", &n);
  }
  printf("The sum is: %.4lf\n", sum);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
This program sums a series of integers.
Enter doubles (0 to terminate): 34.55
23.43
22.435
78.45                                                                                     0.324
0
The sum is: 159.1890

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------