/*
@@@@ PROGRAM NAME: knkcch09e11.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write the following function:
	float compute_GPA(char grades[], int n);
The grades array will contain letter grades (A, B, C. D, or F, either upper-case or lower-
case); n is the length of the array. The function should return the average of the grades
(assume that A=4,B=3,C=2,D=1, and F=0).
*/
#include<stdio.h>
#include<ctype.h>
//----------------------------------------------------------------------------
float compute_GPA(char grades[], int n);
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char grades[5]={'A','B','C','A','F'};
	short n=5;

	printf("The average of the given grades is %.2f.",compute_GPA(grades,n));
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
float compute_GPA(char grades[], int n)
{
	float gpa=0.0f;
	for(short i=0;i<n;i++)
	{
		if(toupper(grades[i])>='A' && toupper(grades[i])<='D')
			gpa+='E'-toupper(grades[i]);
	}
	gpa/=n;
	return gpa;
}
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
The average of the given grades is 2.60.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------