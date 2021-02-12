//----------------------------------------------------------------------------
EXERCISES

--Exercise 1 (Section 2.1): knkcch02e01: Create and run Kerningham and Ritchie's 
famous "hello, world" program:
	#include <stdio.h>
	
	int main(void)
	{
		printf("hello, world\n");
	}
Do you get a warning message from the compiler? If so, what's needed to make it 
go away?

--Exercise 2 (Section 2.2): knkcch02e02: Consider the following program:
	#include<stdio.h>
	
	int main(void)
	{
		printf("Parkinson's Law:\nWork expands so as to ");
		printf("fill the time\n");
		printf("available for its completion.\n");
		return 0;
	}
(a) Identify the directives and statements in this program.
(b) What output does the program produce?

--Exercise 3 (Section 2.4): knkcch02e03: Condense the dweight.c program by 
(1) replacing the assignment to height, length, and width with initializers and 
(2) removing the weight variable, instead calculating (volume+165)/166 within the 
last printf.

--Exercise 4 (Section 2.4): knkcch02e04: Write a program that declares several 
int and float variables-without initializing them-and then prints their values. 
Is there any pattern to the values? (Usually there isn't).

--Exercise 5 (Section 2.7): knkcch02e05: Which of the following are not legal C 
idntifiers?
(a) 100_bottles
(b) _100_bottles
(c) one_hundred_bottles
(d) bottles_by_the_hundred_

--Exercise 6 (Section 2.7): knkcch02e06: Why is it not a good idea for an 
identifier to contain more than one adjacent underscore (as in current___balance, 
for example)?

--Exercise 7 (Section 2.7): knkcch02e07: Which of the following are keywords in C?
(a) for
(b) If
(c) main
(d) printf
(e) while

--Exercise 8 (Section 2.8): knkcch02e08: How many tokens are there in the 
following statement?
	answer=(3*q-p*p)/3;

--Exercise 9 (Section 2.8): knkcch02e09: Insert spaces between the tokens in 
Exercise 8 to make the statement easier to read.

--Exercise 10 (Section 2.8): knkcch02e10: In the dweight.c program (Section 2.4) 
which spaces are essential?
//----------------------------------------------------------------------------
PROGRAMMING PROJECTS

--Project 1: knkcch02proj01: Write a program that uses printf to display the 
following picture on the screen:
	       *
	      *
	     *
	*   *
	 * *
	  *

--Project 2: knkcch02proj02: Write a program that computes the volume of a sphere
with a 10-meter radius, using the formula v=4/3πr³. Write the fraction 4/3 as 
4.0f/3.0f. (Try writing it as 4/3. What happens?) Hint: C doesn't have an 
exponentiation operator, so you will need to multiply r by itself twice.

--Project 3: knkcch02proj03: Modify the program of Programming Project 2 so 
that it prompts the user to enter the radius of the sphere.

--Project 4: knkcch02proj04: Write a program that asks the user to enter a 
dollars_and_cents amounts, then display the amount with 5% tax added: 
	Enter an amount: 100.00
	With tax added: $105.00

--Project 5: knkcch02proj05: Write a program that asks the user to enter a value 
for x and then displays the value of the folowing polynomial: 
3x^5 + 2x^4 - 5x^3 - x^2 + 7x -6
Hint: c doesn't have an exponentiation operator, so you will need to multiply x by
itself repeatedly in order to compute the powers of x. (For example, x*x*x is x 
cubed).

--Project 6: knkcch02proj06: Modify the program of Programming Project 5 so that 
the polynomial is evaluated using the following formula:
((((3x+2)x-5)x-1)x+7)x-6
Note that the modified program performs fewer multiplications. This technique for
evaluating polynomials is known as Horner's Rule.

--Project 7: knkcch02proj07: Write a program that asks user to enter a U.S. 
dollar amount and then shows how to pay that amount using the smallest number of 
$20, $10, $5, and $1 bills:
	Enter a dollar amount: 93
	$20 bills: 4
	$10 bills: 1
	$5 bills: 0
	$1 bills: 3
Hint: Divide the amount by 20 to determine the number of $20 bills needed, and 
then reduce the amount by the total value of the $20 bills. Repeat for the other 
bill sizes. Be sure to use integer value throughout, not floating-point numbers.

--Project 8: knkcch02proj08: Write a program that calculates the remaining 
balance on a loan after the first, second, and third monthly payments:
	Enter amount of loan: 20000.00
	Enter interest rate: 6.0
	Enter monthly payment: 386.66
	Balance remaining after first payment: $19713.34
	Balancing remaining after second payment: $19425.25
	Balance remaining after third payment: $19135.71
Displaying each balance with two digits after the decimal point. Hint: Each 
month, the balance is decreased by the amount of the payment, but increased by 
the balance times the monthly interest rate. To find the monthly interest rate, 
convert the interest rate entered by the user to a percentage and divide it by 
12.
//----------------------------------------------------------------------------