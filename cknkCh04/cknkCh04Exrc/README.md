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



<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh04Exrc004.c](./cknkCh04Exrc004.c)

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

# cknkCh04Exrc005

Section 4.1

<!-- START: Problem Statement -->



<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh04Exrc005.c](./cknkCh04Exrc005.c)

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

# cknkCh04Exrc006

Section 4.1

<!-- START: Problem Statement -->



<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh04Exrc006.c](./cknkCh04Exrc006.c)

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

# cknkCh04Exrc007

Section 4.1

<!-- START: Problem Statement -->



<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh04Exrc007.c](./cknkCh04Exrc007.c)

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

# cknkCh04Exrc008

Section 4.1

<!-- START: Problem Statement -->



<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh04Exrc008.c](./cknkCh04Exrc008.c)

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
