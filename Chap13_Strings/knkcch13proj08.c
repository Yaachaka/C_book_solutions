/*
@@@@ PROGRAM NAME: knkcch13proj08.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Modify Programming Project 5 from Chapter 7 so that it includes the following function:

	int compute_scrabble_value(const char *word);

The function returns the SCRABBLE value of the string pointed to by word.
*/
#include<stdio.h>
#include<ctype.h>  //toupper()
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
int compute_scrabble_value(const char *word);
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char word[80];
	int value=0;
	
	printf("SCRABBLE WORD");
	printf("\nFace values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ.");
	
	//Getting user input.
	printf("\nEnter a word (Max. 15 charcters): ");
	scanf("%s",word);
	
	value=compute_scrabble_value(word);
	printf("Scrabble value: %d",value);
	

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
int compute_scrabble_value(const char *word)
{
	
	int value=0;
	char c;

	while(*word)  //Start of [[WHILE1]]
	{
		c=toupper(*word++);
		if(c>='A'&&c<='Z')
			switch(c)  //Start of [[SWITCH1]]
			{
				case 'A':case 'E':case 'I':case 'L':case 'N':
				case 'O':case 'R':case 'S':case 'T':case 'U': value+=1;break;
				case 'D':case 'G': value+=2;break;
				case 'B':case 'C':case 'M':case 'P': value+=3;break;
				case 'F':case 'H':case 'V':case 'W':case 'Y': value+=4;break;
				case 'K': value+=5;break;
				case 'J':case 'X': value+=8;break;
				case 'Q':case 'Z': value+=10;
				
			}  //End of [[SWITCH1]]
	}  //End of [[WHILE1]]
	return value;
	
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
SCRABBLE WORD
Face values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ.
Enter a word (Max. 15 charcters): modern
Scrabble value: 9
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
SCRABBLE WORD
Face values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ.
Enter a word (Max. 15 charcters): Visual
Scrabble value: 9
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
SCRABBLE WORD
Face values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ.
Enter a word (Max. 15 charcters): Windows
Scrabble value: 14
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial4:
@@@@ Trial5:
@@@@ Trial6:
@@@@ Trial7:
@@@@ Trial8:
@@@@ Trial9:
*/
//---------------------------------------------------------------------------