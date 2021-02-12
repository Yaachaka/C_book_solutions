Chap18: Declarations
=============================================================================
EXERCISES

@@@@ Exercise 1 (Section 18.1): knkcch18e01: For each of the following 
declarations, identify the storage class, type qualifiers, type specifiers, 
declarators, and initializers.
(a) static char **lookup(int level);
(b) volatile unsigned long io_flags;
(c) extern char *file_name [MAX{FILES], path[];
(d) static const char token_buf[] = "";

@@@@ Exercise 2 (Section 18.2): knkcch18e02: Answer each of the following 
questions with auto, extern, register, and/or static.
(a) Which storage class is used primarily to indicate that a variable or 
function can be shared by several files?
(b) Suppose that a variable x Is to be shared by several functions in one file 
but hidden from functions in other files. Which storage class should x be 
declared to have?
(c) Which storage classes can affect the storage duration of a variable?

@@@@ Exercise 3 (Section 18.2): knkcch18e03: List the storage duration (static 
or automatic), scope (block or file), and linkage (internal, external, or none) 
of each variable and parameter in the following file:
	extern float a;
	void f(register double b)
	{	
		static int c;
		auto char d;
	}

@@@@ Exercise 4 (Section 18.2): knkcch18e04: Let f be the following function. 
What will be the value of f(10) if f has never been called before? What will be 
the value of f(10) if f has been called five times previously?

	int f(int i)
	{
		static int j = 0;
		return i * j++;	
	}

@@@@ Exercise 5 (Section 18.2): knkcch18e05: State whether each of the following 
statements is true or false. Justify cach answer.
(a) Every variable with static storage duration has file scope.
(b) Every variable declared inside a function has no linkage.
(c) Every variable with internal linkage has static storage duration.
(d) Every parameter has block scope.

@@@@ Exercise 6 (Section 18.2): knkcch18e06: The following function is supposed 
to print an error message. Each message is preceded by an integer, indicating the 
number of times the function has been called. Unfortunately. the function always 
displays 1 as the number of the error message. Locate the error and show how to 
fix it without making any changes outside the function.

	void print_error(const char *message)
	{	
		int n = 1;
		printf("Error %d: %s\n", n++, message) ;
	}

@@@@ Exercise 7 (Section 18.2): knkcch18e07: Suppose that we declare x to be a 
const object. Which one of the following statements about x is false?
(a) If x is of type int, it can be used as the value of a case label in a switch 
statement.
(b) The compiler will check that no assignment is made to x.
(c) x is subject to the same scope rules as variables.
(d) x can be of any type.

@@@@ Exercise 8 (Section 18.4): knkcch18e08: Write a complete description of the 
type of x as specified by each of the following declaraions.
(a) char (*x[10]) (int);
(b) int (*x(int)) [5];
(c) float *(*x(void)) (int) ;
(d) void (*x(int, void (*y) (int))) (int);

@@@@ Exercise 9 (Section 18.4): knkcch18e09: Use a series of type definitions to 
simplify each of the declarations in Exercise 8.

@@@@ Exercise 10 (Section 18.4): knkcch18e10: Write declarations for the following 
variables and functions:
(a) p is a pointer to a function with a character pointer argument that returns 
a character pointer.
(b) f is a function with two arguments: p, a pointer to a structure with tag t, 
and n, a long integer. f returns a pointer to a function that has no arguments 
and returns nothing.
(c) a is an array of four pointers to functions that have no arguments and 
return nothing. The elements of a initially point to functions named insert, 
search, update, and print.
(d) b is an array of 10 pointers to functions with two int arguments that return 
structures with tag t.

@@@@ Exercise 11 (Section 18.4): knkcch18e11: In Section 18.4, we saw that the 
following declarations are illegal:
	int f(int) (]; /* functions can't return arrays * /
	int g(int) (int) ; /* functions can't return functions */
	int a[10} (int); /* array elements can't be functions */
We can, however, achieve similar effects by using pointers: a function can 
return a pointer to the first element in an array, a function can return a 
pointer to a function, and the elements of an array can be pointers to 
functions. Revise each of these declarations accordingly.

@@@@ Exercise 12 (Section 18.4): knkcch18e12: (a) Write a complete description of 
the type of the function f, assuming that it’s declared as follows:
	int (*f(float (*) (long), char *)) (double) ;
(b) Give an example showing how f would be called.

@@@@ Exercise 13 (Section 18.5): knkcch18e13: Which of the following declarations 
are legal? (Assume that PI is a macro that represents 3.14159.)
(a) char c = 65;
(b) static int i = 5, j7 =i * i;
(c) double d = 2 * PI;
(d) double angles[] = {0, PI / 2, PI, 3 * PI / 2};

@@@@ Exercise 14 (Section 18.5): knkcch18e14: Which kind of variables cannot be 
initialized?
(a) Array variables
(b) Enumeration variables
(c) Structure variables
(d) Union variables
(e) None of the above

@@@@ Exercise 15 (Section 18.5): knkcch18e15: Which property of a variable 
determines whether or not it has a default initial value?
(a) Storage duration
(b) Scope
(c) Linkage
(d) Type
=============================================================================
PROGRAMMING PROJECTS
@@@@ none
=============================================================================