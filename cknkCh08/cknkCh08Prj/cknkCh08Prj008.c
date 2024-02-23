/**
 * file: cknkCh08Prj008.c
 * Author: Yaachaka
 */

#include <stdio.h>

#define N_COLS 5
#define N_ROWS 5

int main(void)
{
    typedef unsigned char Uint8;
    
    int i_totalEachStudent[N_ROWS] = {0},    //same as row sum
    i_totalEachQuiz[N_COLS] = {0},    // same as column sum
    i_highScoreEachQuiz[N_COLS] = {0},  // max of each column
    i_lowScoreEachQuiz[N_COLS] = {0};  // min of each column
    
    int i_quizGrades[N_ROWS][N_COLS] = {0};
    Uint8 i, j;

    float i_averageEachStudent[N_ROWS] = {0},    // average of row sum
    i_averageEachQuiz[N_COLS] = {0};    // average of column sum
    

    // Get the matrix and compute the sums
    for(i = 0; i < N_ROWS; i++)
    {
        printf("Enter five quiz grades of student %d: ", i + 1);
        for(j = 0; j < N_COLS; j++)
        {
            scanf("%d", &i_quizGrades[i][j]);
            i_totalEachStudent[i] += i_quizGrades[i][j];    // total score of each student
        }
        i_averageEachStudent[i] = (float) i_totalEachStudent[i] / N_COLS;    // average score of each student
    }

    // Computing coumn sums
    for(i = 0; i < N_ROWS; i++)
    {
        for(j = 0; j < N_COLS; j++)
        {
            int i_temp = 0;
            i_temp = i_quizGrades[j][i];
            i_totalEachQuiz[i] += i_temp;    // total of each quiz

            // For capturing max and min in the quizzes
            if(!j)
            {
                i_highScoreEachQuiz[i] = i_temp;
                i_lowScoreEachQuiz[i] = i_temp;
            }
            if(i_highScoreEachQuiz[i] < i_temp)
            {
               i_highScoreEachQuiz[i] = i_temp;
            }
            if(i_lowScoreEachQuiz[i] > i_temp)
            {
               i_lowScoreEachQuiz[i] = i_temp;
            }
        }
        i_averageEachQuiz[i] = (float) i_totalEachQuiz[i] / N_ROWS;
    }

    // Prints the row totals
    printf("\nTotal scores of each student:");
    for(i = 0; i < N_ROWS; i++)
    {    
        printf(" %d", i_totalEachStudent[i]);
    }
    
    // Prints the column totals
    printf("\nAverage score of each quiz:");
    for(i = 0; i < N_COLS; i++)
    {    
        printf(" %.2f", i_averageEachQuiz[i]);
    }
    
    // Prints the high scores of each quiz
    printf("\nHigh scores of each quiz:");
    for(i = 0; i < N_COLS; i++)
    {    
        printf(" %d", i_highScoreEachQuiz[i]);
    }

    // Prints the low scores of each quiz
    printf("\nLow scores of each quiz:");
    for(i = 0; i < N_COLS; i++)
    {    
        printf(" %d", i_lowScoreEachQuiz[i]);
    }
    printf("\n");

    return 0;
}
