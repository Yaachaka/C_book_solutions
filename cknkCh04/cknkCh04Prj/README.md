<html>
<head>
<title>Chapter 04 Programming Projects</title>
<meta charset="utf-8">
<link rel="stylesheet" href="../../myStyle.css">
</head>
<body>


04 Expressions
---
  
# Chapter 04 Programming Projects
  
<hr class="hr1ExrcPrj"/>

# cknkCh04Prj001

<!-- START: Problem Statement -->

Write a program that asks the user to enter a two-digit number, then prints the number with its digits reversed. A session with the program should have the following appearance:

```shell
Enter a two-digit number: 28
The reversal is: 82
```

Read the number using `%d`, then break it into two digits. *Hint*: If `n` is an integer, then `n % 10` is the last digit in `n` and `n / 10` is `n` with the last digit removed.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh04Prj001.c](./cknkCh04Prj001.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a two-digit number: 28
The reversal is: 82
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a two-digit number: 47
The reversal is: 74
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a two-digit number: 30
The reversal is: 03
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh04Prj002

<!-- START: Problem Statement -->

Extend the program in Programming Project 1 to handle *three*-digit numbers.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh04Prj002.c](./cknkCh04Prj002.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a three-digit number: 837
The reversal is: 738
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a three-digit number: 489
The reversal is: 984
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a three-digit number: 007
The reversal is: 700
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh04Prj003

<!-- START: Problem Statement -->

Rewrite the program in Programming Project 2 so that it prints the reversal of a three-digit number without using arithmetic to split the number into digits. *Hint*: See the `upc.c` program of Section 4.1.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh04Prj003.c](./cknkCh04Prj003.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a three-digit number: 837
The reversal is: 738
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a three-digit number: 489
The reversal is: 984
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a three-digit number: 007
The reversal is: 700
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh04Prj004

<!-- START: Problem Statement -->

Write a program that reads an integer entered by the user and displays it in octal (base 8):

```shell
Enter a number between 0 and 32767: 1953
In octal, your number is: 03641
```

The output should be displayed using five digits, even if fewer digits are sufficient. *Hint*: To convert the number to octal, first divide it by 8; the remainder is the last digit of the octal number (1, in this case). Then divide the original number by 8 and repeat the process to arrive at the next-to-last digit. (`printf` is capable of displaying numbers in base 8, as we'll see in Chapter 7, so there's actually an easier way to write this program.)

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh04Prj004.c](./cknkCh04Prj004.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a number between 0 and 32767: 1953
In octal, your number is: 03641
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a number between 0 and 32767: 2024
In octal, your number is: 03750
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a number between 0 and 32767: 32655
In octal, your number is: 77617
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh04Prj005

<!-- START: Problem Statement -->

Rewrite the `upc.c` program of Section 4.1 so that the user enters 11 digits at one time, instead of entering one digit, then five digits, and then another five digits.

```shell
Enter the first 11 digits of a UPC: 01380015173
Check digit: 5
```

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh04Prj005.c](./cknkCh04Prj005.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter the first 11 digits of a UPC: 01380015173
Check digit: 5
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter the first 11 digits of a UPC: 05150024128
Check digit: 8
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter the first 11 digits of a UPC: 03120001005
Check digit: 6
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh04Prj006

<!-- START: Problem Statement -->

European countries use a 13-digit code, known as a European Article Number (EAN) instead of the 12-digit Universal Product Code (UPC) found in North America. Each EAN ends with a check digit, just as a UPC does. The technique for calculating the check digit is also similar:

> Add the second, fourth, sixth, eight, tenth, and twelfth digits.  
> Add the first, third, fifth, seventh, ninth, and eleventh digits.  
> Multiply the first sum by 3 and add it to the second sum.  
> Subtract 1 from the total.  
> Compute the remainder when the adjusted total is divided by 10.  
> Subtract the remainder from 9.  

For example, consider Güllüoglu Turkish Delight Pistachio & Coconut, which has an EAN of 8691484260008. The first sum is `6 + 1 + 8 + 2 + 0 + 0 = 17`, and the second sum is `8 + 9 + 4 + 4 + 6 + 9 = 31`. Multiplying the first sum by 3 and adding the second yields 82. Subtracting 1 gives 82. The remainder upon dividing by 10 is 1. When the remainder is subtracted from 9, the result is 8, which matches the last digit of the original code. Your job is to modify the `upc.c` program of Section 4.1 so that it calculates the check digit for an EAN. The user will enter the first 12 digits of the EAN as a single number:

```shell
Enter the first 12 digits of an EAN: 869148426000
Check digit: 8
```

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh04Prj006.c](./cknkCh04Prj006.c)

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
