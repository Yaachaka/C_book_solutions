/*
@@@@ PROGRAM NAME: knkcch08proj12.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Modify Programming Project 5 from Chapter 7 so that the 
SCRABBLE values of the letters are stored in an array. The array will have 26 elements, 
corresponding to the 26 letters of the alphabet. For example, element 0 of the array will 
store 1 (because the SCRABBLE value of the letter A is 1), element 1 of the array will 
store 3 (because the SCRABBLE value of the letter B is 3), and so forth. As each character 
of the input word is read, the program will use the array to determine the SCRABBLE value 
of that character. Use an array initializer to set up the array.
*/
#include<stdio.h>
#include<ctype.h>  //toupper()
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char c;
	int value=0,
	scrabble_array[26]={
		1,3,3,2,1,
		4,2,4,1,8,
		5,1,3,1,1,
		3,10,1,1,1,
		1,4,4,8,4,10
	};
	
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
					case 'O':case 'R':case 'S':case 'T':case 'U': value+=scrabble_array[c-'A'];break;
					case 'D':case 'G': value+=scrabble_array[c-'A'];break;
					case 'B':case 'C':case 'M':case 'P': value+=scrabble_array[c-'A'];break;
					case 'F':case 'H':case 'V':case 'W':case 'Y': value+=scrabble_array[c-'A'];break;
					case 'K': value+=scrabble_array[c-'A'];break;
					case 'J':case 'X': value+=scrabble_array[c-'A'];break;
					case 'Q':case 'Z': value+=scrabble_array[c-'A'];
					
				}  //End of switch block
		}  //End of else block
	}  //End of for loop
	
	printf("Scrabble value: %d",value);
	
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
SCRABBLE WORD
Face values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ.
Enter a word (Max. 15 charcters): word
Scrabble value: 8
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
SCRABBLE WORD
Face values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ.
Enter a word (Max. 15 charcters): bird
Scrabble value: 7
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
SCRABBLE WORD
Face values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ.
Enter a word (Max. 15 charcters): scrabble
Scrabble value: 14
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial4:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
SCRABBLE WORD
Face values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ.
Enter a word (Max. 15 charcters): computer
Scrabble value: 14
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------