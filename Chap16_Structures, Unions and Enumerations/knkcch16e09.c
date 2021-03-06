/*
@@@@ PROGRAM NAME: knkcch16e09.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
@@@@ Exercise 9 (Section 16.2): knkcch16e09:*********************************
Write the following functions. (The color structure is defined in Exercise 8.)
(a) struct color make_color(int red, int green, int blue);
Returns a color structure containing the specificd red, green, and blue values. If any 
argument is less than zero, the corresponding member of the structure will contain zero 
instead. If any argument is greater than 255, the corresponding member of the structure 
will contain 255.
(b) int getRed(struct color c);
Returns the value of c’s red member.
(c) bool equal_color(struct color color1, struct color color2) ;
Returns true if the corresponding members of color1 and color2 are equal.
(d) struct color brighter(struct color c);
Returns a color structure that represents a brighter version of the color c. The structure is
identical to c, except that each member has been divided by 0.7 (with the result truncated to
an integer). However, there are three special cases: (1) If all members of c are zero, the
function returns a color whose members all have the value 3. (2) If any member of c is
greater than 0 but less than 3, it is replaced by 3 before the division by 0.7. (3) If 
dividing by 0.7 causes a member to exceed 255, it is reduced to 255.
(c) struct color darker(struct color c);
Returns a color structure that represents a darker version of the color c. The structure is
identical to c, except that each member has been multiplied by 0.7 (with the result 
truncated to an integer).
*/
#include <stdio.h>
#include <stdbool.h>
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
struct color
{
	int red, green, blue;
};
//---------------------------------------------------------------------------
struct color make_color(int red, int green, int blue);
int getRed(struct color c);
bool equal_color(struct color color1, struct color color2) ;
struct color brighter(struct color c);
struct color darker(struct color c);
//---------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	printf("%s", __FILE__);

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
struct color make_color(int red, int green, int blue)
{
	red = (red<0)?0:((red>255)?255:red) ;
	green = (green<0)?0:((green>255)?255:green) ;
	green = (blue<0)?0:((blue>255)?255:blue) ;
	
	return (struct color){red, green, blue} ;
}
//---------------------------------------------------------------------------
int getRed(struct color c)
{
	return c.red;
}
//---------------------------------------------------------------------------
bool equal_color(struct color color1, struct color color2)
{
	if(color1.red == color2.red)
		if(color1.green == color2.green)
			if(color1.blue == color2.blue)
				return true;
	return false;
}
//---------------------------------------------------------------------------
struct color brighter(struct color c)
{
	if(c.red == 0 && c.green == 0 && c.blue == 0)
		return (struct color){3,3,3};
	
	c.red = (c.red > 0 && c.red < 3)?3:c.red;
	c.green = (c.green > 0 && c.green < 3)?3:c.green;
	c.blue = (c.blue > 0 && c.blue < 3)?3:c.blue;

	return make_color(c.red/0.7, c.green/0.7, c.blue/0.7);
}
//---------------------------------------------------------------------------
struct color darker(struct color c)
{
	if(c.red == 0 && c.green == 0 && c.blue == 0)
		return (struct color){3,3,3};
	
	c.red = (c.red > 0 && c.red < 3)?3:c.red;
	c.green = (c.green > 0 && c.green < 3)?3:c.green;
	c.blue = (c.blue > 0 && c.blue < 3)?3:c.blue;

	return make_color(c.red*0.7, c.green*0.7, c.blue*0.7);
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
knkcch16e09.c
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