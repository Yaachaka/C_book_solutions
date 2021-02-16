/*
@@@@ PROGRAM NAME: knkcch09e01.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: The following function, which computes the 
area of a triangle, contains two errors. Locate the errors and show how to fix them. 
(Hint: There are no errors in the formula.)

	double triangle_area(double base, height)
	double product;
	{
		product = base * height;
		return product / 2;
	}
*/
#include<stdio.h>
//---------------------------------------------------------------------------
double triangle_area(double base, double height);
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	printf("Area of triangle is %.2f when base is 2.2 and height is 3.4.",triangle_area(2.2,3.4));
		
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
double triangle_area(double base, double height)
{
	double product;
	product = base * height;
	return product / 2;
}
//---------------------------------------------------------------------------
/*
OUTPUT:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Area of triangle is 3.74 when base is 2.2 and height is 3.4.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------