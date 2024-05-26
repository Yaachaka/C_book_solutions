<html>
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>C Programming</title>
<link rel="stylesheet" href="./myStyle.css">
</head>
<body>

<hr class="chapterDivider">

# 12 Pointers and Arrays

<!-- START: div -->
<div class="theQuote">

Optimization hinders evolution.

</div>
<!-- END: div -->

Chapter 11 introduced pointers and showed how they're used as function arguments and as values returned by functions. This chapter covers another application for pointers. When pointers point to array elements, C allows us to perform arithmetic—addition and subtraction—on the pointers, which leads to an alternative way of processing arrays in which pointers take the place of array subscripts.

The relationship between pointers and arrays in C is a close one, as we'll soon see. We'll exploit this relationship in subsequent chapters, including Chapter 13 (Strings) and Chapter 17 (Advanced Uses of Pointers). Understanding the connection between pointers and arrays is critical for mastering C: it will give you insight into how C was designed and help you understand existing programs. Be aware, however, that one of the primary reasons for using pointers to process arrays—efficiency—is no longer as important as it once was, thanks to improved compilers.

Section 12.1 discusses pointer arithmetic and shows how pointers can be compared using the relational and equality operators. Section 12.2 then demonstrates how we can use pointer arithmetic for processing array elements. Section 12.3 reveals a key fact about arrays—an array name can serve as a pointer to the array's first element—and uses it to show how array arguments really work. Section 12.4 shows how the topics of the first three sections apply to multidimensional arrays. Section 12.5 wraps up the chapter by exploring the relationship between pointers and variable-length arrays, a C99 feature.

## 12.1 Pointer Arithmetic

We saw in Section 11.5 that pointers can point to array elements. For example, suppose that `a` and `p` have been declared as follows:

```C
int a[10], *p;
```

We can make `p` point to `a[0]` by writing

```C
p = &a[0];
```

Graphically, here's what we've just done:

<img src="./images/cknkCh12Sec12p1_1.png" alt="cknkCh12Sec12p1_1.png"/>

We can now access `a[0]` through `p`; for example, we can store the value 5 in `a[0]` by writing

```C
*p = 5;
```

Here's our picture now:

<img src="./images/cknkCh12Sec12p1_2.png" alt="cknkCh12Sec12p1_2.png"/>

Making a pointer `p` point to an element of an array `a` isn't particularly exciting. However. by performing pointer arithmetic (or address arithmetic) on `p`, we can access the other elements of `a`. C supports three (and only three) forms of pointer arithmetic:

```
- Adding an integer to a pointer
- Subtracting an integer from a pointer
- Subtracting one pointer from another
```

Let's take a close look at each of these operations. Our examples assume that the following declarations are in effect:

```C
int a[0], *p, *q, i;
```

### 12.1.1 Adding an Integer to a Pointer

<span class="QandA"></span>

Adding an integer `j` to a pointer `p` yields a pointer to the element `j` places after the one that `p` points to. More precisely, if `p` points to the array element `a[i]`. then `p + j` points to `a[i + j]` (provided, of course, that `a[i + j]` exists).

The following example illustrates pointer addition; diagrams show the values of `p` and `q` at various points in the computation.

```C
p = &a[2];
```

<img src="./images/cknkCh12Sec12p1p1_1.png" alt="cknkCh12Sec12p1p1_1.png"/>

```C
q = p + 3;
```

<img src="./images/cknkCh12Sec12p1p1_2.png" alt="cknkCh12Sec12p1p1_2.png"/>

```C
p += 6;
```

<img src="./images/cknkCh12Sec12p1p1_3.png" alt="cknkCh12Sec12p1p1_3.png"/>

### 12.1.2 Subtracting an Integer from a Pointer

If `p` points to the array element `a[i]`, then `p - j` points to `a[i - j]`. For example:

```C
p = &a[8];
```

