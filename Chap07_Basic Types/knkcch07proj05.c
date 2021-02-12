/*
@@@@ PROGRAM NAME: knkcch07proj05.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: In the SCRABBLE Cross-Word Game, players form words 
using small titles, each containing a letter and a face value. The face value 
varies from one letter to another, based on the letter's rarity. (Here are the 
face values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ.) 
Write a program that computes the value of a word by summing the values of its 
letters:
	Enter a word: pitfall
	Scrabble value: 12
Your program should allow any mixture of lower-case and upper-case letters in 
the word. Hint: Use toupper library function.
*/
#include<stdio.h>
#include<ctype.h>  //toupper()
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	char c;
	int value=0;
	
	printf("SCRABBLE WORD");
	printf("\nFace values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ.");
	
	//Getting user input.
	printf("\nEnter a word (Max. 15 charcters): ");
	for(int i=0;i<15;i++)
	{
		if((c=toupper(getchar()))=='\n')
			break;
		else
		{
			if(c>='A'&&c<='Z')
				switch(c)
				{
					case 'A':case 'E':case 'I':case 'L':case 'N':
					case 'O':case 'R':case 'S':case 'T':case 'U': value+=1;break;
					case 'D':case 'G': value+=2;break;
					case 'B':case 'C':case 'M':case 'P': value+=3;break;
					case 'F':case 'H':case 'V':case 'W':case 'Y': value+=4;break;
					case 'K': value+=5;break;
					case 'J':case 'X': value+=8;break;
					case 'Q':case 'Z': value+=10;
					
				}  //End of switch block
		}  //End of else block
	}  //End of for loop
	
	printf("Scrabble value: %d",value);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
SCRABBLE WORD
Face values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ.
Enter a word (Max. 15 charcters): pitfall
Scrabble value: 12
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
SCRABBLE WORD
Face values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ.
Enter a word (Max. 15 charcters): PitFall
Scrabble value: 12
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
SCRABBLE WORD
Face values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ.
Enter a word (Max. 15 charcters): Wonderful
Scrabble value: 16
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 4:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
SCRABBLE WORD
Face values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ.
Enter a word (Max. 15 charcters): Popular
Scrabble value: 11
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------