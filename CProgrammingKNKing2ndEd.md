<html>
<head>
    <title>C Programming</title>
    <meta charset="utf-8">
    <link rel="stylesheet" href="./myStyle.css">
</head>

# Title of the Book: C Programming A Modern Approach
## Edition: Second Edition (2008)
### Author: K.N.King

<i>A clear, complete, and engaging presentation of the C programming language -- now with coverage of both C89 and C99.</i>

<div class="theQuote">In computing, turning the obvious into the useful is a living definition of the word "frustration."</div>

<hr class="chapterDivider"/>

# 1 Introducing C

<div class="theQuote">When someone says "I want a programming language in which I need only say what I wish done," give him a lollipop.</div>

**Few points on C:**  
- Developed in the early 1970s at Bell Laboratories by **Ken Thompson**, **Dennis Ritchie**, and others.  
- *The C Programming Language*, written by **Brian Kernighan** and **Dennis Ritchie** published in 1978.  
- In December 1989, standardisation of C under *ANSI (American National Standards Institute)* was approved as *ANSI standard X3.159-1989*.  
- In 1990, it was approved by the *International Organization for Standardization (ISO)* as *internation standard ISO/IEC 9899:1990*.  

<hr class="chapterDivider"/>

# 2 C Fundamentals

<div class="theQuote">One man's constant is another man's variable</div>

This chapter introduces several basic concepts, including preprocessing directives, functions, variables, and statements, that we'll need in order to write even the simplest programs. Later chapters will cover these topics in much greater detail.

To start off, Section  2.1 presents a small C program and describes how to compile and link it. Section 2.2 then discusses how to generalize the program, and Section 2.3 shows how to add explantory remarks, known as comments. Section 2.4 introduces variables, which store data that may change during the execution of a program, and Section 2.5 shows how to use the `scanf` function to read data into variables. Constants -- data that won't change during program execution -- can be given names, as Section 2.6 shows. Finally, Section 2.7 explains C's rules for creating names (identifiers) and Section 2.8 gives the rules for laying out a program.

## 2.1 Writing a Simple Program

In contrast to programs written in some languages, C programs require little "boilerplate" -- a complete program can be as short as a few lines.

### 2.1.1 (PROGRAM) Printing a Pun

The first program which we will name `pun.c`, is expected to display the following message each time it is run.

```bash
To C, or not to C: that is the question.
```

```C
/* file: pun.c */
#include <stdio.h>

int main(void)
{
    printf("To C, or not to C: that is the question.\n");
    return 0;
}
```

Section 2.2 explains the form of this program in some detail. For now, I'll just make a few brief observations. The line

```C
#include <stdio.h>
```

is necessary to "include" information about C's standard I/O (input/output) library. The program's executable code goes inside `main`, which represents the "main" program. The only line inside `main` is a command to display the desired message. `printf` is a function from the standard I/O library that can produce nicely formatted output. The `\n` code tells `printf` to advance to the next line after printing the message. The line

```C
return 0;
```

indicates that the program "returns" the value 0 to the operating system when it terminates.

### 2.1.2 Compiling and Linking

Despite its brevity, getting `pun.c` to run is more involved than you might expect. First, we need to create a file named `pun.c` containing the program (any text editor will do). The name of the file doesn't matter, but the `.c` extension is often required by compilers.

Next, we've got to convert the program to a form that the machine can execute. For a C program, that usually involves three steps:

- **Preprocessing.** The program is first given to a **preprocessor**, which obeys commands that begin with `#` (known as ***directives***). A preprocessor is a bit like an editor; it can add things to the program and make modifications.  
- **Compiling.** The modified program now goes to a **Compiler**. which translates it into machine instructions (***object code***). The program isn't quite ready to run yet, however.  
- **Linking.** In the final step, a **linker** combines the object code produced by the compiler with any additional code needed to yield a complete executable program. This additional code includes library functions (like `printf`) that are used in the program.

