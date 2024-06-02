<html>
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Chapter 12 exercises</title>
<link rel="stylesheet" href="../../myStyle.css">
</head>
<body>

12 Pointers and Arrays
---

# Chapter 12 Excercises

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh12Exrc001

Section 12.1

<!-- START: Problem Statement -->

Suppose that the following declarations are in effect:

```C
int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
int *p = &a[1], *q = &a[5];
```

<!-- START: ordered-list -->
<ol type="a">
<li>

What is the value of `*(p+3)`?

</li>
<li>

What is the value of `*(q-3)`?

</li>
<li>

What is the value of `q - p`?

</li>
<li>

Is the condition `p < q` true or false?

</li>
<li>

Is the condition `*p < *q` true or false?

</li>
</ol>
<!-- END: ordered-list -->
<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:

<!-- START: ordered-list -->
<ol type="a">
<li>

Value of `*(p+3)` is 14.

</li>
<li>

Value of `*(q-3)` is 34.

</li>
<li>

Value of `q - p` is 4.

</li>
<li>

The condition `p < q` is true.

</li>
<li>

The condition `*p < *q` is false.

</li>
</ol>
<!-- END: ordered-list -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh12Exrc002

Section 12.1

<!-- START: Problem Statement -->

Suppose that `high`, `low`, and `middle` are all pointer variables of the same type, and that `low` and `high` point to elements of an array. Why is the following statement illegal, and how could it be fixed?

```C
middle = (low + high) / 2;
```

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:

The intention is to determine the middle value among a set of numbers. Since we are using pointer variables, the expression was supposed to dereference the pointer variables while performing the arithmetic and assignment operations; which means the statement should perform object arithmetic and assignment operations but not pointer/address arithmetic and assignment operations. The correct statement is as follows: 

```C
*middle = (*low + *high) / 2;
```

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh12Exrc003

Section 12.2

<!-- START: Problem Statement -->

What will be the contents of the `a` array after the following statements are executed?

```C
#define N 10

int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int *p = &a[0], *q = &a[N-1], temp;

while (p < q) {
    temp = *p;
    *p++ = *q;
    *q-- = temp;
}
```

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:

The array `a` will be `{10, 9, 8, 7, 6, 5, 4, 3, 2, 1}`.

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh12Exrc004

Section 12.2

<!-- START: Problem Statement -->

Rewrite the `make_empty`, `is_empty`, and `is_full` functions of Section 10.2 to use the pointer variable `top_ptr` instead of the integer variable `top`.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:

```C
#include <stdbool.h> /* C99 only */
#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE] ;
int *top_ptr = contents;

void make_empty (void)
{
    top_ptr = contents;
}

bool is_empty (void)
{
    return top_ptr == contents;
}

bool is_full (void)
{
    return top_ptr == (contents + STACK_SIZE);
}

void push(int i)
{
    if (is_full())
        stack_overflow();
    else
        *(top_ptr++) = i;
}

int pop (void)
{
    if (is_empty())
        stack_underflow() ;
    else
        return *(--top_ptr);
}
```

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh12Exrc005

Section 12.3

<!-- START: Problem Statement -->

Suppose that `a` is a one-dimensional array and `p` is a pointer variable. Assuming that the assignment `p = a` has just been performed, which of the following expressions are illegal because of mismatched types? Of the remaining expressions, which are true (have a nonzero value)?

<!-- START: ordered-list -->
<ol type="a">
<li>

```
p == a[0]
```

</li>
<li>

```
p == &a[0]
```

</li>
<li>

```
*p == a[0]
```

</li>
<li>

```
p[0] == a[0]
```

</li>
</ol>
<!-- END: ordered-list -->

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:

<!-- START: ordered-list -->
<ol type="a">
<li>

```
p == a[0]
```

Illegal. Comparison between pointer/address and object/value.

</li>
<li>

```
p == &a[0]
```

Legal. Comparison between the addresses. The value of the expression is `true`.

</li>
<li>

