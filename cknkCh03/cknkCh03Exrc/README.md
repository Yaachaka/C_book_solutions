<html>
<head>
<title>Chapter 03 exercises</title>
<meta charset=utf-8>
<link rel=stylesheet href=../../myStyle.css>
</head>
<body>


# Chapter 03 Excercises
  
<hr class="hr1"/>

# cknkCh03Exrc001

Section 3.1

<!-- START: Problem Statement -->

What output do the following calls of `printf` produce?  

<ol type="a">

<li>

```C
printf("%6d,%4d", 86, 1040);
```

</li>

<li>

```C
printf("%12.5e", 30.253);
```

</li>

<li>

```C
printf("%.4f", 83.162);
```

</li>

<li>

```C
printf("%-6.2g", .0000009979);
```

</li>

</ol>

<!-- END: Problem Statement -->

# Solution:

Note: We wrote a single program to see the output of  all four statements; because of which we made some changes in the statements making sure the purpose is met. Changes are:  
- Adding pipe (`|`) characters to see the spaces.  
- Adding new line characters (`\n`) for each statement.  

## Program Link

[cknkCh03Exrc001.c](./cknkCh03Exrc001.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
|    86,1040|
| 3.02530e+01|
|83.1620|
|1e-06 |
```

<!-- END: terminal interaction or other output -->

#### Trial1 Comments:

<!-- START: Comments -->

The output of the statements were as shown above while the expectation was

```shell
|    86,1040|
|  0.30253e+2|
|83.1620|
|99.79e-8|
```

The difference between the expected and actual output are acceptable (/negligible).

<!-- END: Comments -->

<hr class="hr1"/>

# cknkCh03Exrc002

Section 3.1

<!-- START: Problem Statement -->

Write calls of `printf` that display a `float` variable `x` in the following formats.  

<ol type="a">
<li>

Exponential notation: left-justified in a field of size 8, one digit after the decimal point.

</li>
<li>

Exponential notation; right-justified in a field of size 10; six digits after the decimal point.

</li>
<li>

Fixed decimal notation; left-justified in a field of size 8; three digits after the decimal point.

</li>
<li>

Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal point.

</li>
</ol>
<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh03Exrc002.c](./cknkCh03Exrc002.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
a) |9.1e+02 |
b) |9.124560e+02|
c) |912.456 |
d) |   912|
```

<!-- END: terminal interaction or other output -->

<hr class="hr1"/>

# cknkCh03Exrc003

Section 3.2

<!-- START: Problem Statement -->

For each of the following pairs of `scanf` format strings, indicate whether or not the two strings are equivalent. If they're not, show how they can be distinguished.

<ol type="a">
<li>

`"%d"` versus `" %d"`

</li>
<li>

`"%d-%d-%d"` versus `"%d- %d- %d"`

</li>
<li>

`"%f"` versus `"%f "`

</li>
<li>

`"%f,%f"` versus `"%f,%f"`

</li>
</ol>

<!-- END: Problem Statement -->

# Solution:

<ol type="a">
<li>

`"%d"` versus `" %d"`: *equivalent*.

For both `"%d"` and `" %d"`, user can enter any number of spaces before or after the integer values. White-space character in a format string doesn’t force the input to contain white-space characters

Please refer *Section 3.2.2 Ordinary Characters in Format Strings*.

</li>
<li>

`"%d-%d-%d"` versus `"%d- %d- %d"`: *equivalent*.

For both `"%d-%d-%d"` and `"%d- %d- %d"`, user can enter any number of space-characters before each `%d` but both instances of `-` character shall immediately follow the integer values entered.

Please refer *Section 3.2.2 Ordinary Characters in Format Strings*.

</li>
<li>

`"%f"` versus `"%f "`: *equivalent*.

Justification is same as the justification given for `(a)`.

</li>
<li>

`"%f,%f"` versus `"%f, %f"`: *equivalent*.

Justification is same as the justification given for `(b)`.

</li>
</ol>

<hr class="hr1"/>

# cknkCh03Exrc004

Section 3.2

<!-- START: Problem Statement -->

Suppose that we call `scanf` as follows:

```C
scanf("%d%f%d", &i, &x, &j);
```

If the user enters

```shell
10.3 5 6
```

what will be the values of `i`, `x`, and `j` after the call? (Assume that `i` and `j` are `int` variables and `x` is a `float` variable.)

<!-- END: Problem Statement -->

# Solution:

Values will be `i` = `10`, `x` = `0.3`, and `j` = `5`. `6` will be used in the next call of `scanf`.

The moment `.` was detected, `i` is stored with the value `10` and `.` was put back. For the next item i.e., `%f`, `.3` is read into `x`. Next available non-space-character was `5` which was loaded to `j`.

<hr class="hr1"/>

# cknkCh03Exrc005

Section 3.2

<!-- START: Problem Statement -->

Suppose that we call `scanf` as follows:

```C
scanf("%f%d%f", &x, &i, &y);
```

If the user enters

```shell
12.3 45.6 789
```

what will be the values of `x`, `i`, and `y` after the call? (Assume that `x` and `y` are `float` variables and `i` is an `int` variable.)

<!-- END: Problem Statement -->

# Solution:

Values will be `x` = `12.3`, `i` = `45`, and `y` = `0.6`. And `789` will be used in the next call of `scanf`.

<hr class="hr1"/>

# cknkCh03Exrc006

Section 3.2

<!-- START: Problem Statement -->

Show how to modify the `addfrac.c` program of Section 3.2 so that the user is allowed to enter fractions that contain spaces before and after each `/` character.

<!-- END: Problem Statement -->

# Solution:

The following code of `addfrac.c` is as given in the section 3.2

```C
/**
 * file: addfrac.c
 * Purpose: Adds two fractions
 * Author: K. N. King
 */

#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
```

The modification needed as required by this exercise is as follows (i.e., in format strings of `scanf` calls):

```C
    printf("Enter first fraction: ");
    scanf("%d / %d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d / %d", &num2, &denom2);
```

<hr class="hr1"/>

</body>
</html>
