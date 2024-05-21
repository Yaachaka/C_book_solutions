<html>
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Chapter 11 Programming Projects</title>
<link rel="stylesheet" href="../../myStyle.css">
</head>
<body>

11 Pointers
---

# Chapter 11 Programming Projects

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh11Prj001

<!-- START: Problem Statement -->

Modify Programming Project 7 from Chapter 2 so that it includes the following function:

```C
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);
```

The function determines the smallest number of $20, $10, $5, and $1 bills necessary to pay the amount represented by the `dollars` parameter. The `twenties` parameter points to a variable in which the function will store the number of $20 bills required. The `tens`, `fives`, and `ones` parameters are similar.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh11Prj001.c](./cknkCh11Prj001.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```
Enter a U.S. Dollar amount: 93
$20 bills: 4
$10 bills: 1
 $5 bills: 0
 $1 bills: 3
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```
Enter a U.S. Dollar amount: 168
$20 bills: 8
$10 bills: 0
 $5 bills: 1
 $1 bills: 3
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```
Enter a U.S. Dollar amount: 256
$20 bills: 12
$10 bills: 1
 $5 bills: 1
 $1 bills: 1
```

<!-- END: terminal interaction or other output -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh11Prj002

<!-- START: Problem Statement -->

Modify Programming Project 8 from Chapter 5 so that it includes the following function:

```C
void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);
```

This function will find the flight whose departure time is closest to `desired_time` (expressed in minutes since midnight). It will store the departure and arrival times of this flight (also expressed in minutes since midnight) in the variables pointed to by `departure_time` and `arrival_time`, respectively.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh11Prj002.c](./cknkCh11Prj002.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```
Enter a 24-hour time: 13:15
Closest departure time is 12:47 p.m., arriving at 03:00 p.m.
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```
Enter a 24-hour time: 22:43
Closest departure time is 09:45 p.m., arriving at 11:58 p.m.
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```
Enter a 24-hour time: 00:23
Closest departure time is 08:00 a.m., arriving at 10:16 a.m.
```

<!-- END: terminal interaction or other output -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh11Prj003

<!-- START: Problem Statement -->

Modify Programming Project 3 from Chapter 6 so that it includes the following function:

```C
void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);
```

`numerator` and `denominator` are the numerator and denominator of a fraction. `reduced_numerator` and `reduced_denominator` are pointers to variables in which the function will store the numerator and denominator of the fraction once it has been reduced to lowest terms.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh11Prj003.c](./cknkCh11Prj003.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```
Enter a fraction: 6/12
In lowest terms: 1/2
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```
Enter a fraction: 12/28
In lowest terms: 3/7
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```
Enter a fraction: 17/46
In lowest terms: 17/46
```

<!-- END: terminal interaction or other output -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh11Prj004

<!-- START: Problem Statement -->

Modify the `poker.c` program of Section 10.5 by moving all external variables into `main` and modifying functions so that they communicate by passing arguments. The `analyze_hand` function needs to change the `straight`, `flush`, `four`, `three`, and `pairs` variables, so it will have to be passed pointers to those variables.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh11Prj004.c](./cknkCh11Prj004.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```
Enter a card: 4h
Enter a card: 5h
Enter a card: 6h
Enter a card: 7h
Enter a card: 8h
Straight flush

Enter a card: 7c
Enter a card: 8h
Enter a card: 7h
Enter a card: 7s
Enter a card: 7d
Four of a kind

Enter a card: 7c
Enter a card: 7h
Enter a card: 8d
Enter a card: 7s
Enter a card: 8h
Full house

Enter a card: 2s
Enter a card: qs
Enter a card: ts
Enter a card: as
Enter a card: js
Flush

Enter a card: 8c
Enter a card: qh
Enter a card: td
Enter a card: js
Enter a card: 9c
Straight

Enter a card: 3c
Enter a card: 4d
Enter a card: 3h
Enter a card: 5c
Enter a card: 3s
Three of a kind

Enter a card: 2d
Enter a card: 2c
Enter a card: 3d
Enter a card: 2c
Duplicate card; ignored.
Enter a card: 2a
Bad card; ignored.
Enter a card: 4s
Enter a card: 4h
Two pairs

Enter a card: 4d
Enter a card: 6c
Enter a card: 8
h
Bad card; ignored.
Enter a card: 8h
Enter a card: 7s
Enter a card: 8d
Pair

Enter a card: 2c
Enter a card: 6h
Enter a card: td
Enter a card: qs
Enter a card: jc
High card

Enter a card: 0
```

<!-- END: terminal interaction or other output -->

# Exercise Comment:

<!-- START: Comments -->

With few trials, it is identified that the post increment operator takes precedence over indirection operator. Because of which instead of writing `*pairs++;`, I had to write `(*pairs)++`. The parentheses are necessary. This was identified by printing the address in `pairs` pointer at start and end of the function `analyze_hand`; which had differed.

<!-- END: Comments -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

</body>
</html>
