<html>
<head>
<title>Chapter 07 Programming Projects</title>
<meta charset="utf-8">
<link rel="stylesheet" href="../../myStyle.css">
</head>
<body>

07 Basic Types
---

# Chapter 07 Programming Projects

<hr class="hr1ExrcPrj"/>

# cknkCh07Prj001

<!-- START: Problem Statement -->

The `square2.c` program of Section 6.3 will fail (usually by printing strange answers) if `i * i` exceeds the maximum `int` value. Run the program and determine the smallest value of `n` that causes failure. Try changing the type of `i` to `short` and running the program again. (Don't forget to update the conversion specifications in the call of `printf`!) Then try `long`. From these experiments, what can you conclude about the number of bits used to store integer types on your machine?

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh07Prj001.c](./cknkCh07Prj001.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
This program is to determine the smallest value of n for which value of `i * i` can't be stored correctly in specified integer types.

Testing for `short` type.
Failed at n equal to 182 with (i * i) value of -32412.
Last successfull storage was at n = 181 with (I * I) value of 32761.

Testing for `int` type.
Failed at n equal to 46341 with (i * i) value of -2147479015.
Last successfull storage was at n = 46340 with (I * I) value of 2147395600.

Testing for `long` type.
Failed at n equal to 3037000500 with (i * i) value of -9223372036709301616.
Last successfull storage was at n = 3037000499 with (I * I) value of 9223372030926249001.
```

<!-- END: terminal interaction or other output -->

#### Trial1 Comments:

<!-- START: Comments -->

By the experiments as suggested by the problem statement, it is observed that the number of bits used to store integer types on my machine are as follows:

a. `short`: 16 bits  
b. `int`: 32 bits
c. `long`: 64 bits

<!-- END: Comments -->

<hr class="hr1ExrcPrj"/>

# cknkCh07Prj002

<!-- START: Problem Statement -->

Modify the `square2.c` program of Section 6.3 so that it pauses after every 24 squares and displays the following message:

```shell
Press Enter to continue...
```

After displaying the message, the program should use `getchar` to read a character. `getchar` won't allow the program to continue until the user presses the Enter key.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh07Prj002.c](./cknkCh07Prj002.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
This program prints a table of squares.
Enter number of entries in table: 64
         1         1
         2         4
         3         9
         4        16
         5        25
         6        36
         7        49
         8        64
         9        81
        10       100
        11       121
        12       144
        13       169
        14       196
        15       225
        16       256
        17       289
        18       324
        19       361
        20       400
        21       441
        22       484
        23       529
        24       576

Press Enter to continue...

        25       625
        26       676
        27       729
        28       784
        29       841
        30       900
        31       961
        32      1024
        33      1089
        34      1156
        35      1225
        36      1296
        37      1369
        38      1444
        39      1521
        40      1600
        41      1681
        42      1764
        43      1849
        44      1936
        45      2025
        46      2116
        47      2209
        48      2304

Press Enter to continue...

        49      2401
        50      2500
        51      2601
        52      2704
        53      2809
        54      2916
        55      3025
        56      3136
        57      3249
        58      3364
        59      3481
        60      3600
        61      3721
        62      3844
        63      3969
        64      4096
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
This program prints a table of squares.
Enter number of entries in table: 32
         1         1
         2         4
         3         9
         4        16
         5        25
         6        36
         7        49
         8        64
         9        81
        10       100
        11       121
        12       144
        13       169
        14       196
        15       225
        16       256
        17       289
        18       324
        19       361
        20       400
        21       441
        22       484
        23       529
        24       576

Press Enter to continue...abc

Press Enter to continue...
Press Enter to continue...
Press Enter to continue...
        25       625
        26       676
        27       729
        28       784
        29       841
        30       900
        31       961
        32      1024
```

<!-- END: terminal interaction or other output -->

#### Trial2 Comments:

<!-- START: Comments -->

One behavior observed. When we press a character, we were expecting the prompt from the `printf` statement but it did not prompt. It waits till we press enter and then prints the prompt the number times equal to the number of characters pressed.

Tried the same program in multiple online compilers like `onlinegdb`, `programWiz` and `JDoodle`. Only `JDoodle` worked as expected.

<!-- END: Comments -->

<hr class="hr1ExrcPrj"/>

# cknkCh07Prj003

<!-- START: Problem Statement -->

Modify the `sum2.c` program of Section 7.1 to sum a series of double values.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh07Prj003.c](./cknkCh07Prj003.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
This program sums a series of floating-point (double) numbers.
Enter enter floating-point (double) numbers (0.000 to terminate): 13.45 432.34 34.34 0.00
The sum is: 480.130000
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
This program sums a series of floating-point (double) numbers.
Enter enter floating-point (double) numbers (0.000 to terminate): 13.00 23.45 22.00 0
The sum is: 58.450000
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh07Prj004

<!-- START: Problem Statement -->

Write a program that translates an alphabetic phone number into numeric form:

```shell
Enter phone number: CALLATT
2255288
```

(n case you don't have a telephone nearby, here are the letters on the keys: 2=ABC, 3=DEF, 4=GHI, 5=JKL, 6=MNO, 7=PRS, 8=TUV, 9=WXY.) If the original phone number contains nonalphabetic characters (digits or punctuation, for example), leave them unchanged:

```shell
Enter phone number: 1-800-COL-LECT
1-800-265-5328
```

You may assume that any letters entered by the user are upper case.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh07Prj004.c](./cknkCh07Prj004.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter phone number: callatt
2255288       
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter phone number: 1-800-COL-LECT
1-800-265-5328
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter phone number: BEHIND-ENEMY-1
234463-36369-1
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh07Prj005

<!-- START: Problem Statement -->

In the SCRABBLE Crossword Game, players form words using small tiles, each containing a letter and a face value. The face value varies from one letter to another, based on the letter's rarity. (Here are the face values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8:JX, 10: QZ.) Write a program that computes the value of a word by summing the values of its letters:

```shell
Enter a word: pitfall
Scrabble value: 12
```

Your program should allow any mixture of lower-case and upper-case letters in the word. *Hint*: Use the `toupper` library function.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh07Prj005.c](./cknkCh07Prj005.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a word: pitfall
Scrabble value: 12
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a word: Govinda
Scrabble value: 12
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a word: Sumniru
Scrabble value: 9
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh07Prj006

<!-- START: Problem Statement -->

Write a program that prints the values of `sizeof(int)`, `sizeof(short)`, `sizeof(long)`, `sizeof(float)`, `sizeof(double)` and `sizeof(long double)`.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh07Prj006.c](./cknkCh07Prj006.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
sizeof(int) : 4
sizeof(short) : 2
sizeof(long) : 8
sizeof(float) : 4
sizeof(double) : 8
sizeof(long double) : 16
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh07Prj007

<!-- START: Problem Statement -->

Modify Programming Project 6 from Chapter 3 so that the user may add, subtract, multiply, or divide two fractions (by entering either `+`, `-`, `*`, or `/` between the fractions).

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh07Prj007.c](./cknkCh07Prj007.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter two fractions separated by a basic arithmetic operator (+, -, *, /) sign: 13/2 + 8/9
The sum is 133/18
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter two fractions separated by a basic arithmetic operator (+, -, *, /) sign: 13/2 * 8/9
The product is 104/18
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter two fractions separated by a basic arithmetic operator (+, -, *, /) sign: 13/2 / 8/9
The result of division is 117/16
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh07Prj008

<!-- START: Problem Statement -->

Modify Programming Project 8 from Chapter 5 so that the user enters a time using the 12-hour clock. The input will have the form *hours : minutes* followed by either `A`, `P`, `AM`, or `PM` (either lower-case or upper-case). White space is allowed (but not required) between the numerical time and the `AM/PM` indicator. Examples of valid input: 

```
1:15P
1:15PM
1:15p
1:15pm
1:15P
1:15 PM
1：15 P
1:15 pm
```

You may assume that the input has one of these forms; there is no need to test for errors.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh07Prj008.c](./cknkCh07Prj008.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a 12-hour time: 02:16 am
Closest departure time is 8:00 a.m., arriving at 10:16 a.m.
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a 12-hour time: 11:15 Am
Closest departure time is 11:19 a.m., arriving at 1:31 p.m.
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a 12-hour time: 08:19pm
Closest departure time is 7:00 p.m., arriving at 9:20 p.m.
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh07Prj009

<!-- START: Problem Statement -->

Write a program that asks the user for a 12-hour time, then displays the time in 24-hour form:

```shell
Enter a 12-hour time: 9:11 PM
Equivalent 24-hour time: 21:11
```

See Programming Project 8 for a description of the input format.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh07Prj009.c](./cknkCh07Prj009.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a 12-hour time: 2:15am
Equvalent 24-hour time: 02:15
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a 12-hour time: 12:15pm
Equvalent 24-hour time: 12:15
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a 12-hour time: 4:45pm
Equvalent 24-hour time: 16:45
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh07Prj010

<!-- START: Problem Statement -->

Write a program that counts the number of vowels (*a*, *e*, *i*, *o*, and *u*) in a sentence:

```shell
Enter a sentence: And that's the way it is.
Your sentence contains 6 vowels.
```

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh07Prj010.c](./cknkCh07Prj010.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a sentence: And that's the way it is.
Your sentence contains 6 vowels.
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a sentence: Dheera dheera dheera... dheera ee sulthaana!!!
Your sentence contains 18 vowels.
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a sentence: Preethisuve preethisuve mithimeeri ninnane preethisuve...
Your sentence contains 23 vowels.
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh07Prj011

<!-- START: Problem Statement -->

Write a program that takes a first name and last name entered by the user and displays the last name, a comma, and the first initial, followed by a period:

```shell
Enter a first and last name: Lloyd Fosdick
Fosdick, L.
```

The user's input may contain extra spaces before the first name, between the first and last names, and after the last name.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh07Prj011.c](./cknkCh07Prj011.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a first and last name (separated by a space): Lloyd Fosdick
Fosdick, L
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a first and last name (separated by a space): Shiva Ganesha
Ganesha, S
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a first and last name (separated by a space): Shivappa Naayaka
Naayaka, S
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh07Prj012

<!-- START: Problem Statement -->

Write a program that evaluates an expression:

```shell
Enter an expression: 1+2.5*3
Value of expression: 10.5
```

The operands in the expression are floating-point numbers; the operators are `+`, `-`, `*`, and `/`.The expression is evaluated from left to right (no operator takes precedence over any other operator).

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh07Prj012.c](./cknkCh07Prj012.c)

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

# cknkCh07Prj013

<!-- START: Problem Statement -->

Write a program that calculates the average word length for a sentence:

```shell
Enter a sentence: It was deja vu all over again.
Average word length: 3.4
```

For simplicity, your program should consider a punctuation mark to be part of the word to
which it is attached. Display the average word length to one decimal place.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh07Prj013.c](./cknkCh07Prj013.c)

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