<img src="./images/cknkCh12Sec12p1p2_1.png" alt="cknkCh12Sec12p1p2_1.png"/>

```C
q = p - 3;
```

<img src="./images/cknkCh12Sec12p1p2_2.png" alt="cknkCh12Sec12p1p2_2.png"/>

```C
p -= 6;
```

<img src="./images/cknkCh12Sec12p1p2_3.png" alt="cknkCh12Sec12p1p2_3.png"/>

### 12.1.3 Subtracting One Pointer from Another

When one pointer is subtracted from another, the result is the distance (measured in array elements) between the pointers. Thus, if `p` points to `a[i]` and `q` points to `a[j]`.then `p - q` is equal to `i - j`. For example:

```C
p = &a[5];
q = &a[1];
```

<img src="./images/cknkCh12Sec12p1p3_1.png" alt="cknkCh12Sec12p1p3_1.png"/>

```C
i = p - q; /* i is 4 */
i = q - p; /* i is -4 */
```

<!-- START: div -->
<div class="infoBox">

<span class="warningEmoji"></span>

Performing arithmetic on a pointer that doesn't point to an array element causes undefined behavior. Furthermore, the effect of subtracting one pointer from another is undefined unless both point to elements of the same array.

</div>
<!-- END: div -->

### 12.1.4 Comparing Pointers

We can compare pointers using the relational operators (`<`, `<=`, `>`, `>=`) and the equality operators (`==` and `|=`). Using the relational operators to compare two pointers is meaningful only when both point to elements of the same array. The outcome of the comparison depends on the relative positions of the two elements in the array. For example, after the assignments

```C
p = &a[5];
q = &a[1];
```

the value of `p <= q` is 0 and the value of `p >= q` is 1.

<span class="C99Symbol"></span>

### 12.1.5 Pointers to Compound Literals

It's legal for a pointer to point to an element within an array created by a compound literal. A compound literal, you may recall, is a C99 feature that can be used to create an array with no name.

Consider the following example:

```C
int *p = (int [1]){3, 0, 3, 4, 1};
```

`p` points to the first element of a five-element array containing the integers 3, 0, 3, 4, and 1. Using a compound literal saves us the trouble of first declaring an array variable and then making `p` point to the first element of that array:

```C
int a[] = {3, 0, 3, 4, 1}:
int *p = &a[0];
```

## 12.2 Using Pointers for Array Processing

Pointer arithmetic allows us to visit the elements of an array by repeatedly incrementing a pointer variable. The following program fragment, which sums the elements of an array `a`, illustrates the technique. In this example, the pointer variable `p` initially points to `a[0]`. Each time through the loop, `p` is incremented; as a result, it points to `a[1]`, then `a[2]`, and so forth. The loop terminates when `p` steps past the last element of `a`.

```C
#define N 10
...
int a[N], sum, *p;
...
sum = 0;
for (p = &a[0]; p < &a[N]; p++)
    sum += *p;
```

The following figures show the contents of `a`, `sum`, and `p` at the end of the first three loop iterations (before `p` has been incremented).

At the end of the first iteration: I

<img src="./images/cknkCh12Sec12p2_1.png" alt="cknkCh12Sec12p2_1.png"/>

At the end of the second iteration:

<img src="./images/cknkCh12Sec12p2_2.png" alt="cknkCh12Sec12p2_2.png"/>

At the end of the third iteration

<img src="./images/cknkCh12Sec12p2_3.png" alt="cknkCh12Sec12p2_3.png"/>

The condition `p < &a[N]` in the `for` statement deserves special mention. Strange as it may seem, it's legal to apply the address operator to `a[N]`, even though this element doesn't exist (`a` is indexed from 0 to `N — 1`). Using `a[N]` in this fashion is perfectly safe, since the loop doesn't attempt to examine its value. The body of the loop will be executed with `p` equal to `&a[0]`, `&a[1]`, `...`, `&a [N-1]`, but when `p` is equal to `&a[N]`, the loop terminates.

