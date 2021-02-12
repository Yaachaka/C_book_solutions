/*
--PROGRAM NAME: knkcch02proj05.c
--PROGRAM STATEMENT: Write a program that asks the user to enter a value 
for x and then displays the value of the folowing polynomial: 
3x^5 + 2x^4 - 5x^3 - x^2 + 7x -6
Hint: c doesn't have an exponentiation operator, so you will need to multiply x by
itself repeatedly in order to compute the powers of x. (For example, x*x*x is x 
cubed).
*/
#include<stdio.h>
//-----------------------START OF MAIN()-------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int x=0, result;  //Just initialising to 0.
	
	//User input
	printf("Enter the value of x: ");
	scanf("%d",&x);
	
	result=3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6;
	printf("Result( of 3x^5+2x^4-5x^3-x^2+7x-6 when x= %d) is %d",x,result);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//------------------------END OF MAIN()-------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter the value of x: 3
Result( of 3x^5+2x^4-5x^3-x^2+7x-6 when x= 3) is 762
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//--------------------------------------------------------------------------