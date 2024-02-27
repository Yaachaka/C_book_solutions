<html>
<head>
<title>Chapter 09 exercises</title>
<meta charset="utf-8">
<link rel="stylesheet" href="../../myStyle.css">
</head>
<body>

09 Functions
---

# Chapter 09 Excercises

<hr class="hr1ExrcPrj"/>

# cknkCh09Exrc001

Section 9.1

<!-- START: Problem Statement -->

The following function, which computes the area of a triangle, contains two errors. Locate the errors and show how to fix them. (*Hint*: There are no errors in the formula.)

```C
double triangle_area(double base, height)
double product;
{
    product = base * height;
    return product / 2;
}
```

<!-- END: Problem Statement -->

# Solution:

**Error 1**: Type specifier must be specified for each of the parameters explicitly. When not mentioned, it defaults to `int` but as per ISO C99 or higher it is not supported.

**Error 2**: The location of the declaration of the `product` variable. It should have come as part of the function body (i.e., between `{` and `}` of the function). If the intention was to have `product` variable as part of the paramter list with separately specifying the type specifier (after the parameter list--as discussed in the Q&A section), then too it is wrong because, atleast the variable name should be present in the parameter list.

The correct form of the code fragment is as shown below.

```C
double triangle_area(double base, double height)
{
    double product;
    product = base * height;
    return product / 2;
}
```

<hr class="hr1ExrcPrj"/>

# cknkCh09Exrc002

Section 9.1

<!-- START: Problem Statement -->

Write a function `check(x, y, n)` that returns 1 if both `x` and `y` fall between 0 and `n — 1`, inclusive. The function should return 0 otherwise. Assume that `x`, `y`, and `n` are all of type `int`.

<!-- END: Problem Statement -->

# Solution:

```C
int check(int x, int y, int n)
{
    int ret = 0;
    if(x >= 0 && x <= (n -1))
    {
        if(y >= 0 && y <= (n -1))
        {
            ret = 1;
        }    // if condition: for y
    }    // if condition: for x
    return ret;
}    // FUNCTION END: check
```

<hr class="hr1ExrcPrj"/>

# cknkCh09Exrc003

Section 9.1

<!-- START: Problem Statement -->

Write a function `gcd(m, n)` that calculates the greatest common divisor of the integers `m` and `n`. (Programming Project 2 in Chapter 6 describes Euclid’s algorithm for computing the GCD.)

<!-- END: Problem Statement -->

# Solution:

```C
int gcd(int m, int n)
{
    int r;
    while(n > 0)
    {
        r = m % n;
        m = n;
        n = r;
    }    // while loop

    return m;
}    // FUNCTION END: gcd
```

<hr class="hr1ExrcPrj"/>

# cknkCh09Exrc004

Section 9.1

<!-- START: Problem Statement -->

Write a function `day_of_year(month, day, year)` that returns the day of the year (an integer between 1 and 366) specified by the three arguments.

<!-- END: Problem Statement -->

# Solution:

```C
int day_of_year(month, day, year)
{
    #define N_MONTHS 12
    int nThDay = 0;
    int daysInEachMonth[N_MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        daysInEachMonth[1] = 29;
    }    // if condition: check if leap year to adjust the number of days in february month

    for(int i = 0; i < month-1; i++)
    {
        nThDay += daysInEachMonth[i];
    }    // for loop
    nThDay += day;

    return nThDay;
}
```

<hr class="hr1ExrcPrj"/>

# cknkCh09Exrc005

Section 9.1

<!-- START: Problem Statement -->

Write a function `num_digits(n)` that returns the number of digits in `n` (a positive integer). *Hint*: To determine the number of digits in a number `n`, divide it by 10 repeatedly. When `n` reaches 0, the number of divisions indicates how many digits `n` originally had.

<!-- END: Problem Statement -->

# Solution:

```C
int num_digits(int n)
{
    int nDigits = 0;
    while(n)
    {
        nDigits++;
        n /= 10;
    }    // while loop

    return nDigits;
}    // FUNCTION END: num_digits
```

<hr class="hr1ExrcPrj"/>

# cknkCh09Exrc006

Section 9.1

<!-- START: Problem Statement -->

