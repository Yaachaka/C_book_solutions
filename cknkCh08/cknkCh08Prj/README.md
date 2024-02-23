<html>
<head>
<title>Chapter 08 Programming Projects</title>
<meta charset="utf-8">
<link rel="stylesheet" href="../../myStyle.css">
</head>
<body>

08 Arrays
---

# Chapter 08 Programming Projects

<hr class="hr1ExrcPrj"/>

# cknkCh08Prj001

<!-- START: Problem Statement -->

Modify the `repdigit.c` program of Section 8.1 so that it shows which digits (if any) were repeated:

```C
Enter a number: 939577
Repeated digit(s): 7 9
```

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh08Prj001.c](./cknkCh08Prj001.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a number: 939577
Repeated digit(s): 7 9
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a number: 18002668706
Repeated digit(s): 0 6 8
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```shell
Enter a number: 012457
No digits repeated
```

<!-- END: terminal interaction or other output -->

<hr class="hr1ExrcPrj"/>

# cknkCh08Prj002

<!-- START: Problem Statement -->

Modify the `repdigit.c` program of Section 8.1 so that it prints a table showing how many times each digit appears in the number:

```shell
Enter a number: 41271092
Digit:        0  1  2  3  4  5  6  7  8  9
Occurrences:  1  2  2  0  1  0  0  1  0  1
```

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh08Prj002.c](./cknkCh08Prj002.c)

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

# cknkCh08Prj003

<!-- START: Problem Statement -->

Modify the `repdigit.c` program of Section 8.1 so that the user can enter more than one number to be tested for repeated digits. The program should terminate when the user enters a number that's less than or equal to 0.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh08Prj003.c](./cknkCh08Prj003.c)

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

# cknkCh08Prj004

<!-- START: Problem Statement -->

Modify the `reverse.c` program of Section 8.1 to use the expression `(int)(sizeof(a) / sizeof(a[0]))` (or a macro with this value) for the array length.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh08Prj004.c](./cknkCh08Prj004.c)

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

# cknkCh08Prj005

<!-- START: Problem Statement -->

Modify the `interest.c` program of Section 8.1 so that it compounds interest monthly instead of annually. The form of the output shouldn't change; the balance should still be shown at annual intervals.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh08Prj005.c](./cknkCh08Prj005.c)

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

# cknkCh08Prj006

<!-- START: Problem Statement -->

The prototypical Internet newbie is a fellow named B1FF, who has a unique way of writing
messages. Here's a typical B1FF communiqué:

```
H3Y DUD3, C 15 RlLLY COOL!!!!!!!!!!
```

Write a "B1FF filter" that reads a message entered by the user and translates it into B1FF speak:

```shell
Enter message: Hey dude, C is rilly cool
In BlFF-speak: H3Y DUD3, C 15 RILLY COOL!!!!!!!!!!
```

Your program should convert the message to upper-case letters, substitute digits for certain letters (A→4, B→8, E→3, I→1, O→0, S→5), and then append 10 or so exclamation marks. *Hint*: Store the original message in an array of characters, then go back through the array, translating and printing characters one by one.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh08Prj006.c](./cknkCh08Prj006.c)

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

# cknkCh08Prj007

<!-- START: Problem Statement -->

Write a program that reads a 5 × 5 array of integers and then prints the row sums and the
column sums:

```shell
Enter row 1: 8 3 9 0 10
Enter row 2: 3 5 17 1 1
Enter row 3: 2 8 6 23 1
Enter row 4: 15 7 3 2 9
Enter row 5: 6 14 2 6 0

Row totals: 30 27 40 36 28
Column totals: 34 37 37 32 21
```

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh08Prj007.c](./cknkCh08Prj007.c)

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

# cknkCh08Prj008

<!-- START: Problem Statement -->

Modify Programming Project 7 so that it prompts for five quiz grades for each of five students, then computes the total score and average score for each *student*, and the average score, high score, and low score for each *quiz*.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh08Prj008.c](./cknkCh08Prj008.c)

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

