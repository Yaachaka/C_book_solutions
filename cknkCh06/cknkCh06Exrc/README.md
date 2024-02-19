<html>
<head>
<title>Chapter 06 exercises</title>
<meta charset="utf-8">
<link rel="stylesheet" href="../../myStyle.css">
</head>
<body>

06 Loops
---

# Chapter 06 Excercises

<hr class="hr1ExrcPrj"/>

# cknkCh06Exrc001

Section 6.1

<!-- START: Problem Statement -->

What output does the following program fragment produce?

```C
i = 1;
while (i <= 128){
    printf("%d ", i);
    i *= 2;
}
```

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh06Exrc001.c](./cknkCh06Exrc001.c)

## Output/ExecutionLog:


### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
1 2 4 8 16 32 64 128 
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh06Exrc002

Section 6.2

<!-- START: Problem Statement -->

What output does the following program fragment produce?

```C
i = 9384;
do {
    printf("%d ", i);
    i /= 10;
} while (i > 0);
```

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh06Exrc002.c](./cknkCh06Exrc002.c)

## Output/ExecutionLog:


### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
9384 938 93 9 
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh06Exrc003

Section 6.3

<!-- START: Problem Statement -->

What output does the following for statement produce?

```C
for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
    printf("%d ", i);
```

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh06Exrc003.c](./cknkCh06Exrc003.c)

## Output/ExecutionLog:


### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
5 4 3 2 
```

<!-- END: terminal interaction or other output -->

#### Trial1 Comments:

<!-- START: Comments -->

We got warning during compilation.

```shell
cknkCh06Exrc003.c:12:30: warning: relational comparison result unused [-Wunused-comparison]
   12 |     for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
      |                            ~~^~~
1 warning generated.
```

<!-- END: Comments -->

# Exercise Comment:

<!-- START: Comments -->

Note: (From Section 6.3: The Comma Operator). Consider a comma expression `expr1, expr2` in a `for` statement at any (*initialzation* or *test* or *updater*) fields; where `expr1` and `expr2` are any two expressions. A comma expression is evaluated in two steps: First, `expr1` is evaluated and its value is discarded. Second, `expr2` is evaluated; its value is the value of the entire expression. Evaluating `expr1` should always have a side effect; if it doesn't, then `expr1` serves no purpose.

<!-- END: Comments -->

<hr class="hr1ExrcPrj"/>

# cknkCh06Exrc004

Section 6.3

<!-- START: Problem Statement -->

Which one of the following statements is not equivalent to the other two (assuming that the loop bodies are the same)?

<ol type="a">
<li>

```C
for (i = 0; i < 10； i++) ...
```

</li>
<li>

```C
for (i = 0; i < 10; ++i) ...
```

</li>
<li>

```C
for (i = 0; i++ < 10; ) ...
```

</li>
</ol>

<!-- END: Problem Statement -->

# Solution:

Option `(c)` is not equivalent to the other two options. Because, in the case of `(c)`, the `i` gets incremented before entering into the body of the `for` loop in the first iteration itself. That will change the behavior of the body compared to other two cases (`(a)` and `(b)`).

<hr class="hr1ExrcPrj"/>

# cknkCh06Exrc005

Section 6.3

<!-- START: Problem Statement -->

Which one of the following statements is not equivalent to the other two (assuming that the loop bodies are the same)?

<ol type="a">
<li>

```C
while (i < 10) {...}
```

</li>
<li>

```C
for (; i < 10;) {...}
```

</li>
<li>

```C
do {...} while (i < 10);
```

</li>
</ol>

<!-- END: Problem Statement -->

# Solution:

Option `(c)` is not equivalent to the other two. Let's say `i` is equal to 10 before reaching these looping statements. Control never gors into the body in the first two cases.

<hr class="hr1ExrcPrj"/>

# cknkCh06Exrc006

Section 6.3

<!-- START: Problem Statement -->

Translate the program fragment of Exercise 1 into a single `for` statement.

<!-- END: Problem Statement -->

# Solution:

```C
for (i = 1; i <= 128; i *= 2){
    printf("%d ", i);
}
```

<hr class="hr1ExrcPrj"/>

# cknkCh06Exrc007

Section 6.3

<!-- START: Problem Statement -->

Translate the program fragment of Exercise 2 into a single `for` statement.

<!-- END: Problem Statement -->

# Solution:

```C
for (i = 9384; i > 0; i /= 10) {
    printf("%d ", i);
}
```

<hr class="hr1ExrcPrj"/>

# cknkCh06Exrc008

Section 6.3

<!-- START: Problem Statement -->

What output does the following `for` statement produce?

```C
for (i = 10; i >= 1; i /= 2)
    printf("%d ", i++);
