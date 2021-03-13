/*
@@@@ PROGRAM NAME: knkcch16e14.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Let shape be the structure tag declared in Exercise 13. Write functions that perform the
following operations on a shape structure s passed as an argument:
(a) Compute the area of s.
(b) Move s by x units in the x direction and y units in the y direction, returning the 
modified version of s. (x and y are additional arguments to the function.)
(c) Scale s by a factor of c (a double value), returning the modified version of s. (c is an
additional argument to the function.)
*/
#include<stdio.h>
//---------------------------------------------------------------------------
#define RECTANGLE 0
#define CIRCLE 1
#define PI 3.1412
//---------------------------------------------------------------------------
struct point
{
	int x,y;
};
//---------------------------------------------------------------------------
struct shape
{
	int shape_kind; /* RECTANGLE or CIRCLE */
	struct point center; /* coordinates of center */
	union
	{
		struct
		{
			int height, width;
		} rectangle;
		struct
		{
			int radius;
		} circle;
	} u;
} s;
//---------------------------------------------------------------------------
double shape_area(struct shape s);
struct point shape_move(struct point p, int x, int y);
struct shape shape_scale(struct shape s, double c);
//---------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	printf("%s (Date: %s, Time: %s)", __FILE__, __DATE__, __TIME__);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
double shape_area(struct shape s)
{
	double area;
	if(s.shape_kind == RECTANGLE)
		area = s.u.rectangle.height * s.u.rectangle.width ;
	else
		area = PI * s.u.circle.radius * s.u.circle.radius ;
	return area;
}
//---------------------------------------------------------------------------
struct point shape_move(struct point p, int x, int y)
{
	return (struct point){p.x + x, p.y + y};
}
//---------------------------------------------------------------------------
struct shape shape_scale(struct shape s, double c)
{
	if(s.shape_kind == RECTANGLE)
	{
		s.u.rectangle.width = (int)(s.u.rectangle.width * c);
		s.u.rectangle.height = (int)(s.u.rectangle.height * c);
		
	}
	else
		s.u.circle.radius =  (int)(c * s.u.circle.radius) ;
	return s;
}
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
knkcch16e14.c (Date: Mar 13 2021, Time: 14:42:38)
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
@@@@ Trial3:
@@@@ Trial4:
@@@@ Trial5:
@@@@ Trial6:
@@@@ Trial7:
@@@@ Trial8:
@@@@ Trial9:
*/
//---------------------------------------------------------------------------