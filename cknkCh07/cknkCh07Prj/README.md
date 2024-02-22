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
Enter an expression: 1 + 3.5 * 3
Value of expression: 13.50
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter an expression: 1/3+4/0
Divide by zero situation.
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter an expression: 53 + 48 - 53 + 100
Value of expression: 148.00
```

<!-- END: terminal interaction or other output -->

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
Enter a sentence: It was deja vu all over again.
Average word length: 3.43
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a sentence: Thangaaliyalli naanu theli bande.
Average word length: 7.50
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a sentence: O malenaadina maisiriye...
Average word length: 8.00
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh07Prj014

<!-- START: Problem Statement -->

Write a program that uses Newton's method to compute the square root of a positive floating-point number:

```shell
Enter a positive number: 3
Square root: 1.73205
```

Let `x` be the number entered by the user. Newton's method requires an initial guess `y` for the square root of `x` (we'll use `y = 1`). Successive guesses are found by computing the average of `y` and `x / y`. The following table shows how the square root of 3 would be found:  

|x|y|x/y|Average of y and x/y|
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
Enter a positive number: 3
Square root: 1.732051
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a positive number: 16.5
Square root: 4.062019
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a positive number: 144
Square root: 12.000000
```

<!-- END: terminal interaction or other output -->

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
This program is to compute the factorial of a given positive integer and also determine the largest value of n for which the computed factorial can be stored correctly in each basic types.

Enter a positive integer: Factorial of 6: 720

Testing for `short` type.
Failed at n equal to 8.
Last successfull storage was at n = 7 with factorial value of 5040.

Testing for `int` type.
Failed at n equal to 14.
Last successfull storage was at n = 13 with factorial value of 1932053504.

Testing for `long` type.
Failed at n equal to 21.
Last successfull storage was at n = 20 with factorial value of 2432902008176640000.

Testing for `long long` type.
Failed at n equal to 21.
Last successfull storage was at n = 20 with factorial value of 2432902008176640000.

Testing for `float` type.
n = 31.000000; factorial value of 8222839685527520666638122083155968.000000.
n = 32.000000; factorial value of 263130869936880661332419906660990976.000000.
n = 33.000000; factorial value of 8683318509846655538309012935952826368.000000.
n = 34.000000; factorial value of 295232822996533287161359432338880069632.000000.
n = 35.000000; factorial value of inf.
n = 36.000000; factorial value of inf.
Failed at n equal to 36.000000.
Last successfull storage was at n = 35.000000 with factorial value of inf.

Testing for `double` type.
n = 169.000000; factorial value of 42690680090047026720062648805820850387756975875746245047606552641771041861638240560617636629151816857409132566202994395836167476759353273143605880851692806242768458117639325189454779548336505175152773372238945176444516224321575248351285305864915204686974405930350609429121563777253758476415021841813340160.000000.
n = 170.000000; factorial value of 7257415615307994045399635715589591467896184117242257803405544211755693246215271577444614997868077640013184176271985826801597743247247979077995336619429980685793285768053360886112149825437081356365699043287884614002788490694530469661753007801896962563721104619242357348735986883814984039817295623520648167424.000000.
n = 171.000000; factorial value of inf.
n = 172.000000; factorial value of inf.
Failed at n equal to 172.000000.
Last successfull storage was at n = 171.000000 with factorial value of inf.