# cknkCh08Prj009

<!-- START: Problem Statement -->

Write a program that generates a "random walk" across a 10 x 10 array. The array will contain characters (all '.' initially). The program must randomly "walk" from element to element, always going up, down, left, or right by one element. The elements visited by the program will be labeled with the letters A through z, in the order visited. Here's an example of the desired output:

```shell
A . . . . . . . . .
B C D . . . . . . .
. F E . . . . . . .
H G . . . . . . . .
I . . . . . . . . .
J . . . . . . . Z .
K . . R S T U V Y .
L M P Q . . . W X .
. N O . . . . . . .
. . . . . . . . . .
```

*Hint*: Use the `srand` and `rand` functions (see `deal.c`) to generate random numbers. After generating a number, look at its remainder when divided by 4. There are four possible values for the remainder 0, 1, 2, and 3—indicating the direction of the next move. Before performing a move, check that (a) it won't go outside the array, and (b) it doesn't take us to an element that already has a letter assigned. If either condition is violated, try moving in another direction. If all four directions are blocked, the program must terminate. Here's an example of premature termination:

```shell
A B G H I . . . . .
. C F . J K . . . .
. D E . M L . . . .
. . . . N O . . . .
. . W X Y P Q . . .
. . V U T S R . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
```

Y is blocked on all four sides, so there's no place to put Z.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh08Prj009.c](./cknkCh08Prj009.c)

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

# cknkCh08Prj010

<!-- START: Problem Statement -->

Modify Programming Project 8 from Chapter 5 so that the departure times are stored in an array and the arrival times are stored in a second array. (The times are integers, representing the number of minutes since midnight.) The program will use a loop to search the array of departure times for the one closest to the time entered by the user.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh08Prj010.c](./cknkCh08Prj010.c)

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

# cknkCh08Prj011

<!-- START: Problem Statement -->

Modify Programming Project 4 from Chapter 7 so that the program labels its output:

```shell
Enter phone number: 1-800-COL-LECT
In numeric form: 1-800-265-5328
```

The program will need to store the phone number (either in its original form or in its numeric form) in an array of characters until it can be printed. You may assume that the phone number is no more than 15 characters long.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh08Prj011.c](./cknkCh08Prj011.c)

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

# cknkCh08Prj012

<!-- START: Problem Statement -->

Modify Programming Project 5 from Chapter 7 so that the SCRABBLE values of the letters are stored in an array. The array will have 26 elements, corresponding to the 26 letters of the alphabet. For example, element 0 of the array will store 1 (because the SCRABBLE value of the letter A is 1), element 1 of the array will store 3 (because the SCRABBLE value of the letter B is 3), and so forth. As each character of the input word is read, the program will use the array to determine the SCRABBLE value of that character. Use an array initializer to set up the array.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh08Prj012.c](./cknkCh08Prj012.c)

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

# cknkCh08Prj013

<!-- START: Problem Statement -->

Modify Programming Project 11 from Chapter 7 so that the program labels its output:

```shell
Enter a first and last name: Lloyd Fosdick
You entered the name: Fosdick, L.
```

The program will need to store the last name (but not the first name) in an array of characters until it can be printed. You may assume that the last name is no more than 20 characters long.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh08Prj013.c](./cknkCh08Prj013.c)

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

# cknkCh08Prj014

<!-- START: Problem Statement -->

Write a program that reverses the words in a sentence:

```shell
Enter a sentence: you can cage a swallow can't you?
Reversal of sentence: you can't swallow a cage can you?
```

*Hint*: Use a loop to read the characters one by one and store them in a one-dimensional `char` array. Have the loop stop at a *period*, *question mark*, or *exclamation point* (the "terminating character"), which is saved in a separate `char` variable. Then use a second loop to search backward through the array for the beginning of the last word. Print the last word,then search backward for the next-to-last word. Repeat until the beginning of the array is reached. Finally, print the terminating character.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh08Prj014.c](./cknkCh08Prj014.c)

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

