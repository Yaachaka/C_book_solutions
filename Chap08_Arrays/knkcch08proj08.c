/*
@@@@ PROGRAM NAME: knkcch08proj08.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Modify Programming Project 7 so that it prompts for five 
quiz grades for each of five students, then computes the total score and average score 
for each student, and the average score, high score, and low score for cach quiz.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int matrix[5][5]={0};
	float avg_score_stu[5]={0},tot_score_stu[5]={0},avg_score[5]={0},high_score[5]={0},low_score[5]={0};
	
	//Filling matrix with user input integers and calculating rowsum and column sum.
	for(short i=0;i<5;i++)  //Runs through each student
	{
		printf("Enter the five quiz grades of student %hd [range: 0 - 5]: \n",i+1);
		for(short j=0;j<5;j++)  //Runs through each quiz.
		{
			scanf("%1d",&matrix[i][j]);
			matrix[i][j]%=6;  //Just to make sure the score is in the range 0 and 5.
			tot_score_stu[i]+=matrix[i][j];
			avg_score[j]+=matrix[i][j];
			//To finding out the lowest and highest score of each quiz.
			if(!i)
				high_score[j]=low_score[j]=matrix[i][j];
			else
			{
				if(low_score[j] > matrix[i][j])
					low_score[j]=matrix[i][j];
				
				if(high_score[j] < matrix[i][j])
					high_score[j]=matrix[i][j];
				
			}
			
		}
		avg_score_stu[i]=tot_score_stu[i]/5.0f;
	}

	//To find average score of each quiz.
	for(short i=0;i<5;i++)
		avg_score[i]/=5.0f;

	//Displaying each student's scores in each quiz, along with total and average scores.
	printf("\nStudent   Quiz1   Quiz2   Quiz3   Quiz4   Quiz5   Total   Average");
	for(short i=0;i<5;i++)
	{
		printf("\n%7d",i+1);
		for(short j=0;j<5;j++)
			printf("%8d",matrix[i][j]);
		printf("%8.1f%10.1f",tot_score_stu[i],avg_score_stu[i]);
	}

	//Displaying each quiz's highest score, lowest score and average scores.
	printf("\nQuiz   Highest   Lowest   Average");
	for(short i=0;i<5;i++)
		printf("\n%4d%10.1f%9.1f%10.1f",i+1,high_score[i],low_score[i],avg_score[i]);
	

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
Enter the five quiz grades of student 1 [range: 0 - 5]:
4 5 2 3 1
Enter the five quiz grades of student 2 [range: 0 - 5]:
7 4 3 5 3
Enter the five quiz grades of student 3 [range: 0 - 5]:
8 5 2 4 6
Enter the five quiz grades of student 4 [range: 0 - 5]:
7 3 2 6 7
Enter the five quiz grades of student 5 [range: 0 - 5]:
8 4 2 6 3

Student   Quiz1   Quiz2   Quiz3   Quiz4   Quiz5   Total   Average
      1       4       5       2       3       1    15.0       3.0
      2       1       4       3       5       3    16.0       3.2
      3       2       5       2       4       0    13.0       2.6
      4       1       3       2       0       1     7.0       1.4
      5       2       4       2       0       3    11.0       2.2
Quiz   Highest   Lowest   Average
   1       4.0      1.0       2.0
   2       5.0      3.0       4.2
   3       3.0      2.0       2.2
   4       5.0      0.0       2.4
   5       3.0      0.0       1.6
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter the five quiz grades of student 1 [range: 0 - 5]:
5 3 2 6 7
Enter the five quiz grades of student 2 [range: 0 - 5]:
8 5 3 3 6
Enter the five quiz grades of student 3 [range: 0 - 5]:
7 4 3 2 6
Enter the five quiz grades of student 4 [range: 0 - 5]:
8 4 2 5 7
Enter the five quiz grades of student 5 [range: 0 - 5]:
2 5 7 4 3

Student   Quiz1   Quiz2   Quiz3   Quiz4   Quiz5   Total   Average
      1       5       3       2       0       1    11.0       2.2
      2       2       5       3       3       0    13.0       2.6
      3       1       4       3       2       0    10.0       2.0
      4       2       4       2       5       1    14.0       2.8
      5       2       5       1       4       3    15.0       3.0
Quiz   Highest   Lowest   Average
   1       5.0      1.0       2.4
   2       5.0      3.0       4.2
   3       3.0      1.0       2.2
   4       5.0      0.0       2.8
   5       3.0      0.0       1.0
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------