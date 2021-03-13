/*
@@@@ PROGRAM NAME: knkcch16e13.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Suppose that s is the following structure (point is a structure tag declared in Exercise 10):

	struct shape
	{
		int shape_kind; // RECTANGLE or CIRCLE 
		struct point center; // coordinates of center
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
If the value of shape_kind is RECTANGLE, the height and width members store the
dimensions of a rectangle. If the value of shape_kind is CIRCLE, the radius member
stores the radius of a circle. Indicate which of the following statements are legal, 
and show how to repair the ones that aren't:
(a) s.shape_kind = RECTANGLE;
(b) s.center.x = 10;
(c) s.height = 25;
(d) s.u.rectangle.width = 8;
(e) s.u.circle = 5;
(f) s.u.radius = 5;
*/
#include<stdio.h>
//---------------------------------------------------------------------------
#define RECTANGLE 0
#define CIRCLE 1
//---------------------------------------------------------------------------
struct point
{
	int x,y;
};
//---------------------------------------------------------------------------
struct shape
{
	int shape_kind;
	struct point center;
	union
	{
		struct
		{
			int height, width;
		}rectangle;
		struct
		{
			int radius;
		}circle;
	}u;
}s;
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	s.shape_kind = RECTANGLE;
	s.center.x = 10;
	s.u.rectangle.height = 25;//s.height = 25;
	s.u.rectangle.width = 8;
	s.u.circle.radius = 5;//s.u.circle = 5;
	s.u.circle.radius = 5;//s.u.radius = 5;

	printf("file: %s\nDate,Time: %s, %s", __FILE__, __DATE__, __TIME__);


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
file: knkcch16e13.c
Date,Time: Mar 12 2021, 22:27:58
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