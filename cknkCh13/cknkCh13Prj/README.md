<html>
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Chapter 13 Programming Projects</title>
<link rel="stylesheet" href="../../myStyle.css">
</head>
<body>

13 Strings
---

# Chapter 13 Programming Projects

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh13Prj001

<!-- START: Problem Statement -->

Write a program that finds the "smallest" and "largest" in a series of words. After the user enters the words, the program will determine which words would come first and last if the words were listed in dictionary order. The program must stop accepting input when the user enters a four-letter word. Assume that no word is more than 20 letters long. An interactive session with the program might look like this:

```
Enter word: dog
Enter word: zebra
Enter word: rabbit
Enter word: catfish
Enter word: walrus
Enter word: cat
Enter word: fish

Smallest word: cat
Largest word: zebra
```

*Hint*: Use two strings named `smallest_word` and `largest_word` to keep track of the "smallest" and "largest" words entered so far. Each time the user enters a new word, use `strcmp` to compare it with `smallest_word`; if the new word is "smaller," use `strcpy` to save it in `smallest_word`. Do a similar comparison with `largest_word`. Use `strlen` to determine when the user has entered a four-letter word.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Prj001.c](./cknkCh13Prj001.c)

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

# cknkCh13Prj002

<!-- START: Problem Statement -->

Improve the `remind.c` program of Section 13.5 in the following ways:

a. Have the program print an error message and ignore a reminder if the corresponding day is negative or larger than 31. *Hint*: Use the `continue` statement.  
b. Allow the user to enter a day, a 24-hour time, and a reminder. The printed reminder list should be sorted first by day, then by time. (The original program allows the user to enter a time, but it's treated as part of the reminder.)  
c. Have the program print a one-*year* reminder list. Require the user to enter days in the form *month/day*.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Prj002.c](./cknkCh13Prj002.c)

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

# cknkCh13Prj003

<!-- START: Problem Statement -->

Modity the `deal.c` program of Section 8.2 so that it prints the full names of the cards it deals:

```
Enter number of cards in hand: 5
Your hand:
Seven of clubs
Two of spades
Five of diamonds
Ace of spades
Two of hearts
```

*Hint*: Replace `rank_code` and `suit_code` by arrays containing pointers to strings.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Prj003.c](./cknkCh13Prj003.c)

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

# cknkCh13Prj004

<!-- START: Problem Statement -->

Write a program named `reverse.c` that echoes its command-line arguments in reverse order. Running the program by typing

```
reverse void and null
```

should produce the following output:

```
null and void
```

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Prj004.c](./cknkCh13Prj004.c)

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

# cknkCh13Prj005

<!-- START: Problem Statement -->

Write a program named `sum.c` that adds up its command-line arguments, which are assumed to be integers. Running the program by typing

```
sum 8 24 62
```

should produce the following output:

```
Total: 94
```

*Hint*: Use the `atoi` function to convert each command-line argument from string form to integer form.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Prj005.c](./cknkCh13Prj005.c)

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

# cknkCh13Prj006

<!-- START: Problem Statement -->

Improve the `planet.c` program of Section 13.7 by having it ignore case when comparing command-line arguments with strings in the planets array.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Prj006.c](./cknkCh13Prj006.c)

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

# cknkCh13Prj007

<!-- START: Problem Statement -->

Modify Programming Project 11 from Chapter 5 5o that it uses arrays containing pointers to strings instead of `switch` statements. For example, instead of using a `switch` statement to print the word for the first digit, use the digit as an index into an array that contains the strings "`twenty`", "`thirty`", and so forth.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Prj007.c](./cknkCh13Prj007.c)

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

# cknkCh13Prj008

<!-- START: Problem Statement -->

Modify Programming Project 5 from Chapter 7 so that it includes the following function:

```C
int compute_scrabble_value(const char *word);
```

