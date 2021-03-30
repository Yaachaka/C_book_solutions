/*
@@@@ PROGRAM NAME: knkcch17e04.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Suppose that the following declarations are in effect:

	struct point { int x, y; };
	struct rectangle { struct point upper_left, lower_right; };
	struct rectangle *p;
Assume that we want p to point to a rectangle structure whose upper left corner 
is at (10, 25) and whose lower right corner is at (20, 15). Write a series of 
statements that allocate such a structure and initialize it as indicated.
*/
#include <stdio.h>
#include <stdlib.h>  //NULL, malloc()
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
//---------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("File: %s, C Version: %d, Date: %s, Time: %s\n\n", __FILE__, __STDC_VERSION__, __DATE__, __TIME__);

	struct rectangle *p = malloc(sizeof(struct rectangle));

	if(p)
	{
		*p = (struct rectangle){{10, 25},{20, 15}};

		printf("ul: %d, %d", (*p).upper_left.x, p->upper_left.y);
		printf("\nlr: %d, %d", (*p).lower_right.x, p->lower_right.y);
		
	}
	else
		printf("malloc failed to allocate memory.");

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
File: knkcch17e04.c, C Version: 199901, Date: Mar 16 2021, Time: 12:18:50

ul: 10, 25
lr: 20, 15
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