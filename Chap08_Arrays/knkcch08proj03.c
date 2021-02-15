/*
@@@@ PROGRAM NAME: knkcch08proj03.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Modify the repdigit.c program of Section 8.1 so that the 
user can enter more than one number to be tested for repeated digits. The program should 
terminate when the user enters a number that’s less than or equal to 0.
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

	do
	{
		while (n > 0) 
		{
			digit = n % 10;
			digit_seen[digit]++;
			n /= 10;
		}

		printf("Repeated digit(s): ");
		for(int i=0;i<10;i++)
		{
			if(digit_seen[i]>1)
				printf("%d ",i);
			digit_seen[i]=0;
		}

		printf("\n\nEnter a number: ");
		scanf("%ld", &n);

	} while (n>0);
	
		
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
Enter a number: 2346254
Repeated digit(s): 2 4

Enter a number: 673562456
Repeated digit(s): 5 6

Enter a number: 243562
Repeated digit(s): 2

Enter a number: 0

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------