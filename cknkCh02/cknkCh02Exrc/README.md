
<style>
    .hr1
    {
        width: 98%;
        border-style: ridge;
        border-color: rgb(0, 0, 0);
        background: linear-gradient(violet, indigo, blue, green, yellow, orange, red, red, orange, yellow, green, blue, indigo, violet);
    }
</style>


# Chapter 02 Excercises
  
<hr class="hr1"/>
# cknkCh02Exrc001

<!-- START: Problem Statement -->

Create and run Kernighan and Ritchie's famous "hello, world" program:  

```C
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
```

Do you get a warning message from the compiler? If so, what's needed to make it go away?  

<!-- END: Problem Statement -->

# Solution:

I did not get any warning message. I even tried with `-Wall` and `-O -Wall` flags.

Anyway, a `return` statement is what is expected by the Exercise.  
The Correct code is as given below.

## Program Link

[cknkCh02Exrc001.c](cknkCh02Exrc001.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```bash
hello, world
```

<!-- END: terminal interaction or other output -->

<hr class="hr1"/>

# cknkCh02Exrc002

<!-- START: Problem Statement -->
Consider the following program:

```C
#include <stdio.h>

int main(void)
{
    printf("Parkinson's Law:\nWork expands so as to ");
    printf("fill the time\n");
    printf("available for its completion.\n");
    return 0;
}
```

(a) Identify the directives and statements in this program.  
(b) What output does the program produce?

<!-- END: Problem Statement -->

# Solution:

(a) Please check the comments in the program file (can be accessed from the program link).  
(b) Please check under Trial1 execution.  

## Program Link

[cknkCh02Exrc002.c](./cknkCh02Exrc002.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```bash
Parkinson's Law:
Work expands so as to fill the time
available for its completion.
```

<!-- END: terminal interaction or other output -->

<hr class="hr1"/>

# cknkCh02Exrc003

<!-- START: Problem Statement -->

Condense the `dweight.c` program by (1) replacing the assignments to `height`, `length`, and `width` with initializers and (2) removing the `weight` variable, instead calculating `(volume + 165) / 166` within the last `printf`.

<!-- END: Problem Statement -->

# Solution:

## Program Link

[cknkCh02Exrc003.c](./cknkCh02Exrc003.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```bash
Dimensions: 12x10x8
Volume (cubic inches): 960
Dimensional weight (pounds): 6
```

<!-- END: terminal interaction or other output -->

<hr class="hr1"/>

# cknkCh02Exrc004

<!-- START: Problem Statement -->

Write a program that declares several `int` and `float` variables -- without initializing them -- and then prints their values. Is there any pattern to the values? (Usually there isn't.)

<!-- END: Problem Statement -->

# Solution:

## Program Link

[cknkCh02Exrc004.c](./cknkCh02Exrc004.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```bash
inta_a: -1399676452, int_b: 127
float_a: -513055257696817635131392.000000, float_b: 0.000000
```

<!-- END: terminal interaction or other output -->

#### Trial1 Comments:

<!-- START: Comments -->
There is no specific pattern observed in the values of the variables declared.
<!-- END: Comments -->

<hr class="hr1"/>

# cknkCh02Exrc005

<!-- START: Problem Statement -->

Which of the following are not legal C identifiers?  
(a) `100_bottles`  
(b) `_100_bottles`  
(c) `one__hundred__bottles`  
(d) `bottles_by_the_hundred_`  

<!-- END: Problem Statement -->

# Solution:

(a) `100_bottles`: Illegal. Doesn't start with Character or underscore.  
(b) `_100_bottles`: Legal. Does start with Character or underscore.  
(c) `one__hundred__bottles`: Legal. Does start with Character or underscore.  
(d) `bottles_by_the_hundred_`: Legal. Does start with Character or underscore.  

<hr class="hr1"/>

# cknkCh02Exrc006

<!-- START: Problem Statement -->

Why is it not a good idea for an identifier to contain more than one adjacent underscore (as in `current___balance`, for example?

<!-- END: Problem Statement -->

# Solution:

For the following reasons, it is not a good idea for an identifier to contain more than one underscores:  
1. Hard to know how many underscores are there.  
2. Many identifiers related to standard libraries are with two adjacent underscores.  

<hr class="hr1"/>

# cknkCh02Exrc007

<!-- START: Problem Statement -->

Which of the following are keywords in C?  
(a) `for`  
(b) `If`  
(c) `main`  
(d) `printf`  
(e) `while`  

<!-- END: Problem Statement -->

# Solution:

Except option (b) remaining all are C keywords. `If` is not equal to `if`; latter is a C keyword.

<hr class="hr1"/>

# cknkCh02Exrc008

<!-- START: Problem Statement -->

How many token are there in the following statement?  
`answer=(3*q-p*p)/3;`

<!-- END: Problem Statement -->

# Solution:

There are a total of 14 tockens.

```
answer
=
(
3
*
q
-
p
*
p
)
/
3
;
```

Anything that can be separated from the other with space without affecting syntax wise or functionality wise is a token in C.

<hr class="hr1"/>

# cknkCh02Exrc009

<!-- START: Problem Statement -->

Insert spaces between the tokens in exercise 8 to make the statement easier to read.

<!-- END: Problem Statement -->

# Solution:

`answer = ( 3 * q - p * p ) / 3 ;`

<hr class="hr1"/>

# cknkCh02Exrc010

<!-- START: Problem Statement -->

In the `dweight.c` program (Section 2.4), which spaces are essential?

<!-- END: Problem Statement -->

# Solution:

```C
/**
 * File: dweight.c
 * Author: K. N. King
 * Purpose: Computes the dimensional weight of a 12" x 10" x 8" box
 */

#include <stdio.h> // Essential space `#include` and `<stdio.h>`

int main(void) // Essential space after `int`
{
    int height, length, width, volume, weight; // Essential space after `int`

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0; // Essential space after `return` keyword.
}
```

<hr class="hr1"/>

