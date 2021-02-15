/*
@@@@ PROGRAM NAME: knkcch08proj17.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a program that prints an n X n magic square (a 
square arrangement of the numbers 1,2, ... n² in which the sums of the rows, columns, 
and diagonals are all the same). The user will specify the value of n:

	This program creates a magic square of a specified size.
	The size must be an odd number between 1 and 99.
	Enter size of magic square: 5
	   17   24    1    8   15
	   23    5    7   14   16
	    4    6   13   20   22
	   10   12   19   21    3
	   11   18   25    2    9
Store the magic square in a two-dimensional array. Start by placing the number 1 in 
the middle of row 0. Place each of the remaining numbers 2, 3, .... n² by moving up one 
row and over one column. Any attempt to go outside the bounds of the array should 
“wrap around” to the opposite side of the array. For example, instead of storing the 
next number in row -1, we would store it in row n - 1 (the last row). Instead of storing 
the next number in column n. we would store it in column 0. If a particular array element 
is already occupied, put the number directly below the previously stored number. If your 
compiler supports variable-length arrays, declare the array to have n rows and columns. 
If not, declare the array to have 99 rows and 99 columns.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	short size=0;

	//Getting size of the matrix.
	printf("This program creates a magic square of a specified size.\n"
	"The size must be an odd number between 1 and 99.\n"
	"Enter size of magic square: ");
	scanf("%2hd", &size);
	if(!(size%2))
		printf("Even numbered size!!! Really? OKay, let's see what happens.\n");
	if(size<1 && size>99)
	{
		printf("Size exceeds limits. Setting to default (i.e., 5).\n");
		size=5;
	}

	short magic_square[size][size];  //Variable sized objects may not be initialised.
	
	//Making every element of the square to be zero.
	for(short i=0;i<size;i++)
		for(short j=0;j<size;j++)
			magic_square[i][j]=0;
	
	//Generating magic square.
	short i=0,j=size/2,done=1;
	magic_square[i][j]=1;  //Placing the number 1 in the middle of row 0.
	for(short k=1;k<size*size;k++)
	{
		while(done)
		{
			i=i?--i:size-1;  //Move up one row. Control out of bounds while moving up.
			++j;  //Move right one row.
			j%=size;  //control out bounds while moving right.

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

	//Displaying the magic square.
	for(short i=0;i<size;i++)
	{
		for(short j=0;j<size;j++)
			printf("%4hd",magic_square[i][j]);
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
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
This program creates a magic square of a specified size.
The size must be an odd number between 1 and 99.
Enter size of magic square: 8
Even numbered size!!! Really? OKay, let's see what happens.
  37  46  55  64   1  10  19  28
  45  54  63   8   9  18  27  36
  53  62   7  16  17  26  35  44
  61   6  15  24  25  34  43  52
   5  14  23  32  33  42  51  60
  13  22  31  40  41  50  59   4
  21  30  39  48  49  58   3  12
  29  38  47  56  57   2  11  20

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
This program creates a magic square of a specified size.
The size must be an odd number between 1 and 99.
Enter size of magic square: 5
  19  25   1   7  13
  24   5   6  12  18
   4  10  11  17  23
   9  15  16  22   3
  14  20  21   2   8

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------