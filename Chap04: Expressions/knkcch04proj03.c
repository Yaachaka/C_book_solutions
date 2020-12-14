/*
--PROGRAM NAME: knkcch04proj03.c
--FLAGS: -std=c99
--PROGRAM STATEMENT: Rewrite the program in Programming Project 2 so that 
it prints the reversal of three-digit number without using arithmetic to split 
the number int digits. Hint: See the upc.c program of Section 4.1.
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int n3,n2,n1;
	
	//User input
	printf("Enter a three-digit number: ");
	scanf("%1d%1d%1d",&n3,&n2,&n1);
	
	//Output
	printf("The reversal is: %d%d%d.",n1,n2,n3);
	
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a three-digit number: 369
The reversal is: 963.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------