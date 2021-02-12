Chap03: Formatted Input/Output
===========================================================================
EXERCISES

--Exercise 1 (Section 3.1): knkcch03e01.c: What output do the following calls of 
printf produce?
(a) printf("%6d,%4d",86,1040);
(b) printf("%12.5e",30.253);
(c) printf("%.4f",83.162);
(d) printf("%-6.2g",.0000009979);

--Exercise 2 (Section 3.1): knkcch03e02.c: Write calls of printf that displays a 
float variable x in the following formats.
(a) Exponential notation; left-justified in a field of size 8; one digit after 
the decimal point.
(b) Exponential notation; right-justified in a field of size 10; six digits after 
the decimal point.
(c) Fixed decimal notation; left-justified in a field of size 8; three digits 
after the decimal point.
(d) Fixed decimal notation; right-justified in a field of size 6; no digits after 
the decimal point.

--Exercise 3 (Section 3.2): knkcch03e03.c: For each of the following pairs of 
scanf format strings, indicate whether or not the two strigs are equivalet. If 
they're not, show how they can be distiguished.
(a) "%d"        versus  " %d"
(b) "%d-%d-%d"  versus  "%d -%d -%d"
(c) "%f"        versus  "%f "
(d) "%f,%f"     versus  "%f, %f"

--Exercise 4 (Section 3.2): knkcch03e04.c: Suppose that we call scanf as follows:
	scanf("%d%f%d",&i,&x,&j);
If the user enters,
	10.3 5 6
what will be the values of i, x, and j after the call? (Assume that i and j are 
int variables and x is a float variable.)

--Exercise 5 (Section 3.2): knkcch03e05.c: Suppose that we call scanf as follows:
	scanf("%f%d%f",&x,&i,&y);
If the user enters
	12.3 45.6 789
what will be the values of x, i and y after the call? (Assume that x and y are 
float variables and i is an int variable).

--Exercise 6 (Section 3.2): knkcch03e06.c: Show how to modify the addfrac.c 
program of Section 3.2 so that the user is allowed to enter fractions that 
contain spaces before and after each / character.
===========================================================================
PROGRAMMING PROJECTS

--Project 1: knkcch03proj01.c: Write a program that accepts a date from the user 
in the form mm/dd/yyyy and then displays it in the form yyyymmdd:
	Enter a date (mm/dd/yyyy): 2/17/2011
	You entered the date 20110217 

--Project 2: knkcch03proj02.c: Write a program that formats product information
entered by the user. A session with the program should look like this:
	Enter item number: 583
	Enter unit price: 13.5
	Enter purchase date: (mm/dd/yyyy): 10/24/2010
	
	Item    Unit        Purchase
	        Price       Date
	583     $  13.50    10/24/2010
The item number and date should be left justified; the unit price should be right
justified. Allow dollar amounts up to $9999.99. Hint: Use tabs to line up the 
columns.

--Project 3: knkcch03proj03.c: Books are identified by an International Standard 
Book Numbers (ISBN). ISBNs assigned after January 1, 2007 contain 13 digits, 
arranged in four groups, such as 978-0-393-97950-3. (Older ISBNs use 10 digits). 
The first group (the GS1 prefix) is currently either 978 or 979. The group 
identifier specifies the language or country of origin (for example, 0 and 1 are 
used in English-Speaking countries). The publisher code identifies the publisher 
(393 is the code for W.W. Nortan). The item number is assigned by the publisher to 
identify a specific book (97950 is the code for this book). An ISBN ends with a 
check digit that's used to verify the accuracy of the preceding digits. Write a 
program that breaks down as ISBN entered by the user:
	Enter ISBN: 978-0-393-97950-3
	GS1 prefix: 978
	Group identifier: 0
	Publisher code: 393
	Item number: 97950
	Check digit: 3
Note: The number of digits in each group may vary; you can't assume that groups 
have the lengths shown in this example. Test your program with actual ISBN values 
(usually found on the back cover of a book and on the copyright page).

--Project 4: knkcch03proj04.c: Write a program that prompts the user to enter a 
telephone number in the form (xxx) xxx-xxxx and then displays the number in the 
form xxx.xxx.xxxx:
	Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
	You enetered 404.817.6900

--Project 5: knkcch03proj05.c: Write a program that asks user to enter the 
numbers from 1 to 16 (in any order) and then displays the numbers in a 4 by 4 
arrangement, followed by the sums of the rows, columns and diagonals:
	Enter the numbers from 1 to 16 in any order:
	16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
	16   3   2  13
	 5  10  11   8
	 9   6   7  12
	 4  15  14   1
	Row sums: 34 34 34 34
	Colummn sums: 34 34 34 34
	Diagonal sums: 34 34
If the row, column, and diagonal sums are all the same (as they are in this 
example), the numbers are said to form a magic square. The magic square shown 
here appears in 1514 engraving by artist and Mathematician Abbrecht Dürer. 
(Note that the middle numbers in the last row give the date of the engraving.))

--Project 6: knkcch03proj06.c: Modify the addfrac.c program of Section 3.2 so 
that the user enters both fractions at the same time, separated by a plus sign:
	Enter two fractions separated by a plus sign: 5/6+3/4
	The sum is 38/24
===========================================================================