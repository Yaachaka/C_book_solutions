<html>
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Chapter 12 Programming Projects</title>
<link rel="stylesheet" href="../../myStyle.css">
</head>
<body>

12 Pointers and Arrays
---

# Chapter 12 Programming Projects

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh12Prj001

<!-- START: Problem Statement -->

<!-- START: ordered-list -->
<ol type="a">
<li>

Write a program that reads a message, then prints the reversal of the message:

```
Enter a message: Don't get mad, get even.
Reversal is: .neve teg ,dam teg t'noD
```

*Hint*: Read the message one character at a time (using `getchar`) and store the characters in an array. Stop reading when the array is full or the character read is `'\n'`.

</li>
<li>

Revise the program to use a pointer instead of an integer to keep track of the current position in the array.

</li>
</ol>
<!-- END: ordered-list -->

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh12Prj001a.c](./cknkCh12Prj001a.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```
Enter a message: Don't get mad, get even.
Reversal is: .neve teg ,dam teg t'noD
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```
Enter a message: Nanna ninna manavu serithu...
Reversal is: ...uhtires uvanam annin annaN
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```
Enter a message: Idu yaaru bareda katheyo... nanagaagi banda vyatheyo...
Reversal is: an ...oyehtak aderab uraay udI
```

<!-- END: terminal interaction or other output -->

## Program Link

[cknkCh12Prj001b.c](./cknkCh12Prj001b.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```
Enter a message: Don't get mad, get even.
Reversal is: .neve teg ,dam teg t'noD
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```
Enter a message: Kaagadada doniyalli naa kooruvantha hoththaayithe...
Reversal is: urook aan illayinod adadagaaK
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```
Enter a message: Aa pusthakavannu odihenu.
Reversal is: .unehido unnavakahtsup aA
```

<!-- END: terminal interaction or other output -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh12Prj002

<!-- START: Problem Statement -->

<!-- START: ordered-list -->
<ol type="a">
<li>

Write a program that reads a message, then checks whether it's a palindrome (the letters in the message are the same from left to right as from right to left):

```
Enter a message: He lived as a devil, eh?
Palindrome

Enter a message: Madam, I am Adam.
Not a palindrome
```

Ignore all characters that aren't letters. Use integer variables to keep track of positions in the array.

</li>
<li>

Revise the program to use pointers instead of integers to keep track of positions in the array.

</li>
</ol>
<!-- END: ordered-list -->
<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh12Prj002a.c](./cknkCh12Prj002a.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```
Enter a message: He lived as a devil, eh?
Palindrome
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```
Enter a message: Madam, I am Adam.
Not a Palindrome
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```
Enter a message: Malayalam
Palindrome
```

<!-- END: terminal interaction or other output -->

## Program Link

[cknkCh12Prj002b.c](./cknkCh12Prj002b.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```
Enter a message: He lived as a devil, eh?
Palindrome
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```
Enter a message: Malayalam
Palindrome
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```
Enter a message: Madam, I am Adam.
Not a Palindrome
```

<!-- END: terminal interaction or other output -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh12Prj003

<!-- START: Problem Statement -->

Simplify Programming Project 1(b) by taking advantage of the fact that an array name can be used as a pointer.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh12Prj003.c](./cknkCh12Prj003.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```
Enter a message: Don't get mad, get even.
Reversal is: .neve teg ,dam teg t'noD
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```
Enter a message: Kaagadada doniyalli naa kooruvantha hoththaayithe...
Reversal is: urook aan illayinod adadagaaK
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```
Enter a message: Aa pusthakavannu odihenu.
Reversal is: .unehido unnavakahtsup aA
```

<!-- END: terminal interaction or other output -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh12Prj004

<!-- START: Problem Statement -->

Simplify Programming Project 2(b) by taking advantage of the fact that an array name can be used as a pointer.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh12Prj004.c](./cknkCh12Prj004.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```
Enter a message: He lived as a devil, eh?
Palindrome
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```
Enter a message: Malayalam
Palindrome
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```
Enter a message: Madam, I am Adam.
Not a Palindrome
```

<!-- END: terminal interaction or other output -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh12Prj005

<!-- START: Problem Statement -->

Modify Programming Project 14 from Chapter 8 so that it uses a pointer instead of an integer to keep track of the current position in the array that contains the sentence.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh12Prj005.c](./cknkCh12Prj005.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```
Enter a sentence (max hundred characters): you can cage a swallow can't you?
Reversal of words in sentence: you can't swallow a cage can you?
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```
Enter a sentence (max hundred characters): Nooraaru kaala sukhavaagi baalu.
Reversal of words in sentence: baalu sukhavaagi kaala Nooraaru.
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```
Enter a sentence (max hundred characters): katheyo bareda yaaru Idu?
Reversal of words in sentence: Idu yaaru bareda katheyo?
```

<!-- END: terminal interaction or other output -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh12Prj006

<!-- START: Problem Statement -->

Modify the `qsort.c` program of Section 9.6 so that `low`, `high`, and `middle` are pointers to array elements rather than integers. The `split` function will need to return a pointer, not an integer.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh12Prj006.c](./cknkCh12Prj006.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```
Enter 10 numbers to be sorted: 9 16 47 82 4 66 12 3 25 51
In sorted order: 3 4 9 12 16 25 47 51 66 82 
```

<!-- END: terminal interaction or other output -->

### Trial2:

#### Trial2 execution:

<!-- START: terminal interaction or other output -->

```
Enter 10 numbers to be sorted: 10 38 12 45 67 8 11 12 9 10
In sorted order: 8 9 10 10 11 12 12 38 45 67 
```

<!-- END: terminal interaction or other output -->

### Trial3:

#### Trial3 execution:

<!-- START: terminal interaction or other output -->

```
Enter 10 numbers to be sorted: 99 88 22 11 33 55 77 44 66 00
In sorted order: 0 11 22 33 44 55 66 77 88 99 
```

<!-- END: terminal interaction or other output -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh12Prj007

<!-- START: Problem Statement -->

Modify the `maxmin.c` program of Section 11.4 so that the `max_min` function uses a pointer instead of an integer to keep track of the current position in the array.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh12Prj007.c](./cknkCh12Prj007.c)

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
