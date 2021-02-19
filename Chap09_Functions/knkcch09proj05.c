/*
@@@@ PROGRAM NAME: knkcch09proj05.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Modify Programming Project 17 from Chapter 8 so that it 
includes the following functions:

	void create_magic_square(int n, char magic_square[n][n]);
	void print_magic_square(int n, char magic_squarel[n][n]);

After obtaining the number n from the user, main will call create_magic_square,
passing it an nxn array that is declared inside main. create_magic_square will fill
the array with the numbers 1, 2, .... n² as described in the original project. main will 
then call print_magic_square, which will display the array in the format described in the
original project. Note: If your compiler doesn’t support variable-length arrays, declare 
the array in main to be 99 x 99 instead of nxn and use the following prototypes instead:

	void create_magic_square(int n, char magic_square[99][99]);
	void print_magic_square(int n, char magic_square[99][99]);
*/
#include<stdio.h>
//-----------------------------------------------------------------------------
void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	short n=0;

	//Getting n of the matrix.
	printf("This program creates a magic square of a specified n.\n"
	"The n must be an odd number between 1 and 99.\n"
	"Enter n of magic square: ");
	scanf("%2hd", &n);
	if(!(n%2))
		printf("Even numbered n!!! Really? OKay, let's see what happens.\n");
	if(n<1 && n>99)
	{
		printf("Size exceeds limits. Setting to default (i.e., 5).\n");
		n=5;
	}

	char magic_square[n][n];  //Variable sized objects may not be initialised.
	
	
	//Generating magic square.
	create_magic_square(n,magic_square);

	//Displaying the magic square.
	print_magic_square(n,magic_square);


	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
void create_magic_square(int n, char magic_square[n][n])
{
	//Making every element of the square to be zero.
	for(short i=0;i<n;i++)
		for(short j=0;j<n;j++)
			magic_square[i][j]=0;
	
	//Generating magic square.
	short i=0,j=n/2,done=1;
	magic_square[i][j]=1;  //Placing the number 1 in the middle of row 0.
	for(short k=1;k<n*n;k++)
	{
		while(done)
		{
			i=i?--i:n-1;  //Move up one row. Control out of bounds while moving up.
			++j;  //Move right one row.
			j%=n;  //control out bounds while moving right.

			if(!magic_square[i][j])  //If place is not occupied
			{
				magic_square[i][j]=k+1;
				done=0;
			}
			else  //Try the place below.
			{
			    ++i;  //move down one row
			    if(!magic_square[i][j])
			    {
			        magic_square[i][j]=k+1;
			        done=0;
			    }
			}

		}
		done=1;
	}

}
//---------------------------------------------------------------------------
void print_magic_square(int n, char magic_square[n][n])
{
	for(short i=0;i<n;i++)
	{
		for(short j=0;j<n;j++)
			printf("%4hd",magic_square[i][j]);
		printf("\n");

	}
}
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
This program creates a magic square of a specified n.
The n must be an odd number between 1 and 99.
Enter n of magic square: 5
  19  25   1   7  13
  24   5   6  12  18
   4  10  11  17  23
   9  15  16  22   3
  14  20  21   2   8

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
This program creates a magic square of a specified n.
The n must be an odd number between 1 and 99.
Enter n of magic square: 4
Even numbered n!!! Really? OKay, let's see what happens.
  11  16   1   6
  15   4   5  10
   3   8   9  14
   7  12  13   2

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------