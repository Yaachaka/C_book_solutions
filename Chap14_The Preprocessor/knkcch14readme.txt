Chap14: The Preprocessor
=======================================================================================
EXERCISES

@@@@ Exercise 1 (Section 14.3): knkcch14e01:**************************************
Write parameterized macros that compute the following values.

(a) The cube of x.
(b) The remainder when n is divided by 4.
(c) 1 if the product of x and y is less than 100, 0 otherwise.

Do your macros always work? If not, describe what arguments would make them fail.

@@@@ Exercise 2 (Section 14.3): knkcch14e02:**************************************
Write a macro NELEMS(a) that computes the number of elements in a one-dimensional
array a. Hint: See the discussion of the sizeof operator in Section 8.1.

@@@@ Exercise 3 (Section 14.3): knkcch14e03:**************************************
let DOUBLE be the following macro:
	#define DOUBLE(x) 2*x
(a) What is the value of DOUBLE(1+2) ?
(b) What is the value of 4/DOUBLE(2) ?
(c) Fix the definition of DOUBLE.

@@@@ Exercise 4 (Section 14.3): knkcch14e04:**************************************
For each of the following macros, give an example that illustrates a problem with the macro
and show how to fix it.

(a) #define AVG(x,y) (x-y)/2
(b) #define AREA(x,y) (x)*(y)

@@@@ Exercise 5 (Section 14.3): knkcch14e05:**************************************
Let TOUPPER be the following macro:

	#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A': (c))

Let s be a string and let i be an int variable. Show the output produced by each of the 
following program fragments.
(a) strcpy(s, "abcd") ;
    i= 0;
    putchar(TOUPPER(s[++i]));
(b) strcpy(s, "0123") ;
    i = 0;
    putchar(TOUPPER(s[++i])) ;

@@@@ Exercise 6 (Section 14.3): knkcch14e06:**************************************
(a) Write a macro DISP(f,x) that expands into a call of printf that displays the value
of the function f when called with argument x. For example.

	DISP(sqrt, 3.0);

should expand into

	printf ("sqrt(%g) = %g\n", 3.0, sqrt(3.0));

(b) Write a macro DISP2(f,x,y) that’s similar to DISP but works for functions with
two arguments.

@@@@ Exercise 7 (Section 14.3): knkcch14e07:**************************************
Let GENERIC_MAX be the following macro:

	#define GENERIC_MAX(type) \
	type type##_max(type x, type y) \
	{ \
		return x > y ? x : y; \
	}

(a) Show the preprocessor’s expansion of GENERIC_MAX(long).
(b) Explain why GENERIC_MAX doesn’t work for basic types such as unsigned long.
(c) Describe a technique that would allow us to use GENERIC_MAX with basic types such
as unsigned long. Hint: Don’t change the definition of GENERIC_MAX.

@@@@ Exercise 8 (Section 14.3): knkcch14e08:**************************************
Suppose we want a macro that expands into a string containing the current line number and
file name. In other words, we'd like to write

	const char *str = LINE_FILE;

and have it expand into

	const char *str = "Line 10 of file foo.c";

where foo.c is the file containing the program and 10 is the line on which the invocation
of LINE_FILE appears. Warning: This exercise is for experts only. Be sure to read the
Q&A section carefully before attempting!

@@@@ Exercise 9 (Section 14.3): knkcch14e09:**************************************
Write the following parameterized macros.

(a) CHECK(x,y,n) — Has the value 1 if both x and y fall between 0 and n — 1, inclusive.
(b) MEDIAN(x,y,z) — Finds the median of x, y, and z.
(c) POLYNOMIAL(x) - Computes the polynomial 3x⁵ + 2x⁴ — 5x³ - x² + 7x - 6.

@@@@ Exercise 10 (Section 14.3): knkcch14e10:**************************************
Functions can often—but not always—be written as parameterized macros. Discuss what
characteristics of a function would make it unsuitable as a macro.

@@@@ Exercise 11 (Section 14.3): knkcch14e11:**************************************
(C99) C programmers often use the fprintf function to write error messages:

	fprintf(stderr, "Range error: index = %d\n", index);

stderr is C’s “standard error” stream; the remaining arguments are the same as those for
printf, starting with the format string. Write a macro named ERROR that generates the
call of fprintf shown above when given a format string and the items to be displayed:

	ERROR("Range error: index = %d\n", index);

@@@@ Exercise 12 (Section 14.4): knkcch14e12:**************************************
Suppose that the macro M has been defined as follows:
#define M 10
Which of the following tests will fail?
(a) #if M
(b) #ifdef M
(c) #ifndef M
(d) #if defined (M)
(e) #if !defined(M)

@@@@ Exercise 13 (Section 14.4): knkcch14e13:**************************************
(a) Show what the following program will look like after preprocessing. You may ignore
any lines added to the program as a result of including the <stdio.h> header.

	#include <stdio.h>
	
	#define N 100
	
	void f(void);
	
	int main(void)
	{
		f();
		#ifdef N
		#undef N
		#endif
		
		return 0;
	}
	
	void f(void)
	{
		#if defined(N)
			printf("N is %d\n", N);
		#else
			printf("N is undefined\n") ;
		#endif		
	}

(b) What will be the output of this program?

@@@@ Exercise 14 (Section 14.4): knkcch14e14:**************************************
Show what the following program will look like after preprocessing. Some lines of the 
program may cause compilation errors: find all such errors.

	#define N = 10
	#define INC(x) x+1
	#define SUB (x,y) x-y
	#define SQR(x) ((x)*(x))
	#define CUBE(x) (SQR(x) * (x))
	#define M1(x,y) x##y
	#define M2(x,y) #x #y
	
	int main(void)
	{
		int a[N], i, j, k, m;
		
		#ifdef N
			i= j;
		#else
			j=i;
		#endif
		
		i= 10 * INC(j);		
		i= SUB(j, k);
		i= SQR(SQR(j));
		i= CUBE(j);
		i= M1(j, k);
		puts (M2(i, j));
		#undef SQR
			i = SQR(j);
		#define SQR
			i = SQR(j);
		
		return 0;
	}

@@@@ Exercise 15 (Section 14.4): knkcch14e15:**************************************
Suppose that a program needs to display messages in either English, French, or Spanish.
Using conditional compilation, write a program fragment that displays one of the following
three messages, depending on whether or not the specified macro is defined:

Insert Disk 1        (if ENGLISH is defined)
Inserez Le Disque 1  (if FRENCH is defined)
Inserte El Disco 1   (if SPANISH is defined)

@@@@ Exercise 16 (Section 14.5): knkcch14e16:**************************************
(C99) Assume that the following macro definitions are in effect:

	#define IDENT(x) PRAGMA(ident #x)
	#define PRAGMA(x) _Pragma(#x)

What will the following line look like after macro expansion?
IDENT(foo)
=======================================================================================
PROGRAMMING PROJECTS

@@@@ NA
=======================================================================================