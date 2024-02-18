<html>
<head>
<title>Chapter 05 Programming Projects</title>
<meta charset="utf-8">
<link rel="stylesheet" href="../../myStyle.css">
</head>
<body>

05 Selection statements
---

# Chapter 05 Programming Projects


<hr class="hr1ExrcPrj"/>


# cknkCh05Prj001

<!-- START: Problem Statement -->

Write a program that calculates how many digits a number contains:

```shell
Enter a number: 374
The number 374 has 3 digits
```

You may assume that the number has no more than four digits. *Hint*: Use `if` statements to test the number. For example, if the number is between 0 and 9, it has one digit. If the number is between 10 and 99, it has two digits.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh05Prj001.c](./cknkCh05Prj001.c)

## Output/ExecutionLog:


### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a number (max. digits: 4): 374
The number 374 has 3 digits.
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a number (max. digits: 4): 55
The number 55 has 2 digits.
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a number (max. digits: 4): 6678
The number 6678 has 4 digits.
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>


# cknkCh05Prj002

<!-- START: Problem Statement -->

Write a program that asks the user for a 24-hour time, then displays the time in 12-hour form:

```shell
Enter a 24-hour time: 21:11
Equivalent 12-hour time: 9:11 PM
```

Be careful not to display 12:00 as 0:00.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh05Prj002.c](./cknkCh05Prj002.c)

## Output/ExecutionLog:


### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a 24-hour time: 00:29
Equivalent 12-hour time: 12:29 AM
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a 24-hour time: 11:59
Equivalent 12-hour time: 11:59 AM
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a 24-hour time: 22:43
Equivalent 12-hour time: 10:43 PM
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>


# cknkCh05Prj003

<!-- START: Problem Statement -->

Modify the `broker.c` program of Section 5.2 by making both of the following changes:

a. Ask the user to enter the number of shares and the price per share, instead of the value of the trade.  
b. Add statements that compute the commision charged by a rival broker ($33 plus 3&cent; per share for fewer than 2000 shares; $33 plus 2&cent; per share for 2000 shares or more). Display the rival's commision as well as the commision charged by the original broker.  

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh05Prj003.c](./cknkCh05Prj003.c)

## Output/ExecutionLog:


### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter the number of shares: 10
Enter the price per share: 3000
Commission (by original broker): $166.00
Commission (by rival broker): $33.30
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter the number of shares: 2500
Enter the price per share: 50
Commission (by original broker): $292.50
Commission (by rival broker): $83.00
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter the number of shares: 1000
Enter the price per share: 1000
Commission (by original broker): $1155.00
Commission (by rival broker): $63.00
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>


# cknkCh05Prj004

<!-- START: Problem Statement -->

Here's a simplified version of the Beaufort scale, which is used to estimate wind force:

|Speed (knots)|Description|
|---|---|
|Less than 1|Calm|
|1-3|Light air|
|4-27|Breeze|
|28-47|Gale
|48-63|Storm|
|Above 63|Hurricane|

Write a program that asks the user to enter a wind speed (in knots), then display the corresponding description.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh05Prj004.c](./cknkCh05Prj004.c)

## Output/ExecutionLog:


### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Please enter wind speed (knots): 0.42
Wind condition: Calm
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Please enter wind speed (knots): 53
Wind condition: Storm
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Please enter wind speed (knots): 100
Wind condition: Hurricane
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>


# cknkCh05Prj005

<!-- START: Problem Statement -->

In one state, single residents are subject to the following income tax:

|Income|Amount of tax|
|---|---|
|Not over $750|1% of income|
|$750-$2,250|$7.50 plus 2% of amount over $750|
|$2,250-$3,750|$37.50 plus 3% of amount over $2,250|
|$3,750-$5,250|$82.50 plus 4% of amount over $3,750|
|$5,250-$7,000|$142.50 plus 5% of amount over $5,250|
|Over $7,000|$230.00 plus 6% of amount over $7,000|

Write a program that asks the user to enter the amount of taxable income, then display the tax due.


<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh05Prj005.c](./cknkCh05Prj005.c)

## Output/ExecutionLog:


### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Please enter your taxable income: $4500
Tax due: $262.50
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Please enter your taxable income: $852
Tax due: $24.54
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Please enter your taxable income: $78000
Tax due: $4910.00
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>


# cknkCh05Prj006

<!-- START: Problem Statement -->

Modify the `upc.c` program of Section 4.1 so that it checks whether a UPC is valid. After the user enters a UPC, the program will display either `VALID` or `NOT_VALID`.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh05Prj006.c](./cknkCh05Prj006.c)

## Output/ExecutionLog:


### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter the UPC number (12 digits): 013800151735
UPC is VALID
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter the UPC number (12 digits): 013800151734
UPC is NOT_VALID
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter the UPC number (12 digits): 031200010054
UPC is NOT_VALID
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>


# cknkCh05Prj007

<!-- START: Problem Statement -->

Write a program that finds the largest and smallest of four integers entered by the user:

```C
Enter four integers: 21 43 10 35
Largest: 43
Smallest: 10
```

Use as few `if` statements as possible. *Hint*: Four `if` statements are sufficient.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh05Prj007.c](./cknkCh05Prj007.c)

## Output/ExecutionLog:


### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter four integers: 21 43 10 35
Largest: 43
Smallest: 10
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter four integers: 500 1 35 7000
Largest: 7000
Smallest: 1
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter four integers: 788 878 877 887
Largest: 887
Smallest: 788
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh05Prj008

<!-- START: Problem Statement -->

The following table shows the daily flights from one city to another:

|Departure time|Arrival time|
|---:|---:|
|8:00 a.m.|10:16 a.m.|
|9:43 a.m.|11:52 a.m.|
|11:19 a.m.|1:31 p.m.|
|12:47 p.m.|3:00 p.m.|
|2:00 p.m.|4:08 p.m.|
|3:45 p.m.|5:55 p.m.|
|7:00 p.m.|9:20 p.m.|
|9:45 p.m.|11:58 p.m.|

Write a program that asks the user to enter a time (expressed in hours and minutes, using the 24-hour clock). The program then displays the departure and arrival times for the flight whose departure time is closest to that entered by the user:

```shell
Enter a 24-hour time: 13:15
Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
```

*Hint*: Convert the input into a time expressed in minutes since midnight, and compare it to the departure times, also expressed in minutes since midnight. For example, 13:15 is `13 x 60 + 15 = 795` minutes since midnight, which is closer to 12:47 p.m. (767 minutes since midnight) than to any of the other departure times. 

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh05Prj008.c](./cknkCh05Prj008.c)

## Output/ExecutionLog:


### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a 24-hour time: 13:15
Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a 24-hour time: 22:43
Closest departure time is 9:45 p.m., arriving at 11:58 p.m.
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a 24-hour time: 00:23
Closest departure time is 8:00 a.m., arriving at 10:16 a.m.
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh05Prj009

<!-- START: Problem Statement -->

Write a program that prompts the user to enter two dates and then indicates which date comes earlier on the calendar:

```shell
Enter first date (mm/dd/yy): 3/6/08
Enter second date (mm/dd/yy): 5/17/07
5/17/07 is earlier than 3/6/08
```

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh05Prj009.c](./cknkCh05Prj009.c)

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


# cknkCh05Prj010

<!-- START: Problem Statement -->

Using the `switch` statement, write a program that converts a numerical grade into a letter grade:

```shell
Enter numerical grade: 84
Letter grade: B
```

Use the following grading scale: A = 90-100, B = 80-89, C = 70-79, D = 60-69, F = 0-59. Print an error message if the grade is larger than 100 or less than 0. *Hint*: Break the grade into two digits, then use a `switch` statement to test the ten's digit.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh05Prj010.c](./cknkCh05Prj010.c)

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


# cknkCh05Prj011

<!-- START: Problem Statement -->

Write a program that asks the user for a two-digit number, then prints the English word for the number:

```shell
Enter a two digit number: 45
You entered the number forty-five.
```

*Hint*: Break the number into two digits. Use one `switch` statement to print the word for the first digit ("twenty", "thirty", and so forth). Use a second `switch` statement to print the word for the second digit. Don't forget that the numbers between 11 and 19 require special treatment.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh05Prj011.c](./cknkCh05Prj011.c)

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
