Chap26: Miscellaneous Library Functions
==========================================================================
EXERCISES

--Exercise 1 (Section 26.1): knkcch26e01: Rewrite the max_int function so that, 
instead of passing the number of integers as the first argument, we must supply 
0 as the last argument. Hint: max_int must have at least one “normal” parameter, 
so you can’t remove the parameter n. Instead, assume that it represents one of 
the numbers to be compared.

--Exercise 2 (Section 26.1): knkcch26ep2: Write a simplified version of printf 
in which the only conversion specification is %d, and all arguments after the 
first are assumed to have int type. If the function encounters a % character 
that’s not immediately followed by a d character, it should ignore both 
characters. The function should use calls of putchar to produce all output. You 
may assume that the format string doesn’t contain escape sequences.

--Exercise 3 (Section 26.2): knkcch26e03: Extend the function of Exercise 2 so 
that it allows two conversion specifications: $d and %s. Each %d in the format 
string indicates an int argument, and each %s indicates a char* (string) 
argument.

--Exercise 4 (Section 26.2): knkcch26e04: Write a function named display that 
takes any number of arguments. The first argument must be an integer. The 
remaining arguments will be strings. The first argument specifies how many 
strings the call contains. The function will print the strings on a single line, 
with adjacent strings separated by one space. For example, the call
	display(4, "Special", "Agent", "Dale", "Cooper");
will produce the following output:
Special Agent Dale Cooper

--Exercise 5 (Section 26.2): knkcch26e05: Write the following function:
	char *vstreat(const char *first, ...);
All arguments of vstrcat are assumed to be strings, except for the last argument, 
which must be a null pointer (cast to char * type). The function returns a 
pointer to a dynamically allocated string containing the concatenation of the 
arguments. vstrcat should return a null pointer if not enough memory is 
available. Hint: Have vstrcat go through the arguments twice: once to determine 
the amount of memory required for the returned string and once to copy the 
arguments into the string.

--Exercise 6 (Section 26.2): knkcch26e06: Write the following function:
	char *max_pair(int num_pairs, ...);
The arguments of max_pair are assumed to be “pairs” of integers and strings: the 
value of num_pairs indicates how many pairs will follow. (A pair consists of an 
int argument followed by a char * argument). The function searches the integers 
to find the largest one; it then returns the string argument that follows it. 
Consider the following call:
	max_pair(5, 180, "Seinfeld", 180, "I Love Lucy",
	         39, "The Honeymooners", 210, "All in the Family",
	         86, "The Sopranos")

The largest int argument is 210, so the function returns "All in the Family", 
which follows it in the argument list.

--Exercise 7 (Section 26.2): knkcch26e07: Explain the meaning of the following 
statement, assuming that value is a variable of type long int and p is a 
variable of type char *:
	value = strtol(p, &p, 10);

--Exercise 8 (Section 26.3): knkcch26e08: Write a statement that randomly assigns 
one of the numbers 7, 11, 15, or 19 to the variable n.

--Exercise 9 (Section 26.3): knkcch26e09: Write a function that returns a random 
double value d in the range 0.0 ≤ d < 1.0.

--Exercise 10 (Section 26.3): knkcch26e10: Convert the following calls of atoi, 
atol, and atoll into calls of strtol, strtol,
and strtol1, respectively.
(a) atoi (str)
(b) atol (str)
(c) atoll (str)

--Exercise 11 (Section 26.3): knkcch26e11: Although the bsearch function is 
normally used with a sorted array, it will sometimes work correctly with an 
array that is only partially sorted. What condition must an array satisfy to 
guarantee that bsearch works properly for a particular key? Hint: The answer
appears in the C standard.

--Exercise 12 (Section 26.3): knkcch26e12: Write a function that, when passed a 
year, returns a time_t value representing 12:00 a.m. on the first day of that 
year.

--Exercise 13 (Section 26.3): knkcch26e13: Section 26.3 described some of the 
ISO 8601 date and time formats. Here are a few more:
(a) Year followed by day of year: YYYY-DDD, where DDD is a number between 001 
and 366.
(b) Year. week, and day of week: YYYY-Www-D, where ww is a number between 01 
and 53, and D is a digit between 1 through 7, beginning with Monday and ending 
with Sunday.
(c) Combined date and time: YYYY-MM-DDThh:mm:ss
Give strftime strings that correspond to each of these formats.
==========================================================================
PROGRAMMING PROJECTS

--Project 1: knkcch26proj01: (a) Write a program that calls the rand function 
1000 times, printing the low-order bit of each value it returns (0 if the return 
value is even, 1 if its odd). Do you see any patterns? (Often, the last few bits 
of rand’s return value aren't especially random.)
(b) How can we improve the randomness of rand for generating numbers within a 
small range?

--Project 2: knkcch26proj02: Write a program that tests the atexit function. The 
program should have two functions (in addition to main), one of which prints 
That's all, and the other folks!. Use the atexit function to register both to be 
called at program termination. Make sure they're called in the proper order, so 
that we see the message That's all, folks! on the screen.

--Project 3: knkcch26proj03: Write a program that uses the clock function to 
measure how long it takes qsort to sort an array of 1000 integers that are 
originally in reverse order. Run the program for arrays of 10000 and 100000 
integers as well.

--Project 4: knkcch26proj04: Write a program that prompts the user for a date 
(month, day, and year) and an integer n, then prints the date that’s n days 
later.

--Project 5: knkcch26proj05: Write a program that prompts the user to enter two 
dates, then prints the difference betweenthem, measured in days. Hint: Use the 
mktime and difftime functions.

--Project 6: knkcch26proj06: Write programs that display the current date and 
time in each of the following formats. Use strftime to do all or most of the 
formatting.
(a) Sunday, June 3, 2007 05:48p
(b) Sun, 3 Jun 07 17:48
(c) 06/03/07 5:48:34 PM
==========================================================================