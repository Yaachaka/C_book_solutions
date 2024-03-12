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

<!-- START: ordered-list -->
<ol type="a">
<li>

The `f` function

- External variable `a` is visible inside the function `f`.  
- Parameter variable `b` is visible throughout the function `f` and has automatic storage duration.  
- Local variable `c` is visible inside the function `f` from the line of declaration to the end of the function `f`. And the variable has automatic storage duration.  

</li>
<li>

The `g` function

- External variable `a` is visible inside the function `g`.  
- Local variable `d` is visible inside the function `g` from the line of declaration to the end of the function `g`. And the variable has automatic storage duration. The variable is visible inside any block of the function `g` that appear after the declaration of the variable.  
- Local variable `e` is visible only to the block of function `g` in which its duration is only until the end of the block (not the function block).   

</li>
<li>

The block in which `e` is declared

*Note: The answer given for option `(b)` is applicable here too. In brief, external variable `a`, local variable `d` (declared in function `g`) and local variable `e` (declared inside the block inside of function `g`) are visible to the block.*

</li>
<li>

The `main` function

External variable `a` and the local variable `f` are visible inside the `main` function.

</li>
</ol>
<!-- END: ordered-list -->

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

<!-- START: ordered-list -->
<ol type="a">
<li>

The `f` function

- The external variable `c` is visible.  
- The local variable `b` hides the external variable `b` and is visible throught the function.  
- The local variable `d` is visible inside the function.  

</li>
<li>

The `g` function

- External variable `b` is visible throughout the function `g` without conflicts.  
- External variable `c` is hidden by the local variable `c`. And the local variable `c` is visible throughout the function.  
- Parametric variable `a` is visible till the end of the function excluding the block inside the function. Because the local variable `a` declared inside the internal block of the function hides the parametric variable `a`. Visibility of the local variable `a` is limited to the internal block of the function.  
- Local variable `d` is visible only inside the internal block of the function and is not visible to the entire function. Local variable `d` declared inside the function `f` is different from the local variable `d` declared inside the internal block of the function `g`.  

</li>
<li>

The block in which `a` and `d` are declared

*Note: The answer provided in option `(b)` is applicable here also.*

</li>
<li>

The `main` function

- External variable `b` is visible in the `main` function.  
- External variable `c` is hidden by the local variable `c` of the `main` function. Local variable `c` is visible throught the `main` function.  
- Local variable `d` is visible throughout the `main` function. This variable is different from the ones in functions `f` or `g`.  

</li>
</ol>
<!-- END: ordered-list -->

<hr class="hr1ExrcPrj"/>

# cknkCh10Exrc003

Section 10.4

<!-- START: Problem Statement -->

Suppose that a program has only one function (`main`). How many different variables named `i` could this program contain?

<!-- END: Problem Statement -->

# Solution:

There can be any number of variables named `i` exist in the program since there can be any number of blocks in the one function.

<hr class="hr1ExrcPrj"/>

</body>
</html>
