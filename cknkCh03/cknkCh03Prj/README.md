<html>
<head>
<title>Chapter 03 Programming Projects</title>
<meta charset="utf-8">
<link rel="stylesheet" href="../../myStyle.css">
</head>
<body>

03 Formatted Input/Output
---


# Chapter 03 Programming Projects
  
<hr class="hr1ExrcPrj"/>

# cknkCh03Prj001

<!-- START: Problem Statement -->

Write a program that accepts a date from the user in the form *mm/dd/yyyy* and then displays it in the form *yyyymmdd*:

```shell
Enter a date (mm/dd/yyyy): 2/17/2011
You entered the date 20110217
```

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh03Prj001.c](./cknkCh03Prj001.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a date (mm/dd/yyyy): 2/17/2011
You entered the date 20110217
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a date (mm/dd/yyyy): 2/14/2024
You entered the date 20240214
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a date (mm/dd/yyyy): 2/5/96
You entered the date 00960205
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh03Prj002

<!-- START: Problem Statement -->

Write a program that formats product information entered by the user. A session with the program should look like this:

```shell
Enter item number: 583
Enter unit price: 13.5
Enter purchase date (mm/dd/yyyy): 10/24/2010

Item         Unit           Purchase
             Price          Date
583          $  13.50       10/24/2010
```

The item number and date should be left justified; the unit price should be right justified. Allow dollar amounts up to $9999.99. *Hint:* Use tabs to line up the columns.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh03Prj002.c](./cknkCh03Prj002.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter item number: 583
Enter unit price: 13.5
Enter purchase date (mm/dd/yyyy): 10/24/2010
Item                    Unit                    Purchase
                        Price                   Date
583                     $  13.50                10/24/2010
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter item number: 150
Enter unit price: 152.3
Enter purchase date (mm/dd/yyyy): 2/15/2024
Item                    Unit                    Purchase
                        Price                   Date
150                     $ 152.30                02/15/2024
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter item number: 789
Enter unit price: 10000.12
Enter purchase date (mm/dd/yyyy): 2/5/1996
Item                    Unit                    Purchase
                        Price                   Date
789                     $10000.12               02/05/1996
```

<!-- END: terminal interaction or other output -->

# Exercise Comment:

<!-- START: Comments -->

Note: I could not figure out how to limit the dollar amount to 9999.99 (as required by the problem statement).

<!-- END: Comments -->

<hr class="hr1ExrcPrj"/>

# cknkCh03Prj003

<!-- START: Problem Statement -->

Books are identified by an international Standard Book Number (ISBN). ISBNs assigned after January 1, 2007 contain 13 digits, arranged in five groups, such as 978-0-393-97950-3. (Older ISBNs use 10 digits.) The first group (*GS1 prefix*) is curently either 978 or 979. The *group identifier* specifies the language or country of origin (for example, 0 and 1 are used in English-speaking countries). The *publisher code* identifies the publisher (393 is the code for W. W. Norton). The *item number* is assigned by the publisher to identify a specific book (97950 is the code for this book). An ISBN ends with a *check digit* that's used to verify the accuracy of the preceeding digits. Write a program that breaks down an ISBN entered by the user:

```shell
Enter ISBN: 978-0-393-97950-3
GS1 prefix: 978
Group identifier: 0
Publisher code: 393
Item number: 97950
Check digit: 3
```

*Note*: The number of digits in each group may vary; you can't assume that groups have the lengths shown in this example. Test your program with actual ISBN values (usually found on the back cover of a book and on the copyright page).

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh03Prj003.c](./cknkCh03Prj003.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter ISBN: 978-0-393-97950-3
GS1 prefix: 978
Group identifer: 0
Publisher code: 393
Item number: 97950
Check digit: 3
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter ISBN: 979-1-3456-4834-2
GS1 prefix: 979
Group identifer: 1
Publisher code: 3456
Item number: 4834
Check digit: 2
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter ISBN: 978-0-444-333-1
GS1 prefix: 978
Group identifer: 0
Publisher code: 444
Item number: 333
Check digit: 1
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh03Prj004

<!-- START: Problem Statement -->

Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-xxxx and then displays the number in the form xxx.xxx.xxxx:

```shell
Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
You entered 404.817.6900
```

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh03Prj004.c](./cknkCh03Prj004.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
You entered 404.817.6900
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter phone number [(xxx) xxx-xxxx]: (888) 987-4560
You entered 888.987.4560
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter phone number [(xxx) xxx-xxxx]: (777) 132-4242
You entered 777.132.4242
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh03Prj005

<!-- START: Problem Statement -->

Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns, and diagonals:

```shell
Enter the numbers from 1 to 16 in any order:
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

16  3  2 13
 5 10 11  8
 9  6  7 12
 4 15 14  1

Row sums: 34 34 34 34
Column sums: 34 34 34 34
Diagonal sums: 34 34
```

If the row, column, and diagonal sums are all the same(as they are in this example), the numbers are said to form a ***magic square***. The magic square shown here appears in a 1514 engraving by artist and mathematician Albrecht Dürer. (Note that the middle numbers in the last row give the date of the engraving.)

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh03Prj005.c](./cknkCh03Prj005.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter the numbers from 1 to 16 in any order: 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

16  3  2 13
 5 10 11  8
 9  6  7 12
 4 15 14  1

Row sums: 34 34 34 34
Column sums: 34 34 34 34
Diagonal sums: 34 34
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter the numbers from 1 to 16 in any order: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16

 1  2  3  4
 5  6  7  8
 9 10 11 12
13 14 15 16

Row sums: 10 26 42 58
Column sums: 28 32 36 40
Diagonal sums: 34 34
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter the numbers from 1 to 16 in any order: 16 15 2 4 7 1 8 5 9 3 11 13 6 14 10 12

16 15  2  4
 7  1  8  5
 9  3 11 13
 6 14 10 12

Row sums: 37 21 36 42
Column sums: 38 33 31 34
Diagonal sums: 40 21
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh03Prj006

<!-- START: Problem Statement -->

Modify the `addfrac.c` program of Section 3.2 so that the user enters both fractions at the same time, separated by a plus sign:

```shell
Enter two fractions separated by a plus sign: 5/6+3/4
The sum is 38/24
```

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh03Prj006.c](./cknkCh03Prj006.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter two fractions separated by a plus sign: 5/6 + 3/4
The sum is 38/24
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter two fractions separated by a plus sign: 13/10+4/2
The sum is 66/20
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter two fractions separated by a plus sign: 10/2 + 40/3
The sum is 110/6
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

</body>
</html>
