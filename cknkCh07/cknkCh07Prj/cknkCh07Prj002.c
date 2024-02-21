/**
 * file: cknkCh07Prj002.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    getchar();    // To get rid of the unread new line character that was left behind by scanf.

    for(i = 1; i <= n; i++)
    {
        printf("%10d%10d\n", i, i * i);
        if(!(i % 24))
        {
            do
            {
                printf("\nPress Enter to continue...");
            }while('\n' != getchar());
            printf("\n");
        }
    }

    return 0;
}
