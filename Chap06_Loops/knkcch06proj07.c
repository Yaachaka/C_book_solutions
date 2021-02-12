/*
@@@@ PROGRAM NAME: knkcch06proj07.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Rearrange the square3.c program so that the for 
loop initializes i, and increments i. Don't rewrite the program: in particular, 
don't use any multiplications.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int i, n, odd, square;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	odd = 3;
	for (int i=1,square = 1; i <= n; odd += 2)
	{
		printf("%10d%10d\n", i++, square);
		square+=odd;
	}

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
This program prints a table of squares.
Enter number of entries in table: 15
         1         1
         2         4
         3         9
         4        16
         5        25
         6        36
         7        49
         8        64
         9        81
        10       100
        11       121
        12       144
        13       169
        14       196
        15       225

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------