<span class="QandA"></span>

We could just as easily have written the loop without pointers, of course, using subscripting instead. The argument most often cited in support of pointer arithmetic is that it can save execution time. However, that depends on the implementation—some C compilers actually produce better code `for` loops that rely on subscripting.

### 12.2.1 Combining the * and ++ Operators

C programmers often combine the `*` (indirection) and `++` operators in statements that process array elements. Consider the simple case of storing a value into an array element and then advancing to the next element. Using array subscripting, we might write

```C
a[i++] = j;
```

If `p` is pointing to an array element, the corresponding statement would be

```C
*p++ = j;
```

Because the postfix version of `++` takes precedence over `*`, the compiler sees this as

```C
*(p++) = j;
```

The value of `p++` is `p`. (Since we're using the postfix version of `++`, p won't be incremented until after the expression has been evaluated.) Thus, the value of `*(p++)` will be `*p`—the object to which `p` is pointing.

Of course, `*p++` isn't the only legal combination of `*` and `++`. We could write `(*p)++`, for example, which returns the value of the object that `p` points to, and then increments that object (`p` itself is unchanged). If you find this confusing, the following table may help:

<!-- START: table -->
<table>
<tr>
<th>

*Expression*

</th>
<th>

*Meaning*

</th>
</tr>
<tr>
<td>

`*p++` or `*(p++)`

</td>
<td>

Value of expression is `*p` before increment; increment `p` later

</td>
</tr>
<tr>
<td>

`(*p)++`

</td>
<td>

Value of expression is `*p` before increment: increment `*p` later

</td>
</tr>
<tr>
<td>

`*++p` or `*(++p)`

</td>
<td>

Increment `p` first; value of expression is `*p` after increment

</td>
</tr>
<tr>
<td>

`++*p` or `++(*p)`

</td>
<td>

Increment *p first; value of expression is *p after increment

</td>
</tr>
</table>
<!-- END: table -->

All four combinations appear in programs, although some are far more common than others. The one we'll see most frequently is `*p++`, which is handy in loops. Instead of writing

```C
for (p = &a[0]; p < &a[N]; p++)
    sum += *p;
```

to sum the elements of the array `a`, we could write

```C
p = &a[0];
while (p < &a[N])
    sum += *p++;
```

The `*` and `--` operators mix in the same way as `*` and `++`. For an application that combines `*` and `--`, let's return to the stack example of Section 10.2. The original version of the stack relied on an integer variable named `top` to keep track of the "top-of-stack" position in the `contents` array. Let's replace `top` by a pointer variable that points initially to element 0 of the `contents` array:

```C
int *top_ptr = &contents[0];
```

Here are the new `push` and `pop` functions (updating the other stack functions is left as an exercise):

```C
void push(int i)
{
    if(is_full())
        stack_overflow() ;
    else
        *top_ptr++ = i;
}

int pop(void)
{
    if (is_empty())
        stack_underflow() ;
    else
        return *--top_ptr;
}
```

Note that I've written `*--top_ptr`, not `*top_ptr--`, since I want `pop` to decrement `top_ptr` *before* fetching the value to which it points.


## 12.3 Using an Array Name as a Pointer

Pointer arithmetic is one way in which arrays and pointers are related, but it's not the only connection between the two. Here's another key relationship: The name of an array can be used as a pointer to the first element in the array. This relationship simplifies pointer arithmetic and makes both arrays and pointers more versatile.

For example, suppose that `a` is declared as follows:

```C
int a[10];
```

Using `a` as a pointer to the first element in the array, we can modify `a[0]`:

```C
*a = 7; /* stores 7 in a[0] */
```

We can modify `a[1]` through the pointer `a + 1`:

```C
*(a+1) = 12; /* stores 12 in a[1] */
```

In general, `a + i` is the same as `&a[1]` (both represent a pointer to element `i` of `a`) and `*(a+i)` is equivalent to `a[i]` (both represent element `i` itself). In other words, array subscripting can be viewed as a form of pointer arithmetic.

