Chap27: Additional C99 Support for Mathematics
==========================================================================
EXERCISES

--Exercise 1 (Section 27.1): knkcch27e01: (C99) Locate the declarations of the 
intN_t and uintN_t types in the <stdint.h> header installed on your system. 
Which values of N are supported?

--Exercise 2 (Section 27.1): knkcch27e02: (C99) Write the parameterized macros 
INT32_C(n), UINT32_C(n). INT64_C(n), and UINT64_C(n), assuming that the int type 
and long int types are 32 bits wide and the long long int type is 64 bits wide. 
Hint: Use the ## preprocessor operator to attach a suffix to n containing a 
combination of L and/or U characters. (See Section 7.1 for a discussion of how 
to use the L and U suffixes with integer constants.)

--Exercise 3 (Section 27.2): knkcch27e03: (C99) In each of the following 
statements, assume that the variable i has the indicated original type. Using 
macros from the <inttypes.h> header, modify each statement so that it will 
work correctly if the type of i is changed to the indicated new type.
(a) printf("%d", i);       Original type: int             New type: int8_t
(b) printf("%12.4d", i);   Original type: int             New type: int32_t
(c) printf("%-60", i);     Original type: unsigned int    New type: uint16_t
(d) printf("%#x", i);      Original type: unsigned int    New type: uint64_t

--Exercise 4 (Section 27.5): knkcch27e04: (C99) Assume that the following 
variable declarations are in effect:
	int i;
	float f;
	double d;
	long double ld;
	float complex fc;
	double complex dc;
	long double complex ldc;
Each of the following is an invocation of a macro in <tgmath.h>. Show what it 
will look like after preprocessing, when the macro has been replaced by a 
function from <math.h> or <complex.h>.
(a) tan(i)
(b) fabs(f)
(c) asin(d)
(d) exp(1d)
(e) log(fc)
(f) acosh(dc)
(g) nexttoward(d, 1d)
(h) remainder(f, i)
(i) copysign(d, 1d)
(j) carg(i)
(k) cimag(f)
(l) conj(ldc)

==========================================================================
PROGRAMMING PROJECTS

--Project 1: knkcch27proj01: (C99) Make the following modifications to the 
quadratic.c program of Section 27.4:
(a) Have the user enter the coefficients of the polynomial (the values of the 
variables a, b, and c).
(b) Have the program test the discriminant before displaying the values of the 
roots. If the discriminant is negative. have the program display the roots in 
the same way as before. If it’s nonnegative, have the program display the roots 
as real numbers (without an imaginary part). For example, if the quadratic 
equation is x²+x —2 =0, the output of the program would be
root1 = 1
root2 = -2
(c) Modify the program so that it displays a complex number with a negative 
imaginary part as a — bi instead of a + —bi. For example, the output of the 
program with the original coefficients would be
root1 = -0.2 + 0.4i
root2 = -0.2 - 0.4i

--Project 2: knkcch27proj02: (C99) Write a program that converts a complex number 
in Cartesian coordinates to polar form. The user will enter a and b (the real 
and imaginary parts of the number); the program will display the values of r 
and θ.

--Project 3: knkcch27proj03: (C99) Write a program that converts a complex number 
in polar coordinates to Cartesian form. After the user enters the values of r 
and θ, the program will display the number in the form a + bi, where
a=r cos θ
b=r sin θ

--Project 4: knkcch27proj04: (C99) Write a program that displays the nth roots of 
unity when given a positive integer n. The nth roots of unity are given by the 
formula e^(2πki/n), where k is an integer between 0 and n—1.
==========================================================================