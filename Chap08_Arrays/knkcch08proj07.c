/*
@@@@ PROGRAM NAME: knkcch08proj07.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a program that reads a 5 x 5 array of integers and 
then prints the row sums and the column sums:

	Enter row 1: 8 3 9 0 10
	Enter row 2: 3 5 17 1 1
	Enter row 3: 2 8 6 23 1
	Enter row 4: 15 7 3 2 9
	Enter row 5: 6 14 2 6 0
	
	Row totals: 30 27 40 36 28
	Column totals: 34 37 37 32 21
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int matrix[5][5]={0},rowsum[5]={0},colsum[5]={0};

	//Filling matrix with user input integers and calculating rowsum and column sum.
	for(short i=0;i<5;i++)
	{
		printf("Enter row %hd: ",i+1);
		for(short j=0;j<5;j++)
		{
			scanf("%d",&matrix[i][j]);
			rowsum[i]+=matrix[i][j];
			colsum[j]+=matrix[i][j];
		}
	}

	//Display row totals
	printf("\nRow totals: \t");
	for(short i=0;i<5;i++)
		printf("%4d",rowsum[i]);
	//Display column totals
	printf("\nColumn totals: \t");
	for(short i=0;i<5;i++)
		printf("%4d",colsum[i]);

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter row 1: 1 2 3 4 5
Enter row 2: 1 2 3 4 5
Enter row 3: 1 2 3 4 5
Enter row 4: 1 2 3 4 5
Enter row 5: 1 2 3 4 5

Row totals:       15  15  15  15  15
Column totals:     5  10  15  20  25
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter row 1: 1 3 5 7 9
Enter row 2: 2 4 6 8 0
Enter row 3: 1 2 3 4 5
Enter row 4: 5 4 3 2 1
Enter row 5: 9 8 7 6 5

Row totals:       25  20  15  15  35
Column totals:    18  21  24  27  20
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------