Write a function `digit(n, k)` that returns the k<sup>th</sup> digit (from the right) in `n` (a positive integer). For example, `digit(829, 1)` returns 9, `digit(829, 2)` returns 2, and `digit(823, 3)` returns 8. If `k` is greater than the number of digits in `n`, have the function return 0.

<!-- END: Problem Statement -->

# Solution:

```C
int digit(int n, int k)
{
    int nDigits = 0, kThDigit = 0;
    while(n)
    {
        nDigits++;
        if(nDigits == k)
        {
            kThDigit = n % 10;
            break;    // break out of the while loop
        }    // if condition
        n /= 10;
    }    // while loop

    return kThDigit;
}    // FUNCTION END: num_digits
```

<hr class="hr1ExrcPrj"/>

# cknkCh09Exrc007

Section 9.1

<!-- START: Problem Statement -->

Suppose that the function `f` has the following definition:

```C
int f(int a, int b) { ... }
```

Which of the following statements are legal? (Assume that `i` has type `int` and `x` has type `double`.)

a. `i = f(83, 12);`  
b. `x = f(83, 12);`  
c. `i = f(3.15, 9.28);`  
d. `x = f(3.15, 9.28);`  
e. `f(83, 12);`  

<!-- END: Problem Statement -->

# Solution:

a. `i = f(83, 12);`: Legal.  
b. `x = f(83, 12);`: Illegal but no compilation errors will be observed. The point to note here is that the returned value will be converted to `double` implicitly.  
c. `i = f(3.15, 9.28);`: Illegal. The compilation might not throw erros but warnings. Passing the non-integer values as arguments to the integer parameters. Floating part will be discarded while assigning to the parameters.   
d. `x = f(3.15, 9.28);`: Illegal. The compilation might not throw errors but some warnings. Two things to notice in this statement. First, passing the non-integer values as arguments to the integer parameters. Second, returned value is implicitly converted to `double` while assignment.  
e. `f(83, 12);`: Illegal. Compilation might just throw a warning. The returned value will be discarded. If the intention is to discard the returned value, write the expression as `(void)(f(83, 12));`.  

<hr class="hr1ExrcPrj"/>

# cknkCh09Exrc008

Section 9.2

<!-- START: Problem Statement -->

Which of the following would be valid prototypes for a function that returns nothing and has one `double` parameter?

a. `void f(double x);`  
b. `void f(double);`  
c. `void f(x);`  
d. `f(double x);`  

<!-- END: Problem Statement -->

# Solution:

a. `void f(double x);`: Valid prototype.  
b. `void f(double);`: Valid prototype.  
c. `void f(x);`: Invalid prototype. Type specifier to the parameter might default to `int` but not acceptable.  
d. `f(double x);`: Invalid prototype. Return type might default to `int` due to absence but not acceptable.  

<hr class="hr1ExrcPrj"/>

# cknkCh09Exrc009

Section 9.3

<!-- START: Problem Statement -->

What will be the output of the following program?

```C
#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int i = 1, j = 2;
    swap(i, j);
    printf("i = %d, j = %d\n", i, j);
    return 0;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
```

<!-- END: Problem Statement -->

# Solution:

The output will be:

```shell
2, 1
```

<hr class="hr1ExrcPrj"/>

# cknkCh09Exrc010

Section 9.3

<!-- START: Problem Statement -->

Write functions that return the following values. (Assume that `a` and `n` are parameters, where `a` is an array of `int` values and `n` is the length of the array.)

a. The largest element in `a`.  
b. The average of all elements in `a`.  
c. The number of positive elements in `a`.  

<!-- END: Problem Statement -->

# Solution:

<ol type="a">
<li>

The largest element in `a`.  

```C
int largestElementInArray(int a[], int n)
{
    int max = a[0];

    for(int i = 1; i < n; i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }    // if condition
    }    // for loop

    return max;
}    // FUNCTION END: largestElementInArray
```

</li>
<li>

The average of all elements in `a`.  

```C
int averageOfElementsInArray(int a[], int n)
{
    int average = a[0];

    for(int i = 1; i < n; i++)
    {
        average += a[i];
    }    // for loop

    average /= n;

    return average;
}    // FUNCTION END: averageOfElementsInArray
```