Fortunately, this process is often automated, so you won't find it too onerous. In fact, the preprocessor is usually integrated with the compiler, so you probably won't even notice it at work.

The commands necessary to compile and link vary, depending on the compiler and operating system. Under UNIX, the C compiler is usually named `cc`. To compile and link the `pun.c` program, enter the following command in a terminal or command-line window:

```bash
% cc pun.c
```

(The `%` character is the UNIX prompt, not something that you need to enter.) Linking is automatic when using `cc`; no separate link command is necessary.

After compiling and linking the program, `cc` leaves the executable program in a file named `a.out` by default. `cc` has many options; one of them (the `-o` option) allows us to choose the name of the file containing the executable program. For example, if we want the executable version of `pun.c` to be named `pun`, we would enter the following command:

```bash
% cc -o pun pun.c
```

<div class="infoBox">
### The GCC Compiler

One of the most popular C compilers is the GCC compiler, which is supplied with Linux but is available for many other platforms as well. Using this compiler is similar to using the traditional UNIX `cc` compiler. For example, to compile the `pun.c` program, we would use the following command:

```bash
% gcc -o pun pun.c
```

The Q&A section at the end of the chapter provides more information about GCC.
</div>

### 2.1.3 Integrated development environments

so far, we've assumed the use of a "command-line" compiler that's invoked by entering a command in a special window provided by the operating system. The alternative is to use an ***integrated development environment (IDE)***, a software package that allows us to `edit, compile, link, execute, and even debug a program` without leaving the environment. The components of an IDE are designed to work together. For example, when the compiler detects an error in a program, it can arrange for the editor to highlight the line that contains the error. There's a great deal of variation among IDEs, so I won't discuss them further in this book. However, I would recommend checking to see which IDEs are available for your platform.

## 2.2 The General Form of a Simple Program

Let's take a closer look at `pun.c` and see how we can generalize it a bit. Simple C programs have the form

```C
directives

int main(void)
{
    statements
}
```

Notice how the braces show where `main` begins and ends. C uses `{` and `}` in much the same way that some other languages use words like `begin` and `end`. This illustrates a general point about C: it relies heavily on abbreviations and special symbols, one reason that C programs are concise (or -- less charitably -- cryptic).

Even the simplest C programs rely on three key language features: directives (editing commands that modify the program prior to compilation), functions (named blocks of executable code, of which `main` is an example), and statements (commands to be performed when the program is run). We'll take a closer look at these features now.

### 2.2.1 Directives

Before a C program is compiled, it is first edited by a preprocessor. Commands intended for the preprocessor are called directives. Chapter 14 and Chapter 15 discuss directives in detail. For now, we're interested only in the `#include` directive.

The `pun.c` program begins with the line

```C
#include <stdio.h>
```

This directive states that the information is `<stdio.h>` is to be "included" into the program before it is compiled. `<stdio.h>` contains information about C's standard I/O library. C has a number of *headers* like `<stdio.h>`; each contains information about some part of the standard library. The reason we're including `<stdio.h>` is that C, unlike some programming languages, has no built-in "read" and "write" commands. The ability to perform input and output is provided instead by functions in the standard library.

Directives always begin with `#` character, which distinguishes them from other items in a C program. By default, directives are one line long; there's no semicolon or other special marker at the end of a directive.

### 2.2.2 Functions

**Functions** are like "procedures" or "subroutines" in other programming languages -- they're the building blocks from which programs are constructed. In fact, a C program is little more than a collection of functions. Functions fall into two categories: those written by the programmer and those provided as part of the c implementation. I'll refer to the latter as *library functions*, since they belong to a "library" of functions that are supplied with the compiler.

The term "function" comes from mathematics, where a function is a rule for computing a value when given one or more arguments:

$$f(x) = x + 1$$

$$g(y, z) = y^2 - z^2$$

C uses the term "function" more loosely. In C, a function is simply a series of statements that have been grouped together and given a name. Some functions compute a value; some don't. A function that computes a value uses the `return` statement to specify what value it "returns." For example, a function that adds 1 to its argument might execute the statement `return x + 1;` while a function that computes the difference of the squares of its arguments might execute the statement `return y * y - z * z;`

