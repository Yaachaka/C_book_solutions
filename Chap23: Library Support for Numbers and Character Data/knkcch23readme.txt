Chap23: Library Support for Numbers and Character Data
================================================================================
EXERCISES

--Exercise 1 (Section 23.3): knkcch23e01:Extend the round_nearest function so 
that it rounds a floating-point number x to 7 digits after the decimal point. 
For example, the call round_nearest (3.14159, 3) would return 3.142. Hint: 
Multiply x by 10ⁿ, round to the nearest integer, then divide by 10ⁿ. Be sure 
that your function works correctly for both positive and negative values of x.

--Exercise 2 (Section 23.4): knkcch23e02:(C99) Write the following function:
	double evaluate_polynomial (double a[], int n, double x);
The function should return the value of the polynomial aₙxⁿ+aₙ₋₁xⁿ⁻¹+...a₀, 
where the aⁱ's are stored in corresponding clements of the array a, which has 
length n + 1. Have the function use Horner's Rule to compute the value of the 
polynomial:
((...((aₙx+aₙ₋₁)x+aₙ₋₂)x+...)x+a₁)x+a₀
Use the fma function to perform the multiplications and additions.

--Exercise 3 (Section 23.4): knkcch23e03:(C99) Check the documentation for your 
compiler to see if it performs contraction on arithmetic expressions and, if so, 
under what circumstances.

--Exercise 4 (Section 23.5): knkcch23e04:Using isalpha and isalnum, write a 
function that checks whether a string has the syntax of a C identifier (it 
consists of letters, digits, and underscores, with a letter or underscore
at the beginning).

--Exercise 5 (Section 23.5): knkcch23e05:Using isxdigit, write a function that 
checks whether a string represents a valid hexadecimal number (it consists 
solely of hexadecimal digits). If so, the function returns the value of the 
number as a Long int. Otherwise, the function returns —1.

--Exercise 6 (Section 23.6): knkcch23e06:In each of the following cases, 
indicate which function would be the best to use: memcpy, memmove, strcpy, or 
strncpy. Assume that the indicated action is to be performed by a single 
function call.
(a) Moving all clements of an array “down” one position in order to leave room 
for a new element in position 0.
(b) Deleting the first character in a null-terminated string by moving all other 
characters back one position.
(c) Copying a string into a character array that may not be large enough to hold 
it. If the array is too small. assume that the string is to be truncated: no 
null character is necessary at the end.
(d) Copying the contents of one array variable into another.

--Exercise 7 (Section 23.6): knkcch23e07:Section 23.6 explains how to call 
strchr repeatedly to locate all occurrences of a character within a string. Is 
it possible to locate all occurrences in reverse order by calling strrchr 
repeatedly?

--Exercise 8 (Section 23.6): knkcch23e08:Use strchr to write the following 
function:
	int numchar(const char *s, char ch);
numchar returns the number of times the character ch occurs in the string s.

--Exercise 9 (Section 23.6): knkcch23e09:Replace the test condition in the 
following if statement by a single call of strchr:
	if (ch == 'a' || ch == 'b' || ch == 'c')  ...

--Exercise 10 (Section 23.6): knkcch23e10:Replace the test condition in the 
following if statement by a single call of strstr:
	if (strcmp(str, "foo") == O || strcmp(str, "bar") == 0 ||
	strcmp(str, "baz") == 0)  ...
Hint: Combine the string literals into a single string, separating them with a 
special character. Does your solution assume anything about the contents of str?

--Exercise 11 (Section 23.6): knkcch23e11:Write a call of memset that replaces 
the last n characters in a null-terminated string s with ! characters.

--Exercise 12 (Section 23.6): knkcch23e12:Many versions of <string.h> provide 
additional (nonstandard) functions, such as those listed below. Write each 
function using only the features of the C standard.
(a) strdup(s) — Returns a pointer to a copy of s stored in memory obtained by 
calling malloc. Returns a null pointer if enough memory couldn't be allocated.
(b) stricmp(s1, s2) — Similar to strcmp, but ignores the case of letters.
(c) strlwr(s) — Converts upper-case letters in s to lower case, leaving other 
characters unchanged; returns s.
(d) strrev(s) — Reverses the characters in s (except the null character); 
returns s.
(e) strset(s, ch) Fills s with copies of the character ch; returns s.
If you test any of these functions, you may need to alter its name. Functions 
whose names begin with str are reserved by the C standard.

--Exercise 13 (Section 23.6): knkcch23e13:Use strtok to write the following 
function:
	int count_words(char *sentence);
count_words returns the number of words in the string sentence, where a “word” 
is any sequence of non-white-space characters. count_words is allowed to modify 
the string.


================================================================================
PROGRAMMING PROJECTS

--Project 1: knkcch23proj01:Write a program that finds the roots of the equation 
ax² + bx + c = 0 using the formula
x=(-b±√(b²-4ac))/(2a)
Have the program prompt for the values of a, b, and c, then print both values of 
x. (If b²-4ac is negative, the program should instead print a message to the 
effect that the roots are complex.)

--Project 2: knkcch23proj02:Write a program that copies a text file from 
standard input to standard output, removing all white-space characters from the 
beginning of cach line. A line consisting entirely of white-space characters 
will not be copied.

--Project 3: knkcch23proj03:Write a program that copies a text file from 
standard input to standard output, capitalizing the first letter in each word.

--Project 4: knkcch23proj04:Write a program that prompts the user to enter a 
series of words separated by single spaces, then prints the words in reverse 
order. Read the input as a string, and then use strtok to break it into words.

--Project 5: knkcch23proj05:Suppose that money is deposited into a savings 
account and left for t years. Assume that the annual interest rate is r and that 
interest is compounded continuously. The formula A(t) = Pe^(rt) can be used to 
calculate the final value of the account, where P is the original amount 
deposited. For example, $1000 left on deposit for 10 years at 6% interest would 
be worth $1000 x e^(.06x10) = $1000 x e^(.6) = $1000 x 1.8221188 = $1,822.12. 
Write a program that displays the result of this calculation after prompting the 
user to enter the original amount deposited, the interest rate, and the number 
of years.

--Project 6: knkcch23proj06:Write a program that copies a text file from 
standard input to standard output, replacing each control character (other than 
\n) by a question mark.

--Project 7: knkcch23proj07:Write a program that counts the number of sentences 
in a text file (obtained from standard input). Assume that each sentence ends 
with a .. ?, or ! followed by a white-space character (including \n).

================================================================================