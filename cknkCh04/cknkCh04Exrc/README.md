<html>
<head>
<title>Chapter 04 exercises</title>
<meta charset=utf-8>
<link rel=stylesheet href=../../myStyle.css>
</head>
<body>


04 Expressions
---
  
# Chapter 04 Excercises
  
<hr class="hr1"/>

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

<hr class="hr1"/>

# cknkCh04Exrc002

Section 4.1

<!-- START: Problem Statement -->

If `i` and `j` are positive integers, does `(-i)/j` always have the same value as `-(i/j)`? Justify your answer.

<!-- END: Problem Statement -->

# Solution:

Yes, if `i` and `j` are +ve integers, `(-i)/j` will always have the same value as `-(i/j)`.

Considering *sequence point* execution (as we understood from the chapter), `(-i)/j` will evaluate to `-1 * i / j`. If we parenthesize it, it will be like `(-1) * (i / j)` which is same as `-(i/j)`.

<hr class="hr1"/>

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

<hr class="hr1"/>

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

<hr class="hr1"/>

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

<hr class="hr1"/>

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

<hr class="hr1"/>

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

<hr class="hr1"/>

# cknkCh04Exrc008

Section 4.1

<!-- START: Problem Statement -->

Would the `upc.c` program still work if the expression `9 - ((total - 1) % 10)` were replaced by `(10 - (total % 10)) % 10`?

<!-- END: Problem Statement -->

# Solution:

Yes, the results will be same from both the expressions.

<hr class="hr1"/>

# cknkCh04Exrc009

Section 4.2

<!-- START: Problem Statement -->



<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh04Exrc009.c](./cknkCh04Exrc009.c)

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

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell

```

<!-- END: terminal interaction or other output -->

#### Trial2 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell

```

<!-- END: terminal interaction or other output -->

#### Trial3 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

# Exercise Comment:

<!-- START: Comments -->

<!-- END: Comments -->

<hr class="hr1"/>

# cknkCh04Exrc010

Section 4.2

<!-- START: Problem Statement -->



<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh04Exrc010.c](./cknkCh04Exrc010.c)

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

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell

```

<!-- END: terminal interaction or other output -->

#### Trial2 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell

```

<!-- END: terminal interaction or other output -->

#### Trial3 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

# Exercise Comment:

<!-- START: Comments -->

<!-- END: Comments -->

<hr class="hr1"/>

# cknkCh04Exrc011

Section 4.3

<!-- START: Problem Statement -->



<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh04Exrc011.c](./cknkCh04Exrc011.c)

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

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell

```

<!-- END: terminal interaction or other output -->

#### Trial2 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell

```

<!-- END: terminal interaction or other output -->

#### Trial3 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

# Exercise Comment:

<!-- START: Comments -->

<!-- END: Comments -->

<hr class="hr1"/>

# cknkCh04Exrc012

Section 4.3

<!-- START: Problem Statement -->



<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh04Exrc012.c](./cknkCh04Exrc012.c)

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

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell

```

<!-- END: terminal interaction or other output -->

#### Trial2 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell

```

<!-- END: terminal interaction or other output -->

#### Trial3 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

# Exercise Comment:

<!-- START: Comments -->

<!-- END: Comments -->

<hr class="hr1"/>

# cknkCh04Exrc013

Section 4.3

<!-- START: Problem Statement -->



<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh04Exrc013.c](./cknkCh04Exrc013.c)

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

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell

```

<!-- END: terminal interaction or other output -->

#### Trial2 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell

```

<!-- END: terminal interaction or other output -->

#### Trial3 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

# Exercise Comment:

<!-- START: Comments -->

<!-- END: Comments -->

<hr class="hr1"/>

# cknkCh04Exrc014

Section 4.4

<!-- START: Problem Statement -->



<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh04Exrc014.c](./cknkCh04Exrc014.c)

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

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell

```

<!-- END: terminal interaction or other output -->

#### Trial2 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell

```

<!-- END: terminal interaction or other output -->

#### Trial3 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

# Exercise Comment:

<!-- START: Comments -->

<!-- END: Comments -->

<hr class="hr1"/>

# cknkCh04Exrc015

Section 4.5

<!-- START: Problem Statement -->



<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh04Exrc015.c](./cknkCh04Exrc015.c)

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

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell

```

<!-- END: terminal interaction or other output -->

#### Trial2 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell

```

<!-- END: terminal interaction or other output -->

#### Trial3 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

# Exercise Comment:

<!-- START: Comments -->

<!-- END: Comments -->

<hr class="hr1"/>


</body>
</html>
