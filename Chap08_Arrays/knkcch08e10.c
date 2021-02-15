/*
@@@@ PROGRAM NAME: knkcch08e10.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a declaration for an 8 x 8 char array 
named chess_board. Include an initializer that puts the following data into the array 
(one character per array clement):

r n b q k b n r
P P P P P P P P
  .   .   .   .
.   .   .   .
  .   .   .   .
.   .   .   .
P P P P P P P P
R N B Q K B N R
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char chess_board[8][8]=
	{
	{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
	{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'p'},
	{' ', '.', ' ', '.', ' ', '.', ' ', '.'},
	{'.', ' ', '.', ' ', '.', ' ', '.', ' '},
	{' ', '.', ' ', '.', ' ', '.', ' ', '.'},
	{'.', ' ', '.', ' ', '.', ' ', '.', ' '},
	{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
	{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
	};

	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
			printf("%c ",chess_board[i][j]);
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
r n b q k b n r
P P P P P P P p
  .   .   .   .
.   .   .   .
  .   .   .   .
.   .   .   .
P P P P P P P P
R N B Q K B N R

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------