```
*p == a[0]
```

Legal. Comparison between the values. The value of the expression is `true`.

</li>
<li>

```
p[0] == a[0]
```

Legal. Comparison between the values. The value of the expression is `true`.

</li>
</ol>
<!-- END: ordered-list -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh12Exrc006

Section 12.3

<!-- START: Problem Statement -->

Rewrite the following function to use pointer arithmetic instead of array subscripting. (In other words, eliminate the variable `i` and all uses of the `[]` operator.) Make as few changes as possible.

```C
int sum_array(const int a[], int n)
{
    int i, sum;

    sum = 0;

    for (i = 0; i < n; i++)
        sum += a[i];

    return sum;
}
```

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:

```C
int sum_array(const int *a, int n)
{
    int sum = 0;

    while(n--)
        sum += *a++;

    return sum;
}
```

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh12Exrc007

Section 12.3

<!-- START: Problem Statement -->

Write the following function:

```C
bool search(const int a[], int n, int key);
```

`a` is an array to be searched, `n` is the number of elements in the array, and `key` is the search key. `search` should return `true` if key matches some element of `a`, and `false` if it doesn't. Use pointer arithmetic—not subscripting—to visit array elements.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:

```C
bool search(const int a[], int n, int key)
{
    while(n--)
    {
        if(key == *(a++))
        {
            return true;
        }
    }
    return false;
}
```

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh12Exrc008

Section 12.3

<!-- START: Problem Statement -->

Rewrite the following function to use pointer arithmetic instead of array subscripting. (In other words, eliminate the variable `i` and all uses of the `[]` operator.) Make as few changes as possible.

```C
void store_zeros(int a[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        a[i] = 0;
    }	// for statement: 
}
```

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:

```C
void store_zeros(int *a, int n)
{
    while(n--)
    {
        *(a++) = 0;
    }
}
```

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh12Exrc009

Section 12.3

<!-- START: Problem Statement -->

Write the following function:

```C
double inner_product(const double *a, const double *b, int n);
```

`a` and `b` both point to arrays of length `n`. The function should return `a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1]`. Use pointer arithmetic—not subscripting—to visit array elements.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:

```C
double inner_product(const double *a, const double *b, int n)
{
    double d_inner_product = 0.0;

    while(n--)
    {
        d_inner_product += (*a) * (*b);
        a++;
        b++;
    }

    return d_inner_product;
}
```

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh12Exrc010

Section 12.3

<!-- START: Problem Statement -->

Modify the `find_middle` function of Section 11.5 so that it uses pointer arithmetic to calculate the return value.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:

```C
int *find_middle(int *a, int n)
{
    return (a + (n/2));
}
```

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh12Exrc011

Section 12.3

<!-- START: Problem Statement -->

Modify the `find_largest` function so that it uses pointer arithmetic—not subscripting—to visit array elements.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:

```C
int find_largest(int *a, int n)
{
    int i, max;

    max = *a++;
    while(--n)
    {
        if(*a > max)
            max = *a;
        a++;
    }
    return max;
}
```

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh12Exrc012

Section 12.3

<!-- START: Problem Statement -->

Wite the following function:

```C
void find_two_largest(const int *a, int n, int *largest, int *second_largest);
```

`a` points to an array of length `n`. The function searches the array for its largest and second-largest elements, storing them in the variables pointed to by `largest` and `second_largest`, respectively. Use pointer arithmetic—not subscripting—to visit array elements.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:

```C
void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    *largest = *a++;
    *second_largest = *largest;

    while(--n)
    {
        if(*largest < *a)
        {
            *largest = *a;
            *second_largest = *largest;
        }
        a++;
    }
}
```

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh12Exrc013

Section 12.4

<!-- START: Problem Statement -->

