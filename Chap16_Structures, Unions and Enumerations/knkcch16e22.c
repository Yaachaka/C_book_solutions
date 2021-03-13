/*
@@@@ PROGRAM NAME: knkcch16e22.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Let chess_pieces be the following enumeration:
	enum chess_pieces {KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN};
(a) Write a declaration (including an initializer) for a constant array of integers named
piece_value that stores the numbers 200, 9, 5, 3, 3, and 1, representing the value of each
chess piece, from king to pawn. (The king’s value is actually infinite, since “capturing” 
the king (checkmate) ends the game, but some chess-playing software assigns the king a 
large value such as 200.)

(b) (C99) Repeat part (a), but use a designated initializer to initialize the array. Use the 
enumeration constants in chess_pieces as subscripts in the designators. (Hint: See the last
question in Q&A for an example.)
*/
#include<stdio.h>
//---------------------------------------------------------------------------
enum chess_pieces {KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN};
//const int piece_value[6] = {200, 9, 5, 3, 3, 1};  //Option (a)
const int piece_value[6] = {[KING]=200, [QUEEN]=9, [ROOK]=5, [BISHOP]=3, [KNIGHT]=3, [PAWN]=1};  //Option (b)
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	printf("File: %s (Date: %s, Time: %s)\n", __FILE__, __DATE__, __TIME__);

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
File: knkcch16e22.c (Date: Mar 13 2021, Time: 18:14:49)

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
@@@@ Trial3:
@@@@ Trial4:
@@@@ Trial5:
@@@@ Trial6:
@@@@ Trial7:
@@@@ Trial8:
@@@@ Trial9:
*/
//---------------------------------------------------------------------------