Although a C program may consist of many functions, only the `main` function is mandatory. `main` is special: it gets called automatically when the program is executed. Until Chapter 9, where we'll learn how to write other functions, `main` will be the only function in our programs.

<div class="infoBox">

<span class="warningEmoji"></span>

The name `main` is critical; it can't be `begin` or `start` or even `MAIN`.

</div>

If `main` is a function, does it return a value? Yes: it returns a status code that is given to the operating system when the program terminates. Let's take another look at the `pun.c` program:

```C
#include <stdio.h>

int main(void)
{
    printf("To C, or not to C: that is the question.\n");
    return 0;
}
```

The word `int` just before `main` indicates that the `main` function returns an integer value. The word `void` in parenthesis indicates that `mian` has no arguments.

The statement `return 0;` has two effects: it causes the main function to terminate (thus ending the program) and it indicates that the `main` function returns a value of 0. We will have more to say about `main`'s return value in a later chapter. For now, we'll always have `main` return the value 0, which indicates normal program termination.

If there's no `return` statement at the end of the `main` function, the program will still terminate. However, many compilers will produce a warning message (because the function was supposed to return an integer but failed to).

### 2.2.3 Statements

A **Statement** is a command to be executed when the program runs. We'll explore statements later in the book, primarily in Chpater 5 and 6. The `pun.c` program uses only two kinds of statements. One is the `return` statement; the other is the *function call*. Asking a function to perform its assigned task is known as *calling* the function. The `pun.c` program, for example, calls the `printf` function to display a string on the screen:

```C
printf("To C, or not to C: that is the question. \n);
```

C requires that each statement end with a semicolon. (As with any good rule, there's one exception: the compound statement, which we'll encounter later.) The semicolon shows the compiler where the statement ends; since statements can continue over several lines, it's not always obvious where they end. Directives, on the other hand, are normally one line long, and they don't end with a semicolon.

### 2.2.4 Printing Strings

`printf` is a powerful function that we'll examine in Chapter 3. So far, we've only used `printf` to display a **string literal** -- a series of characters enclosed in double quotation marks. When `printf` displays a string literal, it doesn't show the quotation marks.

`printf` doesn't automatically advance to the next output line when it finishes printing. To instruct `printf` to advance one line, we must include `\n` (the *new-line character*) in the string to be printed. Writing a new-line character terminates the current output line; subsequent output goes on to the next line. to illustrate this point, consider the effect of replacing the statement

```C
printf("To C, or not to C: that is the question.\n");
```

by two calls of `printf`:

```C
printf("To C, or not to C: ");
printf("that is the question.\n");
```

The first call of `printf` writes `To C, or not to C: `. The second call writes `that is the question.` and advances to the next line. The net effect is the same as the original `printf` -- the user can't tell the difference.

The new-line character can appear more than once in a string literal. To display the message

```
Brevity is the soul of wit.
  --Shakespeare
```

we could write

```C
printf("Brevity is the soul of wit.\n  --Shakespeare\n");
```

## 2.3 Comments

Our `pun.c` program still lacks something important: documentation. Every program should contain identifying information: the program name, the date written, the author, the purpose of the program, and so forth. In C, this information is placed in ***Comments***. The symbol `/*` marks the beginning of a comment and the symbol `*/` marks the end:

```C
/* This is a comment */
```

Comments may appear almost anywhere in a program, either on separate lines or on the same lines as other program text. Here's what `pun.c` might look like with comments added at the beginning:

```C
/* Name: pun.c */
/* Purpose: Prints a bad pun. */
/* Author: K. N. King */

#include <stdio.h>

int main(void)
{
    printf("To C, or not to C: that is the question.\n");
    return 0;
}
```

Comments may extend over more than one line; once it has seen the `/*` symbol, the compiler reads (and ignores) whatever follows until it encounters the `*/` symbol. If we like, we can combine a series of short comments into one long comment:

```C
/* Name: pun.c
   Purpose: Prints a bad pun.
   Author: K. N. King */
```

A comment like this can be hard to read, though, because it's not easy to see where the comment ends. Putting `*/` on a line by itself helps:

```C
/* Name: pun.c
   Purpose: Prints a bad pun.
   Author: K. N. King 
*/
```

Even better, we can form a "box" around the comment to make it stand out:

```C
/************************************************************ 
* Name: pun.c                                               *
* Purpose: Prints a bad pun.                                *
* Author: K. N. King                                        *
************************************************************/
```

Programmers often simplify boxed comments by omitting three of the sides:

```C
/* 
 * Name: pun.c
 * Purpose: Prints a bad pun.
 * Author: K. N. King
 */
```

A short comment can go on the same line with other program code:

```C
int main(void)    /* Beginning of main program */
```

A comment like this is sometimes called a "winged comment".

<div class="infoBox">

<span class="warningEmoji"></span>  

Forgetting to terminate a comment may cause the compiler to ignore part of your program. Consider the following example:
    
```C
printf("My ");    /* forgot to close this comment...
printf("cat ");
printf("has ");    /* so it ends here */
printf("fleas");
```

Because we have neglected to terminate the first comment, the compiler ignores the middle two statements, and the example prints `My fleas`. 
</div>

<span class="C99Symbol"></span>

C99 provides a second kind of comment, which begins with `//` (two adjacent slashes):

```C
// This is a comment
```

This style of comment ends automatically at the end of a line. To create a commet that's more than one line long, we can either use the older comment style (`/* ... */`) or else put `//` at the beginning of each comment line:

```C
// Name: pun.c
// Purpose: Prints a bad pun.
// Author: K. N. King
```

The newer comment style has a couple of important advantages. First, because a comment automatically ends at the end of a line, there's no chance that an unterminated comment will accidentally consume part of a program. Second, multiline comments stand out better, thanks to the `//` that's required at the beginning of each line.

## 2.4 Variables and Assignment

Few programs are as simple as the one in Section 2.1. Most programs need to perform a series of calculations before producing output, and thus need a way to store data temporarily during program execution. In C, as in most programming languages, these storage locations are called **variables**.

### 2.4.1 Types

Every variable must have a ***type***, which specifies what kind of data it will hold. C has a wide variety of types. For now, we'll limit ourselves to just two: `int` and `float`. Choosing the proper type is critical, since the type affects how the variable is stored and what operations can be performed on the variable. The type of a numeric variable determines the largest and smallest numbers that the variable can store; it also determines whether or not digits are allowed after the decimal point.

A variable of type `int` (short for *integer*) can store a whole number such as 0, 1, 392, or -2553. The range of possible values is limited, though. The largest `int` value is typically 2,147,483,647 but can be as small as 32,767.

<span class="QandA"></span>

A variable of type `float` (short for *floating-point*) can store much larger numbers than an `int` variable. Furthermore, a `float` variable can store numbers with digits after the decimal point, like 379.125. `float` variables have drawbacks, however. Arithmetic on `float` numbers may be slower than arithmetic on `int` numbers. Most significantly, the value of a `float` variable is often just an approximation of the number that was stored in it. If we store 0.1 in a `float` variable, we may later find that the variable has a value such as 0.09999999999999987, thanks to rounding error.

### 2.4.2 Declarations

Variables must be **declared**--described for the benefit of the compiler--before they can be used. To declare a variable, we first specify the *type* of the variable, then its *name*. (Variable names are chosen by the programmer, subject to the rules described in Section 2.7.) For example, we might declare variables `height` and `profit` as follows:

```C
int height;
float profit;
```

The first declaration states that `height` is a variable of type `int`, meaning that `height` can store an integer value. The second declaration says that `profit` is a variable of type `float`.

If several variables have the same type, their declarations can be combined:

```C
int height, length, width, volume;
float profit, loss;
```