The function returns the SCRABBLE value of the string pointed to by `word`.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Prj008.c](./cknkCh13Prj008.c)

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

# cknkCh13Prj009

<!-- START: Problem Statement -->

Modify Programming Project 10 from Chapter 7 so that it includes the following function:

```C
int compute_vowel_count(const char *sentence) ;
```

The function returns the number of vowels in the string pointed to by the `sentence` parameter.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Prj009.c](./cknkCh13Prj009.c)

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

# cknkCh13Prj010

<!-- START: Problem Statement -->

Maodify Programming Project 11 trom Chapter 7 so that it includes the following function:

```C
void reverse_name(char *name);
```

The function expects name to point to a string containing a first name followed by a last name. It modifies the string so that the last name comes first, followed by a comma, a space, the first initial, and a period. The original string may contain extra spaces before the first name, between the first and last names, and after the last name.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Prj010.c](./cknkCh13Prj010.c)

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

# cknkCh13Prj011

<!-- START: Problem Statement -->

Modify Programming Project 13 from Chapter 7 so that it includes the following function:

```C
double compute_average_word_length(const char *sentence);
```

The function returns the average length of the words in the string pointed to by `sentence`.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Prj011.c](./cknkCh13Prj011.c)

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

# cknkCh13Prj012

<!-- START: Problem Statement -->

Modify Programming Project 14 from Chapter 8 so that it stores the words in a two-dimensional `char` array as it reads the sentence, with each row of the array storing a single word. Assume that the sentence contains no more than 30 words and no word is more than 20 characters long. Be sure to store a null character at the end of each word so that it can be treated as a string.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Prj012.c](./cknkCh13Prj012.c)

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

# cknkCh13Prj013

<!-- START: Problem Statement -->

Maodify Programming Project 15 from Chapter 8 so that it includes the following function:

```C
void encrypt(char *message, int shift);
```

The function expects `message` to point to a string containing the message to be encrypted; `shift` represents the amount by which each letter in the message is to be shifted.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Prj013.c](./cknkCh13Prj013.c)

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

# cknkCh13Prj014

<!-- START: Problem Statement -->

Modify Programming Project 16 from Chapter 8 so that it includes the following function:

```C
bool are_anagrams(const char *word1, const char *word2);
```

The function returns `true` if the strings pointed to by `word1` and `word2` are anagrams.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Prj014.c](./cknkCh13Prj014.c)

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

# cknkCh13Prj015

<!-- START: Problem Statement -->

Modify Programming Project 6 from Chapter 10 so that it includes the following function:

```C
int evaluate_RPN_expression(const char *expression);
```

The function returns the value of the RPN expression pointed to by `expression`.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Prj015.c](./cknkCh13Prj015.c)

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

# cknkCh13Prj016

<!-- START: Problem Statement -->

Modify Programming Project 1 from Chapter 12 so that it includes the following function:

```C
void reverse(char *message);
```

The function reverses the string pointed to by `message`. *Hint*: Use two pointers, one initially pointing to the first character of the string and the other initially pointing to the last character. Have the function reverse these characters and then move the pointers toward each other, repeating the process until the pointers meet.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Prj016.c](./cknkCh13Prj016.c)

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

# cknkCh13Prj017

<!-- START: Problem Statement -->

Modify Programming Project 2 from Chapter 12 so that it includes the following function:

```C
bool is_palindrome(const char *message);
```

The function returns `true` if the string pointed to by `message` is a palindrome.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Prj017.c](./cknkCh13Prj017.c)

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

# cknkCh13Prj018

<!-- START: Problem Statement -->

Write a program that accepts a date from the user in the form *mm/dd/yyyy* and then displays it in the form *month dd, yyyy*, where *month* is the name of the month: 

```C
Enter a date (mm/dd/yyyy): 2/17/2011
You entered the date February 17, 2011
```

Store the month names in an array that contains pointers to strings.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Prj018.c](./cknkCh13Prj018.c)

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
