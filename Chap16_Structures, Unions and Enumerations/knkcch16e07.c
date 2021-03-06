/*
@@@@ PROGRAM NAME: knkcch16e07.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Assume that the fraction structure contains two members: numerator and denominator 
(both of type int). Write functions that perform the following operations on fractions:
(a) Reduce the fraction f to lowest terms. Hint: To reduce a fraction to lowest terms, 
first compute the greatest common divisor (GCD) of the numerator and denominator. 
Then divide both the numerator and denominator by the GCD.
(b) Add the fractions f1 and f2.
(c) Subtract the fraction f2 from the fraction f1.
(d) Multiply the fractions f1 and f2.
(e) Divide the fraction f1 by the fraction f2.

The fractions f, f1, and f2 will be arguments of type struct fraction: each function
will return a value of type struct fraction. The fractions returned by the functions in
parts (b)-(c) should be reduced to lowest terms. Hint: You may use the function from part
(a) to help write the functions in parts (b)—(e).
*/
#include <stdio.h>
#include <math.h>
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
struct fraction
{
	int numerator, denominator;
};
//---------------------------------------------------------------------------
int gcd(int a, int b);
struct fraction fraction_reduce(struct fraction f);
struct fraction fraction_add(struct fraction f1, struct fraction f2);
struct fraction fraction_subtract(struct fraction f1, struct fraction f2);
struct fraction fraction_multiply(struct fraction f1, struct fraction f2);
struct fraction fraction_divide(struct fraction f1, struct fraction f2);
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
int gcd(int a, int b)
{
	a = fabs(a);
	b = fabs(b);
	if(a<b)
	{
		int temp=a;
		a=b;
		b=temp;
	}

	int r;
	do
	{
		r=a%b;
		a=b;
		b=r;
	}while(r>0);

	return a;
}
//---------------------------------------------------------------------------
struct fraction fraction_reduce(struct fraction f)
{
	int g=gcd(f.numerator, f.denominator);
	return (struct fraction){f.numerator/g, f.denominator/g};
}
//---------------------------------------------------------------------------
struct fraction fraction_add(struct fraction f1, struct fraction f2)
{
	int n,d,g;

	n = f1.numerator * f2.denominator + f1.denominator * f2.numerator ;
	d = f1.denominator * f2.denominator ;
	g=gcd(n,d);

	return (struct fraction){n/g, d/g} ;
}
//---------------------------------------------------------------------------
struct fraction fraction_subtract(struct fraction f1, struct fraction f2)
{
	int n,d,g;

	n = f1.numerator * f2.denominator - f1.denominator * f2.numerator ;
	d = f1.denominator * f2.denominator ;
	g=gcd(n,d);

	return (struct fraction){n/g, d/g} ;
}
//---------------------------------------------------------------------------
struct fraction fraction_multiply(struct fraction f1, struct fraction f2)
{
	int n,d,g;

	n = f1.numerator * f2.numerator ;
	d = f1.denominator * f2.denominator ;
	g=gcd(n,d);

	return (struct fraction){n/g, d/g} ;
}
//---------------------------------------------------------------------------
struct fraction fraction_divide(struct fraction f1, struct fraction f2)
{
	int n,d,g;

	n = f1.numerator * f2.denominator ;
	d = f1.denominator * f2.numerator ;
	g=gcd(n,d);

	return (struct fraction){n/g, d/g} ;
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
knkcch16e07.c
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