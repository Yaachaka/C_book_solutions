/*
@@@@ PROGRAM NAME: knkcch08e11.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a program fragment that declares an 
8 x 8 char array named checker_board and then uses a loop to store the following data 
into the array (one character per array element):

	B R B R B R B R
	R B R B R B R B
	B R B R B R B R
	R B R B R B R B
	B R B R B R B R
	R B R B R B R B
	B R B R B R B R
	R B R B R B R B
	
Hint: The element in row i, column j, should be the letter B if i + j is an even number.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char checker_board[8][8];

	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			checker_board[i][j]='B';
			if((i+j)%2)
				checker_board[i][j]='R';
			printf("%c ",checker_board[i][j]);
		}
		printf("\n");
	}

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
B R B R B R B R
R B R B R B R B
B R B R B R B R
R B R B R B R B
B R B R B R B R
R B R B R B R B
B R B R B R B R
R B R B R B R B

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------