</li>
<li>

The number of positive elements in `a`.  

```C
int nPositiveIntegersInArray(int a[], int n)
{
    int nPositiveIntegers = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] > 0)
        {
            nPositiveIntegers++;
        }    // if condition
    }    // for loop

    return nPositiveIntegers;
}    // FUNCTION END: nPositiveIntegersInArray
```

</li>
</ol>

<hr class="hr1ExrcPrj"/>

# cknkCh09Exrc011

Section 9.3

<!-- START: Problem Statement -->

Write the following function:

```C
float compute_GPA(char grades[], int n);
```

The `grades` array will contain letter grades (A, B, C, D, or F, either upper-case or lower-case); `n` is the length of the array. The function should return the average of the grades (assume that A = 4, B = 3, C = 2, D = 1, and F = 0).

<!-- END: Problem Statement -->

# Solution:

```C
#include <ctype.h>

float compute_GPA(char grades[], int n)
{
    float f_averageOfGrades = 0.0f;

    for(int i = 0; i < n; i++)
    {
        switch(toupper(grades[i]))
        {
            case 'A': f_averageOfGrades += 4;break;
            case 'B': f_averageOfGrades += 3;break;
            case 'C': f_averageOfGrades += 2;break;
            case 'D': f_averageOfGrades += 1;break;
            default: f_averageOfGrades += 0;break;
        }    // switch statement
    }    // for loop

    f_averageOfGrades /= n;

    return f_averageOfGrades;
}    // FUNCTION END: compute_GPA
```

<hr class="hr1ExrcPrj"/>

# cknkCh09Exrc012

Section 9.3

<!-- START: Problem Statement -->

Write the following function:

```C
double inner_product(double a[], double b[], int n);
```

The function should return `a[0] * b[0] + a[1] * b[1] + ... + a[n - 1] * b[n - 1]`.

<!-- END: Problem Statement -->

# Solution:

```C
double inner_product(double a[], double b[], int n)
{
    double d_innerProduct = 0.0;

    for (int i = 0; i < n; i++)
    {
        d_innerProduct += a[i] * b[i];
    }    // for loop

    return d_innerProduct;
}    // FUNCTION END: inner_product
```

<hr class="hr1ExrcPrj"/>

# cknkCh09Exrc013

Section 9.3

<!-- START: Problem Statement -->

Write the following function, which evaluates a chess position:

```C
int evaluate_position(char board[8][8]);
```

`board` represents a configuration of pieces on a chessboard, where the letters K, Q, R, B, N, P represent White pieces, and the letters k, q, r, b, n, and p represent Black pieces. `evaluate_position` should sum the values of the White pieces (Q = 9, R = 5, B = 3, N = 3, P = 1). It should also sum the values of the Black pieces (done in a similar way). The function will return the difference between the two numbers. This value will be positive if White has an advantage in material and negative if Black has an advantage.

<!-- END: Problem Statement -->

# Solution:

```C
int evaluate_position(char board[8][8])
{
    int i_diff = 0, i_sumInWhitePieces = 0, i_sumInBlackPieces = 0;

    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            switch(board[i][j])
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
    }    // for loop

    i_diff = i_sumInWhitePieces - i_sumInBlackPieces;

    return i_diff;
}    // FUNCTION END: evaluate_position
```

<hr class="hr1ExrcPrj"/>

# cknkCh09Exrc014

Section 9.4

<!-- START: Problem Statement -->

The following function is supposed to return `true` if any element of the array `a` has the value 0 and `false` if all elements are nonzero. Sadly, it contains an error. Find the error and show how to fix it:

```C
bool has_zero(int a[], int n)
{
    int i;

    for(i = 0; i < n; i++)
        if(a[i] == 0)
            return true;
        else
            return false;
}
```

<!-- END: Problem Statement -->

# Solution:

`else` part of the code is wrong. When any of the element is non-zero, the function returns `false` without actually going through the entire array.

The corrected function is as follows:

```C
bool has_zero(int a[], int n)
{
    int i;

    for(i = 0; i < n; i++)
        if(a[i] == 0)
            return true;
    return false;
}    // FUNCTION END: has_zero
```

<hr class="hr1ExrcPrj"/>