Section 8.2 had a program fragment in which two nested `for` loops initialized the array `ident` for use as an identity matrix. Rewrite this code, using a single pointer to step through the array one element at a time. *Hint*: Since we won't be using `row` and `col` index variables, it won't be easy to tell where to store 1. Instead, we can use the fact that the first element of the array should be 1, the next `N` elements should be 0, the next element should be 1, and so forth. Use a variable to keep track of how many consecutive 0s have been stored; when the count reaches `N`, it's time to store 1.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:

```C
#define N 10

double ident[N][N];
int ones = N, zeroes = N;

double *p = ident;

*p++ = 1;
--ones;

do
{
    while(zeroes--)
    {
        *p++ = 0;
    }
    zeroes = N;
    *p++ = 1;
}while(--ones);
```

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh12Exrc014

Section 12.4

<!-- START: Problem Statement -->

Assume that the following array contains a week's worth of hourly temperature readings, with each row containing the readings for one day:

```C
int temperatures[7][24];
```

Write a statement that uses the `search` function (see Exercise 7) to search the entire temperatures array for the value 32.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:

```C
b_temperature_available = search(temperatures[0], 7 * 24, 32);
```

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh12Exrc015

Section 12.4

<!-- START: Problem Statement -->

Write a loop that prints all temperature readings stored in row `i` of the `temperatures` array (see Exercise 14). Use a pointer to visit each element of the row.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:

```C
int *p;

for(p = temperatures[i]; p < (temperatures[i] + 24); p++)
{
    printf("%d ", *p);
}
```

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh12Exrc016

Section 12.4

<!-- START: Problem Statement -->

Write a loop that prints the highest temperature in the `temperatures` array (see Exercise 14) for each day of the week. The loop body should call the `find_largest` function, passing it one row of the array at a time.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:

```C
int i;

for(i = 0; i < 7; i++)
{
    printf("Highest temperature in day %d is %d.", i, find_largest(temperatures[i], 24));
}
```

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh12Exrc017

Section 12.4

<!-- START: Problem Statement -->

Rewrite the following function to use pointer arithmetic instead of array subscripting. (In other words, eliminate the variables `i` and `j` and all uses of the `[]` operator.) Use a single loop instead of nested loops.

```C
int sum_two_dimensional_array(const int a[][LEN], int n)
{
    int i, j, sum = 0;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < LEN; j++)
        {
            sum += a[i][j];
        }
    }	// for statement: 

    return sum;
}
```

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:

```C
int sum_two_dimensional_array(const int a[][LEN], int n)
{
    int sum = 0;

    int *p = a[0];
    
    for(p = a[0]; p < a[0] + (n * LEN); p++)
    {
        sum += *p;
    }	// for statement: 

    return sum;
}
```

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh12Exrc018

Section 12.4

<!-- START: Problem Statement -->

Write the `evaluate_position` function described in Exercise 13 of Chapter 9. Use pointer arithmetic—not subscripting—to visit array elements. Use a single loop instead of nested loops.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:

```C
int evaluate_position(char board[8][8])
{
    int i_diff = 0, i_sumInWhitePieces = 0, i_sumInBlackPieces = 0;

    char *p;
    for(p = board[0]; p < (board[0] + (8 * 8)); p++)
    {
        switch(*p)
        {
            // White chess pieces
            case 'Q': i_sumInWhitePieces += 9; break;
            case 'R': i_sumInWhitePieces += 5; break;
            case 'B': i_sumInWhitePieces += 3; break;
            case 'N': i_sumInWhitePieces += 3; break;
            case 'P': i_sumInWhitePieces += 1; break;
            
            // Black chess pieces
            case 'q': i_sumInBlackPieces += 9; break;
            case 'r': i_sumInBlackPieces += 5; break;
            case 'b': i_sumInBlackPieces += 3; break;
            case 'n': i_sumInBlackPieces += 3; break;
            case 'p': i_sumInBlackPieces += 1; break;
            default: break;
        }    // switch statement
    }    // for loop

    i_diff = i_sumInWhitePieces - i_sumInBlackPieces;

    return i_diff;
}    // FUNCTION END: evaluate_position
```

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

</body>
</html>
