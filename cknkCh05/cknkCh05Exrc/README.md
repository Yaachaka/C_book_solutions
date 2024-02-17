<html>
<head>
<title>Chapter 05 exercises</title>
<meta charset="utf-8">
<link rel="stylesheet" href="../../myStyle.css">
</head>
<body>


05 Selection Statements
---
  
# Chapter 05 Excercises
  
<hr class="hr1ExrcPrj"/>

# cknkCh05Exrc001

Section 5.1

<!-- START: Problem Statement -->

The following program fragments illustrate the relational and equality operators. Show the output produced by each, assuming that `i`, `j`, and `k` are `int` variables.

<ol type="a">
<li>

```C
i = 2; j = 3;
k = i * j == 6;
printf("%d", k);
```

</li>
<li>

```C
i = 5; j = 10; k = 1;
printf("%d", k > i < j);
```

</li>
<li>

```C
i = 3; j = 2; k = 1;
printf("%d", i < j == j < k);
```

</li>
<li>

```C
i = 3; j = 4; k = 5;
printf("%d", i % j + i < k);
```

</li>
</ol>

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh05Exrc001.c](./cknkCh05Exrc001.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
(a) 1
(b) 1
(c) 1
(d) 0
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh05Exrc002

Section 5.1

<!-- START: Problem Statement -->

The following program fragments illustrate the logical operators. Show the output produced by each, assuming that `i`, `j`, and `k` are `int` variables.

<ol type="a">
<li>

```C
i = 10; j = 5;
printf("%d", !i < j);
```

</li>
<li>

```C
i = 2; j = 1;
printf("%d", !!i + !j);
```

</li>
<li>

```C
i = 5; j = 0; k = -5;
printf("%d", i && j || k);
```

</li>
<li>

```C
i = 1; j = 2; k = 3;
printf("%d", i < j || k);
```

</li>
</ol>

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh05Exrc002.c](./cknkCh05Exrc002.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
(a) 1
(b) 1
(c) 1
(d) 1
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh05Exrc003

Section 5.1

<!-- START: Problem Statement -->

The following program fragments illustrate the short-circuit behavior of logical expressions. Show the output produced by each, assuming that `i`, `j`, and `k` are `int` variables.

<ol type="a">
<li>

```C
i = 3; j = 4; k = 5;
printf("%d ", i < j || ++j < k);
printf("%d %d %d", i, j, k);
```

</li>
<li>

```C
i = 7; j = 8; k = 9;
printf("%d ", i - 7 && j++ < k);
printf("%d %d %d", i, j, k);
```

</li>
<li>

```C
i = 7; j = 8; k = 9;
printf("%d ", (i = j) || (j = k));
printf("%d %d %d", i, j, k);
```

</li>
<li>

```C
i = 1; j = 1; k = 1;
printf("%d ", ++i || ++j && ++k);
printf("%d %d %d", i, j, k);
```

</li>
</ol>


<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh05Exrc003.c](./cknkCh05Exrc003.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
(a) 1 3 4 5
(b) 0 7 8 9
(c) 1 8 8 9
(d) 1 2 1 1
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh05Exrc004

Section 5.1

<!-- START: Problem Statement -->

Write a single expression whose value is either -1, 0, or +1, depending on whether `i` is less than or equal to, or greater than `j`, respectively.

<!-- END: Problem Statement -->

# Solution:

The expression is `(i <= j) ? -1 : ((i > j) ? 1 : 0)`.

<hr class="hr1ExrcPrj"/>

# cknkCh05Exrc005

Section 5.2

<!-- START: Problem Statement -->

Is the following `if` statement legal?

```C
if (n >= 1 <= 10)
    printf("n is between 1 and 10\n");
```

If so, what does it do when `n` is equal to 0?

<!-- END: Problem Statement -->

# Solution:

The statement is not legal/correct. For any value of `n`, `n >= 1` will either result in 0 or 1 which is less than 10. So the `if` condition always passes.

<hr class="hr1ExrcPrj"/>

# cknkCh05Exrc006

Section 5.2

<!-- START: Problem Statement -->

Is the following `if` statement legal?

```C
if (n == 1-10)
    printf("n is between 1 and 10\n");
```

If so, what does it do when `n` is equal to 5?

<!-- END: Problem Statement -->

# Solution:

The `if` condition passes only when `n` is equal to -9. So the statement is wrong.

<hr class="hr1ExrcPrj"/>

# cknkCh05Exrc007

Section 5.2

<!-- START: Problem Statement -->

What does the following statement print if `i` has the value 17? What does it print if `i` has the value -17?

```C
printf("%d\n", i >= 0 ? i : -i);
```

<!-- END: Problem Statement -->

# Solution:

Whether `i` is 17 or -17, the output will be printed as 17.

<hr class="hr1ExrcPrj"/>

# cknkCh05Exrc008

Section 5.2

<!-- START: Problem Statement -->

The following `if` statement is unnecessarily complicated. Simplify it as much as possible. (*Hint*: The entire statement can be replaced by a single assignment.)

```C
if (age >= 13)
    if (age <= 19)
        teenager = true;
    else
        teenager = false;
    else if (age < 13)
        teenager = false;
```

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh05Exrc008.c](./cknkCh05Exrc008.c)

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

<hr class="hr1ExrcPrj"/>

# cknkCh05Exrc009

Section 5.2

<!-- START: Problem Statement -->

Are the following `if` statements equivalent? If not, why not?

<table>
<thead>
<tr>
<th></th>
<th></th>
</tr>
</thead>
<tbody>
<tr>
<td>

```C
if (score >= 90)
    printf("A");
else if (score >= 80)
    printf("B");
else if (score >= 70)
    printf("C");
else if (score >= 60)
    printf("D");
else
    printf("F");
```

</td>
<td>

```C
if (score < 60)
    printf("F");
else if (score < 70)
    printf("D");
else if (score < 80)
    printf("C");
else if (score < 90)
    printf("B");
else
    printf("A");
```

</td>
</tr>
</tbody>
</table>

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh05Exrc009.c](./cknkCh05Exrc009.c)

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

<hr class="hr1ExrcPrj"/>

# cknkCh05Exrc010

Section 5.3

<!-- START: Problem Statement -->

What output does the following program fragment produce? (Assume that `i` is an integer variable.)

```C
i = 1;
switch (i % 3) {
    case 0: printf("zero");
    case 1: printf("one");
    case 2: printf("two");
}
```

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh05Exrc010.c](./cknkCh05Exrc010.c)

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

<hr class="hr1ExrcPrj"/>

# cknkCh05Exrc011

Section 5.3

<!-- START: Problem Statement -->

The following table shows telephone codes in the state of Georgia along with the largest city in each area:

|Area code|Major city|
|---|---|
|229|Albany|
|404|Atlanta|
|470|Atlanta|
|478|Macon|
|678|Atlanta|
|706|Columbus|
|762|Columbus|
|770|Atlanta|
|912|Savannah|

Write a `switch` statement whose controlling expression is the variable `area_code`. If the value of `area_code` is in the table, the `switch` statement will print the corresponding city name. Otherwise, the `switch` statement will display the message "`Area code not recognized`". Use the techniques discussed in Section 5.3 to make the `switch` statement as simple as possible.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh05Exrc011.c](./cknkCh05Exrc011.c)

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

<hr class="hr1ExrcPrj"/>

</body>
</html>