Notice that each complete declaration ends with a semicolon.
Ou
Our first template for `main` didn't include declarations. When `main` contains declarations, these must precede statements:

```C
int main(void)
{
    declarations
    statements
}
```

As we'll see in Chapter 9, this is true of functions in general, as well as blocks (statements that contain embedded declarations). As a matter of style, it's a good idea to leave a blank line between the declarations and the statements.

<span class="C99Symbol"></span>

In C99, declarations don't have to come before statements. For, example, `main` might contain a declaration, then a statement, and then another declaration. For compatibility with older compilers, the programs in this book don't take advantage of this rule. However, it's common in C++ and Java programs not to declare variables until they're first needed, so this practice can be expected to become popular in C99 programs as well.

### 2.4.3 Assignment

A variable can be given a value by means of ***assignment***. For example, the statements

```C
height = 8;
length = 12;
width = 10;
```

assign values to `height`, `length`, and `width`. The numbers 8, 12, and 10 are said to be ***constants***.

Before a variable can be assigned a value--or used in any other way, for that matter--it must first be declared. Thus, we could write

```C
int height;
height = 8;
```

but not

```C
height = 8;    /*** WRONG ***/
int height;
```

A constant assigned to a `float` variable usually contains a decimal point. For example, if `profit` is a `float` variable, we might write

```C
profit = 2150.48;
```

<span class="QandA"></span>

It's best to append the letter `f` (for "float") to a constant that contains a decimal point if the number is assigned to a `float` variable:

```C
profit = 2150.48f;
```

Failing to include the `f` may cause a warning from the compiler.

An `int` variable is normally assigned a value of type `int`, and a `float` variable is normally assigned a value of type `float`. Mixing types (such as assigning an `int` value to a `float` variable or assigning a `float` value to an `int` variable) is possible but not always safe, as we'll see in Section 4.2.

Once a variable has been assigned a value, it can be used to help compute the value of another variable:

```C
height = 8;
length = 12;
width = 10;
volume = height * length * width;    /* volume is now 960 */
```

In C, `*` represents the multiplication operator, so this statement multiplies the values stored in `height`, `length`, and `width`, then assigns the result to the variable `volume`. In general, the right side of an assignment can be a formula (or ***expression***, in C terminology) involving constants, variables, and operators.

### 2.4.4 Printing the Value of a Variable

We can use `printf` to display the current value of a variable. For example, to write the message

```shell
Height: h
```

where `h` is the current value of the `height` variable, we'd use the following call of `printf`:

```C
printf("Height: %d\n", height);
```

`%d` is a placeholder indicating where the value of `height` is to be filled in during printing. Note the placement of `\n` just after `%d`, so that `printf` will advance to the next line after printing the value of `height`.

`%d` works only for `int` variables; to print a `float` variable, we'd use `%f` instead. By default, `%f` displays a number with six digits after the decimal point. To force `%f` to display `p` digits after the decimal point, we can put `.p` between `%` and `f`. For example, to print the line

```shell
Profit: $2150.48
```

we'd call `printf` as follows:

```C
printf("Profit: $%.2f\n", profit);
```

There's no limit to the number of variables that can be printed a single call of `printf`. To display the values of both the `height` and `length` variables, we could use the following call of `printf`:

```C
printf("Height: %d  Length: %d\n", height, length);
```

### 2.4.5 (PROGRAM) Computing the Dimensional Weight of a Box

Shipping companies don'e especially like boxes that are larger but very light, since they take up valuable space in a truck or airplane. In fact, companies often charge extra for such a box, basing the fee on its volume instead of its weight. In the United States, the usual method is to divide the volume by 166 (the allowable number of cubic inches per pound). If this number--the box's "dimensional" or "volumetric" weight--exceeds its actual weight, the shipping fee is based on the dimensional weight. (The 166 divisor is for international shipments; the dimensional weight of a domestic shipment is typically calculated using 194 instead).

Let's say that you've been hired by a shipping company to write a program that computes the dimensional weight of a box. Since you're new to C, you decide to start off by writing a program that calculates the dimensional weight of a particular box that's `12" x 10" x 8"`. Division is represented by `/` in C, so the obvious way to compute the dimensional weight would be 

