Chap07: Basic Types
=========================================================================
EXERCISES

@@@@ Exercise 1 (Section 7.1): knkcch07e01: Give the decimal values of each of the 
following integer constants.
(a) 077
(b) 0x77
(c) 0XABC

@@@@ Exercise 2 (Section 7.2): knkcch07e02: Which of the following are not legal 
constants in C? Classify each legal constant as either integer or floating-point.
(a) 010E2
(b) 32.1E+5
(c) 0790
(d) 100_000
(e) 3.978e-2

@@@@ Exercise 3 (Section 7.2): knkcch07e03: Which of the following are not legal 
types in C?
(a) short unsigned int
(b) short float
(c) long double
(d) unsigned long

@@@@ Exercise 4 (Section 7.3): knkcch07e04: If c is a variable of type char, which 
one of the following statements is illegal?
(a) i+=c; /* i has type int */
(b) c=2*c-1;
(c) putchar(c);
(d) printf(c);

@@@@ Exercise 5 (Section 7.3): knkcch07e05: Which one of the following is not a 
legal way to write the number 65? (Assume that the character set is ASCII.)
(a) 'A'
(b) 0b1000001
(c) 0101
(d) 0x41

@@@@ Exercise 6 (Section 7.3): knkcch07e06: For each of the following items of data, 
specify which one of the types char, short, int, or long is the smallest one 
guaranteed to be large enough to store the item.
(a) Days in month
(b) Days in a year
(c) Minutes in a day
(d) Seconds in a day

@@@@ Exercise 7 (Section 7.3): knkcch07e07: For each of the following character 
escape, give the equivalent octal escape. (Assume that the character set is 
ASCII.) You may wish to consult Appendix E, which lists the numerical codes for 
ASCII characters.
(a) \b
(b) \n
(c) \r
(d) \t

@@@@ Exercise 8 (Section 7.3): knkcch07e08: Repeat Exercise 7, but give the 
equivalent hexadecimal escape.

@@@@ Exercise 9 (Section 7.4): knkcch07e09: Suppose that i and j are variables of 
type int. What is the type of the expression i/j+'a'?

@@@@ Exercise 10 (Section 7.5): knkcch07e10: Suppose that i is a variable of type 
int, j is a variable of type long, and k is a variable of type unsigned int. 
What is the type of the expression i+(int)j+k?

@@@@ Exercise 11 (Section 7.5): knkcch07e11: Suppose that i is a variable of type 
int, f is a variable of type float, and d is a variable of type double. What is 
the type of the expression i*f/d?

@@@@ Exercise 12 (Section 7.5): knkcch07e12: Suppose that i is a variable of type 
int, f is a variable of type float, and d is a variable of type double. Explain 
what conversions take place during the execution of the following statement:
	d=i+f;

@@@@ Exercise 13 (Section 7.5): knkcch07e13: Assume that a program contains the 
following declarations:
	char c='\1'
	short s=2;
	int i=-3;
	long m=5;
	float f=6.5f;
	double d=7.5;
Give the value and the type of each expression listed below.
(a) c*i         (c)f/c         (e)f-d
(b) s+m         (d)d/s         (f)(int)f

@@@@ Exercise 14 (Section 7.5): knkcch07e14: Does the following statement always 
compute the fractional part of f correctly (assuming that f and frac_part are 
float variables)?
	frac_part=f-(int)f;
If not, what's the problem?

@@@@ Exercise 15 (Section 7.5): knkcch07e15: Use typedef to create types names 
Int8, Int16, and Int32. Define the types so that they represent 8-bit, 16-bit, 
and 32-bit integers on your machine.
=========================================================================
PROGRAMMING PROJECTS

@@@@ Project 1: knkcch07proj01: The square2.c program of Section 6.3 will fail 
(usually by printing strange answers) if i*i exceeds the maximum int value. Run 
the program and determine the smallest value of n that causes failure. Try 
changing the type of i to short and running the program again. (Don't forget to 
update the conversion specifications in the call of printf !) Then try long. 
From these experiments, what can you conclude about the number of bits used to 
store integer types on your machine?

@@@@ Project 2: knkcch07proj02: Modify the square2.c program of Section 6.3 so that 
it pauses after every 24 squares and displays the following message:
	Press Enter to continue...
After displaying the message, the program should use getchar to read a character. 
getchar won't allow the program to continue until the user presses the Enter key.

@@@@ Project 3: knkcch07proj03: Modify the sum2.c program of Section 7.1 to sum a 
series of double values.

@@@@ Project 4: knkcch07proj04: Write a program that translates an alphabetic phone 
number into numeric form:
	Enter phone number: CALLATT
	2255288
