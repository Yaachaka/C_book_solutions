/*
@@@@ PROGRAM NAME: knkcch14e09.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Write the following parameterized macros.

(a) CHECK(x,y,n) — Has the value 1 if both x and y fall between 0 and n — 1, inclusive.
(b) MEDIAN(x,y,z) — Finds the median of x, y, and z.
(c) POLYNOMIAL(x) - Computes the polynomial 3x⁵ + 2x⁴ — 5x³ - x² + 7x - 6.
*/
#include<stdio.h>
//---------------------------------------------------------------------------
#define CHECK(x,y,n) ((((x)>=0)&&((x)<n))?((((y)>=0)&&((y)<n))?1:0):0)
#define MEDIAN(x,y,z) ((((x)>(y)&&(x)<(z))||((x)>(z)&&(x)<(y)))?(x):((((y)>(x)&&(y)<(z))||((y)>(z)&&(y)<(x)))?(y):(z)))
#define POLYNOMIAL(x) (3*(x)*(x)*(x)*(x)*(x) + 2*(x)*(x)*(x)*(x) - 5*(x)*(x)*(x) - (x)*(x) + 7*(x) - 6)
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int x,y,z;

	printf("Enter values of x,y,z: ");
	scanf("%d %d %d",&x,&y,&z);

	printf("Result of (a): %d",CHECK(x,y,z));
	printf("\nResult of (b): %d",MEDIAN(x,y,z));
	printf("\nResult of (c): %d",POLYNOMIAL(x));

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
Enter values of x,y,z: 2 34 56
Result of (a): 1
Result of (b): 34
Result of (c): 92
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter values of x,y,z: 3 56 34
Result of (a): 0
Result of (b): 34
Result of (c): 762
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
@@@@ Trial4:
@@@@ Trial5:
@@@@ Trial6:
@@@@ Trial7:
@@@@ Trial8:
@@@@ Trial9:
*/
//---------------------------------------------------------------------------