The fact that an array name can serve as a pointer makes it easier to write loops that step through an array. Consider the following loop from Section 12.2:

```C
for (p = &a[0]; p < &a[N]; p++)
    sum += *p;
```

To simplify the loop, we can replace `&a[0]` by `a` and `&a[N]` by `a + N`:

**idiom**

```C
for (p = a; p < a + N; p++)
    sum += *p;
```

<!-- START: div -->
<div class="infoBox">

<span class="warningEmoji"></span>

Although an array name can be used as a pointer, it's not possible to assign it a new value. Attempting to make it point elsewhere is an error:

```C
while(*a != 0)
    a++; /*** WRONG ***/
```

This is no great loss; we can always copy a into a pointer variable, then change the pointer variable:

```C
p = a;
while (*p != 0)
    p++;
```

</div>
<!-- END: div -->

### 12.3.1 (PROGRAM) Reversing a Series of Numbers (Revisited)

The `reverse.c` program of Section 8.1 reads 10 numbers, then writes the numbers in reverse order. As the program reads the numbers, it stores them in an array. Once all the numbers are read, the program steps through the array backwards as it prints the numbers.

The original program used subscripting to access elements of the array, Here's a new version in which I've replaced subscripting with pointer arithmetic.

```C
/********************************************************************************
 * File: reverse3.c
 * Author: K. N. King
 * Purpose: Reverses a series of numbers (pointer version)
 ********************************************************************************/

/* START: Header inclusions*/
#include <stdio.h>
/* END: Header inclusions*/

/* START: MACRO definitions*/
#define N 10
/* END: MACRO definitions*/

/* START: type definitions*/

/* END: type definitions*/

/* START: Variable declarations*/

/* END: Variable declarations*/

/* START: Function prototypes*/

/* END: Function prototypes*/

/**
 * Function name: main
 * Return type: int
 * Return value description: 
 * Parameters: void
 * Param1 descr.: 
 * Param2 descr.: 
 * Param3 descr.: 
 * Function description: 
 */
int main(void)
{
    int a[N], *p;

    printf("Enter %d numbers: ", N);
    for(p = a; p < a + N; p++)
    {
        scanf("%d", p);
    }	// for statement: get the numbers

    printf("In reverse order: ");
    for(p = a + N - 1; p >= a; p--)
    {
        printf(" %d", *p);
    }	// for statement: print the numbers in reverse order
    
    printf("\n");
    return 0;
}	//FUNCTION END: main
```

In the original program, an integer variable `i` kept track of the current position within the array. The new version replaces `i` with `p`, a pointer variable. The numbers are still stored in an array: we're simply using a different technique to keep track of where we are in the array.

Note that the second argument to `scanf` is `p`, not `&p`. Since `p` points to an array element, it's a satisfactory argument for `scanf`; `&p`, on the other hand, would be a pointer to a pointer to an array element.

### 12.3.2 Array Arguments (Revisited)

When passed to a function, an array name is always treated as a pointer. Consider the following function, which returns the largest element in an array of integers:

```C
int find_largest(int a[], int n)
{
    int i, max;

    max = a[0];
    Eor (i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
    return max;
}
```

Suppose that we call `find_largest` as follows:

```C
largest = find_largest(b, N);
```

This call causes a pointer to the first element of `b` to be assigned to `a`: the array itself isn't copied.

The fact that an array argument is treated as a pointer has some important consequences:

<!-- START: unordered-list -->
<ul>
<li>

When an ordinary variable is passed to a function, its value is copied; any changes to the corresponding parameter don't affect the variable. In contrast, an array used as an argument isn't protected against change, since no copy is made of the array itself. For example, the following function (which we first saw in Section 9.3) modifies an array by storing zero into each of its elements:

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

To indicate that an array parameter won't be changed, we can include the word `const` in its declaration:

