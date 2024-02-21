<html>
<head>
<title>Chapter 07 exercises</title>
<meta charset="utf-8">
<link rel="stylesheet" href="../../myStyle.css">
</head>
<body>

07 Basic Types
---

# Chapter 07 Excercises

<hr class="hr1ExrcPrj"/>

# cknkCh07Exrc001

Section 7.1

<!-- START: Problem Statement -->

Give the decimal value of each of the following integer constants.  

a. 077  
b. 0x77  
c. OXABC  

<!-- END: Problem Statement -->

# Solution:

a. 077 = 63  
b. 0x77 = 119  
c. OXABC = 2748  

<hr class="hr1ExrcPrj"/>

# cknkCh07Exrc002

Section 7.2

<!-- START: Problem Statement -->

Which of the following are not legal constants in C? Classify each legal constant as either integer or floating-point.  

a. 010E2  
b. 32.1E+5  
c. 0790  
d. 100_000  
e. 3.978e-2  

<!-- END: Problem Statement -->

# Solution:

a. 010E2: My understanding was that there was no provision for writing floating-point numbers in octal form. But compiler does not seem to throw any warning or error. Therefore, this constant can be categorised as valid floating point.  
b. 32.1E+5: Valid constant of floating point category.  
c. 0790: Invalid constant. Preceding with 0 to represent octal form but contains digit 9.  
d. 100_000: Invalid constant. Constant expressions cannot have underscore in it.  
e. 3.978e-2: Valid floating-point constant.  

<hr class="hr1ExrcPrj"/>

# cknkCh07Exrc003

Section 7.2

<!-- START: Problem Statement -->

Which of the following are not legal types in C?  

a. `short unsigned int`  
b. `short float`  
c. `long double`  
d. `unsigned long`  

<!-- END: Problem Statement -->

# Solution:

Except `(b)`, remaining are valid types.

<hr class="hr1ExrcPrj"/>

# cknkCh07Exrc004

Section 7.3

<!-- START: Problem Statement -->

If `c` is a variable of type `char`, which one of the following statements is illegal?  

a. `i += c; /* i has type int */`  
b. `c = 2 * c - 1;`  
c. `putchar(c);`  
d. `printf(c);`  

<!-- END: Problem Statement -->

# Solution:

a. `i += c; /* i has type int */`: Valid statement. Integer equivalent of `c` will be used in the computation.  
b. `c = 2 * c - 1;`: Invalid. The *rvalue* can result in value beyond 127. Since `c` is `unsigned`, value beyond 127 will result in negative values. There are no character representations for negative values in ASCII as per my understanding.   
c. `putchar(c);`: Valid.  
d. `printf(c);`: Invalid. Invalid syntax usage of `printf` statement (there is no format string).  

<hr class="hr1ExrcPrj"/>

# cknkCh07Exrc005

Section 7.3

<!-- START: Problem Statement -->

Which one of the following is not a legal way to write the number 65? (Assume that the character set is ASCII.)  

a. `'A'`  
b. `0b1000001`  
c. `0101`  
d. `0x41`  

<!-- END: Problem Statement -->

# Solution:

All of them are valid.

<hr class="hr1ExrcPrj"/>

# cknkCh07Exrc006

Section 7.3

<!-- START: Problem Statement -->

For each of the following items of data, specify which one of the types `char`, `short`, `int`, or `long` is the smallest one guaranteed to be large enough to store the item.

a. Days in a month  
b. Days in a year  
c. Minutes in a day  
d. Seconds in a day  

<!-- END: Problem Statement -->

# Solution:

a. Days in a month: `char`  
b. Days in a year: `short`  
c. Minutes in a day: `short`  
d. Seconds in a day: `int`  

<hr class="hr1ExrcPrj"/>

# cknkCh07Exrc007

Section 7.3

<!-- START: Problem Statement -->

For each of the following character escapes, give the equivalent octal escape. (Assume that the character set is ASCII.) You may wish to consult Appendix E, which lists the numerical codes for ASCII characters.  

a. `\b`  
b. `\n`  
c. `\r`  
d. `\t`  

<!-- END: Problem Statement -->

# Solution:

a. `\b`: 010  
b. `\n`: 012  
c. `\r`: 015  
d. `\t`: 011  

<hr class="hr1ExrcPrj"/>

# cknkCh07Exrc008

Section 7.3

<!-- START: Problem Statement -->

Repeat Exercise 7, but give the equivalent hexadecimal escape.

<!-- END: Problem Statement -->