# cknkCh08Prj015

<!-- START: Problem Statement -->

One of the oldest known encryption techniques is the **Caesar cipher**, attributed to **Julius Caesar**. It involves replacing each letter in a message with another letter that is a fixed number of positions later in the alphabet. (If the replacement would go past the letter Z, the cipher wraps around" to the beginning of the alphabet. For example, if each letter is replaced by the letter two positions after it, then Y would be replaced by A, and Z would be replaced by B.) Write a program that encrypts a message using a Caesar cipher. The user will enter the message to be encrypted and the shift amount (the number of positions by which letters should be shifted):

```shell
Enter message to be encrypted: Go ahead, make my day.
Enter shift amount (1-25): 3
Encrypted message: Jr dkhdg, pdnh pb gdb.
```

Notice that the program can decrypt a message if the user enters 26 minus the original key:

```shell
Enter message to be encrypted: Jr dkhdg, pdnh pb gdb.
Enter shift amount (1-25): 23
Encrypted message: Go ahead, make my day.
```

You may assume that the message does not exceed 80 characters. Characters other than letters should be left unchanged. Lower-case letters remain lower-case when encrypted, and upper-case letters remain upper-case. Hint: To handle the wrap-around problem, use the expression `((ch-'A')+n) % 26 +'A'` to calculate the encrypted version of an uppercase letter, where `ch` stores the letter and `n` stores the shift amount. (You'll need a similar expression for lower-case letters.)

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh08Prj015.c](./cknkCh08Prj015.c)

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

# cknkCh08Prj016

<!-- START: Problem Statement -->

Write a program that tests whether two words are anagrams (permutations of the same letters):

```shell
Enter first word: smartest
Enter second word: mattress
The words are anagrams.

Enter first word: dumbest
Enter second word: stumble
The words are not anagrams.
```

Write a loop that reads the first word, character by character, using an array of 26 integers to keep track of how many times each letter has been seen. (For example, after the word *smartest* has been read, the array should contain the values 1 0 0 0 1 0 0 0 0 0 0 0 1 0 0 0 0 1 2 2 0 0 0 0 0 0, reflecting the fact that smartest contains one *a*, one *e*, one *m*, one *r*, two *s*'s and two *t*'s.) Use another loop to read the second word, except this time decrementing the corresponding array element as each letter is read. Both loops should ignore any characters that aren't letters, and both should treat upper-case letters in the same way as lower-case letters. After the second word has been read, use a third loop to check whether all the elements in the array are zero. If so, the words are anagrams. *Hint*: You may wish to use functions from <ctype.h>, such as `isalpha` and `tolower`.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh08Prj016.c](./cknkCh08Prj016.c)

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

# cknkCh08Prj017

<!-- START: Problem Statement -->

Write a program that prints an `n x n` magic square (a square arrangement of the numbers 1, 2, ..., n² in which the sums of the rows, columns, and diagonals are all the same). The user will specify the value of `n`:

```shell
This program creates a magic square of a specified size.
The size must be an odd number between 1 and 99.
Enter size of magic square: 5
   17   24    1    8   15
   23    5    7   14   16
    4    6   13   20   22
   10   12   19   21    3
   11   18   25    2    9
```

Store the magic square in a two-dimensional array. Start by placing the number 1 in the middle of row O. Place each of the remaining numbers 2, 3, .... n² by moving up one row and over one column. Any attempt to go outside the bounds of the array should "wrap around" to the opposite side of the array. For example, instead of storing the next number in row-1, we would store it in row `n-1` (the last row). Instead of storing the next number in column `n`, we would store it in column 0. If a particular array element is already occupied, put the number directly below the previously stored number. If your compiler supports variablelength arrays, declare the array to have `n` rows and `n` columns. If not, declare the array to have 99 rows and 99 columns.

<!-- END: Problem Statement -->

# Solution:


## Program Link

[cknkCh08Prj017.c](./cknkCh08Prj017.c)

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