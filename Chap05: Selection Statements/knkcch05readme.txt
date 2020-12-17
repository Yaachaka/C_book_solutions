==========================================================================
EXERCISES

--Exercise 1 (Section 5.1): knkcch05e01: The following program fragments 
illustrate the relational and equality operators. Show the output produced by 
each, assuming that i,j, and k are int variables.
(a) i=2;j=3;
    k=i*j==6;
    printf("%d",k);
(b) i=5;j=10;k=1;
    printf("%d",k>i<j);
(c) i=3;j=2;k=1;
    printf("%d",i<j==j<k);
(d) i=3;j=4;k=5;
    printf("%d",i%j+i<k);

--Exercise 2 (Section 5.1): knkcch05e02: The following fragments illustrate the 
logical operators. Show the output produced by it, assuming that i, j, and k are 
int variables.
(a) i=1;j=5;
    printf("%d",!i<j);
(b) i=2;j=1;
    printf("%d",!!i+!j);
(c) i=5;j=0;k=-5;
    printf("%d",i && j || k);
(d) i=1;j=2;k=3;
    prinrf("%d", i<j||k);

--Exercise 3 (Section 5.1): knkcch05e03: The following program fragments 
illustrate the short-circuit behaviour of logical expression. Show the output 
produced by each, assuming that i, j, and k are int variables.
(a) i=8;j=4;k=5;
    printf("%d ",i < j || ++j < k);
    printf("%d %d %d",i,j,k);
(b) i=7;j=8;k=9;
    printf("%d ",i-7 && j++ < k));
    printf("%d %d %d",i,j,k);
(c) i=7;j=8;k=9;
    printf("%d ",(i=j) || (j=k));
    printf("%d %d %d",i,j,k);
(d) i=1;j=1;k=1;
    printf("%d ",++i || ++j && ++k);
    printf("%d %d %d",i,j,k);


--Exercise 4 (Section 5.1): knkcch05e04: Write a single expression whose value is 
either -1, 0, or +1, depending on whether i is less than or equal to or greater 
than j, respectively.

--Exercise 5 (Section 5.2): knkcch05e05: Is the following if statement legal?
	if(n >= 1 <= 10)
		printf("n is between 1 and 10\n");
If so, what does it do when n is equal to 0?

--Exercise 6 (Section 5.2): knkcch05e06: Is the following if statement legal?
	if(n == 1-10)
		printf("n is between 1 and 10\n");
If so, what does it do when n is equal to 5?

--Exercise 7 (Section 5.2): knkcch05e07: What does the following statement print 
if i has the value 17? What does it print if i has the value -17?
	printf("%d\n",i >= 0 ? i : -i);

--Exercise 8 (Section 5.2): knkcch05e08: The following if statement is 
unnecessarily complicated. Simplify it as much as possible. (Hint: The entire 
statement can be replaced by a single assignment.)
	if(age > 13)
		if(age <= 19)
			teenager=true;
		else
			teenager=false;
	else if(age < 13)
		teenager=false;

--Exercise 9 (Section 5.2): knkcch05e09: Are the following if statements 
equivalent? If not, why not?
	if(score >= 90)          if(score < 60)
		printf("A");            	printf("F");
	else if (score >=80)     else if(score <70)
		printf("B");            	printf("D");
	else if(score >=70)      else if(score<80)
		printf("C");            	printf("C");
	else if(score>60)        else if(score<90)
		printf("D");            	printf("B");
	else                     else
		printf("F");            	printf("A");

--Exercise 10 (Section 5.3): knkcch05e10: What output does the following program 
fragment produce? (Assume that i is an integer variable.)
	i=1;
	switch(i%3){
		case 0: printf("zero");
		case 1: printf("one");
		case 2: printf("two");
	}

--Exercise 11 (Section 5.3): knkcch05e11: The following table shows telephone 
area codes in the state of Georgia along with the largest city in each area:
Area code    Major city
  299        Abany
  404        Atlanta
  470        Atlanta
  478        Macon
  678        Atlanta
  706        Columbus
  762        Columbus
  770        Atlanta
  912        Savannah
Write a switch statement whose controlling expression is the variable area-code. 
If the vlaue of area-code is in the table, the switch statement will print the 
corresponding city name. Otherwise, the switch statement will display the message 
"Area code not recognized.". Use the technique discussed in Section 5.3 to make 
the switch statement as simple as possible.

===========================================================================
PROGRAMMING PROJECTS

--Project 1: knkcch05proj01: Write a program that calculates how many digits a 
number contains:
	Ente a number: 374
	The number 374 has 3 digits
