
<style>
    .hr1
    {
        width: 98%;
        border-style: ridge;
        border-color: rgb(0, 0, 0);
        background: linear-gradient(violet, indigo, blue, green, yellow, orange, red, red, orange, yellow, green, blue, indigo, violet);
    }
</style>


# Chapter 02 Programming Projects
  
<hr class="hr1"/>
# cknkCh02Prj001

<!-- START: Problem Statement -->

Write a program that uses `printf` to display the following picture on the screen:  

```
       *
      *
     *
*   *
 * *
  *
```

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh02Prj001.c](./cknkCh02Prj001.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->


```
       *
      *
     *
*   *
 * *
  *
```

<!-- END: terminal interaction or other output -->

<hr class="hr1"/>

# cknkCh02Prj002

<!-- START: Problem Statement -->

Write a program that computes the volume of a sphere with a 10-meter radius, using the formula $$ v = \frac{4}{3} \pi r^3 $$. Write the fraction 4/3 as `4.0f/3.0f`. (Try writing it as 4/3. What happens?) *Hint:* C Doesn't have an exponentiation operator, so you'll need to multiply `r` by itself twice to compute $$ r^3 $$.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh02Prj002.c](./cknkCh02Prj002.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->


```
Volume (when we put 4.0f/3.0f): 4186.67
Volume (when we put 4/3): 3140.00. All the digits after the decimal point will be ignored.
```

<!-- END: terminal interaction or other output -->

#### Trial1 Comments:

<!-- START: Comments -->
- When we put `4.0f/3.0f`, that results in `1.33333....`.  
- When we put `4/3`, that results in `1`.  
<!-- END: Comments -->

<hr class="hr1"/>

# cknkCh02Prj003

<!-- START: Problem Statement -->

Modify the program of Programming Project 2 so that it prompts the user to enter the radius of the sphere.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh02Prj003.c](./cknkCh02Prj003.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->


```
Hey user, please enter the radius value: 12
Volume (when we put 4.0f/3.0f): 7234.56
Volume (when we put 4/3): 5425.92
```

<!-- END: terminal interaction or other output -->

<hr class="hr1"/>

# cknkCh02Prj004

<!-- START: Problem Statement -->

Write a program that asks the user to enter a dollar-and-cents amount, then displays the amount with 5% tax added:  

```
Enter an amount: 100.00
With tax added: $105.00
```

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh02Prj004.c](./cknkCh02Prj004.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->


```
Enter an amount: 100.00
With tax added: $105.00
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->


```
Enter an amount: 168.12
With tax added: $176.53
```

<!-- END: terminal interaction or other output -->

<hr class="hr1"/>

# cknkCh02Prj005

<!-- START: Problem Statement -->

Write a program that asks the user to enter a value for `x` and then displays the value of the following polynomial:  
$$ 3 x^5 + 2 x^4 - 5 x^3 - x^2 + 7 x - 6  $$  
*Hint:* C doesn't have an exponentiation operator, so you'll need to multiply `x` by itself repeatedly in order to compute the powers of `x`. (For example, ` x * x * x` is `x` cubed).

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh02Prj005.c](./cknkCh02Prj005.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->


```
Enter the value of x: 8
Value of the given polynomial: 103922
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->


```
Enter the value of x: 6
Value of the given polynomial: 24840
```

<!-- END: terminal interaction or other output -->

<hr class="hr1"/>

# cknkCh02Prj006

<!-- START: Problem Statement -->

Modify the program of Programming Project 5 so that the polynomial is evaluated using the following formula:  
$$ ((((3x + 2)x - 5)x - 1)x + 7)x -6 $$  
Note that the modified program performs fewer multiplications. This technique for evaluating polynomials is known as ***Horner's Rule***.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh02Prj006.c](./cknkCh02Prj006.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->


```
Enter the value of x: 8
Value of the given polynomial: 103922
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->


```
Enter the value of x: 6
Value of the given polynomial: 24840
```

<!-- END: terminal interaction or other output -->

<hr class="hr1"/>

# cknkCh02Prj007

<!-- START: Problem Statement -->

Write a progam that asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the smallest number of $20, $10, $5, and $1 bills:

```
Enter a dollar amount: 93

$20 bills: 4
$10 bills: 1
 $5 bills: 0
 $1 bills: 3
```

*Hint:* Divide the amount by 20 to determine the number of $20 bills needed, and then reduce the amount by the total value of the $20 bills. Repeat for the other bill sizes. Be sure to use integer values throughout, not floating point numbers.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh02Prj007.c](./cknkCh02Prj007.c)

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

## Trial2:

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

<hr class="hr1"/>

# cknkCh02Prj008

<!-- START: Problem Statement -->

Write a program that calculates the remaining balance on a loan after the first, second, and third monthly payments:  

```
Enter amount of loan: 20000.00
Enter interest rate: 6.0
Enter monthly payment: 386.66

Balance remaining after first payment: $19713.34
Balance remaining after second payment: $19425.25
Balance remaining after third payment: $19135.71
```

Display each balance with two digits after the decimal point. *Hint:* Each month, the balance is decreased by the amount of the payment, but increased by the balance times the monthly interest rate. To find the monthly interest rate, convert the interest rate entered by the user to a percentage and divide it by 12.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh02Prj008.c](./cknkCh02Prj008.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```
Enter amount of loan: 20000.00
Enter interest rate: 6.0
Enter monthly payment: 386.66
Balance remaining after first payment: $19713.34
Balance remaining after second payment: $19425.25
Balance remaining after third payment: $19135.71
```

<!-- END: terminal interaction or other output -->

## Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```
Enter amount of loan: 125000
Enter interest rate: 12
Enter monthly payment: 4573.00
Balance remaining after first payment: $121677.00
Balance remaining after second payment: $118320.77
Balance remaining after third payment: $114930.98
```

<!-- END: terminal interaction or other output -->

<hr class="hr1"/>

