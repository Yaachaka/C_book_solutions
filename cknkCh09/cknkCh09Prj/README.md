<html>
<head>
<title>Chapter 09 Programming Projects</title>
<meta charset="utf-8">
<link rel="stylesheet" href="../../myStyle.css">
</head>
<body>

09 Functions
---

# Chapter 09 Programming Projects

<hr class="hr1ExrcPrj"/>

# cknkCh09Prj001

<!-- START: Problem Statement -->

Write a program that asks the user to enter a series of integers (which it stores in an array), then sorts the integers by calling the function `selection_sort`. When given an array with `n` elements, `selection_sort` must do the following:

1. Search the array to find the largest element, then move it to the last position in the array.  
2. Call itself recursively to sort the first `n — 1` elements of the array.  

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh09Prj001.c](./cknkCh09Prj001.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
How many numbers to sort?: 6
Enter the numbers to sort: 27 26 32 41 58 35
Sorted numbers: 26 27 32 35 41 58 
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
How many numbers to sort?: 10
Enter the numbers to sort: 11 40 41 32 43 8 10 109 22 54
Sorted numbers: 8 10 11 22 32 40 41 43 54 109 
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
How many numbers to sort?: 8
Enter the numbers to sort: 75 53 15 59 85 25 45 65
Sorted numbers: 15 25 45 53 59 65 75 85
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh09Prj002

<!-- START: Problem Statement -->

Modify Programming Project 5 from Chapter 5 so that it uses a function to compute the amount of income tax. When passed an amount of taxable income, the function will return the tax due.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh09Prj002.c](./cknkCh09Prj002.c)

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

# cknkCh09Prj003

<!-- START: Problem Statement -->

Modify Programming Project 9 from Chapter 8 so that it includes the following functions:

```C
void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);
```

`main` first calls `generate_random_walk`, which initializes the array to contain `'.'` characters and then replaces some of these characters by the letters A through Z, as described in the original project. `main` then calls print array to display the array on the screen.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh09Prj003.c](./cknkCh09Prj003.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
A . . . . . . . . . 
B . . . . . . . . . 
C D K L . . . . . . 
F E J M . . . . . . 
G H I N . . . . . . 
. . . O . . . . . . 
. . . P . . . . . . 
. . . Q R . V W . . 
. . . . S T U X Y . 
. . . . . . . . Z . 
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
A B C . . . . . . . 
. . D . . . . . . . 
G F E . M N O P . . 
H I J K L . . Q . . 
. . . . . . . R . . 
. . . . . U T S . . 
. . . . W V . . . . 
. . . . X Y . . . . 
. . . . . Z . . . . 
. . . . . . . . . . 
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Note: Premature termination...
A . . . . V W R Q . 
B C . . . U T S P . 
. D . . . L M N O . 
. E F G H K . . . . 
. . . . I J . . . . 
. . . . . . . . . . 
. . . . . . . . . . 
. . . . . . . . . . 
. . . . . . . . . . 
. . . . . . . . . .
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh09Prj004

<!-- START: Problem Statement -->

Modify Programming Project 16 from Chapter 8 so that it includes the following functions:

```C
void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);
```

`main` will call `read_word` twice, once for each of the two words entered by the user. As it reads a word, `read_word` will use the letters in the word to update the counts array, as described in the original project. (`main` will declare two arrays, one for each word. These arrays are used to track how many times each letter occurs in the words.) `main` will then call `equal_array`, passing it the two arrays. `equal_array` will return true if the elements in the two arrays are identical (indicating that the words are anagrams) and false otherwise.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh09Prj004.c](./cknkCh09Prj004.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter first word: mattress
Enter second word: smartest
The words are anagrams.
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter first word: dumbest
Enter second word: stumble
The words are not anagrams.
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter first word: Sumana
Enter second word: Manasu
The words are anagrams.
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh09Prj005

<!-- START: Problem Statement -->

Modify Programming Project 17 from Chapter 8 so that it includes the following functions:

```C
void create_magic_square(int n, char magic_square([n][n]);
void print_magic_square(int n, char magic_square([n][n]);
```

After obtaining the number 7 from the user, `main` will call `create_magic_square`, passing it an `n x n` array that is declared inside `main`. `create_magic_sguare` will fill the array with the numbers 1, 2, ... , n<sup>2</sup> as described in the original project. `main` will then call `print_magic_square`, which will display the array in the format described in the original project. *Note*: If your compiler doesn’t support variable-length arrays, declare the array in main to be `99 x 99` instead of `n x n` and use the following prototypes instead:

```C
void create_magic_square(int n, char magic_square[99][99]);
void print_magic_square(int n, char magic_square[99][99]);
```

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh09Prj005.c](./cknkCh09Prj005.c)

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

