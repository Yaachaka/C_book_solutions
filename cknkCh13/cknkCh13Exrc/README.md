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

- `printf` expects a value of type `char *` as it's first argument.  
- `puts` has only one argument; the string to be printed. The type shall be `char *`.


<!-- START: ordered-list -->
<ol type="a">
<li>

`printf("%c", '\n');`

Legal. Passing a value of type `char *` as `printf`'s first argument as expected. `%c` is a format specifier, to which the character constant `\n` is passed.

</li>
<li>

`printf("%c", "\n");`

Legal but does not meet the expectation. Passing the value of type `char *` as first argument. But the the format specifier `%c` is expecting a character constant while the parameter passed is a string literal. Nothing gets printed out of this statement.

</li>
<li>

`printf("%s", '\n');`

Incorrect. No errors during compilation but "Segmentation fault" error during execution. Passing the value of type `char *` as part of the first argument to `printf`. But the format specifier `%s` is expecting a string while what actually being passed is a character constant. `%s` format specifier actually is expecting a memory locations conataining a string; and since we are passing a character constant `\n` which gets substituted as an equivalent integer value; the `%s` tries to access that memory location. And that results in "Segmentation fault" during program execution.

</li>
<li>

`printf("%s", "\n");`

Correct. Passing the value of type `char *` as first argument to `printf` as needed. Passing the string `"\n"` for the format specifier `"%s"` as needed.

</li>
<li>

`printf('\n');`

Incorrect.

Generates a warning during compilation as follows:

```shell
cknkCh13Exrc001.c:47:12: warning: passing argument 1 of 'printf' makes pointer from integer without a cast [-Wint-conversion]
   47 |     printf('\n');
      |            ^~~~
      |            |
      |            int
In file included from cknkCh13Exrc001.c:7:
/usr/include/stdio.h:356:43: note: expected 'const char * restrict' but argument is of type 'int'
  356 | extern int printf (const char *__restrict __format, ...);
```

Which is clear that we are passing incorrect type of argument to the `printf` function. Passing `int` type instead of `char *`. Here, `'\n'` a charcater constant is treated as an integer (with its equivalent ASCII value).

If we proceed ahead and execute the program, we will get the "Segmentation fault" error.


</li>
<li>

`printf("\n");`

Correct. Passing the value of type `char *` as first argument to `printf` as needed. As part of the argument argument we have an escape sequence which does not conflict any rules.

</li>
<li>

`putchar('\n');`

Correct. `putchar` expects a character constant (type `int`) and the same is passed.

</li>
<li>

`putchar("\n");`

Incorrect. Throws the following warning during compilation: 

```shell
cknkCh13Exrc001.c: In function 'main':
cknkCh13Exrc001.c:53:13: warning: passing argument 1 of 'putchar' makes integer from pointer without a cast [-Wint-conversion]
   53 |     putchar("\n");
      |             ^~~~
      |             |
      |             char *
In file included from cknkCh13Exrc001.c:7:
/usr/include/stdio.h:556:25: note: expected 'int' but argument is of type 'char *'
  556 | extern int putchar (int __c);
      |                     ~~~~^~~
```

Which is correct. `putchar` expects type `int` and we are passing `char *`.

But proceeding to execution of the program will not lead to any (Segmentation fault) error. In this case, while expecting `int`, passed `char *` is being ignored.

</li>
<li>

`puts('\n');`

Incorrect.

Throws the following warning during compilation:

```shell
cknkCh13Exrc001.c: In function 'main':
cknkCh13Exrc001.c:55:10: warning: passing argument 1 of 'puts' makes pointer from integer without a cast [-Wint-conversion]
   55 |     puts('\n');
      |          ^~~~
      |          |
      |          int
In file included from cknkCh13Exrc001.c:7:
/usr/include/stdio.h:661:30: note: expected 'const char *' but argument is of type 'int'
  661 | extern int puts (const char *__s);
      |                  ~~~~~~~~~~~~^~~
cknkCh13Exrc001.c:55:5: warning: 'puts' reading 1 or more bytes from a region of size 0 [-Wstringop-overread]
   55 |     puts('\n');
      |     ^~~~~~~~~~
```

`puts` expects input parameter type to be `char *`.

Proceeding to execute the program will result in "Segmentation fault" error during the execution.

