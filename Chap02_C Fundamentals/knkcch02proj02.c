/*
--PROGRAM NAME: knkcch02proj02.c
--PROGRAM STATEMENT: Write a program that computes the volume of a sphere
with a 10-meter radius, using the formula v=4/3πr³. Write the fraction 4/3 as 
4.0f/3.0f. (Try writing it as 4/3. What happens?) Hint: C doesn't have an 
exponentiation operator, so you will need to multiply r by itself twice.
*/
#include<stdio.h>
//------------------START OF MAIN()------------------------------------------
int main(void)
{
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	float radius=10.00f, volume, pi=3.1415f;
	volume=4.0f*pi*radius*radius*radius/3.0f;  //Calculating volume.
	
	//printing volume.
	printf("Volume of sphere with radius=%.4fm is %.4f cubic meters.",radius,volume);
	
	printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//------------------END OF MAIN()------------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Volume of sphere with radius=10.0000m is 4188.6670 cubic meters.
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------
