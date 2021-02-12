Chap12: Pointers and Arrays
=======================================================================================
EXERCISES

@@@@ Exercise 1 (Section 12.1): knkcch12e01: Suppose that the following declarations 
are in effect:

	int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
	int *p = &a[1], *q = &a[5];

(a) What is the value of *(p+3) ?
(b) What is the value of *(q-3)?
(c) What is the value of q - p?
(d) Is the condition p < q true or false?
(e) Is the condition *p < *q true or false?

@@@@ Exercise 2 (Section 12.1): knkcch12e02: Suppose that high, low, and middle are 
all pointer variables of the same type, and that low and high point to elements of an 
array. Why is the following statement illegal, and how could it be fixed?
	middle = (low + high) / 2;

@@@@ Exercise 3 (Section 12.2): knkcch12e03: What will be the contents of the a array 
after the following statements are exccuted?

	#define N 10
	
	int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *p = &a[0], *q = &a[N-1], temp;
	
	while (p < q) {
		temp = *p;
		*p++ = *q;
		*q-- = temp;
	}

@@@@ Exercise 4 (Section 12.2): knkcch12e04: Rewrite the make_empty, is_empty, and 
is_ful1 functions of Section 10.2 to use the pointer variable top_ptr instead of the 
integer variable top.

@@@@ Exercise 5 (Section 12.3): knkcch12e05: Suppose that a is a one-dimensional array 
and p is a pointer variable. Assuming that the assignment p = a has just been performed, 
which of the following expressions are illegal because of mismatched types? Of the 
remaining expressions, which are true (have a nonzero value)?

(a) p == a[0]
(b) p == &a[0]
(c) *p == a[0]
(d) p[0] == a[0]

@@@@ Exercise 6 (Section 12.3): knkcch12e06: Rewrite the following function to use 
pointer arithmetic instead of array subscripting. (In other words, eliminate the 
variable i and all uses of the [] operator.) Make as few changes as possible.

	int sum_array(const int a[], int n)
	{
		int i, sum;
		
		sum = 0;
		for (i = 0; i<n;i++)
			sum += a[i];
		return sum;
	}

@@@@ Exercise 7 (Section 12.3): knkcch12e07: Write the following function:

	bool search(const int a[], int n, int key);

a is an array to be searched, n is the number of elements in the array, and key is 
the search key, search should return true if key matches some element of a, and false 
if it doesn’t. Use pointer arithmetic—not subscripting—to visit array elements.

@@@@ Exercise 8 (Section 12.3): knkcch12e08: Rewrite the following function to use 
pointer arithmetic instead of array subscripting. (In other words, eliminate the 
variable i and all uses of the [] operator.) Make as few changes as possible.

	void store zeros(int a[], int n)
	{
		int i;
		for(i=0;i<n;i++)
			a[i]=0;
	}

@@@@ Exercise 9 (Section 12.3): knkcch12e09: Write the following function:

double inner_product (const double *a, const double *b, int n);

a and b both point to arrays of length n. The function should return a[0] * b[0] +
a[1] *b[1] +...+a[n-1] * b[n-1]. Use pointer arithmetic—not subscriplting—to
visit array clements.

@@@@ Exercise 10 (Section 12.3): knkcch12e10: Modify the find_middle function of Section 
11.5 so that it uses pointer arithmetic to calculate the return value.

@@@@ Exercise 11 (Section 12.3): knkcch12e11: Modify the find_largest function so that 
it uses pointer arithmetic—not subscripting—to visit array elements.

@@@@ Exercise 12 (Section 12.3): knkcch12e12: Write the following function:

	void find_two_largest (const int *a, int n, int *largest,
	                       int *second_largest) ;

a points to an array of length n. The function searches the array for its largest and 
second largest elements, storing them in the variables pointed to by largest and
second_largest, respectively. Use pointer arithmetic—not subscripting—to visit array
elements.