Testing for `long double` type.
n = 1753.000000; factorial value of 11284275314167674204001107910676195510169036884673602066300803275356038071633088233551784850696138041893719451896862761858115910998606791297616154687682109074891827002556873806726950812138200029978270395252661556251179343034921359433848446661965374498698739953134924516457584649007301618808649124745813486208237832522797979913340709075284315582215481357550833732751859154941759144288686146738219377156031140836581338498385501209248787114552272443324006711139867548641643212693788400878950072821629706055490678667402434596388067379973218923290890142537594404672501950720711156614131814622440099088875182252637061476452720411194776029438036973272686565688204750950198781785064244001575085557274657406992917014795938170519843373565752310191775902660992262833678396357797852450970836925243001355139376057378353313462115138810046108671881584852310945639330133230465718432133415624848636053275201934115700804882716907858375083778523746959186256038658837267244513427197177722618617648977794424361613377295099465156658455769226136398416977344158672783881804047720264814153320112117230792254357648181495483374347875057392559932838585903220014621377252904135839105457233478823163613963602437260678351129883393135417129007245197744341147200753398356660744441857189989170003990961696084540858257621931059482417362916636300198395565926379864449982728740423330709768093914603376821618814922469945639940205525093797906425332136518867662373381578133545458619625466150733328190042811703270296609926966783266738874573956812182458474294126182382512906952479006120850752707527781568139214723739374697435988306018690822496775568268937908352482737797126164234068521766750084938682090531481732024090423220514737241932807617610178070120124548317655052348375446601239875464064957589144621696639887051775357045042467365087001926031531297032688996244301907768355855953180820070903017371571250814292335348207111573122908183278952645426499799454526488970078620130667654843131468885154887483125444707043403782092205732173810874599316540661986308147506206252403496586355869782250764741164079884119301784486462044285283841564706669810484448153693856469098127479031372172334905699064328815777808442928514536120860384421764326350461133566217613595253694834575207814777355388667653038134210000049690827139501294269382567175828541130869436804602061989753939735576381758590373598403780412923499190730260755112060730967001131016361216655659727893880560874589661842910266522604807354383030484435547037958045531850945111547712551604612808548153508053259508747313677126081905019711770486863338126627211877360029664180643660156062851478961611277048519275078406963479338113896875946379623358683908635410688460332967397191738749326241146022615208372369901912042319915929286114890775351147615516607929955476255534768522853105481670810783243625955638167063912865081970485080183958521960150712031077217476912182961471921412024082332213930503429549853379376507836142255021578590044702490345041196095554164266172127723041047338397451831803513821325961723810820817501182209285378763969109410594125022219434819580245402635495982891626654209030884822400614398670079941900788469391180737008602866603754380309974821257291685801534733569987324606127000330881351122072324421138361491192190982441389194407849936590522259076798610131939269239638055670565620884599647841165846685851821923835222118346541303784440500512245257580558527810959996860284171935328936476783705004745048113407257831893724858763244310152834073625254117776710729920485479231303058093470635149266096768902308727736391543253026517947917079321368380560258433248721578085309723114090569090386824738431273467357190081271535013667831908992223782476889453897598887268471462198672558787100777561129328609016266211870673583691715491436066420184928897127443842904452626707382316825990224884526810542327939012161291419100182596885203345286990961796936484780215102134785644331866888317701502942667941399622651121464079834394470172800575584164059901287089231040115559892672677959381001846898686966343016828176778004774696312249660777538241474333712950208835401192047340849941595610286081319613544149279830482843087751443554675747001795895648343526524501391440004606248015824197433998502008953582635462390147658982849534685998990643381978249983386996344317620736322841501263860646756053727408990659596918230451250832900073044890417519579883195636581380809537593808251190013389319931097339083005870296184670293846546411550844881278975608616193554142110541000123987324623149756857491330317818211766056108529034099317119287491609012672062879945178469095029175048979704707600505444633232344489477855181471711373198277123890490239423224427687841050439867602242702706644649656113140318710681300506402183618591928921886492547059779251281048340655359191708199962825313635257920113075924437518205812126223602247755346223147077973184587326882846987442424964548241941096824969660859657581380991175081396943852134339859790298587117675085824.000000.
n = 1754.000000; factorial value of 19792618901050100553817943275326048508663393845376669623112656902449994123182846076973320188934622767764105646404222913779466975442944922242159700706640387713295829231227602924954201297641022659463162614966178970319278455978541494362239488638111223200254718051457763011365776382839285673875827890163816241900816955466484075698852969651038383533576139135879075200879218319318113969618666686545568341006246228834031642306027923381987313162382132568821808367841277267202334009212058009299453403034711607170217821309844869686041009817670719300982874693783678486292752489172877806296729065477382924433364593293809732644463342273615912155710404378418014937388395847820730428027998894669807969412159445792512695132842637649026204147298487418572435582378042770725233912046554964336866879045377540532925009594317964786617045831088540188953020989785064301511220032495056001352229215153953670552326105970149514831226579287604351149133914009501820483465367831551410236434730626419667285989306872966829030744314952837077733460959377979270277950133451770556235046181559491212534849658908229204431667395899789362804554039568453086818547893129995103244724324473583802233953143944131891942605612258553172595126499638216408560255593779159991729485933531254856520438982524230135786264225924776247489179857596303453674162889347851716100073820634153784265745880814494543831261330394241597355366518741078188293999318697010905764338766463820159557739236123266298430060964285975202747512066983893591668265027836617969172722856211397810968393054731568963678655164257177468788406465845537755250364978837360459427568747745619067605616401898483703903352740806321787468521981017622931992141259265213609250563703161125062889678985237684296669394778278053218004433727568174805828551390702930905233161223231050980124501451519786282406539448904557296823261506905460090707984801397861442189824566377192273200399821354750866160086637516750888101992583304000924224285795446864395040948167872012500387759924283916198363363717744354952682625619683739456286665792116517294968548780972732908802613034674496468524379525241574628017043821375968396987095390750184262698536407307205003213237058160813039391842697594329775725216459827091687358652438413815864801138154442588462729614687215181397939384187739295737386276844262729360888285399966831223458567850731308898906962102734491428605672571210070686246384591509474762064006547781721781936998674732859475943746578214659009708196636366636685028085698201862087618751020058212531304560182927177208749693240805817695004883138247442528319691103082874938575042530122370447852670504982152300983235248142296784800660464939589813431793591903691506272537242570428996261858371809260743189145873440184563102953205794707206950247551090144387833604110830314323864800925644697051419443605133058574365478284284649255586860365453307441094341701575575716542669381015065539377031297614437229429054015257518454294887776307212978651620603395375250025336201797436902265539292318986724695588578785049958440958000504137903161383003385543655747740325654636135041863816762132420260415473600722618725850585804295350700639922948476669546775260262904989815693584405370822277378983877450365404582213453626224398419883833449537906920738273389945248458609685875350811536575891891567618146274930501121800455274261635941058219078192334873226188481969876472117441000202349412333464442596512906353031706761030979012438401020708861704633856786231616797109271889792309365112298942611788734224265671916452648114192947649237333119623693159270417140655644673740775743941039526886288660354591272266316787638009667350477782768242752708147717393216361431345328544220915673881869775093000528885016897241974756553272518275772657566691499890528824524538977350623957909966392135290874688399793288153008705459664036985400266256461014810149203362664813437580028851881574776257454542487737402172054873235581304125690107696512827340067618142186708889508338166339397568644193542140375746994747595885752166137077665935632477451594300189691902112531039514745539471375089165108152461690248579560269327660237848835843038390120181288537489360237573378127371696080700683452387072406905992523638553356618417078882982436960639522017627273941770297210180547865429671429859249899927516158904747760902723242315693603671168082717255906408762406394219595326609827777953672171104021417375525700318281734870824044351722700538705311974754922877051129348904451318306571907957758111865089859047390878230695359459139095869895976826559019772509700596960714533363612928809113969090492140416881601374850696292207689672164195760031053356911124931668903993259406346152273520284428883197657907707839131192609802887536826538400061658599345930923819772648127631539471124514179170059413669495794621256105642009769279416061740846651788143257212685830689689391043031275894447733582248119674897756884608120783256851513769616141629972180997775139050090287930425759539233755820572921551010254950271968350306304.000000.
n = 1755.000000; factorial value of inf.
n = 1756.000000; factorial value of inf.
Failed at n equal to 1756.000000.
Last successfull storage was at n = 1755.000000 with factorial value of inf.
```

<!-- END: terminal interaction or other output -->

#### Trial1 Comments:

<!-- START: Comments -->

For some of the types, the value computed was beyond the storage capacity, so was represented as `inf` (&infin;). For the same reason few previous values were printed. 

<!-- END: Comments -->

<hr class="hr1ExrcPrj"/>

</body>
</html>