# cknkCh09Prj006

<!-- START: Problem Statement -->

Write a function that computes the value of the following polynomial:

$$ 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 $$

Write a program that asks the user to enter a value for `x`, calls the function to compute the value of the polynomial, and then displays the value returned by the function.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh09Prj006.c](./cknkCh09Prj006.c)

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

# cknkCh09Prj007

<!-- START: Problem Statement -->

The `power` function of Section 9.6 can be made faster by having it calculate <span class="displayInlineMath">$$ x^n $$</span> in a different way. We first notice that if `n` is a power of 2, then <span class="displayInlineMath">$$ x^n $$</span> can be computed by squaring. For example, <span class="displayInlineMath">$$ x^4 $$</span> is the square of <span class="displayInlineMath">$$ x^2 $$</span>, so <span class="displayInlineMath">$$ x^4 $$</span> can be computed using only two multiplications instead of three. As it happens, this technique can be used even when `n` is not a power of 2. If `n` is even, we use the formula <span class="displayInlineMath">$$ x^n = (x^{n/2})^2 $$</span>. If `n` is odd, then <span class="displayInlineMath">$$ x^n = x \times x^{n-1} $$</span>. Write a recursive function that computes <span class="displayInlineMath">$$ x^n $$</span>. (The recursion ends when `n = 0`, in which case the function returns 1.) To test your function, write a program that asks the user to enter values for `x` and `n`, calls `power` to compute <span class="displayInlineMath">$$ x^n $$</span>, and then displays the value returned by the function.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh09Prj007.c](./cknkCh09Prj007.c)

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

# cknkCh09Prj008

<!-- START: Problem Statement -->

Write a program that simulates the game of craps, which is played with two dice. On the first roll, the player wins if the sum of the dice is 7 or 11. The player loses if the sum is 2, 3, or 12. Any other roll is called the “point” and the game continues. On each subsequent roll, the player wins if he or she rolls the point again. The player loses by rolling 7. Any other roll is ignored and the game continues. At the end of each game, the program will ask the user whether or not to play again. When the user enters a response other than `y` or `Y`, the program will display the number of wins and losses and then terminate.

```shell
You rolled: 8
Your point is 8
You rolled: 3
You rolled: 10
You rolled: 8
You win!

Play again? y

You rolled: 6
Your point is 6
You rolled: 5
You rolled: 12
You rolled: 3
You rolled: 7
You lose!

Play again? y

You rolled: 11
You win!

Play again? n
Wins: 2 Losses: 1
```

Write your program as three functions: `main`, `roll_dice`, and `play_game`. Here are the prototypes for the latter two functions:

```C
int roll_dice(void);
bool play_game(void);
```

`roll_dice` should generate two random numbers, each between 1 and 6, and return their sum. `play_game` should play one craps game (calling `roll_dice` to determine the outcome of each dice roll); it will return `true` if the player wins and `false` if the player loses. `play_game` is also responsible for displaying messages showing the results of the player’s dice rolls. `main` will call `play_game` repeatedly, keeping track of the number of wins and losses and displaying the “you win" and “you lose" messages. *Hint*: Use the `rand` function to generate random numbers. See the `deal.c` program in Section 8.2 for an example of how to call `rand` and the related `srand` function.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh09Prj008.c](./cknkCh09Prj008.c)

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