You may assume that the number has no more than four digits. Hint: Use if 
statements to test the number. For example, if the number is between 0 and 9, it 
has one digit. If the number is between 10 and 99, it has two digits.

--Project 2: knkcch05proj02: Write a program that asks the user for a 24-hour 
time, then displays the time in 12-hour form:
	Enter a 24-hour time: 21:11
	Equivalent 12-hour time: 9:11 PM
Be careful not to display 12:00 as 0:00.

--Project 3: knkcch05proj03: Modify the broker.c program of Section 5.2 by 
making both of the following changes:
(a) Ask the user to enter the number of shares and the price per share, instead 
of the value of the trade.
(b) Add statement that compute the commission charged by a rival broker ($33 
plus 3cents per share for 2000 shares; $33 plus 2c per share for 2000 shares or 
more).  Display the rival's commission as well as the commission charged by the 
original broker.

--Project 4: knkcch05proj04: Here's a simplified version of the Beaufort scale, 
which is used to estimate wind force:
Speed(knots)   Description
Less than 1    Calm
1 - 3          Light air
4 - 27         Breeze
28 - 47        Gale
48 - 63        Storm
Above 63       Hurricane
Write a program that asks the user to enter a wind speed (in knots), then 
displays the corresponding description.

--Project 5: knkcch05proj05: In one state, single residents are subject to the 
following income tax:
Income                    Amount of tax
Not over $750             1% of income
$750 - $2,250             $7.50 plus 2% of amount over $750
$2,250 - $3,750           $37.50 plus 3% of amount over $2,250
$3,750 - $5,250           $82.50 plus 4% of amount over $3,750
$5,250 - $7,000           $142.50 plus 5% of amount over $5,250
Over $7,000               $230.00 plus 6% of amount over $7,000
Write a program that asks the user to enter the amount of taxable income, then 
dosplay the tax due.

--Project 6: knkcch05proj06: Modify the upc.c program of Section 4.1 so that it 
checks whether a UPC is valid. After the user enters a UPC, the program will 
display either VALID or NOT VALID.

--Project 7: knkcch05proj07: Write a program that finds the largest and smallest 
of four integers entered by the user:
	Enter four integers: 21 43 10 35
	Largest: 43
	Smallest: 10
Use as few if statements as possible. Hint: Four if statements are sufficient.

--Project 8: knkcch05proj08: The following table shows the daily flights from 
one city to another:
Departure time              Arrival time
  08:00 a.m.                 10:16 a.m.
  09:43 a.m.                 11:52 a.m.
  11:19 a.m.                 01:31 p.m.
  12:47 p.m.                 03:00 p.m.
  02:00 p.m.                 04:08 p.m.
  03:45 p.m.                 05:55 p.m.
  07:00 p.m.                 09:20 p.m.
  09:45 p.m.                 11:58 p.m.
Write a program that asks the user to enter a time (expressed in hours and 
minutes, using the 24-hour clock). The program then displays the departure and 
arriavl times for the flight whose departure time is closest to that entered by 
the user:
	Enter a 24-hour time: 13:45
	Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
Hint: Convert the input into a time expressed in minutes since midnight, and 
compare it to the departure times, also expressed in minutes since midnight. For 
example, 13:15 is 13 x 60 + 15 =795 minutes since midnight, which is closer to 
12:47 p.m. (767 minutes since midnight) than to any of the other departure times.

--Project 9: knkcch05proj09: Write a program that prompts the user to enter two 
dates and then indicates which date comes earlier on the calendar:
	Enter first date (mm/dd/yy): 3/6/08
	Enter second date (mm/dd/yy): 5/17/07
	5/17/07 is earlier than 3/6/08

--Project 10: knkcch05proj10: Using the switch statement, write a program that 
converts a numerical grade into a letter grade:
	Enter numerical grade: 34
	Letter grade: B
Use the following grading scale: A=90-100, B=80-89, C=70-79, D=60-69, F=0-59. 
Print an error message if the grade is larger than 100 or less than 0. Hint: 
Break the grade into two digits, then use a switch statement to test the ten's 
digit.

--Project 11: knkcch05proj11: Write a program that asks the user for a two-digit 
number, then prints the English word for the number:
	Enter a two-=digit number: 45
	T=You entered the number forty-five.
Hint: Break the number into two digits. Use one switch statement to print the 
word for the first digit ("twenty", "thirty", and so forth). Use a second switch 
statement to print the word for the second digit. Don't forget that the numbers 
between 11 and 19 require special treatment.
===========================================================================