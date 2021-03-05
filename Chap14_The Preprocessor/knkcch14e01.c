/*
@@@@ PROGRAM NAME: knkcch14e01.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Write parameterized macros that compute the following values.

(a) The cube of x.
(b) The remainder when n is divided by 4.
(c) 1 if the product of x and y is less than 100, 0 otherwise.

Do your macros always work? If not, describe what arguments would make them fail.
*/
#include<stdio.h>
//---------------------------------------------------------------------------
#define cube(x) ((x)*(x)*(x))  //(a)
#define remainder(n) ((n)%4)  //(b)
#define lt_100(x,y) (((x)*(y)<100)?1:0)  //(c)
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int x,y;

	printf("(a) The cube of x.\n");
	printf("Enter value an integer to find its cube: ");
	scanf("%d",&x);
	printf("The cube of %d is %d",x,cube(x));

	printf("\n(b) The remainder when n is divided by 4.\n");
	printf("%d %% 4 is %d",x,remainder(x));

	printf("\n(c) 1 if the product of x and y is less than 100, 0 otherwise.\n");
	printf("Enter value of y: ");
	scanf("%d",&y);
	printf("The status of product of x and y is %d",lt_100(x,y));

	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
(a) The cube of x.
Enter value an integer to find its cube: 4
The cube of 4 is 64
(b) The remainder when n is divided by 4.
4 % 4 is 0
(c) 1 if the product of x and y is less than 100, 0 otherwise.
Enter value of y: 20
The status of product of x and y is 1
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
(a) The cube of x.
Enter value an integer to find its cube: 20
The cube of 20 is 8000
(b) The remainder when n is divided by 4.
20 % 4 is 0
(c) 1 if the product of x and y is less than 100, 0 otherwise.
Enter value of y: 12
The status of product of x and y is 0
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
(a) The cube of x.
Enter value an integer to find its cube: 12
The cube of 12 is 1728
(b) The remainder when n is divided by 4.
12 % 4 is 0
(c) 1 if the product of x and y is less than 100, 0 otherwise.
Enter value of y: 23
The status of product of x and y is 0
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial4:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
(a) The cube of x.
Enter value an integer to find its cube: 45
The cube of 45 is 91125
(b) The remainder when n is divided by 4.
45 % 4 is 1
(c) 1 if the product of x and y is less than 100, 0 otherwise.
Enter value of y: 4
The status of product of x and y is 0
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial5:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
(a) The cube of x.
Enter value an integer to find its cube: -23
The cube of -23 is -12167
(b) The remainder when n is divided by 4.
-23 % 4 is -3
(c) 1 if the product of x and y is less than 100, 0 otherwise.
Enter value of y: -2
The status of product of x and y is 1
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial6:
@@@@ Trial7:
@@@@ Trial8:
@@@@ Trial9:
*/
//---------------------------------------------------------------------------