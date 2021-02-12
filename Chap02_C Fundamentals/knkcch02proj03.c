/*
--PROGRAM NAME: knkcch02proj03.c
--PROGRAM STATEMENT: Modify the program of Programming Project 2 so 
that it prompts the user to enter the radius of the sphere.
*/
#include<stdio.h>
//------------------START OF MAIN()------------------------------------------
int main(void)
{
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	float radius, volume, pi=3.1415f;
	
	//Taking user input.
	printf("Enter radius of the sphere: ");
	scanf("%f",&radius);
	
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
Enter radius of the sphere: 1.05
Volume of sphere with radius=1.0500m is 4.8489 cubic meters.
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------
