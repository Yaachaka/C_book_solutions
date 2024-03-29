<html>
<head>
<title>Chapter 04 exercises</title>
<meta charset="utf-8">
<link rel="stylesheet" href="../../myStyle.css">
</head>
<body>


04 Expressions
---
  
# Chapter 04 Excercises
  
<hr class="hr1ExrcPrj"/>

# cknkCh04Exrc001

Section 4.1

<!-- START: Problem Statement -->

Show the output produced by each of the following program fragments. Assume that `i`, `j`, and `k` are `int` variables.

<ol type="a">
<li>

```C
i = 5; j = 3;
printf("%d %d", i / j, i % j);
```

</li>
<li>

```C
i = 2; j = 3;
printf("%d", (i + 10) % j);
```

</li>
<li>

```C
i = 7; j = 8; k = 9;
printf("%d", (i + 10) % k / j);
```

</li>
<li>

```C
i = 1; j = 2; k = 3;
printf("%d", (i + 5) % (j + 2) / k);
```

</li>
</ol>

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh04Exrc001.c](./cknkCh04Exrc001.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
(a) 1 2
(b) 0
(c) 1
(d) 0
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh04Exrc002

Section 4.1

<!-- START: Problem Statement -->

If `i` and `j` are positive integers, does `(-i)/j` always have the same value as `-(i/j)`? Justify your answer.

<!-- END: Problem Statement -->

# Solution:

Yes, if `i` and `j` are +ve integers, `(-i)/j` will always have the same value as `-(i/j)`.

Considering *sequence point* execution (as we understood from the chapter), `(-i)/j` will evaluate to `-1 * i / j`. If we parenthesize it, it will be like `(-1) * (i / j)` which is same as `-(i/j)`.

<hr class="hr1ExrcPrj"/>

# cknkCh04Exrc003

Section 4.1

<!-- START: Problem Statement -->

What is the value of each of the following expressions in C89? (Give all possible values if an expression may have more than one value.)

<ol type="a">
<li>

`8 / 5`

</li>
<li>

`-8 / 5`

</li>
<li>

`8 / -5`

</li>
<li>

`-8 / -5`

</li>
</ol>

<!-- END: Problem Statement -->

# Solution:

From the theory we read in the chapter, following values were our expectations:

For `(a)`, the possible value is `1`, for `(b)`, the possible values are `-1` and `-2`, for `(c)`, the possible values are `-1` and `-2` and finally for `(d)`, the possible value is `1`.

## Program Link

[cknkCh04Exrc003.c](./cknkCh04Exrc003.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
(a) 1
(b) -1
(c) -1
(d) 1
```

<!-- END: terminal interaction or other output -->

#### Trial1 Comments:

<!-- START: Comments -->

The flag `-std=c89` was used.

Command:

```shell
gcc -std=c89 cknkCh04Exrc003.c
```

<!-- END: Comments -->

<hr class="hr1ExrcPrj"/>

# cknkCh04Exrc004

Section 4.1

<!-- START: Problem Statement -->

Repeat Exercise 3 for C99.

<!-- END: Problem Statement -->

# Solution:

From the theory we read in the chapter, following values were our expectations:

For `(a)` and `(d)`, the possible values are `1` and `1` respectively. For `(b)` and `(c)`, the possible values for each are `-1` and `-2`, but in C99, the result of a division is always truncated towards zero. Therefore, the possible values for both `(b)` and `(c)` are `-1` and `-1` respectively.

## Program Link

[cknkCh04Exrc003.c](./cknkCh04Exrc003.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
(a) 1
(b) -1
(c) -1
(d) 1
```

<!-- END: terminal interaction or other output -->

#### Trial1 Comments:

<!-- START: Comments -->

The program `cknkCh04Exrc003.c` was used for this exercise but the flag `-std=c89` was not used during compilation.

<!-- END: Comments -->

<hr class="hr1ExrcPrj"/>

# cknkCh04Exrc005

Section 4.1

<!-- START: Problem Statement -->

What is the value of each of the following expressions in C89? (Give all possible values if an expression may have more than one value.)

<ol type="a">
<li>

`8 % 5`

</li>
<li>

`-8 % 5`

</li>
<li>

`8 % -5`

</li>
<li>

`-8 % -5`

</li>
</ol>


<!-- END: Problem Statement -->

# Solution:

From the theory we read in the chapter, following values were our expectations:

For `(a)`, the possible value is `3`, for `(b)`, the possible values are `-3` and `2`, for `(c)`, the possible values are `3` and `-2` and finally for `(d)`, the possible values are `-3` and `2`.

## Program Link

[cknkCh04Exrc005.c](./cknkCh04Exrc005.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
(a) 3
(b) -3
(c) 3
(d) -3
```

<!-- END: terminal interaction or other output -->

#### Trial1 Comments:

<!-- START: Comments -->

The flag `-std=c89` was used.

Command:

```shell
gcc -std=c89 cknkCh04Exrc005.c
```

<!-- END: Comments -->

<hr class="hr1ExrcPrj"/>

# cknkCh04Exrc006

Section 4.1

<!-- START: Problem Statement -->

Repeat Exercise 5 for C99.

<!-- END: Problem Statement -->

# Solution:

From the theory we read in the chapter, following values were our expectations:

For `(a)`, the possible value is `3`, for `(b)`, the possible values are `-3` and `2`, for `(c)`, the possible values are `3` and `-2` and finally for `(d)`, the possible values are `-3` and `2`.

But in C99, the result of a division is always truncated towards zero. Therefore, the possible values for `(b)`, `(c)`, and `(d)` are `-3`, `3`, and `-3` respectively.

## Program Link

[cknkCh04Exrc005.c](./cknkCh04Exrc005.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
(a) 3
(b) -3
(c) 3
(d) -3
```

<!-- END: terminal interaction or other output -->

#### Trial1 Comments:

<!-- START: Comments -->

The program `cknkCh04Exrc005.c` was used for this exercise but the flag `-std=c89` was not used during compilation.

<!-- END: Comments -->

<hr class="hr1ExrcPrj"/>

# cknkCh04Exrc007

Section 4.1

<!-- START: Problem Statement -->

The algorithm for computing the UPC check digit ends with the following steps:

```
Subtract 1 from the total
Compute the remainder when the adjusted total is divided by 10.
Subtract the remainder from 9.
```

It's tempting to try to simplify the algorithm by using these steps instead:

```
Compute the remainder when the total is divided by 10.
Subtract the remainder from 10.
```

Why doesn't this technique work?

<!-- END: Problem Statement -->

# Solution:

Algorithm 2 does not work. Suppose if the total value results in a value that is multiple of 10, if we use algorithm 1, it is observed that the resulting check digit value will always be a single digit value which is necessary for UPC format. But if we use algorithm 2 when the total value is a multiple of 10, then the resulting check digit value can be 10--which is two digits, not suitable for UPC format.

For example, consider value of the total is 40. By algorithm 1, `40 - 1` is 39 then `39 % 10` is 9 and then `9 - 9` is 0. So 0 is accepted as check digit. But by algorithm 2, `40 % 10` is 0 and then `10 - 0` is 10. So 10 is not accepted as a check digit.

<hr class="hr1ExrcPrj"/>

# cknkCh04Exrc008

Section 4.1

<!-- START: Problem Statement -->

Would the `upc.c` program still work if the expression `9 - ((total - 1) % 10)` were replaced by `(10 - (total % 10)) % 10`?

<!-- END: Problem Statement -->

# Solution:

Yes, the results will be same from both the expressions.

<hr class="hr1ExrcPrj"/>

# cknkCh04Exrc009

Section 4.2

<!-- START: Problem Statement -->

Show the output produced by each of the following program fragments. Assume that `i`, `j`, and `k` are `int` variables.

<ol type="a">
<li>

```C
i = 7; j = 8;
i *= j + 1;
printf("%d %d", i, j);
```

</li>
<li>

```C
i = j = k = 1;
i += j += k;
printf("%d %d %d", i, j, k);
```

</li>
<li>

```C
i = 1; j = 2; k = 3;
i -= j -= k;
printf("%d %d %d", i, j, k);
```

</li>
<li>

```C
i = 2; j = 1; k = 0;
i *= j *= k;
printf("%d %d %d", i, j, k);
```

</li>
</ol>

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh04Exrc009.c](./cknkCh04Exrc009.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
(a) i = 63 j = 8
(b) i = 3 j = 2 k = 1
(c) i = 2 j = -1 k = 3
(d) i = 0 j = 0 k = 0
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh04Exrc010

Section 4.2

<!-- START: Problem Statement -->

Show the output produced by each of the following program fragments. Assume that `i` and `j` are `int` variables.

<ol type="a">
<li>

```C
i = 6;
j = i += i;
printf("%d %d", i, j);
```

</li>
<li>

```C
i = 5;
j = (i -= 2) + 1;
printf("%d %d", i, j);
```

</li>
<li>

```C
i = 7;
j = 6 + (i = 2.5);
printf("%d %d", i, j);
```

</li>
<li>

```C
i = 2; j = 8;
j = (i = 6) + (j = 3);
printf("%d %d", i, j);
```

</li>
</ol>

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh04Exrc010.c](./cknkCh04Exrc010.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
(a) i = 12 j = 12
(b) i = 3 j = 4
(c) i = 2 j = 8
(d) i = 6 j = 9
```

<!-- END: terminal interaction or other output -->

#### Trial1 Comments:

<!-- START: Comments -->

We got the following warning messages during compilation.

```shell
cknkCh04Exrc010.c:24:18: warning: implicit conversion from 'double' to 'int' changes value from 2.5 to 2 [-Wliteral-conversion]
   24 |     j = 6 + (i = 2.5);
      |                ~ ^~~
cknkCh04Exrc010.c:29:22: warning: multiple unsequenced modifications to 'j' [-Wunsequenced]
   29 |     j = (i = 6) + (j = 3);
      |       ~              ^
2 warnings generated.
```

<!-- END: Comments -->

<hr class="hr1ExrcPrj"/>

# cknkCh04Exrc011

Section 4.3

<!-- START: Problem Statement -->

Show the output produced by each of the following program fragments. Assume that `i`, `j`, and `k` are `int` variables.

<ol type="a">
<li>

```C
i = 1;
printf("%d ", i++ - 1);
printf("%d", i);
```

</li>
<li>

```C
i = 10; j = 5;
printf("%d ", i++ - ++j);
printf("%d %d", i, j);
```

</li>
<li>

```C
i = 7; j = 8;
printf("%d ", i++ - --j);
printf("%d %d", i, j);
```

</li>
<li>

```C
i = 3; j = 4; k = 5;
printf("%d ", i++ - j++ + --k);
printf("%d %d %d", i, j, k);
```

</li>
</ol>

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh04Exrc011.c](./cknkCh04Exrc011.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
(a) 0 2
(b) 4 11 6
(c) 0 8 7
(d) 3 4 5 4
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh04Exrc012

Section 4.3

<!-- START: Problem Statement -->

Show the output produced by each of the following program fragments. Assume that `i` and `j` are `int` variables.

<ol type="a">
<li>

```C
i = 5;
j = ++i * 3 - 2;
printf("%d %d", i , j);
```

</li>
<li>

```C
i = 5;
j = 3 - 2 * i++;
printf("%d %d", i , j);
```

</li>
<li>

```C
i = 7;
j = 3 * i-- + 2;
printf("%d %d", i , j);
```

</li>
<li>

```C
i = 7;
j = 3 + --i * 2;
printf("%d %d", i , j);
```

</li>
</ol>

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh04Exrc012.c](./cknkCh04Exrc012.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
(a) 6 16
(b) 6 -7
(c) 6 23
(d) 6 15
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh04Exrc013

Section 4.3

<!-- START: Problem Statement -->

Only one of the expressions `++i` and `i++` is exactly the same as `(i += 1);` which is it? Justify your answer.

<!-- END: Problem Statement -->

# Solution:

`i++` is exactly same as `(i += 1);`.

In case of `++i`, `i` value is first incremented and then used.

In case of `i++`, `i` value is first used and then incremented.

In case of `(i += 1);`, which expands to `(i = i + (1))`, for the *rvalue* evaluation, old value of `i` is used and then is assigned to *lvalue* i.e., `i`--so `i` got incremented later.

<hr class="hr1ExrcPrj"/>

# cknkCh04Exrc014

Section 4.4

<!-- START: Problem Statement -->

Simply parentheses to show how a C compiler would interpret each of the following expressions.

a. `a * b - c * d + e`  
b. `a / b % c / d`  
c. `- a - b + c - + d`  
d. `a * - b / c - d`   

<!-- END: Problem Statement -->

# Solution:

a. `a * b - c * d + e`: `(((a * b) - (c * d)) + e)`  
b. `a / b % c / d`: `(((a / b) % c) / d)`  
c. `- a - b + c - + d`: `((((-a) - b) + c) - (+d))`  
d. `a * - b / c - d`: `(((a * (-b)) / c) - d)`   

<hr class="hr1ExrcPrj"/>

# cknkCh04Exrc015

Section 4.5

<!-- START: Problem Statement -->

Give the values of `i` and `j` after each of the following expression statements has been executed. (Assume that `i` has the value 1 initially and `j` has the value 2.)

a. `i += j;`  
b. `i--;`  
c. `i * j / i;`  
d. `i % ++j`;  

<!-- END: Problem Statement -->

# Solution:

Assuming all the statements are in a single program i.e., values of `i` and `j` resulted from one expression are the initial values in the next expression.

a. `i += j;`: `i = 3, j = 2`.  
b. `i--;`: `i = 2, j = 2`.  
c. `i * j / i;` `i = 2, j = 2`. No side effect operations occured.  
d. `i % ++j`; `i = 2, j = 3`.  

<hr class="hr1ExrcPrj"/>

</body>
</html>