(In case you don't have a telephone nearby, here are the letters on the keys: 
2=ABC, 3=DEF, 4=GHI, 5=JKL, 6=MNO, 7=PRS, 8=TUV, 9=WXY.) If the original phone 
number contains non-alphabetic characters (digits or punctuation, for example), 
leave them unchanged:
	Enter phone number: 1-800-COL-LECT
	1-800-265-5328
You may assume that any letters entered by the user are upper case.

@@@@ Project 5: knkcch07proj05: In the SCRABBLE Cross-Word Game, players form words 
using small titles, each containing a letter and a face value. The face value 
varies from one letter to another, based on the letter's rarity. (Here are the 
face values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ.) 
Write a program that computes the value of a word by summing the values of its 
letters:
	Enter a word: pitfall
	Scrabble value: 12
Your program should allow any mixture of lower-case and upper-case letters in 
the word. Hint: Use toupper library function.

@@@@ Project 6: knkcch07proj06: Write a program that prints the values of 
sizefof(int), sizeof(short), sizeof(long), sizeof(float), sizeof(double) and 
sizeof(long double).

@@@@ Project 7: knkcch07proj07: Modify Programming Project 6 from Chapter 3 so that 
the user may add, subtract, multiply, or divide two fractions (by entering 
either +, -, *, or / between the fractions).

@@@@ Project 8: knkcch07proj08: Modify Programming Project 8 from Chapter 5 so that 
the user enters a time using the 12-hour clock. The input will have the form 
hours:minutes followed by either A, P, AM, or PM (either lower-case or 
upper-case). White space allowed (but not required) between the numerical time 
and the AM/PM indicator. Examples of valid input:
1:15P
1:15PM
1:15p
1:15pm
1:15 P
1:15 PM
1:15 p
1:15 pm
You may assume that the input has one of these forms; there is no need to test 
for errors.

@@@@ Project 9: knkcch07proj09: WRite a program that asks the user for a 12-hour 
time, then displays the time in 24-hour form:
	Enter a 12-hour time: 9:11 PM
	Equivalent 24-hour time: 21:11
See Programming Project 8 for a description of the input format.

@@@@ Project 10: knkcch07proj10: Write a program that counts the number of vowels 
(a, e, i, o, and u) in a sentence:
	Enter a sentence: And that's the way it is.
	Your sentence contains 6 vowels.

@@@@ Project 11: knkcch07proj11: Write a program that takes a first name and last 
name entered by the user and displays the last name, a comma, and the first 
initial, followed by a period:
	Enter a first and Last name: Lloyd Fosdick
	Fosdick, L.
The user's input may contain extra spaces before the first name, between the 
first and last names, and after the last name.

@@@@ Project 12: knkcch07proj12: Write a program that evaluates an expression:
	Enter an expression: 1+2.5*3
	Value of expression: 10.5
The operands in the expression are floating-point numbers; the operators are +, 
-, *, and /. The expression is evaluated from left to right (no operator takes 
precedence over any other operator).

@@@@ Project 13: knkcch07proj13: Write a program that calculates the average word 
length for a sentence:
	Enter a sentence: It was deja vu all over again.
	Average word length: 3.4
Simplicity, your program should consider a punctuation mark to be part of the 
word to which it is attached. Display the average word length to one decimal 
place.

@@@@ Project 14: knkcch07proj14: Write a program that uses Newton's method to 
compute the square root of a positive floating-point number:
	Enter a positive number: 3
	Square root: 1.73205
Let x be the number entered by the user. Newton's method requires an initial 
guess y for the square root of x (we'll use y=1). Successive guesses are found 
by computing the average of y and x/y. The following table shows how the square 
root of 3 would be found:
	x   y           x/y             Avg. of y and x/y
	3   1           3               2
	3   2           1.5             1.75
	3   1.75        1.71429         1.73214
	3   1.73214     1.73196         1.73205
	3   1.73205     1.73205         1.73205
NOte that the values of y get progressively closer to the true square root of x. 
For greater accuracy, your program should use variables of type double rather 
than float. Have the program terminate when the absolute value of the difference 
between the old value of y and the new value of y is less than the product of 
.00001 and y. Hint: Call the fabs function to find the absolute value of a 
double. (You'll need to include the <math.h> header at the beginning of your 
program in order to use fabs).

@@@@ Project 15: knkcch07proj15: Write a program that computes the factorial of a 
positive integer:
	Enter a positive integer: 6
	Factorial of 6: 720
(a) Use a short variable to store the value of the factorial. What is the 
largest value of n for which the program correctly prints the factorial of n?
(b) Repeat part (a), using an int variable instead.
(c) Repeat part (a), using a long variable instead.
(d) Repeat part (a), using long long variable instead (if your compiler supports 
the long long type).
(e) Repeat part (a), using a float variable instead.
(f) Repeat part (a), using a double variable instead.
(g) Repeat part (a), using a log double variable instead.
In cases (e)-(g), the program will display a close approximation of the 
factorial, not necessarily the exact value.
=========================================================================