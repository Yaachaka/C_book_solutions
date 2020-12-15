/*
--PROGRAM NAME: knkcch05e09.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: Are the following if statements equivalent? If not, why not?
	if(score >= 90)          if(score < 60)
		printf("A");            	printf("F");
	else if (score >=80)     else if(score <70)
		printf("B");            	printf("D");
	else if(score >=70)      else if(score<80)
		printf("C");            	printf("C");
	else if(score>60)        else if(score<90)
		printf("D");            	printf("B");
	else                     else
		printf("F");            	printf("A");
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int score;
	
	printf("Enter score: ");
	scanf("%d",&score);
	
	printf("Output of first if statement: ");
	if(score >= 90)
		printf("A");
	else if (score >=80)
		printf("B");
	else if(score >=70)
		printf("C");
	else if(score>60)
		printf("D");
	else
		printf("F");
	
	printf("\nOutput of second if statement: ");
	if(score < 60)
		printf("F");
	else if(score <70)
		printf("D");
 else if(score<80)
		printf("C");
	else if(score<90)
		printf("B");
	else
		printf("A");

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
-- Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter score: 35
Output of first if statement: F
Output of second if statement: F
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter score: 65
Output of first if statement: D
Output of second if statement: D
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter score: 78
Output of first if statement: C
Output of second if statement: C
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 4:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter score: 98
Output of first if statement: A
Output of second if statement: A
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trual 5:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter score: 84
Output of first if statement: B
Output of second if statement: B
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------