<html>
<head>
<title>Chapter 08 exercises</title>
<meta charset="utf-8">
<link rel="stylesheet" href="../../myStyle.css">
</head>
<body>

08 Arrays
---

# Chapter 08 Excercises

<hr class="hr1ExrcPrj"/>

# cknkCh08Exrc001

Section 8.1

<!-- START: Problem Statement -->

We discussed using the expression `sizeof(a) / sizeof(a[0])` to calculate the number of elements in an array. The expression `sizeof(a) / sizeof(t)`, where `t` is the type of `a`'s elements, would also work, but it's considered an inferior technique. Why?

<!-- END: Problem Statement -->

# Solution:

That is becasue, `sizeof(a[0])` automatically detects the type of `a`'s elements. This is useful when and if there is a change in the type of `a`. In the case of, `sizeof(t)`, we will need to identify the type of `a`'s elements and update.

<hr class="hr1ExrcPrj"/>

# cknkCh08Exrc002

Section 8.1

<!-- START: Problem Statement -->

The Q&A section shows how to use a *letter* as an array subscript. Describe how to use a *digit* (in character form) as a subscript.

<!-- END: Problem Statement -->

# Solution:

Let's consider `ch` contains a digit 4 in character form i.e., `'4'`, then we can write `digit[ch - '0']` (which results in `digit[4]` for this example.)

<hr class="hr1ExrcPrj"/>

# cknkCh08Exrc003

Section 8.1

<!-- START: Problem Statement -->

Write a declaration of an array named `weekend` containing seven `bool` values. Include an initializer that makes the first and last values `true`; all other values should be `false`.

<!-- END: Problem Statement -->

# Solution:

```C
bool weekend[] = {true, false, , false, false, false, false, true};
```

<hr class="hr1ExrcPrj"/>

# cknkCh08Exrc004

Section 8.1

<!-- START: Problem Statement -->

(C99) Repeat Exercise 3, but this time use a designated initializer. Make the initializer as short as possible.

<!-- END: Problem Statement -->

# Solution:

```C
bool weekend[] = {[0] = true, [6] = true};
```

<hr class="hr1ExrcPrj"/>

# cknkCh08Exrc005

Section 8.1

<!-- START: Problem Statement -->

The Fibonacci numbers are 0, 1, 1, 2, 3, 5, 8, 13, ..., where each number is the sum of the two preceding numbers. Write a program fragment that declares an array named `fib_numbers` of length 40 and fills the array with the first 40 Fibonacci numbers. *Hint*: Fill in the first two numbers individually, then use a loop to compute the remaining numbers.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh08Exrc005.c](./cknkCh08Exrc005.c)

## Output/ExecutionLog:


### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
First 40 Fibonacci numbers: 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 10946 17711 28657 46368 75025 121393 196418 317811 514229 832040 1346269 2178309 3524578 5702887 9227465 14930352 24157817 39088169 63245986
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh08Exrc006

Section 8.2

<!-- START: Problem Statement -->

Calculators, watches, and other electronic devices often rely on seven-segment displays for numerical output. To form a digit, such devices "turn on" some of the seven segments while leaving others "off":

```
 _       _   _       _   _  _   _   _
| |   |  _|  _| |_| |_  |_   | |_| |_|
| |   | |     |   |   | | |  | | |   |
 ‾       ‾   ‾       ‾   ‾      ‾   ‾
```

Suppose that we want to set up an array that remembers which segments should be "on" for
each digit. Let's number the segments as follows:

```
 _        ₀ 
|_|     ⁵ ₆ ¹
| |     ⁴ ₃ ²
 ‾        
```

Here's what the array might look like, with each row representing one digit:

```C
const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, ...};
```

I've given you the first row of the initializer; fill in the rest.

<!-- END: Problem Statement -->

# Solution:

```C
const int segments[10][7] = {
   //0, 1, 2, 3, 4, 5, 6
    {1, 1, 1, 1, 1, 1, 0},    // 0
    {0, 1, 1, 0, 0, 0, 0},    // 1
    {1, 1, 0, 1, 1, 0, 1},    // 2
    {1, 1, 1, 1, 0, 0, 1},    // 3
    {0, 1, 1, 0, 0, 1, 1},    // 4
    {1, 0, 1, 1, 0, 1, 1},    // 5
    {1, 0, 1, 1, 1, 1, 1},    // 6
    {1, 1, 1, 0, 0, 0, 0},    // 7
    {1, 1, 1, 1, 1, 1, 1},    // 8
    {1, 1, 1, 1, 0, 1, 1},    // 9
    };
```

<hr class="hr1ExrcPrj"/>

# cknkCh08Exrc007

Section 8.2

<!-- START: Problem Statement -->

Using the shortcuts described in Section 8.2, shrink the initializer for the segments array (Exercise 6) as much as you can.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh08Exrc007.c](./cknkCh08Exrc007.c)

## Output/ExecutionLog:


### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell

```

<!-- END: terminal interaction or other output -->

#### Trial1 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

<hr class="hr1ExrcPrj"/>

# cknkCh08Exrc008

Section 8.2

<!-- START: Problem Statement -->

Write a declaration for a two-dimensional array named `temperature_readings` that stores one month of hourly temperature readings. (For simplicity, assume that a month has 30 days.) The rows of the array should represent days of the month; the columns should represent hours of the day.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh08Exrc008.c](./cknkCh08Exrc008.c)

## Output/ExecutionLog:


### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell

```

<!-- END: terminal interaction or other output -->

#### Trial1 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

<hr class="hr1ExrcPrj"/>

# cknkCh08Exrc009

Section 8.2

<!-- START: Problem Statement -->

Using the array of Exercise 8, write a program fragment that computes the average temperature for a month (averaged over all days of the month and all hours of the day).

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh08Exrc009.c](./cknkCh08Exrc009.c)

## Output/ExecutionLog:


### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell

```

<!-- END: terminal interaction or other output -->

#### Trial1 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

<hr class="hr1ExrcPrj"/>

# cknkCh08Exrc010

Section 8.2

<!-- START: Problem Statement -->

Write a declaration for an 8 × 8 `char` array named `chess_board`. Include an initializer that puts the following data into the array (one character per array element):

```
r n b q k b n r
p p p p p p p p
  .   .   .   .
.   .   .   .
  .   .   .   .
.   .   .   .
P P P P P P P P
R N B Q K B N R
```

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh08Exrc010.c](./cknkCh08Exrc010.c)

## Output/ExecutionLog:


### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell

```

<!-- END: terminal interaction or other output -->

#### Trial1 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

<hr class="hr1ExrcPrj"/>

# cknkCh08Exrc011

Section 8.2

<!-- START: Problem Statement -->

Write a program fragment that declares an 8 × 8 `char` array named `checker_board` and then uses a loop to store the following data into the array (one character per array element):

```
B R B R B R B R
R B R B R B R B
B R B R B R B R
R B R B R B R B
B R B R B R B R
R B R B R B R B
B R B R B R B R
R B R B R B R B
```

*Hint*: The element in row `i`, column `j`, should be the letter `B` if `i + j` is an even number.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh08Exrc011.c](./cknkCh08Exrc011.c)

## Output/ExecutionLog:


### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell

```

<!-- END: terminal interaction or other output -->

#### Trial1 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

<hr class="hr1ExrcPrj"/>

</body>
</html>