# cknkCh07Prj014

<!-- START: Problem Statement -->

Write a program that uses Newton's method to compute the square root of a positive floating-point number:

```shell
Enter a positive number: 3
Square root:1.73205
```

Let `x` be the number entered by the user. Newton's method requires an initial guess `y` for the square root of `x` (we'll use `y = 1`). Successive guesses are found by computing the average of `y` and `x / y`. The following table shows how the square root of 3 would be found:  

|x|y|x/y|Average of x and x/y|
|---|--|--|--|
|3|1|3|2|
|3|2|1.5|1.75|
|3|1.75|1.71429|1.73214|
|3|1.73214|1.73196|1.73205|
|3|1.73205|1.73205|1.73205|

Note that the values of `y` get progressively closer to the true square root of `x`. For greater accuracy, your program should use variables of type `double` rather than `float`. Have the program terminate when the absolute value of the difference between the old value of `y` and the new value of `y` is less than the product of `.00001` and `y`. Hint: Call the `fabs` function to find the absolute value of a double. (You'll need to include the `<math. h>` header at the beginning of your program in order to use `fabs`.)

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh07Prj014.c](./cknkCh07Prj014.c)

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

# cknkCh07Prj015

<!-- START: Problem Statement -->

Write a program that computes the factorial of a positive integer:

```shell
Enter a positive integer: 6
Factorial of 6: 720
```

a. Use a `short` variable to store the value of the factorial. What is the largest value of `n` for which the program correctly prints the factorial of `n`?  
b. Repeat part (a), using an `int` variable instead.  
c. Repeat part (a), using a `long` variable instead.  
d. Repeat part (a), using a `long long` variable instead (if your compiler supports the `long long` type).  
e. Repeat part (a), using a `float` variable instead.  
f. Repeat part (a), using a `double` variable instead.  
g. Repeat part (a), using a `long double` variable instead.  

In cases (e)-(g), the program will display a close approximation of the factorial, not necessarily the exact value.


<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh07Prj015.c](./cknkCh07Prj015.c)

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