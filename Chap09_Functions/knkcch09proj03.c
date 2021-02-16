/*
@@@@ PROGRAM NAME: knkcch09proj03.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Modify Programming Project 9 from Chapter 8 so that it 
includes the following functions:

	void generate_random_walk(char walk[10][10]);
	void print_array(char walk[10][10]);

main first calls generate_random_walk, which initializes the array to contain '.'
characters and then replaces some of these characters by the letters A through Z, as
described in the original project. main then calls print_array to display the array 
on the screen.
*/
#include<stdio.h>
#include<stdlib.h>  //srand(),rand()
#include<time.h>  //time()
//-----------------------------------------------------------------------------
void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);
short move(int direction,short i,short j,char ch,char walk[][10]);
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char walk[10][10];
	
	srand((unsigned)(time(NULL)));
	
	generate_random_walk(walk);

	//State of walk after a random-walk.
	printf("\nAfter random walk:\n");
	print_array(walk);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
void generate_random_walk(char walk[10][10])
{
	char ch='A';
	short flag=0;  //Flag will be high if all dirctions are blocked.
	//Filling initial state of walk and displaying
	for(short i=0;i<10;i++)
		for(short j=0;j<10;j++)
			walk[i][j]='.';
	
	walk[0][0]=ch++;//Initial position of the walker
	for(short i=0,j=0;ch<='Z';ch++)
	{  //Start of [[FOR1]]
		short direction=(rand()%(3-0+1))+0;  //0-UP, 1-RIGHT, 2-DOWN 3-LEFT
		
		flag=move(direction,i,j,ch,walk);
				
		if(flag==0)
			--i;
		else if(flag==1)
			++j;
		else if(flag==2)
			++i;
		else if(flag==3)
			--j;
		else
			break;  //  //All directions blocked. Break from [[FOR1]]
		
	}  //End of [[FOR1]]

}
//---------------------------------------------------------------------------
void print_array(char walk[10][10])
{
	char ch='A'-1;
	for(short i=0;i<10;i++)
	{
		for(short j=0;j<10;j++)
		{
			printf("%c  ",walk[i][j]);
			if(walk[i][j]!='.')
				ch++;
		}
		printf("\n");
	}

	if(ch!='Z')
		printf("\nPremature termination after \'%c\'",ch);

}
//---------------------------------------------------------------------------
short move(int direction,short i,short j,char ch,char walk[10][10])
{
	short not_done=1,count=0;
	while(not_done && count<4)
	{
		if(direction==0 && not_done)
			if(i-1>=0 && walk[i-1][j]=='.')  //Check if UP is available
			{
				walk[--i][j]=ch;
				not_done=0;
			}
			else 
			{
				count++;
				direction=++direction%4;
			}
		if(direction==1 && not_done)
			if(j+1<10 && walk[i][j+1]=='.')  //Check if RIGHT is available
			{
				walk[i][++j]=ch;
				not_done=0;
			}
			else 
			{
				count++;
				direction=++direction%4;
			}
		if(direction==2 && not_done)
			if(i+1<10 && walk[i+1][j]=='.')  //Check if DOWN is available
			{
				walk[++i][j]=ch;
				not_done=0;
			}
			else 
			{
				count++;
				direction=++direction%4;
			}
		if(direction==3 && not_done)
			if(j-1>=0 && walk[i][j-1]=='.')  //Check if LEFT is available
			{
				walk[i][--j]=ch;
				not_done=0;
			}
			else 
			{
				count++;
				direction=++direction%4;
			}
	}
	if(count>3)
		return 4;
	else 
		return direction;
}
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

After random walk:
A  .  .  .  .  .  .  X  Y  Z
B  E  F  G  .  M  N  W  V  U
C  D  .  H  I  L  O  P  S  T
.  .  .  .  J  K  .  Q  R  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

After random walk:
A  B  C  .  G  H  I  J  K  L
.  .  D  E  F  .  .  .  .  M
.  .  .  .  .  .  .  .  .  N
.  .  .  .  .  .  .  .  .  O
.  .  .  .  .  .  .  .  .  P
.  .  .  .  .  .  .  .  .  Q
.  .  .  .  .  .  .  .  .  R
.  .  .  .  .  .  .  .  .  S
.  .  .  .  .  .  Y  X  W  T
.  .  .  .  .  .  Z  .  V  U

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

After random walk:
A  B  C  D  E  F  G  T  U  V
.  .  .  .  .  .  H  S  X  W
.  .  .  .  .  .  I  R  Q  P
.  .  .  .  .  .  J  K  L  O
.  .  .  .  .  .  .  .  M  N
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .
.  .  .  .  .  .  .  .  .  .

Premature termination after 'X'
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------