```C
int find_largest(const int a[], int n)
{
    ...
}
```

If `const` is present, the compiler will check that no assignment to an element of `a` appears in the body of `find_largest`.

</li>
<li>

The time required to pass an array to a function doesn't depend on the size of the array. There's no penalty for passing a large array, since no copy of the array is made.

</li>
<li>

An array paramecter can be declared as a pointer if desired. For example, `find_largest` could be defined as follows:

```C
int find_largest (int *a, int n)
{
    ...
}
```

<span class="QandA"></span>

Declaring `a` to be a pointer is equivalent to declaring it to be an array; the compiler treats the declarations as though they were identical.

<!-- START: div -->
<div class="infoBox">

<span class="warningEmoji"></span>

Although declaring a parameter to be an array is the same as declaring it to be a pointer, the same isn't true for a variable. The declaration

```C
int a[10];
```

causes the compiler to set aside space for 10 integers. In contrast, the declaration

```C
int *a;
```

causes the compiler to allocate space for a pointer variable. In the latter case, `a` is not an array; attempting to use it as an array can have disastrous results. For example, the assignment

```C
*a = 0;  /*** WRONG ***/
```

will store 0 where `a` is pointing. Since we don't know where `a` is pointing, the effect on the program is undefined.

</div>
<!-- END: div -->

</li>
<li>

A function with an array parameter can be passed an array "slice"—a sequence of consecutive elements. Suppose that we want `find_largest` to locate the largest element in some portion of an array `b`, say elements `b[5]`, `...`, `b[14]`. When we call `find_largest`, we'll pass it the address of `b[5]` and the number 10, indicating that we want `find_largest` to examine 10 array elements, starting at `b[5]`:

```C
largest = find_largest (&b[5], 10);
```

</li>
</ul>
<!-- END: unordered-list -->

### 12.3.3 Using a Pointer as an Array Name

If we can use an array name as a pointer, will C allow us to subscript a pointer as though it were an array name? By now, you'd probably expect the answer to be yes, and you'd be right. Here's an example:

```C
#define N 10
...
int a[N], i, sum = 0, *p = a;
...
for (i = 0; 1 < N; i++)
    sum += p[i];
```

The compiler treats `p[1]` as `*(p+1)`, which is a perfectly legal use of pointer arithmetic. Although the ability to subscript a pointer may seem to be little more than a curiosity, we'll see in Section 17.3 that it's actually quite useful.



## Examples

- Programs: <span class="unicode_LINK_SYMBOL"></span>[./cknkCh12/cknkCh12Exmp/](./cknkCh12/cknkCh12Exmp/)

## Exercises

- Readme: <span class="unicode_LINK_SYMBOL"></span>[./cknkCh12/cknkCh12Exrc/README.md](./cknkCh12/cknkCh12Exrc/README.md)  
- Readme (html): <span class="unicode_LINK_SYMBOL"></span>[./cknkCh12/cknkCh12Exrc/cknkCh12ExrcReadme.html](./cknkCh12/cknkCh12Exrc/cknkCh12ExrcReadme.html)  
- Programs: <span class="unicode_LINK_SYMBOL"></span>[./cknkCh12/cknkCh12Exrc/](./cknkCh12/cknkCh12Exrc/)  

## Programming Projects

- Readme: <span class="unicode_LINK_SYMBOL"></span>[./cknkCh12/cknkCh12Prj/README.md](./cknkCh12/cknkCh12Prj/README.md)  
- Readme: <span class="unicode_LINK_SYMBOL"></span>[./cknkCh12/cknkCh12Prj/cknkCh12PrjReadme.html](./cknkCh12/cknkCh12Prj/cknkCh12PrjReadme.html)  
- Programs: <span class="unicode_LINK_SYMBOL"></span>[./cknkCh12/cknkCh12Prj/](./cknkCh12/cknkCh12Prj/)  

<hr class="chapterDivider"/>

</body>
</html>