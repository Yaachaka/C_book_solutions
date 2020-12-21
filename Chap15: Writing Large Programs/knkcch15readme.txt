Chap15: Writing Large Programs
=====================================================================================
EXERCISES

@@@@ Exercise 1 (Section 15.1): knkcch15e01:*************************************
Section 15.1 listed several advantages of dividing a program into multiple source files.
(a) Describe several other advantages.
(b) Describe some disadvantages.

@@@@ Exercise 2 (Section 15.2): knkcch15e02:*************************************
Which of the following should not be put in a header file? Why not?
(a) Function prototypes
(b) Function definitions
(c) Macro definitions
(d) Type definitions

@@@@ Exercise 3 (Section 15.2): knkcch15e03:*************************************
We saw that writing #include <file> instead of #include "file" may not work if file is
one that we've written. Would there be any problem with writing #include "file" instead
of #include <file> if file is a system header?

@@@@ Exercise 4 (Section 15.2): knkcch15e04:*************************************
Assume that debug.h is a header file with the following contents:

	#ifdef DEBUG
	#define PRINT_DEBUG(n) printf("Value of " #n ": $d\n", n)
	#else
	#define PRINT_DEBUG (n)
	#endif
	
Let testdebug.c bce the following source file:
	
	#include <stdio.h>
	
	#define DEBUG
	#include "debug.h"
	
	int main (void)
	{
		int i = 1, j = 2, k = 3;
		#ifdef DEBUG
			printf("Output if DEBUG is defined:\n") ;
		#else
			printf("Output if DEBUG is not defined:\n");
		#endif
		
		PRINT_DEBUG (i) ;
		PRINT DEBUG(j) ;
		PRINT DEBUG (k) ;
		PRINT _DEBUG(i + j);
		PRINT_DEBUG(2 * i + j - k);
		
		return 0;
	}
(a) What is the output when the program is executed?
(b) What is the output if the #define directive is removed from testdebug.c?
(c) Explain why the output is different in parts (a) and (b).
(d) Is it necessary for the DEBUG macro to be defined before debug.h is included in order
for PRINT_DEBUG to have the desired effect? Justify your answer.

@@@@ Exercise 5 (Section 15.4): knkcch15e05:*************************************
Suppose that a program consists of three source files—main.c, f1.c, and f2. c—plus
two header files, f1.h and f2.h. All three source files include f1.h, but only f1.c and
f2.c include f2.h. Write a makefile for this program, assuming that the compiler is gcc
and that the executable file is to be named demo.

@@@@ Exercise 6 (Section 15.4): knkcch15e06:*************************************
The following questions refer to the program described in Exercise 5.
(a) Which files need to be compiled when the program is built for the first time?
(b) If f1.c is changed after the program has been built, which files need to be recompiled?
(c) If f1.h is changed after the program has been built, which files need to be recompiled?
(d) If f2.h is changed after the program has been built, which files need to be recompiled?

=====================================================================================
PROGRAMMING PROJECTS

@@@@ Project 1: knkcch15proj01:*******************************************
The justify program of Section 15.3 justifies lines by inserting extra spaces between
words. The way the write_line function currently works, the words closer to the end of
a line tend to have slightly wider gaps between them than the words at the beginning. (For
example, the words closer to the end might have three spaces between them, while the
words closer to the beginning might be separated by only two spaces.) Improve the program
by having write_line alternate between putting the larger gaps ut the end of the line and
putting them at the beginning of the line.

@@@@ Project 2: knkcch15proj02:*******************************************
Modify the justify program of Section 15.3 by having the read_word function
(instead of main) store the * character at the end of a word that’s been truncated.

@@@@ Project 3: knkcch15proj03:*******************************************
Modify the qsort.c program of Section 9.6 so that the quicksort and split functions 
are in a separate file named quicksort.c. Create a header file named quicksort.h 
that contains prototypes for the two functions and have both gqsort.c and
quicksort.c include this file.

@@@@ Project 4: knkcch15proj04:*******************************************
Modify the remind.c program of Section 13.5 so that the read_line function is in a
separate file named readline.c. Create a header file named readline.h that contains
a prototype for the function and have both remind.c and readline.c include this file.

@@@@ Project 5: knkcch15proj05:*******************************************
Modify Programming Project 6 from Chapter 10 so that it has separate stack.h and
stack.c files. as described in Section 15.2.
=====================================================================================