```C
weight = volume / 166
```

where `weight` and `volume` are integer variables representing the box's weight and volume. Unfortunately, this formula isn't quite what we need. In C, when one integer is divided by another, the answer is "truncated": all digits after the decimal point are lost. The volume of a `12" x 10" x 8"` box will be 960 cubic inches. Dividing by 166 gives the answer 5 instead of 5.783, so we have in effect rounded *down* to the next lowest pound; the shipping company expects us to round *up*. One solution is to add 165 to the volume before dividing by 166:

```C
weight = (volume + 165) / 166;
```

A volume of 166 would give a weight of 331/166, or 1, while a volume of 167 would yield 332/166, or 2. Calculating the weight in this fashion gives us the following program.

```C
/* file: dweight.c */
/* Computes the dimensional weight of a 12" x 10" x 8" box */

#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printd("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
```

The output of the program is

```shell
Dimensions: 12x10x8
Volume (cubic inches): 960
Dimensional weight (pounds): 6
```

### 2.4.6 Initialization

Some variables are automatically set to zero when a program begins to execute, but most are not. A variable that doesn't have a default value and hasn't yet been assigned a value by the program is said to be ***uninitialized***.

<div class="infoBox">

<span class="warningEmoji"></span>

Attempting to access the value of an uninitialized variable (for example, by displaying the variable using `printf` or using it in an expression) may yield an unpredictable result such as 2568, -30891, or some equally strange number. With some compilers, worse behavior--even a program crash--may occur.

</div>

We can always give a variable an initial value by using assignment, of course. But there's an easier way: put the initial value of the variable in its declaration. For example, we can declare the `height` variable and initialize it in one step:

```C
int height = 8;
```

In C jargon, the value `8` is said to be an ***initializer***.

Any number o variables can be initialized in the same declaration:

```C
int height = 8, length = 12, width = 10;
```

Notice that each variable requires its own initializer. In the ollowing example, the initializer `10` is good only or the variable `width`, not for `height` or `length` (which remain uninitialized):

```C
int height, length, width = 10;
```

### 2.4.7 Printing Expressions

`printf` isn't limited to displaying numbers stored in variables; it can display the value of *any* numeric expression. Taking advantage of this property can simplify a program and reduce the number of variables. For instance, the statements

```C
volume = height * length * width;
printf("%d\n", volume);
```

could be replaced by

```C
printf("%d\n", height * length * width);
```

`printf`'s ability to print expressions illustrates one of C's general principles: *Wherever a value is needed, any expression of the same type will do*.

## 2.5 Reading Input

Because the `dweight.c` program calculates the dimensional weight of just one box, it isn't especially useful. To improve the program, we'll need to allow the user to enter the dimensions.

To obtain input, we'll use the `scanf` function, the C library's counterpart to `printf`. The `f` in `scanf`, like the `f` in `printf`, stands for "formatted"; both `scanf` and `printf` require the use of a ***format string*** to specify the appearance of the input or output data. `scanf` needs to know what form the input data will take, just as `printf` needs to know how to display output data.

To read an `int` value, we'd use `scanf` as follows:

```C
scanf("%d", &i);    /* reads an integer; stores into i */
```

The `"%d"` string tells `scanf` to read input that represents an integer; `i` is an `int` variable into which we want `scanf` to store the input. The `&` symbol is hard to explain at this point; for now, I'll just note that it is usually (but not always) required when using `scanf`.

Reading a `float` value requires a slightly different call of `scanf`:

```C
scanf("%f", &x);    /* reads a float value; stores into x */
```

`%f` works only with variables of type `float`, so I'm assuming that `x` is a `float` variable. The `"%f"` string tells `scanf` to look for an input value in `float` format (the number may contain a decimal point, but doesn't have to).

### 2.5.1 (PROGRAM) Computing the Dimensional Weight of a Box (Revisited)