</li>
<li>

`puts("\n");`

Correct. Passing the value of type `char *` as the argument to `puts`. Two new line characters are written; one by the string passed and one as part of the `puts` function.

</li>
<li>

`puts("");`

Correct. Passing the value of type `char *` as the argument to `puts`. Nothing gets printed as the string passed is empty. But the new line character is written as part of the `puts` function behavior.

</li>
</ol>
<!-- END: ordered-list -->


## Program Link

[cknkCh13Exrc001.c](./cknkCh13Exrc001.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```

a-----------------
b-----------------

d-----------------

f-----------------

g-----------------


j-----------------

k-----------------

```

<!-- END: terminal interaction or other output -->

#### Trial1 Comments:

<!-- START: Comments -->

*Note*: Whichever the statements create the "Segmentation fault" error during the execution of the program are commented in the program.

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

<!-- START: ordered-list -->
<ol type="a">
<li>

`putchar(p);`

Incorrect.

Generates the following warning during compilation:

```shell
cknkCh13Exrc002.c: In function 'main':
cknkCh13Exrc002.c:40:13: warning: passing argument 1 of 'putchar' makes integer from pointer without a cast [-Wint-conversion]
   40 |     putchar(p);
      |             ^
      |             |
      |             char *
In file included from cknkCh13Exrc002.c:7:
/usr/include/stdio.h:556:25: note: expected 'int' but argument is of type 'char *'
  556 | extern int putchar (int __c);
      |                     ~~~~^~~
```

The `putchar` expects input of type `int` but we are passing input of type `char *`.

During execution nothing gets printed as `putchar` ignores passed `p`.

</li>
<li>

`putchar(*p);`

Correct.

`putchar` is expecting value of type `int` as its argument. And we are passing a value of type `int` by dereferncing `p` to its index 0. So we are passing a single character from the string pointed to by `p`.

</li>
<li>

`puts(p);`

Correct.

The `puts` function expects a value of type `char *` and we are passing `p` which is of the same type.

After printing the contents of `p` a new line is also printed by `puts`.

</li>
<li>

`puts(*p);`

Incorrect.

Following warning is observed during the compilation:

```shell
cknkCh13Exrc002.c: In function 'main':
cknkCh13Exrc002.c:46:10: warning: passing argument 1 of 'puts' makes pointer from integer without a cast [-Wint-conversion]
   46 |     puts(*p);
      |          ^~
      |          |
      |          char
In file included from cknkCh13Exrc002.c:7:
/usr/include/stdio.h:661:30: note: expected 'const char *' but argument is of type 'char'
  661 | extern int puts (const char *__s);
      |                  ~~~~~~~~~~~~^~~
```

When we dereferenced `p`, the resulting value is of type `int`; but the `puts` expects value of type `char *` as its argument.

Proceeding to executing the program will lead to "Segmentation fault".

</li>
</ol>
<!-- END: ordered-list -->


## Program Link

[cknkCh13Exrc002.c](./cknkCh13Exrc002.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```
ab----------------------
abc
c----------------------

```

<!-- END: terminal interaction or other output -->

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

The values of `i`, `s` and `j` after the `scanf` statement will be `12`, `abc34`, and `56` respectively.

As we know, the behavior of the `scanf` is that it assigns the input the parameters based on the format specifiers successfully as long as the input symbols are valid for the corresponding format specifiers. And `scanf` stops reading once it encounters a space character.

When the user inputs `12abc34 56def78`, from this stream, `12` are symbols that are acceptable for `%d` format specifier. Therefore it is assigned to `i`. Now we are left with `abc34 56def78` in the stream. Now `scanf` tries to assign the symbols for `s`. `abc34` are valid sybols for `s`. It stops there because after theat it encountered a space. Now we are left with `56def78` in the stream and is time to feed `j`. Since the format specifier is `%s`, `56` symbols are valid and are placed in `j`. The remaining symbols in the stream are `def78`. They are not assigned to any variables by this `scanf` statement.

## Program Link

[cknkCh13Exrc003.c](./cknkCh13Exrc003.c)

## Output/ExecutionLog:

### Trial1:

#### Trial1 execution:

<!-- START: terminal interaction or other output -->

```
12abc34 56def78
12
abc34
56

```

<!-- END: terminal interaction or other output -->

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
