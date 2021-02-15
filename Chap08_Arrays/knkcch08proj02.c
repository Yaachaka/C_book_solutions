/*
@@@@ PROGRAM NAME: knkcch08proj02.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Modify the repdigit.c program of Section 8.1 so that it 
prints a table showing how many times each digit appears in the number:

	Enter a number: 41271092
	Digit:        O 1 2 3 4 5 6 7 8 9
	Occurrences:  1 2 2 0 1 0 0 1 0 1
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	short digit_seen[10]={0};
	int digit;
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n > 0) 
	{
		digit = n % 10;
		digit_seen[digit]++;
		n /= 10;
	}

	printf("Digit: \t\t");
	for(int i=0;i<10;i++)
		printf("%d ",i);

	printf("\nOccurrence: \t");

	for(int i=0;i<10;i++)
		printf("%d ",digit_seen[i]);

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
Enter a number: 54737567
Digit:          0 1 2 3 4 5 6 7 8 9
Occurrence:     0 0 0 1 1 2 1 3 0 0
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a number: 546348134
Digit:          0 1 2 3 4 5 6 7 8 9
Occurrence:     0 1 0 2 3 1 1 0 1 0
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------