```

<!-- END: Problem Statement -->

# Solution:

It is an infinite loop with the following output:

```shell
10 5 3 2 1 1 1 1 1 1 1 1 1 1 1 ...
```

<hr class="hr1ExrcPrj"/>

# cknkCh06Exrc009

Section 6.3

<!-- START: Problem Statement -->

Translate the `for` statement of Exercise 8 into an equivalent `while` statement. You will need one statement in addition to the `while` loop itself.

<!-- END: Problem Statement -->

# Solution:

```C
i = 10;
while (i >= 1)
{
    printf("%d ", i++);
     i /= 2;
}
```

<hr class="hr1ExrcPrj"/>

# cknkCh06Exrc010

Section 6.4

<!-- START: Problem Statement -->

Show how to replace a `continue` statement by an equivalent `goto` statement.

<!-- END: Problem Statement -->

# Solution:

Code fragment with `continue` statement:

```C
for (i = 10; i > 1; i++)
{
    printf("%d ", i++);
    if(i%2)
        continue;
    printf("Hello there!!!");
}

```

Code fragment with `goto` statement.

```C
for (i = 10; i > 1; i++)
{
    printf("%d ", i++);
    if(i%2)
        goto dest1;
    printf("Hello there!!!");
    dest1:;
}
```

<hr class="hr1ExrcPrj"/>

# cknkCh06Exrc011

Section 6.4

<!-- START: Problem Statement -->

What output does the following program fragment produce?

```C
sum = 0;
for (i = 0; i < 10;i++){
    if(i % 2)
        continue;
    sum += i;
}
printf("%d\n", sum);
```

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh06Exrc011.c](./cknkCh06Exrc011.c)

## Output/ExecutionLog:


### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
20
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh06Exrc012

Section 6.4

<!-- START: Problem Statement -->

The following "prime-testing" loop appeared in Section 6.4 as an example:

```C
for (d = 2; d < n; d++)
    if (n % d == 0)
        break;
```

This loop isn't very efficient. It's not necessary to divide `n` by all numbers between 2 and `n-1` to determine whether it's prime. In fact, we need only check divisors up to the square root of `n`. Modify the loop to take advantage of this fact. *Hint*: Don't try to compute the square root of `n`; instead, compare `d * d` with `n`.

<!-- END: Problem Statement -->

# Solution:

```C
for (d = 2; d * d <= n; d++)
    if (n % d == 0)
        break;
```

<hr class="hr1ExrcPrj"/>

# cknkCh06Exrc013

Section 6.5

<!-- START: Problem Statement -->

Rewrite the following loop so that its body is empty:

```C
for (n = 0; m > 0; n++)
    m /= 2;
```

<!-- END: Problem Statement -->

# Solution:

```C
for (n = 0; m /= 2; n++);
```
<hr class="hr1ExrcPrj"/>

# cknkCh06Exrc014

Section 6.5

<!-- START: Problem Statement -->

Find the error in the following program fragment and fix it.

```C
if(n % 2 == 0)；
    printf("n is even\n");
```

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh06Exrc014.c](./cknkCh06Exrc014.c)

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