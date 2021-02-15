/*
@@@@ PROGRAM NAME: knkcch08proj09.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a program that generates a “random walk” across a 
10 x 10 array. The array will contain characters (all '.' initially). The program must 
randomly “walk” from element to element, always going up, down, left, or right by one 
element. The elements visited by the program will be labeled with the letters A through 
Z, in the order visited. Here's an example of the desired output:

A  .  .  .  .  .  .  .  .  .
B  C  D  .  .  .  .  .  .  .
.  F  E  .  .  .  .  .  .  .
H  G  .  .  .  .  .  .  .  .
I  .  .  .  .  .  .  .  .  .
J  .  .  .  .  .  .  .  Z  .
K  .  .  R  S  T  U  V  Y  .
L  M  P  Q  .  .  .  W  X  .
.  N  O  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .

Hint: Use the srand and rand functions (see deal.c) to generate random numbers.
After generating a number, look at its remainder when divided by 4. There are four 
possible values for the remainder--O, 1, 2, and 3--indicating the direction of the next 
move. Before performing a move, check that (a) it won’t go outside the array, and (b) 
it doesn’t take us to an element that already has a letter assigned. If either condition 
is violated, try moving in another direction. If all four directions are blocked, the 
program must terminate. Here's an example of premature termination:

A  B  G  H  I  .  .  .  .  .
.  C  F  .  J  K  .  .  .  .
.  D  E  .  M  L  .  .  .  .
.  .  .  .  N  O  .  .  .  .
.  .  W  X  Y  P  Q  .  .  .
.  .  V  U  T  S  R  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .

Y is blocked on all four sides, so there’s no place to put Z.
*/
#include<stdio.h>
#include<stdlib.h>  //srand(), rand()
#include<time.h>  //time()
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char ch='A',matrix[10][10];
	short flag=0;  //Flag will be high if all dirctions are blocked.

	srand((unsigned)(time(NULL)));
	
	printf("Before walk:\n");
	//Filling initial state of matrix and displaying
	for(short i=0;i<10;i++)
	{
		for(short j=0;j<10;j++)
		{
			matrix[i][j]='.';
			printf("%c  ",matrix[i][j]);
		}
		printf("\n");
	}

	matrix[0][0]=ch++;//Initial position of the walker
	for(short i=0,j=0;ch<='Z';ch++)
	{  //Start of [[FOR1]]
		short direction=(rand()%(3-0+1))+0;  //0-UP, 1-RIGHT, 2-DOWN 3-LEFT
		
		switch(direction)
		{  //Start of [[SWITCH1]]
			case 0:  //UP
				if(i-1>=0 && matrix[i-1][j]=='.')  //Check if UP is available
					matrix[--i][j]=ch;
				else if(j+1<10 && matrix[i][j+1]=='.')  //UP is blocked. Check if RIGHT is available
					matrix[i][++j]=ch;
				else if(i+1<10 && matrix[i+1][j]=='.')  //RIGHT is blocked. Check if DOWN is available
					matrix[++i][j]=ch;
				else if(j-1>=0 && matrix[i][j-1]=='.')  //DOWN is blocked. Check if LEFT is available
					matrix[i][--j]=ch;
				else  //All directions blocked.
					flag=1;
				break;
			case 1:  //RIGHT
				if(j+1<10 && matrix[i][j+1]=='.')  //Check if RIGHT is available
					matrix[i][++j]=ch;
				else if(i+1<10 && matrix[i+1][j]=='.')  //RIGHT is blocked. Check if DOWN is available
					matrix[++i][j]=ch;
				else if(j-1>=0 && matrix[i][j-1]=='.')  //DOWN is blocked. Check if LEFT is available
					matrix[i][--j]=ch;
				else if(i-1>=0 && matrix[i-1][j]=='.')  //LEFT is blocked. Check if UP is available
					matrix[--i][j]=ch;
				else  //All directions blocked.
					flag=1;
				break;
			case 2:  //DOWN
				if(i+1<10 && matrix[i+1][j]=='.')  //Check if DOWN is available
					matrix[++i][j]=ch;
				else if(j-1>=0 && matrix[i][j-1]=='.')  //DOWN is blocked. Check if LEFT is available
					matrix[i][--j]=ch;
				else if(i-1>=0 && matrix[i-1][j]=='.')  //LEFT is blocked. Check if UP is available
					matrix[--i][j]=ch;
				else if(j+1<10 && matrix[i][j+1]=='.')  //UP is blocked. Check if RIGHT is available
					matrix[i][++j]=ch;
				else  //All directions blocked.
					flag=1;
				break;
			case 3:  //LEFT
				if(j-1>=0 && matrix[i][j-1]=='.')  //Check if LEFT is available
					matrix[i][--j]=ch;
				else if(i-1>=0 && matrix[i-1][j]=='.')  //LEFT is blocked. Check if UP is available
					matrix[--i][j]=ch;
				else if(j+1<10 && matrix[i][j+1]=='.')  //UP is blocked. Check if RIGHT is available
					matrix[i][++j]=ch;
				else if(i+1<10 && matrix[i+1][j]=='.')  //RIGHT is blocked. Check if DOWN is available
					matrix[++i][j]=ch;
				else  //All directions blocked.
					flag=1;
				break;
			
		}  //End of [[SWITCH1]]

		if(flag)
			break;  //  //All directions blocked. Break from [[FOR1]]
	}  //End of [[FOR1]]

	//State of matrix after a random-walk.
	printf("\nAfter walk:\n");
	for(short i=0;i<10;i++)
	{
		for(short j=0;j<10;j++)
		{
			printf("%c  ",matrix[i][j]);
		}
		printf("\n");
	}

	if(flag)
		printf("\nPremature termination after \'%c\'",--ch);
	
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
Before walk:
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .

After walk:
A  B  C  D  E  F  .  .  .  .
.  K  J  I  H  G  .  .  .  .
.  L  Y  Z  .  .  .  .  .  .
.  M  X  .  .  .  .  .  .  .
.  N  W  .  .  .  .  .  .  .
.  O  V  .  .  .  .  .  .  .
.  P  U  T  .  .  .  .  .  .
.  Q  R  S  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Before walk:
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .

After walk:
A  B  C  D  E  F  G  V  W  X
.  .  .  .  .  I  H  U  .  Y
.  .  .  .  .  J  K  T  .  Z
.  .  .  .  .  M  L  S  .  .
.  .  .  .  .  N  .  R  .  .
.  .  .  .  .  O  P  Q  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Before walk:
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .

After walk:
A  B  C  F  G  H  .  .  .  .
.  .  D  E  .  I  .  .  .  .
.  .  .  .  .  J  .  .  .  .
.  .  .  .  .  K  .  .  .  .
.  .  .  .  M  L  .  .  .  .
.  .  .  O  N  S  T  .  .  .
.  .  .  P  Q  R  U  V  .  .
.  .  .  .  .  .  .  W  Z  .
.  .  .  .  .  .  .  X  Y  .
.  .  .  .  .  .  .  .  .  .

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial4:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Before walk:
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .

After walk:
A  B  C  D  E  T  S  .  .  .
.  .  .  G  F  U  R  .  .  .
.  .  .  H  I  J  Q  P  .  .
.  .  .  .  .  K  .  O  .  .
.  .  .  .  .  L  M  N  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .

Premature termination after 'U'
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial5:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Before walk:
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .

After walk:
A  .  W  X  Y  .  .  .  .  .
B  C  V  .  Z  .  .  .  .  .
E  D  U  .  .  .  .  .  .  .
F  G  T  .  .  .  .  .  .  .
.  H  S  R  .  .  .  .  .  .
.  I  J  Q  .  .  .  .  .  .
.  L  K  P  .  .  .  .  .  .
.  M  N  O  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial6:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Before walk:
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .

After walk:
A  B  C  D  I  J  K  L  O  P
.  .  .  E  H  .  .  M  N  Q
.  .  .  F  G  .  .  .  S  R
.  .  .  .  .  .  .  .  T  U
.  .  .  .  .  .  .  .  .  V
.  .  .  .  .  .  .  Y  X  W
.  .  .  .  .  .  .  Z  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial7:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Before walk:
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .

After walk:
A  B  C  J  K  L  .  .  .  .
.  .  D  I  .  M  N  .  .  .
.  .  E  H  .  .  O  .  .  .
.  .  F  G  .  .  P  Q  .  .
.  .  .  .  .  .  .  R  U  V
.  .  .  .  .  .  .  S  T  W
.  .  .  .  .  .  .  .  Y  X
.  .  .  .  .  .  .  .  Z  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------