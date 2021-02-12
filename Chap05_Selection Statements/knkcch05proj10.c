/*
@@@@ PROGRAM NAME: knkcch05proj10.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Using the switch statement, write a program that 
converts a numerical grade into a letter grade:
	Enter numerical grade: 34
	Letter grade: B
Use the following grading scale: A=90-100, B=80-89, C=70-79, D=60-69, F=0-59. 
Print an error message if the grade is larger than 100 or less than 0. Hint: 
Break the grade into two digits, then use a switch statement to test the ten's 
digit.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int grade;
	
	//Getting user input for grade.
	printf("Enter numerical grade: ");
	scanf("%d",&grade);
	
	//Displaying Letter grade
	printf("Letter grade: ");
	if(grade <101 && grade >-1)
		switch(grade/10)
		{
			case 10:  
			case 9:  printf("A");break;
			case 8:  printf("B");break;
			case 7:  printf("C");break;
			case 6:  printf("D");break;
			default:  printf("F");
		
		}
	else
		printf("\rImproper grade value.");
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter numerical grade: 79
Letter grade: C
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ TRial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter numerical grade: 101
Improper grade value.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter numerical grade: -10
Improper grade value.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 4:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter numerical grade: 99
Letter grade: A
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 5:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter numerical grade: 38
Letter grade: F
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------