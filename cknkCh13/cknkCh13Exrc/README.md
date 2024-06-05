<html>
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Chapter 13 exercises</title>
<link rel="stylesheet" href="../../myStyle.css">
</head>
<body>

13 Strings
---

# Chapter 13 Excercises

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh13Exrc001

Section 13.3

<!-- START: Problem Statement -->

The following function calls supposedly write a single new-line character, but some are incorrect. Identify which calls don't work and explain why.

a. `printf("%c", '\n');`  
b. `printf("%c", "\n");`  
c. `printf("%s", '\n');`  
d. `printf("%s", "\n");`  
e. `printf('\n');`  
f. `printf("\n");`  
g. `putchar('\n');`  
h. `putchar("\n");`  
i. `puts('\n');`  
j. `puts("\n");`  
k. `puts("");`  

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Exrc001.c](./cknkCh13Exrc001.c)

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

# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh13Exrc002

Section 13.3

<!-- START: Problem Statement -->

Suppose that `p` has been declared as follows:

```C
char *p = "abc";
```

Which of the following function calls are legal? Show the output produced by each legal call, and explain why the others are illegal.

a. `putchar(p);`  
b. `putchar(*p);`  
c. `puts(p);`  
d. `puts(*p);`  

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Exrc002.c](./cknkCh13Exrc002.c)

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

# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh13Exrc003

Section 13.3

<!-- START: Problem Statement -->

Suppose that we call `scanf` as follows:

```C
scanf("%d%s%d", &i, s, &j);
```

If the user enters `12abc34 56def78`, what will be the values of `i`, `s`, and `j` after the call? (Assume that `i` and `j` are `int` variables and `s` is an array of characters.)

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Exrc003.c](./cknkCh13Exrc003.c)

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

# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh13Exrc004

Section 13.3

<!-- START: Problem Statement -->

Modify the `read_1ine` function in each of the following ways:

a. Have it skip white space before beginning to store input characters.  
b. Have it stop reading at the first white-space character. *Hint*: To determine whether or not a character is white space, call the `isspace` function.  
c. Have it stop reading at the first new-line character, then store the new-line character in the string.  
d. Have it leave behind characters that it doesn't have room to store.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Exrc004.c](./cknkCh13Exrc004.c)

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

# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh13Exrc005

Section 13.4

<!-- START: Problem Statement -->

a. Write a function named `capitalize` that capitalizes all letters in its argument. The argument will be a null-terminated string containing arbitrary characters, not just letters. Use array subscripting to access the characters in the string. *Hint*: Use the `toupper` function to convert each character to upper-case.  
b. Rewrite the `capitalize` function, this time using pointer arithmetic to access the characters in the string.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Exrc005.c](./cknkCh13Exrc005.c)

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

# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh13Exrc006

Section 13.4

<!-- START: Problem Statement -->

Write a function named `censor` that modifies a string by replacing every occurrence of `foo` by `xxx`. For example, the string `"food fool"` would become `"xxxd xxxl"`. Make the function as short as possible without sacrificing clarity.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Exrc006.c](./cknkCh13Exrc006.c)

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

# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh13Exrc007

Section 13.5

<!-- START: Problem Statement -->

Suppose that `str` is an array of characters. Which one of the following statements is not equivalent to the other three?

a. `*str = 0;`  
b. `str[0] = '\0';`  
c. `strcpy(str, "");`  
d. `strcat(str, "");`  

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Exrc007.c](./cknkCh13Exrc007.c)

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

# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh13Exrc008

Section 13.5

<!-- START: Problem Statement -->

What will be the value of the string `str` after the following statements have been executed?

```C
strcpy(str, "tire-bouchon");
strcpy(&str[4], "d-or-wi");
strcat(str, "red?");
```

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Exrc008.c](./cknkCh13Exrc008.c)

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

# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh13Exrc009

Section 13.5

<!-- START: Problem Statement -->

What will be the value of the string `s1` after the following statements have been executed?

```C
strcpy(s1, "computer");
strcpy(s2, "science");

if (strcmp(s1, s2) < 0)
    strcat(s1, s2);
else
    strcat(s2, s1);
s1[strlen(s1) - 6] = '\0';
```

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Exrc009.c](./cknkCh13Exrc009.c)

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

# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh13Exrc010

Section 13.5

<!-- START: Problem Statement -->

The following function supposedly creates an identical copy of a string. What's wrong with the function?


