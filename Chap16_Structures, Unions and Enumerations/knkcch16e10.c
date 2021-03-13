/*
@@@@ PROGRAM NAME: knkcch16e10.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
The following structures are designed to store information about objects on a graphics
screen:

	struct point { int x, y; };
	struct rectangle { struct point upper_left, lower_right; };

A point structure stores the x and y coordinates of a point on the screen. A rectangle
structure stores the coordinates of the upper left and lower right corners of a 
rectangle. Write functions that perform the following operations on a rectangle structure 
r passed as an argument:
(a) Compute the area of r.
(b) Compute the center of r, returning it as a point value. If either the x or y 
coordinate of the center isn’t an integer, store its truncated value in the point structure.
(c) Move r by x units in the x direction and y units in the y direction, returning the 
modified version of r. (x and y are additional arguments to the function.)
(d) Determine whether a point p lies within r, returning true or false. (p is an 
additional argument of type struct point.)
*/
#include <stdio.h>
#include <stdbool.h>
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
struct point
{
	int x, y;
};
//---------------------------------------------------------------------------
struct rectangle
{
	struct point upper_left, lower_right;
};
//---------------------------------------------------------------------------
int area_rectangle(struct rectangle r);
struct point center_rectangle(struct rectangle r);
struct rectangle move_rectangle(struct rectangle r, int x, int y);
bool point_in_rectangle(struct rectangle r, struct point p);
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	printf("%s", __FILE__);

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
int area_rectangle(struct rectangle r)
{
	return (r.lower_right.x - r.upper_left.x)*(r.lower_right.y - r.upper_left.y);
}
//---------------------------------------------------------------------------
struct point center_rectangle(struct rectangle r)
{
	return (struct point){ (int)((r.upper_left.x + r.lower_right.x)/2), (int)((r.upper_left.y + r.lower_right.y)/2) } ;
}
//---------------------------------------------------------------------------
struct rectangle move_rectangle(struct rectangle r, int x, int y)
{
	return (struct rectangle){(struct point){r.upper_left.x + x, r.upper_left.y + y}, (struct point){r.lower_right.x + x, r.lower_right.y + y}} ;
}
//---------------------------------------------------------------------------
bool point_in_rectangle(struct rectangle r, struct point p)
{
	if(p.x >= r.upper_left.x && p.x <= r.lower_right.x)
		if(p.y >= r.upper_left.y && p.y <= r.lower_right.y)
			return true;
	return false;
}
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
knkcch16e10.c
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