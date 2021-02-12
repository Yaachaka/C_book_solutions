/*
--PROGRAM NAME: knkcch05proj07.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: Write a program that finds the largest and smallest 
of four integers entered by the user:
	Enter four integers: 21 43 10 35
	Largest: 43
	Smallest: 10
Use as few if statements as possible. Hint: Four if statements are sufficient.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int a1,a2,a3,a4,largest,smallest;
	
	//Getting 4 integers from user
	printf("Enter four integers: ");
	scanf("%d %d %d %d",&a1,&a2,&a3,&a4);
	
	//Finding out smallest and largest integers
	smallest=largest=a1;
	if(smallest>a2)
		smallest=a2;
	if(smallest>a3)
		smallest=a3;
	if(smallest>a4)
		smallest=a4;
	
	if(largest<a2)
		largest=a2;
	if(largest<a3)
		largest=a3;
	if(largest<a4)
		largest=a4;
	
	//Displaying smallest and largest integer
	printf("Largest: %d",largest);
	printf("\nSmallest: %d",smallest);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
-- Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter four integers: 21 43 10 35
Largest: 43
Smallest: 10
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter four integers: 98 34 11 56
Largest: 98
Smallest: 11
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------