# Solution:

a. `\b`: 0x08  
b. `\n`: 0x0A  
c. `\r`: 0x0F  
d. `\t`: 0x09  

<hr class="hr1ExrcPrj"/>

# cknkCh07Exrc009

Section 7.4

<!-- START: Problem Statement -->

Suppose that `i` and `j` are variables of type `int`. What is the type of the expression `i / j + 'a'`?

<!-- END: Problem Statement -->

# Solution:

`int`

Steps:

`i / j + 'a'`  
`(int / int) + char`  
`int + char`  
`int + int`: implicit conversion of `char` to `int`.  
`int`

<hr class="hr1ExrcPrj"/>

# cknkCh07Exrc010

Section 7.4

<!-- START: Problem Statement -->

Suppose that `i` is a variable of type `int`, `j` is a variable of type `long`, and `k` is a variable of type `unsigned int`. What is the type of the expression `i + (int) j * k`?

<!-- END: Problem Statement -->

# Solution:

`unsigned int`

Steps:

`i + (int) j * k`  
`(int + int) * unsigned int`  
`int * unsigned int`  
`unsigned int`  

<hr class="hr1ExrcPrj"/>

# cknkCh07Exrc011

Section 7.4

<!-- START: Problem Statement -->

Suppose that `i` is a variable of type `int`, `f` is a variable of type `float`, and `d` is a variable of type `double`. What is the type of the expression `i * f / d`?

<!-- END: Problem Statement -->

# Solution:

`double`

Steps:

`i * f / d`  
`(int * float) / double`  
`float / double`  
`double`  

<hr class="hr1ExrcPrj"/>

# cknkCh07Exrc012

Section 7.4

<!-- START: Problem Statement -->

Suppose that `i` is a variable of type `int`, `f` is a variable of type `float`, and `d` is a variable of type `double`. Explain what conversions take place during the execution of the following statement:

```C
d = i + f;
```

<!-- END: Problem Statement -->

# Solution:

`double`

Steps:

`d = i + f;`  
`double = int + float;`  
`double = float`: implicit conversion on the RHS during computation  
`double = double`: implicit conversion on RHS during assignment.  

<hr class="hr1ExrcPrj"/>

# cknkCh07Exrc013

Section 7.4

<!-- START: Problem Statement -->

Assume that a program contains the following declarations:

```C
char c = '\1';
short s = 2;
int i = -3;
long m = 5;
float f = 6.5f;
double d = 7.5;
```

Give the value and the type of each expression listed below.  

a. `c * i`  
b. `s + m`  
c. `f / c`  
d. `d / s`  
e. `f - d`  
f. `(int) f`  

<!-- END: Problem Statement -->

# Solution:

<ol type="a">
<li>

`c * i`  

`c` is assigned with an octal escape sequence value which is equicalent to decimal value 1. `c` type gets converetd to `int` from `char` during computation because `i` is an `int`. Finally, the resulting data type of the expression will be `int`. And the computed value will be -3.

</li>
<li>

`s + m`  

`short + long` --> `long + long` --> `long`. And the value will be 7.

</li>
<li>

`f / c`  

`float / char` --> `float / float` --> `float`. And the final value will be 6.5f.

</li>
<li>

`d / s`  

`double / short` --> `double / double` --> `double`. And the final value will be 3.75f.

</li>
<li>

`f - d`  

`float - double` --> `double - double` --> `double`. And the value will be -1.0.

</li>
<li>

`(int) f`  

Type will be `int` and the value will be 6.

</li>
</ol>

<hr class="hr1ExrcPrj"/>

# cknkCh07Exrc014

Section 7.4

<!-- START: Problem Statement -->

Does the following statement always compute the fractional part of `f` correctly (assuming
that `f` and `frac part` are `float` variables)?

```C
frac_part = f - (int) f;
```

If not, what's the problem?

<!-- END: Problem Statement -->

# Solution:

Will not always compute the correct value. It fails when the value of `f` is greater than the maximum value an `int` can hold.

<hr class="hr1ExrcPrj"/>

# cknkCh07Exrc015

Section 7.5

<!-- START: Problem Statement -->

Use `typedef` to create types named `Int8`, `Int16`, and `Int32`. Define the types so that they represent 8-bit, 16-bit, and 32-bit integers on your machine.

<!-- END: Problem Statement -->

# Solution:

```C
typedef char Int8;
typedef short Int16;
typedef int Int32;
```

<hr class="hr1ExrcPrj"/>

</body>
</html>