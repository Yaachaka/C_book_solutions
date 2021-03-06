/*
@@@@ PROGRAM NAME: knkcch16e03.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
(a) Show how to declare a tag named complex for a structure with two members, real
and imaginary, of type double.
(b) Use the complex tag to declare variables named c1, c2, and c3.
(c) Write a function named make_complex that stores its two arguments (both of type
double) in a complex structure, then returns the structure.
(d) Write a function named add_complex that adds the corresponding members of its
arguments (both complex structures), then returns the result (another complex structure).
*/
#include<stdio.h>
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
struct complex
{
	double real, imaginary ;
};
//---------------------------------------------------------------------------
struct complex make_complex (double real, double imaginary) ;
struct complex add_function (struct complex a, struct complex b) ;
//---------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	struct complex c1, c2, c3 ;

	c1 = make_complex (24.3, 16.5);
	c2 = make_complex (24.3, 16.5);
	
	printf("c1 = %.4lf + %.4lfi", c1.real, c1.imaginary);
	printf("\nc2 = %.4lf + %.4lfi", c2.real, c2.imaginary);

	c3 = add_function(c1, c2);
	printf("\nc3 (= c1 + c2) = %.4lf + %.4lfi", c3.real, c3.imaginary);

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
struct complex make_complex (double real, double imaginary)
{
	return (struct complex){real, imaginary} ;
}
//---------------------------------------------------------------------------
struct complex add_function (struct complex a, struct complex b)
{
	return (struct complex){a.real + b.real, a.imaginary + b.imaginary} ;
}
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
c1 = 24.3000 + 16.5000i
c2 = 24.3000 + 16.5000i
c3 (= c1 + c2) = 48.6000 + 33.0000i
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