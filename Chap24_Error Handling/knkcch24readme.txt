Chap24: Error Handling
===========================================================================
EXERCISES

-Exercise 1 (Section 24.1): knkcch24e01: (a) Assertions can be used to test for 
two kinds of problems: (1) problems that should never occur if the program is 
correct, and (2) problems that are beyond the control of the program.
Explain why assert is best suited for problems in the first category.
(b) Give three examples of problems that are beyond the control of the program.

-Exercise 2 (Section 24.1): knkcch24e02: Write a call of assert that causes a 
program to terminate if a variable named top has the value NULL.

-Exercise 3 (Section 24.1): knkcch24e03: Modify the stackADT2.c file of Section 
19.4 so that it uses assert to test for errors instead of using if statements. 
(Note that the terminate function is no longer necessary and can be removed.)

-Exercise 4 (Section 24.2): knkcch24e04: (a) Write a “wrapper” function named 
try_math_fcn that calls a math function (assumed to have a double argument and 
return a double value) and then checks whether the call succeeded. Here’s how we 
might use try_math_fcn:
	y = try_math_fcn(sqrt, x, "Error in call of sqrt");
If the call sqrt(x) is successful, try_math_fcn returns the value computed by 
sqrt. If the call fails, try_math_fcn calls perror to print the message Error in 
call of sqrt, then calls exit to lerminate the program.
(b) Write a macro that has the same effect as try_math_fcn but builds the error 
message from the function’s name:
	y = TRY_MATH_FCN(sqrt, x);
If the call of sqrt fails, the message will be Error in call of sqrt. Hint: Have
TRY_MATH_FCN call try_math_fcn.

-Exercise 5 (Section 24.4): knkcch24e05: In the inventory.c program (see 
Section 16.3), the main function has a for loop that prompts the user to enter 
an operation code, reads the code, and then calls either insert, search, update, 
or print. Add a call of setjmp to main in such a way that a subsequent call of 
Longjmp will return to the for loop. (After the longjmp, the user will be 
prompted for an operation code, and the program will continue normally.) setjmp 
will need a jmp_buf variable; where should it be declared?

===========================================================================
PROGRAMMING PROJECTS
===========================================================================