# cknkCh09Exrc015

Section 9.4

<!-- START: Problem Statement -->

The following (rather confusing) function finds the median of three numbers. Rewrite the function so that it has just one return statement.

```C
double median(double x, double y, double z)
{
    if (x <= y)
        if (y <= z) return y;
        else if (x <= z) return z;
        else return x;
    if (z <= y) return y;
    if (x <= z) return x;
    return z;
}
```

<!-- END: Problem Statement -->

# Solution:

```C
double median(double x, double y, double z)
{
    double median;
    
    if((x >= y && x <= z) || (x >= z && x <= y))
        median = x;
    else if((y >= x && y <= z) || (y >= x && y <= z))
        median = y;
    else
        median = z;

    return median;
}    // FUNCTION END: median
```

<hr class="hr1ExrcPrj"/>

# cknkCh09Exrc016

Section 9.6

<!-- START: Problem Statement -->

Condense the `fact` function in the same way we condensed `power`.

<!-- END: Problem Statement -->

# Solution:

```C
int fact(int n)
{
    return (n <= 1) ? (1) : (n * fact(n - 1));
}    // FUNCTION END: fact
```

<hr class="hr1ExrcPrj"/>

# cknkCh09Exrc017

Section 9.6

<!-- START: Problem Statement -->

Rewrite the `fact` function so that it’s no longer recursive.

<!-- END: Problem Statement -->

# Solution:

```C
int fact(int n)
{
    int i_factorial = 1;

    for(i = 2; i <= n; i++)
    {
        i_factorial *= i;
    }    // for loop
    
    return i_factorial;
}    // FUNCTION END: fact
```

<hr class="hr1ExrcPrj"/>

# cknkCh09Exrc018

Section 9.6

<!-- START: Problem Statement -->

Write a recursive version of the `gcd` function (see Exercise 3). Here's the strategy to use for computing `gcd(m, n)`: If `n` is 0, return `m`. Otherwise, call `gcd` recursively, passing `n` as the first argument and `m % n` as the second.

<!-- END: Problem Statement -->

# Solution:

```C
int gcd(int m, int n)
{
    return (n == 0) ? (m) : (gcd(n, m % n));
}    // FUNCTION END: gcd
```

<hr class="hr1ExrcPrj"/>

# cknkCh09Exrc019

Section 9.6

<!-- START: Problem Statement -->

Consider the following "mystery" function

```C
void pb(int n)
{
    if(n != 0) 
    {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}
```

Trace the execution of the function by hand. Then write a program that calls the function, passing it a number entered by the user. What does the function do?

<!-- END: Problem Statement -->

# Solution:

```C
#include <stdio.h>

void pb(int n)
{
    if(n != 0) 
    {
        pb(n / 2);
        putchar('0' + n % 2);
    }    // if statement
}    // FUNCTION END: pb

int main(void)
{
    int n;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    pb(n);
    
    return 0;
}    // FUNCTION END: main
```

Suppose the user enters the input as `5`, the tracing of the fuunction calls go as follows:

```C
void pb(5)
{
    if(5 != 0) 
    {
        pb(2);
```

*forward jump1* with n as 2.

```C
void pb(2)
{
    if(2 != 0) 
    {
        pb(1);
```

*forward jump2* with n as 1

```C
void pb(1)
{
    if(1 != 0) 
    {
        pb(0);
```

*forward jump3* with n as 0.

```C
void pb(0)
{
    if(0 != 0) 
    {
        // Does not enter
    }    // if statement
}    // FUNCTION END: pb
```

*backward jump1* when n was 1

```C
        putchar('0' + 1 % 2);
    }    // if statement
}    // FUNCTION END: pb
```

Shell output before backward jump: `1`.

*backward jump2* when n was 2.

```C
        putchar('0' + 2 % 2);
    }    // if statement
}    // FUNCTION END: pb
```

Shell output before backward jump: `10`.

*backward jump3* when n was 5.

```C
        putchar('0' + 5 % 2);
    }    // if statement
}    // FUNCTION END: pb
```

Shell output before backward jump: `101`.

Next backward jump is to `main` function. The function actually gives the binary representation of the inputted integer.

<hr class="hr1ExrcPrj"/>

</body>
</html>