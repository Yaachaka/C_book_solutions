/*
--PROGRAM NAME: knkcch02proj06.c
--PROGRAM STATEMENT: Modify the program of Programming Project 5 so that 
the polynomial is evaluated using the following formula:
((((3x+2)x-5)x-1)x+7)x-6
Note that the modified program performs fewer multiplications. This technique for
evaluating polynomials is known as Horner's Rule.
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
	
	result=((((3*x+2)*x-5)*x-1)*x+7)*x-6;
	printf("Result( of ((((3x+2)x-5)x-1)x+7)x-6 when x= %d) is %d",x,result);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//------------------------END OF MAIN()-------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter the value of x: 3
Result( of ((((3x+2)x-5)x-1)x+7)x-6 when x= 3) is 762
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//--------------------------------------------------------------------------