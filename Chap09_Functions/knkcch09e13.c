/*
@@@@ PROGRAM NAME: knkcch09e13.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write the following function, which evaluates 
a chess position:
	int evaluate_position(char board[8][8]);
board represents a configuration of pieces on a chessboard, where the letters K, Q, R, B, N,
P represent White pieces, and the letters k, q, r, b, n, and p represent Black pieces.
evaluate_position should sum the values of the White pieces (Q = 9, R =5, B = 3,
N = 3, P=1). It should also sum the values of the Black pieces (done in a similar way). The
function will return the difference between the two numbers. This value will be positive if
White has an advantage in material and negative if Black has an advantage.
*/
#include<stdio.h>
#include<ctype.h>  //tolower()
//---------------------------------------------------------------------------
int just_switch(char a);
int evaluate_position(char board[8][8]);
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char board[8][8]={
	{'N',' ','R','Q','K','R','B','N'},
	{'P',' ','P','P',' ','P','P','P'},
	{'B',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ','P',' ',' ',' '},
	{' ','p','r',' ','p',' ',' ',' '},
	{' ',' ',' ',' ',' ','b',' ',' '},
	{'p',' ','p','p',' ','p','p','p'},
	{'n','b','r','k','q',' ',' ','n'}};

	if(evaluate_position(board)>0)
		printf("White has an advantage in the game.");
	else if(evaluate_position(board)<0)
		printf("Black has an advantage in the game.");
	else
		printf("Both Black and White have equal strength in the game.");
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
int evaluate_position(char board[8][8])
{
	int white_sum=0, black_sum=0;
	for(short i=0;i<8;i++)
	{
		for(short j=0;j<8;j++)
		{
			if(board[i][j]>='A' && board[i][j]<='Z')
			{
				white_sum+=just_switch(board[i][j]);
			}
			if(board[i][j]>='a' && board[i][j]<='z')
			{
				black_sum+=just_switch(board[i][j]);
			}
		}
	}
	return white_sum-black_sum;
}
//---------------------------------------------------------------------------
int just_switch(char a)
{
	a=tolower(a);
	switch(a)
	{
		case 'q': return 9;
		case 'r': return 5;
		case 'b': return 3;
		case 'n': return 3;
		case 'p': return 1;
		default: return 0;
	}
}
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Black has an advantage in the game.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------