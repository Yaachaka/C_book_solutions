/**
 * file: cknkCh08Prj007.c
 * Author: Yaachaka
 */

#include <stdio.h>

#define N_COLS 5
#define N_ROWS 5

int main(void)
{
    typedef unsigned char Uint8;
    
    int i_rowSums[N_ROWS] = {0}, i_columnSums[N_COLS] = {0}, i_number;
    int i_numArr[N_ROWS][N_COLS] = {0};
    Uint8 i, j;

    // Get the matrix and compute the sums
    for(i = 0; i < N_ROWS; i++)
    {
        printf("Enter row %d: ", i + 1);
        for(j = 0; j < N_COLS; j++)
        {
            scanf("%d", &i_numArr[i][j]);
            i_rowSums[i] += i_numArr[i][j];    // Computing of row sums handled here
        }
    }

    // Computing coumn sums
    for(i = 0; i < N_ROWS; i++)
    {
        for(j = 0; j < N_COLS; j++)
        {
            i_columnSums[i] += i_numArr[j][i];
        }
    }

    // Prints the row totals
    printf("\nRow totals:");
    for(i = 0; i < N_ROWS; i++)
    {    
        printf(" %d", i_rowSums[i]);
    }
    printf("\n");

    // Prints the column totals
    printf("Column totals:");
    for(i = 0; i < N_COLS; i++)
    {    
        printf(" %d", i_columnSums[i]);
    }
    printf("\n");

    return 0;
}
