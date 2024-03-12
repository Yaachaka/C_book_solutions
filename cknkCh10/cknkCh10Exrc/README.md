<html>
<head>
<title>Chapter 10 exercises</title>
<meta charset="utf-8">
<link rel="stylesheet" href="../../myStyle.css">
</head>
<body>

10 Program Organization
---

# Chapter 10 Excercises

<hr class="hr1ExrcPrj"/>

# cknkCh10Exrc001

Section 10.4

<!-- START: Problem Statement -->

The following program outline shows only function definitions and variable declarations.

```C
int a;

void f(int b)
{
    int c;
}

void g(void)
{
    int d;
    {
        int e;
    }
}

int main(void)
{
    int f;
}
```

For each of the following scopes, list all variable and parameter names visible in that scope:

a. The `f` function  
b. The `g` function  
c. The block in which `e` is declared  
d. The `main` function  

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh10Exrc001.c](./cknkCh10Exrc001.c)

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

# cknkCh10Exrc002

Section 10.4

<!-- START: Problem Statement -->

The following program outline shows only function definitions and variable declarations.

```C
int b, c;

void f(void)
{
    int b, d;
}

void g(int a)
{
    int c;
    {
        int a, d;
    }
}

int main(void)
{
    int c, d;
}
```

For each of the following scopes, list all variable and parameter names visible in that scope. If there’s more than one variable or parameter with the same name, indicate which one is visible.

a. The `f` function  
b. The `g` function  
c. The block in which `a` and `d` are declared  
d. The `main` function  

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh10Exrc002.c](./cknkCh10Exrc002.c)

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

# cknkCh10Exrc003

Section 10.4

<!-- START: Problem Statement -->

Suppose that a program has only one function (`main`). How many different variables named `i` could this program contain?

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh10Exrc003.c](./cknkCh10Exrc003.c)

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
