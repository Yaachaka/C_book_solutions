/*
@@@@ PROGRAM NAME: knkcch08proj05.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Modify the interest.c program of Section 8.1 so that it 
compounds interest monthly instead of annually. The form of the output shouldn't change: 
the balance should still be shown at annual intervals.
*/
#include<stdio.h>
//---------------------------------------------------------------------------
#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int i, low_rate, num_years, year;
	double value[5];

	printf("Enter interest rate: ");
	scanf("%d", &low_rate);
	printf("Enter number of years: ");
	scanf("%d", &num_years);

	//Display table header and increment interest rate by 1% a year.
	printf("\nYears");
	for (i = 0; i < NUM_RATES; i++)
	{
		printf("%8d%%", low_rate + i);
		value[i] = INITIAL_BALANCE;
	}
	printf("\n");

	//Table data is calculated and displayed.
	for (year = 1; year <= num_years; year++)
	{
		printf("%3d    ", year);
		for (i = 0; i < NUM_RATES; i++)
		{
			for(int j=0;j<12;j++)
				value[i] += (double)(low_rate + i)/12.00 / 100.0 * value[i];
			printf("%9.2f", value[i]);
		}
		printf("\n");
	}

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter interest rate: 5
Enter number of years: 5

Years       5%       6%       7%       8%       9%
  1       105.12   106.17   107.23   108.30   109.38
  2       110.49   112.72   114.98   117.29   119.64
  3       116.15   119.67   123.29   127.02   130.86
  4       122.09   127.05   132.21   137.57   143.14
  5       128.34   134.89   141.76   148.98   156.57

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------