```C
char *duplicate(const char *p)
{
    char *q;

    strcpy(q, p);
    return q;
}
```

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Exrc010.c](./cknkCh13Exrc010.c)

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

# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh13Exrc011

Section 13.5

<!-- START: Problem Statement -->

The Q&A section at the end of this chapter shows how the `strcmp` function might be written using array subscripting. Modify the function to use pointer arithmetic instead.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Exrc011.c](./cknkCh13Exrc011.c)

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

# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh13Exrc012

Section 13.5

<!-- START: Problem Statement -->

Writc the following function:

```C
void get_extension(const char *file_name, char *extension);
```

`file_name` points to a string containing a file name. The function should store the extension on the file name in the string pointed to by `extension`. For example, if the file name is "memo.txt", the function will store "txt" in the string pointed to by `extension`. If the file name doesn't have an extension, the function should store an empty string (a single null character) in the string pointed to by extension. Keep the function as simple as possible by having it use the `strlen` and `strcpy` functions.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Exrc012.c](./cknkCh13Exrc012.c)

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

# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh13Exrc013

Section 13.5

<!-- START: Problem Statement -->

Write the following function:

```C
void build_index_url(const char *domain, char *index_url);
```

domain points to a string containing an Internet domain, such as `"knking.com"`. The function should add `"http://www."` to the beginning of this string and `"/index.html"` to the end of the string, storing the result in the string pointed to by `index_url`. (In this example, the result will be `"http://www.knking.com/index.html"`.) You may assume that `index_url` points to a variable that is long enought to hold the resulting string. Keep the function as simple as possible by having it use the `strcat` and `strcpy` functions.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Exrc013.c](./cknkCh13Exrc013.c)

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

# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh13Exrc014

Section 13.6

<!-- START: Problem Statement -->

What does the following program print?

```C
#include <stdio.h>

int main(void)
{
    char s[] = "Hsjodi", *p;
    
    for (p = s; *p; p++)
        --*p;

    puts(s);
    return 0;
}
```

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Exrc014.c](./cknkCh13Exrc014.c)

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

# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh13Exrc015

Section 13.6

<!-- START: Problem Statement -->

Let `f` be the following function:

```C
int f(char *s, char *t)
{
    char *p1, *p2;

    for (p1 = 8; *p1; p1++)
    {
        for (p2 = t; *p2; p2++)
            if (*pl == *p2) break;
        if (*p2 == '\0') break;
    }
    return p1 - s;
}
```

a. What is the value of `f("abcd", "babc")`?  
b. What is the value of `f("abcd", "bcd")`?  
c. In general, what value does `f` return when passed two strings `s` and `t`?  

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Exrc015.c](./cknkCh13Exrc015.c)

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

# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh13Exrc016

Section 13.6

<!-- START: Problem Statement -->

Use the techniques of Section 13.6 to condense the `count_spaces` function of Section 13.4. In particular, replace the `for` statement by a `while` loop.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Exrc016.c](./cknkCh13Exrc016.c)

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

# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh13Exrc017

Section 13.6

<!-- START: Problem Statement -->

Write the following function:

```C
bool test_extension(const char *file_name, const char *extension);
```

`file_name` points to a string containing a file name. The function should return `true` if the file's extension matches the string pointed to by extension, ignoring the case of letters. For example, the call test extension("memo.txt", "TXT") would return `true`. Incorporate the "search for the end of a string" idiom into your function. *Hint*: Use the `toupper` function to convert characters to upper case before comparing them.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Exrc017.c](./cknkCh13Exrc017.c)

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

# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

    
<!-- START: div -->
<div class="ch_problem">

# cknkCh13Exrc018

Section 13.6

<!-- START: Problem Statement -->

Write the following function:

```C
void remove_filename(char *url);
```

`url` points to a string containing a URL (Uniform Resource Locator) that ends with a file name (such as `"http://www.knking.com/index.html"`). The function should modify the string by removing the file name and the preceding slash. (In this example, the result will be `"http://www.knking.com"`.) Incorporate the "search for the end of a string" idiom into your function. *Hint*: Have the function replace the last slash in the string by a null character.

<!-- END: Problem Statement -->

</div>
<!-- END: div -->

<!-- START: div -->
<div class="ch_solution">

# Solution:


## Program Link

[cknkCh13Exrc018.c](./cknkCh13Exrc018.c)

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

# Exercise Comment:

<!-- START: Comments -->



<!-- END: Comments -->

</div>
<!-- END: div -->

<hr class="hr1ExrcPrj"/>

</body>
</html>
