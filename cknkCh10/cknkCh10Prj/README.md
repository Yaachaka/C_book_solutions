<html>
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Chapter 10 Programming Projects</title>
<link rel="stylesheet" href="../../myStyle.css">
</head>
<body>

10 Program Organization
---

# Chapter 10 Programming Projects

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh10Prj001

<!-- START: Problem Statement -->

Modify the stack example of Section 10.2 so that it stores characters instead of integers. Next, add a `main` function that asks the user to enter a series of parentheses and/or braces,then indicates whether or not they're properly nested:

```
Enter parentheses and/or braces: ((){}{()})
Parentheses/braces are nested properly
```

*Hint*: As the program reads characters, have it push each left parenthesis or left brace. When it reads a right parenthesis or brace, have it pop the stack and check that the item popped is a matching parenthesis or brace. (If not, the parentheses/braces aren’t nested properly.) When the program reads the new-line character, have it check whether the stack is empty; if so, the parentheses/braces are matched. If the stack isn't empty (or if `stack_underflow` is ever called), the parentheses/braces aren’t matched. If `stack_overflow` is called, have the program print the message `Stack overtlow` and terminate immediately.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class=ch_solution>

# Solution:


## Program Link

[cknkCh10Prj001.c](./cknkCh10Prj001.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```
Enter parentheses and/or braces: {((({({({({((({{{((({{{(({{
Stack Overflow: Sorry, the stack is already full!!!
Parentheses/braces are not nested properly.
```

<!-- END: terminal interaction or other output -->

#### Trial1 Comments:

<!-- START: Comments -->

The input is such a way that all the entries are opening braces so that the stack gets overflowed.

<!-- END: Comments -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```
Enter parentheses and/or braces: ((){}{()})
Parentheses/braces are nested properly.
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```
Enter parentheses and/or braces: ((){}{()}){
Parentheses/braces are not nested properly.
```

<!-- END: terminal interaction or other output -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh10Prj002

<!-- START: Problem Statement -->

Modify the `poker.c` program of Section 10.5 by moving the `num_in_rank` and `num_in_suit` arrays into `main`, which will pass them as arguments to `read_cards` and `analyze_hand`.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class=ch_solution>

# Solution:


## Program Link

[cknkCh10Prj002.c](./cknkCh10Prj002.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```
Enter a card: 3s
Enter a card: 6p
Bad card; ignored.
Enter a card: 6h
Enter a card: 9c
Enter a card: ac
Enter a card: kc
High card

Enter a card: 4h
Enter a card: 6
h
Bad card; ignored.
Enter a card: 6h
Enter a card: 8h
Enter a card: ah
Enter a card: kh
Flush

Enter a card: 2c
Enter a card: 4c
Enter a card: 5h
Enter a card: 8h
Enter a card: ad
High card

Enter a card: 3d
Enter a card: 5d
Enter a card: 8d
Enter a card: 4h
Enter a card: 9h
High card

Enter a card: 3d
Enter a card: 2d
Enter a card: 6h
Enter a card: 5h
Enter a card: kc
High card

Enter a card: 2s
Enter a card: 3s
Enter a card: 5s
Enter a card: 6s
Enter a card: 8s
Flush

Enter a card: 8c
Enter a card: 8h
Enter a card: 4d
Enter a card: 4h
Enter a card: 6s
Two pairs

Enter a card: 9s
Enter a card: 9c
Enter a card: 9h
Enter a card: 9d
Enter a card: ac
Four of a kind

Enter a card: 0
```

<!-- END: terminal interaction or other output -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh10Prj003

<!-- START: Problem Statement -->

Remove the `num_in_rank`, `num_in_suit`, and `card_exists` arrays from the `poker.c` program of Section 10.5. Have the program store the cards in a 5 x 2 array instead. Each row of the array will represent a card. For example, if the array is named `hand`, then `hand[0][0]` will store the rank of the first card and `hand[0][1]` will store the suit of the first card,

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class=ch_solution>

# Solution:


## Program Link

[cknkCh10Prj003.c](./cknkCh10Prj003.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```
Enter a card: 2s
Enter a card: 5s
Enter a card: 4s
Enter a card: 3s
Enter a card: 6s
Straight flush

Enter a card: 8c
Enter a card: as
Enter a card: 8c
Duplicate card; ignored.
Enter a card: 7c
Enter a card: ad
Enter a card: 3h
Pair

Enter a card: 6s
Enter a card: d2
Bad card; ignored.
Enter a card: 2d
Enter a card: 9c
Enter a card: 4h
Enter a card: ts
High card

Enter a card: 0
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```
Enter a card: 4h
Enter a card: 8h
Enter a card: 5h
Enter a card: 7h
Enter a card: 6h
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

Enter a card: ks
Enter a card: qs
Enter a card: ts
Enter a card: as
Enter a card: js
Straight flush

Enter a card: 1s
Bad card; ignored.
Enter a card: qs
Enter a card: ts
Enter a card: as
Enter a card: js
Enter a card: 2s
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

Enter a card: 2c
Enter a card: 3d
Enter a card: 2c
Duplicate card; ignored.
Enter a card: 2d
Enter a card: 4s
Enter a card: 4h
Two pairs

Enter a card: 4d
Enter a card: 6c
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

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh10Prj004

<!-- START: Problem Statement -->

Modify the `poker.c` program of Section 10.5 by having it recognize an additional category, "royal flush" (ace, king, queen, jack, ten of the same suit). A royal flush ranks higher than all other hands.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class=ch_solution>

# Solution:


## Program Link

[cknkCh10Prj004.c](./cknkCh10Prj004.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```

```

<!-- END: terminal interaction or other output -->

#### Trial1 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```

```

<!-- END: terminal interaction or other output -->

#### Trial2 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```

```

<!-- END: terminal interaction or other output -->

#### Trial3 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh10Prj005

<!-- START: Problem Statement -->

Modify the `poker.c` program of Section 10.5 by allowing “ace-low” straights (ace, two, three, four, five).

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class=ch_solution>

# Solution:


## Program Link

[cknkCh10Prj005.c](./cknkCh10Prj005.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```

```

<!-- END: terminal interaction or other output -->

#### Trial1 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```

```

<!-- END: terminal interaction or other output -->

#### Trial2 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```

```

<!-- END: terminal interaction or other output -->

#### Trial3 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh10Prj006

<!-- START: Problem Statement -->

Some calculators (notably those from Hewlett-Packard) use a system of writing mathematical expressions known as **Reverse Polish Notation (RPN)**. In this notation, operators are placed after their operands instead of benween their operands. For example, `1 + 2` would be written `1 2 +` in RPN, and `1 + 2 * 3` would be written `1 2 3 * +`. RPN expressions can easily be evaluated using a stack. The algorithm involves reading the operators and operands in an expression from left to right, performing the following actions:

- When an operand is encountered, push it onto the stack.  
- When an operator is encountered, pop its operands from the stack, perform the operation on those operands, and then push the result onto the stack.  

Write a program that evaluates RPN expressions. The operands will be single-digit integers. The operators are `+`, `-`, `*`, `/`, and `=`. The `=` operator causes the top stack item to be displayed; afterwards, the stack is cleared and the user is prompted to enter another expression. The process continues until the user enters a character that is not an operator or operand:

```
Enter an RPN expression: 1 2 3 * + =
Value of expression: 7

Enter an RPN expression: 5 8 * 4 9 - / =
Value of expression: -8

Enter an RPN expression: q
```

If the stack overflows, the program will display the message `Expression is too complex` and terminate. If the stack underflows (because of an expression such as 12 + +), the program will display the message `Not enough operands in expression` and terminate. *Hints*: Incorporate the stack code from Section 10.2 into your program. Use `scanf (" %c", &ch)` to read the operators and operands.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class=ch_solution>

# Solution:


## Program Link

[cknkCh10Prj006.c](./cknkCh10Prj006.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```

```

<!-- END: terminal interaction or other output -->

#### Trial1 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```

```

<!-- END: terminal interaction or other output -->

#### Trial2 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```

```

<!-- END: terminal interaction or other output -->

#### Trial3 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh10Prj007

<!-- START: Problem Statement -->

Write a program that prompts the user for a number and then displays the number, using characters to simulate the effect of a seven-segment display:

```
Enter a number: 491-9014
     _       _   _
|_| |_|   | |_| | |   | |_|
  |  _|   |  _| |_|   |   |
```

Characters other than digits should be ignored. Write the program so that the maximum number of digits is controlled by a macro named `MAX_DIGITS`, which has the value 10. If the number contains more than this number of digits, the extra digits are ignored. *Hints*: Use two external arrays. One is the segments array (see Exercise 6 in Chapter 8), which stores data representing the correspondence between digits and segments. The other array, digits, will be an array of characters with 4 rows (since each segmented digit is four characters high) and `MAX_DIGITS * 4` columns (digits are three characters wide, but a space is needed between digits for readability), Write your program as four functions: `main`, `clear_digits_array`. `process_digit`, and `print_digits` array. Here are the prototypes for the latter three functions:

```C
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);
```

`clear_digits_array` will store blank characters into all elements of the `digits` array, `process_digit` will store the seven-segment representation of digit into a specified position in the `digits` array (positions range from 0 to `MAX_DIGITS - 1`). `print_digits` array will display the rows of the `digits` array, each on a single line, producing output such as that shown in the example.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class=ch_solution>

# Solution:


## Program Link

[cknkCh10Prj007.c](./cknkCh10Prj007.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```

```

<!-- END: terminal interaction or other output -->

#### Trial1 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```

```

<!-- END: terminal interaction or other output -->

#### Trial2 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```

```

<!-- END: terminal interaction or other output -->

#### Trial3 Comments:

<!-- START: Comments -->



<!-- END: Comments -->

# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

</body>
</html>