@@@@ Exercise 13 (Section 12.4): knkcch12e13: Section 8.2 had a program fragment in 
which two nested for loops initialized the array ident for use as an identity matrix. 
Rewrite this code, using a single pointer to step through the array one element at a 
time. Hint: Since we won't be using row and col index variables, it won't be easy to 
tell where to store 1. Instead, we can use the fact that the first element of the array 
should be 1, the next N elements should be 0. the next clement should be 1, and so 
forth. Use a variable to keep track of how many consecutive Os have been stored; when 
the count reaches N, it’s time to store 1.

@@@@ Exercise 14 (Section 12.4): knkcch12e14: Assume that the following array contains 
a week’s worth of hourly temperature readings, with cach row containing the readings 
for one day:

	int temperatures [7][24];

Write a statement that uses the search function (see Exercise 7) to search the entire
temperatures array for the value 32.

@@@@ Exercise 15 (Section 12.4): knkcch12e15: Write a loop that prints all temperature 
readings stored in row i of the temperatures array (see Exercise 14). Use a pointer to 
visit each element of the row.

@@@@ Exercise 16 (Section 12.4): knkcch12e16: Write a loop that prints the highest 
temperature in the temperatures array (see Exercise 14) for each day of the week. The loop 
body should call the find_largest function, passing it one row of the array at a time.

@@@@ Exercise 17 (Section 12.4): knkcch12e17: Rewrite the following function to use 
pointer arithmetic instead of array subscripting. (In other words, eliminate the 
variables i and j and all uses of the [] operator.) Use a single loop instead of 
nested loops.

	int sum_two_dimensional_array(const int a[][LEN], int n)
	{
		int i, j, sum = 0;
		
		for (i = 0; i < n; i++)
			for (j = 0; j < LEN; j++)
				sum += a[i][j];
		
		return sum;
	}

@@@@ Exercise 18 (Section 12.4): knkcch12e18: Write the evaluate_position function 
described in Exercise 13 of Chapter 9. Use pointer arithmetic—not subscripting—to 
visit array elements. Use a single loop instead of nested loops.
=======================================================================================
PROGRAMMING PROJECTS

@@@@ Project 1: knkcch12proj01: (a) Write a program that reads a message, then prints 
the reversal of the message:

	Enter a message: Don't get mad, get even.
	Reversal is: .neve teg ,dam teg t'noD

Hint: Read the message one character at a time (using getchar) and store the characters in
an array. Stop reading when the array is full or the character read is '\n'.
(b) Revise the program to use a pointer instead of an integer to keep track of the current
position in the array.

@@@@ Project 2: knkcch12proj02: (a) Write a program that reads a message. then checks 
whether it’s a palindrome (the letters in the message are the same from left to right 
as from right to left):

	Enter a message: He lived as a devil, eh?
	Palindrome
	
	Enter a message: Madam, I am Adam.
	Not a palindrome

Ignore all characters that aren’t letters. Use integer variables to keep track of 
positions in the array.
(b) Revise the program to use pointers instead of integers to keep track of positions 
in the array.

@@@@ Project 3: knkcch12proj03: Simplify Programming Project 1(b) by taking advantage 
of the fact that an array name can be used as a pointer.

@@@@ Project 4: knkcch12proj04: Simplify Programming Project 2(b) by taking advantage 
of the fact that an array name can be used as a pointer.

@@@@ Project 5: knkcch12proj05: Modify Programming Project 14 from Chapter 8 so that 
it uses a pointer instead of an integer to keep track of the current position in the 
array that contains the sentence.

@@@@ Project 6: knkcch12proj06: Modify the qsort.c program of Section 9.6 so that low, 
high, and middle are pointers to array elements rather than integers. The split 
function will need to return a pointer, not an integer.

@@@@ Project 7: knkcch12proj07: Modify the maxmin.c program of Section 11.4 so that 
the max_min function uses a pointer instead of an integer to keep track of the 
current position in the array.
=======================================================================================