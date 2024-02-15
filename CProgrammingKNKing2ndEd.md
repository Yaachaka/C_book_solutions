<html>
<head>
    <title>C Programming</title>
    <meta charset="utf-8">
    <link rel="stylesheet" href="./myStyle.css">
</head>

<body>
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

Here's an improved version of the dimensional weight program in which the user enters the dimensions. Note that each call of `scanf` is immediately preceeded by a call of `printf`. That way, the user will know when to enter input and what input to enter.


```C
/* file: dweight2.c
   purpose: Computes the dimensional weight of a 
   box from input provided by the user */

#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;

    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
```

The output of the program has the following appearance

```shell
Enter height of box: 8
Enter length of box: 12
Enter width of box: 10
Volume (cubic inches): 960
Dimensional weight (pounds): 6
```

A message that asks the user to enter input (a ***prompt***) normally shouldn't end with a new-line character, because we want the user to enter input on the same line as the prompt itself. When the user presses the Enter key, the cursor automatically moves to the next line--the program doesn't need to display a new-line character to terminate the current line.

The `dweight2.c` program suffers from one problem: it doesn't work correctly if the user enters nonnumeric input. Section 3.2 discusses this issue in more detail.

## 2.6 Defining Names for Constants

When a program contains constants, it's often a good idea to give them names. The `dweight.c` and `dweight2.c` programs rely on constant 166, whose meaning may not be at all clear to someone reading the program later. Using feature know as ***macro definition***, we can name this constant:

```C
#define INCHES_PER_POUND 166
```

`#define` is a preprocessing directive, just as `#include` is, so there's no semicolon at the end of the line.

When a program is compiled, the preprocessor replaces each macro by the value that it represents. For example, the statement

```C
weight = (volume + INCHES_PER_POUND -1) / INCHES_PER_POUND;
```

will become

```C
weight = (volume + 166 -1) / 166;
```

giving the same effect as if we'd written the latter statement in the first place.

The value of a macro can be an expression:

```C
#define RECIPROCAL_OF_PI (1.0f / 3.14159f)
```

If it contains operators; the expression should be enclosed ina prantheses.

Notice that we've used only upper-case letters in macros names. This a convention that most C programmers follow, not a requirement of the language. (Still, C programmers have been doing this for decades; you wouldn't want to be the first to deviate.)

### 2.6.1 (PROGRAM) Converting from Fahrenheit to Celsius

The following program prompts the user to enter a Fahrenheit temperature; it then prints the equivalent Celsius temperature. The output of the program will have the following appearance:

```shell
Enter Fahrenheit temperature: 212
Celsius equivalent: 100.0
```

The program will allow temperatures that aren't integers; that's why the Celsius temperature is displayed as 100.0 instead of 100. Let's look first at the entire program, then see how it's put together.

```C
/**
 * File: celsius.c
 * Author: K. N. King
 * Purpose: Converts a Fahrenheit temperature to Celsius
 */

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f /9.0f)

int main(void)
{
    float fahrenheit, celsius;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsius equivalent: %.1f\n", celsius);

    return 0;
}
```

The statement

```C
celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
```

converts the Fahrenheit temperature to Celsius. Since `FREEZING_PT` stands for `32.0f` and `SCALE_FACTOR` stands for `(5.0f /9.0f)`, the compiler sees this statement as

```C
celsius = (fahrenheit - 32.0f) * (5.0f / 9.0f);
```

Defining `SCALE_FACTOR` to be `(5.0f / 9.0f)` instead of `(5 / 9)` is important, becasuse C truncates the result when two integers are divided. The value of `(5 / 9)` would be `0`, which definitely isn't what we want.

The call of `printf` writes the Celsius temperature:

```C
printf("Celsius equivalent: %.1f\n", celsius);
```

Notice the use of `%.1f` to display `celsius` with just one digit after the decimal point.

## Identifiers

As we're writing a program, we'll have to choose names for variables, functions, macros, and other entities. These names are called ***identifiers***. In C, an identifier may contain letters, digits, and underscores, but must begin with a letter or underscore. 

<span class="C99Symbol"></span>

(In C99, identifiers may contain certain "universal character names" as well.)

Here are some examples of legal identifers:

```
times10
get_next_char
_done
```

The following are *not* legal identifiers:

```
10times
get-next-char
```

The symbol `10times` begins with a digit, not a letter or underscore. `get-next-char` contains minus signs, not underscores.

C is ***case-sensitive***: it distinguishes between upper-case and lower-case letters in identifiers. For example, the following identifiers are all different:

```
job
joB
jOb
jOB
Job
JoB
JOb
JOB
```

These eight identifiers could all be used simultaneously, each for a completely different purpose. (Talk about obfuscation!) Sensible programmers try to make identifiers look different unless they're somehow related.

Since case matters in C, many programmers follow the convention of using only lower-case letters in identifiers (other than macros), with underscores inserted when necessary for legibility:

```
symbol_table
current_page
name_and_address
```

Other programmers avoid underscores, instead using an upper-case letter to begin each word within an identifier:

```
symbolTable
currentPage
nameAndAddress
```

(The first letter is sometimes capitalized as well.) Although the former style is common in traditional C, the latter style is becoming more popular thanks to its widespread use in Java and C# (and, to a lesser extent, C++). Other reasonable conventions exist; just be sure to capitalize an identifier the same way each time it appears in a program.

<span class="QandA"></span>

C places no limit on the maximum length of an identifier, so don't be afraid to use long, descriptive names. A name such as `current_page` is a lot easier to understand than a name like `cp`.

### 2.7.1 Keywords

<span class="C99Symbol"></span>

The ***keywords*** in Table 2.1 have special significance to C compilers and therefore can't be used as identifiers. Note that five keywords were added in C99.

**Table 2.1**<br>Keywords

|||||
|---|---|---|---|
|`auto`|`enum`|`restrict`<span class="staffOfHermis"></span>|`unsigned`|
|`break`|`extern`|`return`|`void`|
|`case`|`float`|`short`|`volatile`|
|`char`|`for`|`signed`|`while`|
|`const`|`goto`|`sizeof`|`_Bool`<span class="staffOfHermis"></span>|
|`continue`|`if`|`static`|`_Complex`<span class="staffOfHermis"></span>|
|`default`|`inline`<span class="staffOfHermis"></span>|`struct`|`_Imaginary`<span class="staffOfHermis"></span>|
|`do`|`int`|`switch`|
|`double`|`long`|`typedef`|
|`else`|`register`|`union`|

<span class="staffOfHermis"></span>C99 only

Because of C's case-sensitivity, keywords must appear in programs exactly as shown in Table 2.1, with all letters in lower case. Names of functions in the standard library (such as `printf`) contain only lower-case letters also. Avoid the plight of the unfortunate programmer who enters an entire program in upper case, only to find that the compiler can't recognize keywords and calls of library functions.

<div class="infoBox">

<span class="warningEmoji"></span>

Watch out for other restrictions on identifiers. Some compilers treat certain identifiers (`asm`, for example) as additional keywords. Identifiers that belong to the standard library are restricted as well. Accidentally using one of these names can cause an error during compilation or linking. Identifiers that begin with an underscore are also restricted.

</div>

## 2.8 Layout of a C Program

We think of a C program as a series of ***tokens***: groups of characters that can't be split up without changing their meaning. Identifiers and keywords are tokens. So are operators like `+` and `-`, punctuation marks such as the comma and semicolon, and string literals. For example, the statement

```C
printf("Height: %d\n", height);
```

consists of seven tokens:

|||
|---|---|
|`printf`|<span class="circled1"></span>|
|`(`|<span class="circled2"></span>|
|`"Height: %d\n"`|<span class="circled3"></span>|
|`,`|<span class="circled4"></span>|
|`height`|<span class="circled5"></span>|
|`)`|<span class="circled6"></span>|
|`;`|<span class="circled7"></span>|

Tokens <span class="circled1"></span> and <span class="circled5"></span> are identifiers, token <span class="circled3"></span> is a string literal, and tokens <span class="circled2"></span>, <span class="circled4"></span>, <span class="circled6"></span>, and <span class="circled7"></span> are punctuation.

The amount of space between tokens in a program isn't critical in most cases. At one extreme, tokens can be crammed together with no space between them at all, except where this would cause two tokens to merge into a third token. For example, we could delete most of the space in the `celsius.c` program of Section 2.6, provided that we leave space between tokens such as `int` and `main` and between `float` and `fahrenheit`:

```C
/* Converts a Fahrenheit temperature to Celsius */
#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)
int main(void){float fahrenheit,celsius;printf("Enter Fahrenheit temperature: ");scanf("%f",&fahrenheit);celsius=(fahrenheit-FREEZING_PT)*SCALE_FACTOR;printf("Celsius equivalent: %.1f\n",celsius);return 0;}
```

In fact, if the page were wider, we could put the entire `main` function on a single line. We can't put the whole *program* on one line, though, because each preprocessing directive requires a separate line.

Compressing programs in this fashion isn't good idea. In fact, adding spaces and blank lines to a program can make it easier to read and understand. Fortunately, C allows us to insert any amouont of space--blanks, tabs, and new-line characters--between tokens. This rule has several important consequences for program layout:

<!-- Ordered list Start here -->
<ul>
<li>

*Statements can be divided* over any number of lines. The following statement, for example, is so long that it would be hard to sqeeze it onto a single line:

```C
printf("Dimensional weight (pounds): %d\n", (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND);
```

</li>

<li> 

*Space between tokens* makes it easier for the eye to separate them. For this reason, I usually put a space before and after each operator:

```C
volume = height * length * width;
```

I also put a space after each comma. Some programmers go even further, putting spaces around parentheses and other punctuation.

</li>

<span class="QandA"></span>

<li>

*Indentation* can make nesting easier to spot. For example, we should indent declarations and statements to make it clear that they're nested inside `main`.

</li>
<li>

*Blank lines* can divide a program into logical units, making it easier for the reader to discern the program's structure. A program with no blank lines is as hard to read as a book with no chapters.

</li>

</ul> 
<!-- Un ordered list end here -->

The `celsius.c` program of Section 2.6 illustrates several of these guidelines. Let's take a closer look at the `main` function in that program:

```C
int main(void)
{
    float fahrenheit, celsius;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsius equivalent: %.1f\n", celsius);

    return 0;
}
```

First, observe how the space around `=`, `-`, and `*` makes these operators stand out. Second, notice how the indentation of declarations and statements makes it obvious that they all belong to `main`. Finally, note how blank lines divide `main` into five parts: (1) declaring the `fahrenheit` and `celsius` variables; (2) obtaining the Fahrenheit temperature; (3) calculating the value of `celsius`; (4) printing the Celsius temperature; and (5) returning to the operating system.

While we're on the subject of program layout, notice how I've placed the `{` token underneath `main()` and put the matching `}` on a separate line, aligned with `{`. Putting `}` on a separate line lets us insert or delete statements at the end of the function; aligning it with `{` makes it easy to spot the end of `main`.

A final note: Although extra spaces can be added *between* tokens, it's not possible to add space *within* a token without changing the meaning of the program or causing an error. Writing

```C
fl oat fahrenheit, celsius;    /*** WRONG ***/
```

or

```C
fl
oat fahrenheit, celsius;    /*** WRONG ***/
```

produces an error when the program is compiled. Putting a space inside a string literal is allowed, although it changes the meaning of the string. However, putting a new-line character in a string (in other words, splitting the string over two lines) is illegal:

```C
printf("To C, or not to C:
that is the question.\n");    /*** WRONG ***/
```

Continuing a string from one line to the next requires a special technique that we'll learn in a later chapter.

---

## Q & A

<div class="QandA_question">

Q: What does GCC stand for? [p. 11]

</div>
<div class="QandA_answer">

A: GCC originally stood for "<u>G</u>NU <u>C</u> <u>C</u>ompiler." It now stands for "<u>G</u>NU <u>C</u>ompiler <u>C</u>ollection," because the current version of GCC compiles programs written in a variety of languages, including Ada, C, C++, Fortran, Java, and Objective-C.

</div>
<div class="QandA_question">

Q: OK, so what does GNU stand for?

</div>
<div class="QandA_answer">

A: GNU stands for "<u>G</u>NU's <u>N</u>ot <u>U</u>nix!" (and is pronounced *guh-NEW*, by the way). GNU is a project of the Free Software Foundation, an organization set up by **Ritchard M. Stallman** as a protest against the restrictions of licensed UNIX software. According to its web site, the Free Software Foundation believes that the users should be free to "run, copy, distribute, study, change and improve" software. The GNU Project has rewritten much traditional UNIX software from scratch and made it publicly available at no charge.

GCC and other GNU software are crucial to Linux. Linux itself is only the "kernel" of an operating system (the part that handles program scheduling and basic I/O services); the GNU software is necessary to have a fully functional operating system.

For more information on the GNU Project, visit [www.gnu.org](https://www.gnu.org/).


</div>
<div class="QandA_question">

Q: What's the big deal about the GCC anyway?

</div>
<div class="QandA_answer">

A: GCC is significant for many reasons, not least the fact that it's free and capable of compiling a number of languages. It runs under many operating systems and generates code for many different CPUs, including all the widely used ones. GCC is the primary compiler for many UNIX-based operating systems, including Linux, BSD, and Mac OS X, and it's used extensively for commercial software development. For more information about GCC, visit [gcc.gnu.org](https://gcc.gnu.org)

</div>
<div class="QandA_question">

Q: How good is GCC at finding errors in programs?

</div>
<div class="QandA_answer">

A: GCC has various command-line options that control how thoroughly it checks programs. When these options are used, GCC is quite good at finding potential trouble spots in a program. Here are some of the more popular options:

<ul>

<li>

`-Wall`

Causes the compiler to produce warning messages when it detects possible errors. (`-W` can be followed by codes for specific warnings; `-Wall` means "all `-W` options.") Should be used in conjunction with `-O` for maximum effect.

</li>
<li>

`-W`

Issues additional warning messages beyond those produced by `-Wall`.

</li>
<li>

`-pedantic`

Issues all warnings required by the C standard. Causes programs that use non-standard features to be rejected.

</li>
<li>

`-ansi`

Turns off features of GCC that aren't standard C and enables a few standard features that are normally disabled.

</li>
<li>

```
-std=c89
-std=c99
```

Specifies which version of C the compiler should use to check the program.

</li>

</ul>

These options are often used in combination:

```shell
gcc -O -Wall -W -pedantic -ansi -std=c99 -o pun pun.c
```

</div>
<div class="QandA_question">

Q: Why is C so terse? It seems as though programs would be more readable if C used `begin` and `end` instead of `{` and `}`, `integer` instead of `int`, and so forth. [p. 12]

</div>
<div class="QandA_answer">

A: Legend has it that the brevity of C programs is due to the environment that existed in Bell Labs at the time the language was developed. The first C compiler ran on a DEC PDP-11 (an early minicomputer); programmers used a teletype--essentially a typewriter connected to a computer--to enter programs and print listings. Because teletypes were very slow (they could print only 10 characters per second), minimizing the number of characters in a program was clearly advantageous.

</div>
<div class="QandA_question">

Q: In some C books, the `main` function ends with `exit(0)` instead of `return 0`. Are these the same? [p. 14]

</div>
<div class="QandA_answer">

A: When they appear inside `main`, these statements are indeed equivalent: both terminate the program, returning the value `0` to the operating system. Which one to use is mostly a matter of taste.

</div>
<div class="QandA_question">

Q: What happens if a program reaches the end of the `main` function without executing a `return` statement? [p. 14]

</div>
<div class="QandA_answer">

<span class="C99Symbol"></span>

A: The `return` statement isn't mandatory; if it's missing, the program will still terminate. In C89, the value returned to the operating system is undefined. In C99, if `main` is declared to return an `int` (as in our examples), the program returns `0` to the operating system; otherwise, the program returns an unspecified value.

</div>
<div class="QandA_question">

Q: Does the compiler remove a comment entirely or replace it with blank space?

</div>
<div class="QandA_answer">

A: Some old C compilers deleted all the characters in each comment, making it possible to write

```C
a/**/b = 0;
```

and have the compiler interpret it as

```C
ab = 0;
```

According to the C standard, however, the compiler must replace each comment by a single space character, so this trick doesn't work. Instead, we'd end up with the following (illegal) statement:

```C
a b = 0;
```

</div>
<div class="QandA_question">

Q: How can I tell if my program has an unterminated comment?

</div>
<div class="QandA_answer">

A: If you're lucky, the program won't compile because the comment has rendered the program illegal. If the program does compile, there are several techniques that you can use. Stepping through the program line by line with a debugger will reveal if any lines are being skipped. Some IDEs display comments in a distinctive color to distinuish them from sorrounding code. If you're using such an environment, you can easily spot unterminated comments, since program text will have different color of it's accidentally included in a comment. A program such as `lint` can also help.

</div>
<div class="QandA_question">

Q: Is it legal to nest one comment inside another?

</div>
<div class="QandA_answer">

A: Old-style comments (`/* ... */`) can't be nested. For instance, the following code is illegal:

```C
/*
    /*** WRONG ***/
*/
```

The `*/` symbol on the second line matches the `/*` symbol on the first line, so the compiler will flag the `*/` symbol on the third line as an error.

<span class="C99Symbol"></span>

C's prohibition against nested comments can sometimes be a problem. Suppose we've written a long program containing many short comments. To disable a portion of the program temporarily (during testing, say), our first impulse is to "comment out" the offending lines with `/*` and `*/`. Unfortunately, this method won't work if the lines contain old-style comments. C99 comments (those beginning with `//`) can be nested inside old-style comments, however--another advantage to using this kind of comment.

In any event, there's a better way to disable portions of a program, as we'll see later.

</div>
<div class="QandA_question">

Q: Where does the `float` type get its name? [p. 17]

</div>
<div class="QandA_answer">

A: `float` is short for "floating-point", a technique for storing numbers in which the decimal point "floats". A float value is usually stored in two parts: the fraction (or mantissa) and the exponent. The number 12.0 might be stored as <span class="displayInlineMath">$$ 1.5 \times 2^{3} $$</span>, for example, where 1.5 is the fraction and 3 is the exponent. Some programming languages call this type `real` instead of `float`.

</div>
<div class="QandA_question">

Q: Why do floating-point constants need to end with letter `f`? [p. 19]

</div>
<div class="QandA_answer">

A: For the full explanation, see Chapter 7. Here's the short answer: a constant that contains a decimal point but doesn't end with `f` has type `double` (short for "double-precision"). `double` values are stored more accurately than `float` values. Moreover, `double` values can be larger than `float` values, which is why we need to add the letter `f` when assigning to a `float` variable. Without the `f`, a warning may be generated about the possibility of a number being stored into a `float` variable that exceeds the capacity of the variable.

</div>
<div class="QandA_question">

*Q: Is it really true that there's no limit on the length of an identifier? [p. 26]

</div>
<div class="QandA_answer">

A: 

<span class="C99Symbol"></span>

Yes and no. The C89 standard says that identifiers may be arbitrarily long. However, compilers are only required to remember the first 31 characters (63 characters in C99). Thus, if two names begin with the same 31 characters, a compiler might be unable to distinguish between them.

<span class="C99Symbol"></span>

To make matters even more complicated, there are special rules for identifiers with external linkage; most function names fall into this category. Since these names must be made available to the linker, and since some older linkers can handle only short names, only the first six characters are significant in C89. Moreover, the case of letters may not matter. As a result, `ABCDEFG` and `abcdefg` might be treated as the same name. (In C99, the first 31 characters are significant, and the case of letters is taken into account.)

Most compilers and linkers are more generous than the standard, so these rules aren't a problem in practice. Don't worry about making identifiers too long--worry about making them too short.

</div>
<div class="QandA_question">

Q: How many spaces should I use for indentation? [p. 28]

</div>
<div class="QandA_answer">

A: That's a tough question. Leave too little space, and the eye has trouble detecting indentation. Leave too much, and the lines run off the screen (or page). Many C programmers indent nested statements eight spaces (one tab stop), which is probably too much. Studies have shown that the optimum amount of indentation is three spaces, but many programmers feel uncomfortable with numbers that aren't a power of two. Although I normally prefer to indent three or four spaces. I'll use two spaces in this book so that my programs will fit within the margins.

</div>

## Examples

- Programs: [./cknkCh02/cknkCh02Exmp/](./cknkCh02/cknkCh02Exmp/)

## Exercises

- Readme: [./cknkCh02/cknkCh02Exrc/README.md](./cknkCh02/cknkCh02Exrc/README.md)  
- Readme (html): [./cknkCh02/cknkCh02Exrc/cknkCh02ExrcReadme.html](./cknkCh02/cknkCh02Exrc/cknkCh02ExrcReadme.html)  
- Programs: [./cknkCh02/cknkCh02Exrc/](./cknkCh02/cknkCh02Exrc/)  

## Programming Projects

- Readme: [./cknkCh02/cknkCh02Prj/README.md](./cknkCh02/cknkCh02Prj/README.md)  
- Readme: [./cknkCh02/cknkCh02Prj/cknkCh02PrjReadme.html](./cknkCh02/cknkCh02Prj/cknkCh02PrjReadme.html)  
- Programs: [./cknkCh02/cknkCh02Prj/](./cknkCh02/cknkCh02Prj/)  

<hr class="chapterDivider"/>

# 3 Formatted Input/Output

<div class="theQuote">In seeking the unattainable, simplicity only gets in the way.</div>

`scanf` and `printf`, which support formatted reading and writing, are two of the most frequently used functions in C. As this chapter shows, both are powerful but tricky to use properly. Section 3.1 describes `printf`, and Sectioon 3.2 covers `scanf`. Neither section gives complete details, which will have to wait until Chapter 22.

## 3.1 The `printf` Function

The `printf` function is designed to display the contents of a string, known as the ***format string***, with values possibly inserted at specified points in the string. When it's called, `printf` must be supplied with the format string, followed by any values that are to be inserted into the string during printing:

```C
printf(string, expr1, expr2, ...);
```

The values displayed can be constants, variables, or more complicated expressions. There's no limit on the number of values that can be printed by a single call of `printf`.

The format string may contain both ordinary characters and ***conversion specifications***, which begin with the `%` character. A conversion specification is a place holder representing a value to be filled in during printing. The information that follows the % character *specifies* how the value is *converted* from its internal form (binary) to printed form (characters)--that's where the term "conversion specification" comes from. For example, the conversion specification `%d` specifies that `printf` is to convert an `int` value from binary to a string of decimal digits, while `%f` does the same for a `float` value.

Ordinary characters in a format string are printed exactly as they appear in the string; conversion specifications are replaced by the values to be printed. Consider the following example:

```c
int i, j;
float x, y;

i = 0;
j = 20;
x = 43.2892f;
y = 5527.0f;

printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);
```

This call of `printf` produces the following output:

```shell
i = 10, j = 20, x = 43.289200, y = 5527.000000
```

The ordinary characters in the format string are simply copied to the output line. The four conversion specifications are replaced by the values of the variables `i`, `j`, `x`, and `y`, in that order.

<div class="infoBox">

<span class="warningEmoji"><span>

C compilers aren't required to check that the number of conversion specifications in a format string matches the number of output items. The following call of `printf` has more conversion specifications than values to be printed:

```C
printf("%d %d\n", i);    /*** WRONG ***/
````

`printf` will print the value of `i` correctly, then print a second (meaningless) integer value. A call with too few conversion specifications has similar problems:

```C
printf("%d\n", i, j);    /*** WRONG ***/
```

In this case, `printf` prints the value of `i` but doesn't show the value of `j`.

Furthermore, compilers aren't required to check that a conversion specification is appropriate for the type of item being printed. If the programmer uses an incorrect specification, the program will simply produce meaningless output. Consider the following call of `printf`, in which the `int` variable `i` and the `float` variable `x` are in the wrong order:

```C
printf("%f %d\n", i, x);    /*** WRONG ***/
```

Since `printf` must obey the format string, it will dutifully display a `float` value, followed by an `int` value. Unfortunately, both will be meaningless.

</div>

### 3.1.1 Conversion Specifications

Conversion specifications give the programmer a great deal of control over the appearance of output. On the other hand, they can be complicated and hard to read. In fact, describing conversion specifications in complete detail is too arduous a task to tackle this early in the book. Instead, we'll just take a brief look at some of their more important capabilities.

In chapter 2 , we saw that a conversion specification can include formatting information. In particular, we used `%.1f` to display a `float` value with one digit after the decimal point. More generally, a conversion specification can have the form `%m.pX` or `%-m.pX`, where `m` and `p` are integer constants and `X` is a letter. Both `m` and `p` are optional; if `p` is omitted, the period that separates `m` and `p` is also dropped.  In the conversion specification `%10.2f`, `m` is `10`, `p` is `2`, and `X` is `f`. In the specification `%.2f`, `p` is `2` and `m` is missing.

The ***minimum field width***, `m`, specifies the minimum number of characters to print. If the value to be printed requires fewer than `m` characters, the values is right justified within the field. (in other words, extra spaces precede the value.) For example, the specification `%4d` would display the number 123 as ` 123`. (Please notice the preceeding space). If the value to be porinted requires more than `m` characters, the field width automatically expands to the necessary size. Thus, the specification `%4d` would display the number 12345 as `12345`--no digits are lost. Putting a minus sign in front of `m` causes left justification; the specification `%-4d` would display 123 as `123 `.

The meaning of the ***precision***, `p` isn't as easily described, since it depends on the choice of `X`, the ***conversion specifier***. `X` indicates which conversion should be applied to the value before it's printed. The most common conversion specifiers for numbers are:

<ul>

<li>

<span class="QandA"></span>

`d` -- Displays an integer in decimal (base 10) form. `p` indicates the minimum number of digits to display (extra zeros are added to the beginning of the number if necessary); if `p` is omitted, it is assumed to have the value 1. (In other words, `%d` is the same as `%.1d`.)

</li>
<li>

`e` -- Displays a floating-point number in exponential format (scientific notation). `p` indicates how many digits should appear after the decimal point (the default is 6). If `p` is 0, the decimal point is not displayed.

</li>
<li>

`f` -- Displays a floating-point number in "fixed decimal" format, without an exponent. `p` has the same meaning as for the `e` specifier.

</li>
<li>

`g` -- Displays a floating-point number in either exponential format or fixed decimal format, depending on the number's size. `p` indicates the maximum number of significant digits (*not* digits after the decimal point) to be displayed. Unlike the `f` conversion, the `g` conversion won't show trailing zeros. Furthermore, if the value to be printed has no digits after the decimal point, `g` doesn't display the decimal point.

</li>

</ul>

The `g` specifier is especially useful for displaying numbers whose size can't be predicted when the program is written or that tend to vary widely in size. When used to print a moderately large or moderately small number, the `g` specifier uses fixed decimal format. But when used to print a very large or very small number, the `g` specifier switches to exponential format so that the number will require fewer characters.

There are many other specifiers besides `%d`, `%e`, `%f`, and `%g`. I'll gradually introduce many of them in subsequent chapters. For the full list, and for a complete explanation of the other capabilities of conversion specifications, consult Section 22.3.

### 3.1.2 Using `printf` to Format Numbers

The following program illustrates the use of `printf` to print integers and floating-point numbers in various formats.

```C
/** 
  * file: tprintf.c
  * Purpose: Prints int and float values in various formats
  * Author: K. N. King
  */

#include <stdio.h>

int main(void)
{
    int i;
    float x;

    i = 40;
    x = 839.21f;

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    return 0;
}
```
The character `|` in the `printf` format strings are there merely to help show how much space each number occupies when printed; unlike `%` or `\`, the `|` character has no special significance to `printf`. The output of this program is:

```shell
|40|   40|40   |  040|
|   839.210| 8.392e+02|839.21    |
```

Let's take a closer look at the conversion specifications used in this program:

<ul>
<li>

`%d` -- Displays `i` in decimal form, using a minimum amount of space.

</li>
<li>

`%5d` -- Displays `i` in decimal form, using a minimum of five characters. Since `i` requires only two characters,three spaces were added.

</li>
<li>

`%-5d` -- Displays `i` in decimal form, using a minimum of five characters; since the value of `i` doesn't require five characters, the spaces are added afterward (that is, `i` is left-justified in a field of length five).

</li>
<li>

`%5.3d` -- Displays `i` in decimal form, using a minimum of five characters overall and a minimum of three digits. Since `i` is only two digits long, an extra zero was added to guarantee three digits. The resulting number is only three characters long, so two spaces were added, for a total of five characters (`i` is right-justified).

</li>
<li>

`%10.3f` -- Display `x` in fixed decimal form, using 10 characters overall with three digits after the decimal point. Since `x` requires only seven charcaters (three before the decimal point, three after the decimal point, and one for the decimal point itself), three spaces precede `x`.

</li>
<li>

`%10.3e` -- Displays `x` in exponential form, using 10 characters overall, with three digits after the decimal point. `x` requires nine characters altogether (including the exponent), so one space precedes `x`.

</li>
<li>

`%-10g` -- Display `x` in either fixed decimal form or exponential form, using 10 characters overall. In this case, `printf` chose to display `x` in fixed decimal form. The presence of the minus sign forces left justification, so `x` is followed by spaces.

</li>
</ul>

### 3.1.3 Escape Sequences

The `\n` code that we often use in format strings is called an ***escape sequence***. Escape sequences enable strings to contain characters that would otherwise cause problems for the compiler, including nonprinting (control) characters and characters that have special meaning to the compiler (such as `"`). We'll provide a complete list of escape sequences later; for now, here's a sample:

|||
|---|---|
|Alert (bell)|`\a`|
|Backspace|`\b`|
|New line|`\n`|
|Horizontal tab|`\t`|


<span class="QandA"><span>

When they appear in `printf` format strings, these escape sequences represent actions to perform upon printing. printing `\a` causes an audible beep on most machines. Printing `\b` moves the cursor back one position. Printing `\n` advances the cursor to the beginning of the next line. printing `\t` moves the cursor to the next tab stop.

A string may contain any number of escape sequences. consider the following `printf` example, in which the format string contains six escape sequences:

```C
printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
```

Executing this statement prints a two-line heading:

```shell
Item    Unit    Purchase
        Price   Date
```

Another common escape sequence is `\"`, which represents the `"` character. Since the `"` charcater marks the beginning of this sequence. here's and example:

```C
printf("\"Hello!\"");
```

This statement produces the following output:

```shell
"Hello!"
```

Incidentally, you can't just put a single `\` character in a string; the compiler will assume that it's the beginning of an escape sequence. To print a single `\` character, put two `\` characters in the string:

```C
printf("\\");    /* prints one \ character */
```

## 3.2 The `scanf` Function

Just as `printf` prints output in a specified format, `scanf` reads input according to a particular format. A `scanf` format string, like a `printf` format string, may contain both ordinary characers and conversion specifications. The conversions allowed with `scanf` are essentially the same as those used with `printf`.

In many cases, a `scanf` format string will contain only conversion specifications, as in the following example:

```C
int i, j;
float x, y;

scanf("%d%d%f%f, &i, &j, &x, &y);
```

Suppose that the user enters the following input line:

```shell
1 -20 .3 -4.0e3
```

`scanf` will read the line, converting its characters to the numbers they represent, and then assign 1, -20, 0.3, and -4000.0 to `i`, `j`, `x`, and `y`, respectively. "tightly packed" format strings like `"%d%d%f%f` are common in `scanf` calls. `printf` format strings are less likely to have adjacent conversion specifications.

`scanf`, like `printf`, contains several traps for the unwary. When using `scanf`, the programmer must check that the number of conversion specifications matches the number of input variables and that each conversion is appropriate for the corresponding variable--as with `printf`, the compiler isn't required to check for a possible mismatch. Another trap involves the `&` symbol, which normally precedes each variable in a `scanf` call. The `&` is usually (but not always) required, and it's the programmer's responsibility to remember to use it.

<div class="infoBox">

<span class="warningEmoji"></span>

Forgetting to put the `&` symbol in front of variable in a call of `scanf` will have unpredictable--and possibly disastrous--results. A program crash is a common outcome. At the very least, the value that is read from the input won't be stored in the variable; instead, the variable will retain its old value (which may be meaningles if the variable wasn't given an initial value). Omitting the `&` is an extremely common error--be careful! Some compilers can spot this error and produce a warning message such as *"format argument is not a pointer"*. (The term *pointer* is defined in Chapter 11; the `&` symbol is used to create a pointer to a variable.) If you get a warning, check for a missing `&`.

</div>

Calling `scanf` is a powerful but unforgiving way to read data. Many professional C programmers avoid `scanf`, instead reading all data in character form and converting it to numeric form later. We'll use `scanf` quite a bit, especially in the early chapters of this book, because it provides a simple way to read numbers. Be aware, however, that many of our programs won't behave properly if the user enters unexpected input. As we'll see later, it's possible to have a program test whether `scanf` successfully read the requested data (and attempt to recover if it didn't). Such tests are impractical for the programs in this book--they would add too many statements and obscure the point of the examples.

### 3.2.1 How `scanf` Works

`scanf` can actually do much more than I've indicated so far. It is essentially a "pattern-matching" function that tries to match up groups of input characters with conversion specifications.

Like the `printf` function, `scanf` is controlled by the format string. When it is called, `scanf` begins processing the information in the string, starting at the left. For each conversion specification in the format string, `scanf` tries to locate an item of the appropriate type in the input data, skipping blank space if necessary. `scanf` then reads the item, stopping when it encounters a character that can't possibly belong to the item. If the item was read sucessfully, `scanf` continues processing the rest of the format string. If any item is not read successfully, `scanf` returns immediately without looking at the rest of the format string (or the remaining input data).

As it searches for the beginning of a number, `scanf` ignores ***white-space characters*** (the space, horizontal and vertical tab, form-feed, and new-line characters). As a result, numbers can be put on a single line or spread out over several lines. Consider the following call of `scanf`:

```C
scanf("%d%d%f%f", &i, &j, &x, &y);
```

Suppose the user enters three lines of input:

```shell
  1
-20   .3
   -4.0e3
```

`scanf` sees one continuous stream of characters:

```
<space><space>1<newLine>-20<space><space><space>.3<newLine><space><space><space>-4.0e3<newLine>
```

(I'm using `<space>` to represent the space character and `<newLine>` to represent the new-line character.) Since it skips over white-space characters as it looks for the beginning of each number, `scanf` will be able to read the numbers successfully.

`scanf` "peeks" at the final new-line character without actually reading it. This new-line will be the first character read by the next call of `scanf`.

What rules does `scanf` follow to recognize an integer or a floating-point number? When asked to read an integer, `scanf` first searches for a digit, a plus sign, or a minus sign; it then reads digits until it reaches a nondigit. when asked to read a floating-point number, `scanf` looks for  
- a plus or minus sign (optional), followed by  
- a series of digits (possibly containing a decimal point), followed by  
- an exponent (optional). An exponent consists of the letter `e` (or `E`), an optional sign, and one or more digits.

The `%e`, `%f`, and `%g` conversions are interchangeable when used with `scanf`; all three follow the same rules for recognizing a floating-point number.

<span class="QandA"><span>

When `scanf` encounters a character that can't be part of the current item, the character is "put back" to be read again during the scanning of the next input item or during the next call of `scanf`. Consider the following (admittedly pathological) arrangement of our four numbers:

```shell
1-20.3-4.0e3

```

Let's use the same call of `scanf` as before:

```C
scanf("%d%d%f%f", &i, &j, &x, &y);
```

Here's how `scanf` would process the new input:

- Conversion specification: `%d`. The first nonblank input character is `1`; since integers can begin with 1, `scanf` then reads the next character, `-`. Recognizing that `-` can't appear inside an integer, `scanf` stores `1` into `i` and puts the `-` character back.  
- Conversion specification: `%d`. `scanf` then reads the characters `-`, `2`, `0`, and `.` (period). Since an integer can't contain a decimal point, `scanf` stores `-20` into `j` and puts the `.` character back.  
- Conversion specification: `%f`. `scanf` reads the characters `.`, `3`, and `-`. Since a floating-point number can't contain a minus sign after a digit, `scanf` stores `0.3` into `x` and puts the `-` character back.  
- conversion specification `%f`. Lastly, `scanf` reads the characters `-`, `4`, `.`, `0`, `e`, `3`, and a new line. Since a floating-point number can't contain a new-line character, `scanf` stores <span class="displayInlineMath">$$ {-4.0} \times {10}^{3} $$</span> into `y` and puts the new-line character back.

In this example, `scanf` was able to match every conversion specification in the format string with an input item. Since the new-line character wasn't read, it will be left for the next call of `scanf`.

### 3.2.2 Ordinary Characters in Format Strings

The concept of pattern-matching can be taken one  step further by writing format strings that contain ordinary characters in addition to conversion specifications. The action that `scanf` takes when it processes an ordinary character in a format string depends on whether or not it's a white-space character.

<ul>
<li>

***White-space characters.*** When it encounters one or more consecutive white-space characters in a format string, `scanf` repeatedly reads white-space characters from the input until it reaches a non-white-space character (which is "put back"). The number of white-space characters in the format string is irrelevant; one white-space character in the format string will match any number of white-space characters in the input. (Incidentally, putting a white-space character in a format string doesn't force the input to contain white-space characters. A white-space character in a format string matches *any* number of white-space characters in the input, including none.)

</li>
<li>

***Other characters.*** When it encounters a non-white-space character in a format string, `scanf` compares it with the next input character. if the two characters match, `scanf` discards the input character and continues processing the format string. If the characters don't match, `scanf` puts the offencing character back into the input, then aborts without further processing the format string or reading characters from the input.

For example, suppose that the format string is `"%d/%d"`. If the input is `<space>5/<space>96`, `scanf` skips the first space while looking for an integer, matches `%d` with `5`, matches `/` with `/`, skips a space while looking for another integer, and matches `%d` with `96`. On the other hand, if the input is `<space>5<space>/<space>96`, `scanf` skips one space, matches `%d` with `5`, then attempts to match the `/` in the format string with a space in the input. There's no match, so `scanf` puts the space back; the `<space>/<space>96` characters remain to be read by the next call of `scanf`. To allow spaces after the first number, we should use the format string `"%d /%d"` instead.

</li>
</ul>

### 3.2.3 Confusing `printf` with `scanf`

Although calls of `scanf` and `printf` may appear similar, there are significant differences between the two functions; ignoring these differences can be hazardous to the health of your program.

One common mistake is to put `&` in front of variables in a call of `printf`:

```C
printf("%d %d\n", &i, &j);    /*** WRONG ***/
```

Fortunately, this mistake is fairly easy to spot: `printf` will display a couple of odd-looking numbers instead of the values of `i` and `j`.

Since `scanf` normally skips white-space characters when looking for data items, there's often no need for a format string to include characters other than conversion specifications. Incorrectly assuming that `scanf` format strings should resemble `printf` format strings--another common error--may cause `scanf` to behave in unexpected ways. Let's see what happens when the following call of `scanf` is executed:

```C
scanf("%d, %d", &i, &j);
```

`scanf` will first look for an integer in the input, which it stores in the variables `i`. `scanf` will then try to match a comma with the next input character. If the next input character is a space, not a comma, `scanf` will terminate without reading a value for `j`.

<div class="infoBox">

<span class="warningEmoji"></span>

Although `printf` format strings often end with `\n`, putting a new-line character at the end of a `scanf` format string is usually a bad idea. To `scanf`, a new-line character in a format string is equivalent to a space; both cause `scanf` to advance to the next non-white-space character. For example, if the format string is `" %d\n"`, `scanf` will skip white space, read an integer, then skip to the next non-white-space character. A format string like this can cause an interactive program to "hang" until user enters a nonblank character.

</div>

### 3.2.4 (PROGRAM) Adding Fractions

To illustrate `scanf`'s ability to match patterns, consider the problem of reading a fraction entered by the user. Fractions are customarily written in the form *numerator/denominator*. Instead of having the user enter the numerator and denominator of a fraction as separate integers, `scanf` makes it possible to read the entire fraction. The following program, which adds two fractions, illustartes this technique.

```C
/**
 * file: addfrac.c
 * Purpose: Adds two fractions
 * Author: K. N. King
 */

#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
```

A session with this program might have the following appearance:

```shell
Enter first fraction: 5/6
Enter second fraction: 3/4
The sum is 38/24
```

Note that the resulting fraction isn't reduced to lowest terms.

---

## Q & A

<div class="QandA_question">

*Q: I've seen the `%i` conversion used to read and write integers. What's the difference between `%i` and `%d`? [p. 39]

</div>
<div class="QandA_answer">

A: In a `printf` format string, there's no difference between the two. In a `scanf` format string, however, `%d` can only match an integer written in decimal (base 10) form, while `%i` can match an integer expressed in octal (base 8), decimal, or hexadecimal (base 16). If an input number has a `0` prefix (as in `056`), `%i` treats it as an octal number, if it has a `0x` or `0X` prefix (as in `0x56`), `%i` treats it as a hex number. Using `%i` instead of `%d` to read a number can have surprising results if the user should accidentally put `0` at the beginning of the number. Because of this trap, I recommend sticking with `%d`.

</div>
<div class="QandA_question">

Q: If `printf` treats `%` as the beginning of a conversion specification, how can I print the `%` character?

</div>
<div class="QandA_answer">

A: If `printf` encounters two consecutive `%` characters in a format strring, it prints a single `%` character. For example, the statement

```C
printf("Net profit: %d%%\n", profit);
```

might print

```shell
Net profit: 10%
```

</div>
<div class="QandA_question">

Q: The `\t` escape is supposed to cause `printf` to advance to the next tab stop. How do I know how far apart tab stops are? [p. 41]

</div>
<div class="QandA_answer">

A: You don't. The effect of printing `\t` isn't defined in C; it depends on what your operating system does when asked to print a tab character. Tab stops are typically eight characters apart, but C makes no guarantee.

</div>
<div class="QandA_question">

Q: What does `scanf` do if it's asked to read a number but the user enters nonnumeric input?

</div>
<div class="QandA_answer">

A: Let's look at the following example:

```C
printf("Enter a number: ");
scanf("%d", &i);
```

Suppose that the user enters a valid number, followed by nonnumeric characters:

```shell
Enter a number: 23foo
```

In this case, `scanf` reads the `2` and the `3`, storing `23` in `i`. The remaining characters (`foo`) are left to be read by the next call of `scanf` (or some other input function). On the other hand, suppose that the input is invalid from the beginning:

```shell
Enter a number: foo
```

In this case, the value of `i` is undefined and `foo` is left for the next `scanf`.

What can we do about this sad state of affairs? Later, we'll see how to test whether a call of `scanf` has succeeded. If the call fails, we can have the program either terminate or try to recover, perhaps by discarding the offending input and asking the user to try again. (Ways to discard bad input are discussed in the Q&A section at the end of chapter 22.)

</div>
<div class="QandA_question">

Q: I don't understand how `scanf` can "put back" characters and read them again later. [p. 44]

</div>
<div class="QandA_answer">

A: As it turns out, programs don't read user input as it is typed. Instead input is stored in a hidden buffer, to which `scanf` has access. It's easy for `scanf` to put characters back into the buffer for subsequent reading. Chapter 22 discusses input buffering in more detail.

</div>
<div class="QandA_question">

Q: What does `scanf` do if the user puts punctuation marks (commas, for example) between numbers?

</div>
<div class="QandA_answer">

A: Let's look at a simple example. Suppose that we try to read a pair of integers using `scanf`:

```C
printf("Enter two numbers: ");
scanf("%d%d", &i, &j);
```

If the user enters

```shell
4,28
```

`scanf` will read `4` and store it in `i`, As it searches for the beginning of the second number, `scanf` encounters the comma. Since numbers can't begin with a comma, `scanf` returns immediately. The comma and the second number are left for the next call of `scanf`.

Of course, we can easily solve the problem by adding a comma to the format string if we're sure that the numbers will *always* be separated by a comma:

```C
printf("Enter two numbers, separated by a comma: ");
scanf("%d,%d", &i, &j);
```

</div>

## Examples

- Programs: [./cknkCh03/cknkCh03Exmp/](./cknkCh03/cknkCh03Exmp/)  

## Exercises

- Readme: [./cknkCh03/cknkCh03Exrc/README.md](./cknkCh03/cknkCh03Exrc/README.md)  
- Readme (html): [./cknkCh03/cknkCh03Exrc/cknkCh03ExrcReadme.html](./cknkCh03/cknkCh03Exrc/cknkCh03ExrcReadme.html)  
- Programs: [./cknkCh03/cknkCh03Exrc/](./cknkCh03/cknkCh03Exrc/)  

## Programming Projects

- Readme: [./cknkCh03/cknkCh03Prj/README.md](./cknkCh03/cknkCh03Prj/README.md)  
- Readme (html): [./cknkCh03/cknkCh03Prj/cknkCh03PrjReadme.html](./cknkCh03/cknkCh03Prj/cknkCh03PrjReadme.html)  
- Programs: [./cknkCh03/cknkCh03Prj/](./cknkCh03/cknkCh03Prj/)  


<hr class="chapterDivider"/>

# 4 Expressions

<div class="theQuote">

One does not learn computing by using a hand calculator, but one can forget arithmetic.

</div>

One of C's distinguishing characteristics is its emphasis on expressions--formulas that show how to compute a value--rather than statements. The simplest expressions are variables and constants. A variable represents a value to be computed as the program runs; a constant represents a value that doesn't change. More complicated expressions apply operators to operands (which are themselves expressions). In the expression `a + (b * c)`, the `+` operator is applied to the operands `a` and `(b * c)`, both of which are expressions in their own right.

Operators are the basic tools for building expressions, and C has an unusually rich collection of them. To start off, C provides the rudimentary operators that are found in most programming languages:  
- Arithmetic operators, including addition, subtraction, multiplication, and division.  
- Relational operators to perform comparisons such as "`i` is *greater than* 0."  
- Logical operators to build conditions such as "`i` is greater than 0 *and* `i` is less than 10."  

But C doesn't stop here; it goes on to provide dozens of other operators. There are so many operators, in fact, that we'll need to introduce them gradually over the first twenty chapters of this book. Mastering so many operators can be a chore, but it's essential to becoming proficient at C.

In this chapter, we'll cover some of C's most fundamental operators: the arithmetic operators (Section 4.1), the assignment operators (Section 4.2), and the increment and decrement operators (Section 4.3). Section 4.1 also explains operator precedence and associativity, which are important for expressions that contain more than one operator. Section 4.4 describes how C expressions are evaluated. Finally, Section 4.5 introduces the expression statement, an unusual feature that allows any expression to serve as a statement.

## 4.1 Arithmetic Operators

The ***arithmetic operators***--operators that perform addition, subtraction, multiplication, and division--are the workhorses of many programming languages, including C. Table 4.1 shows C's arithmetic operators.

**Table 4.1:** Arithmetic Operators

<table>
<thead>

<tr>
<th rowspan="2" style="text-align: center">

***Unary***

</th>
<th colspan="2"  style="text-align: center">

***Binary***

</th>
</tr>
<tr>
<th  style="text-align: center">

***Additive***

</th>
<th  style="text-align: center">

***Multiplicative***

</th>
</tr>

</thead>
<tbody>

<tr>
<td>

`+` unary plus

</td>
<td>

`+` addition

</td>
<td>

`*` multiplication

</td>
</tr>

<tr>
<td>

`-` unary minus

</td>
<td>

`-` subtraction

</td>
<td>

`/` division

</td>
</tr>

<tr>
<td>



</td>
<td>



</td>
<td>

`%` remainder

</td>
</tr>
</tbody>
</table>

The additive and multiplicative operators are said to be ***binary*** because they require *two* operands. The ***unary*** operators require *one* operand:

```C
i = +1;    /* + used as a unary operator */
j = -1;    /* - used as a unary operator */
```

The unary `+` operator does nothing; in fact, it didn't even exist in K & R C. It's used primarily to emphasize that a numeric constant is positive.

The binary operators probably look familiar. The only one that might not is `%`, the remainder operator. The value of `i % j` is the remainder when `i` is divided by `j`. For example, the value of `10 % 3` is 1, and the value of `12 % 4` is 0.

<span class="QandA"></span>

The binary operators in Table 4.1--with the exception of `%`--allow either integer or floating-point operands, with mixing allowed. When `int` and `float` operands are mixed, the result has type `float`. Thus, `9 + 2.5f` has the value `11.5`, and `6.7f / 2` has the value `3.35`.

The `/` and `%` operators require special care:  

<ul>
<li>

The `/` operator can produce surprising results. When both of its operands are integers, the `/` operator "truncates" the result by dropping the fractional part. Thus, the value of `1 / 2` is 0, not `0.5`.

</li>
<li>

The `%` operator requires integer operands; if either operand is not an integer, the program won't compile.

</li>
<li>

Using zero as the right operand of either `/` or `%` causes undefined behavior.

</li>
<li>

<span class="QandA"></span>

<span class="C99Symbol"></span>

Describing the result when `/` and `%` are used with negative operands is tricky. The C89 standard states that if either operand is negative, the result of a division can be rounded either up or down. (For example, the value of `-9 / 7` could be either -1 or -2). If `i` or `j` is negative, the sign of `i % j` in C89 depends on the implementation. (For example, the value of `-9 % 7` could be either -2 or 5). In C99, on the other hand, the result of a division is always truncated toward zero (so `-9 / 7` has the value -1) and the value of `i % j` has the same sign as `i` (hence the value of `-9 % 7` is -2).

</li>
</ul>

<div class="infoBox">

### Implementation-Defined Behaviour

The term ***Implementation-defined*** will arise often enough that it's worth taking a moment to discuss it. The C standard deliberately leaves parts of the language unspecified, with the understanding that an "implementation"--the software needed to compile, link, and execute programs on a particular platform--will fill in the details. As a result, the behavior of the program may vary somewhat from one implementation to another. The behavior of the `/` and `%` operators for negative operands in C89 is an example of implementation-defined behavior.

Leaving parts of the language unspecified may seem odd or even dangerous, but it reflects C's philosophy. One of the language's goals is efficiency, which often means matching the way that hardware behaves. Some CPUs yield -1 when -9 is divided by 7, while others produce -2; the C89 standard simply reflects this fact of life.

It's best to avoid writing programs that depend on implementation-defined behavior. If that's not possible, at least check the manual carefully--the C standard requires that implementation-defined behaior be documented.

</div>

### 4.1.1 Operator Precedence and Associativity

When an expression contains more than one operator, its interpretation may not be immediately clear. For example, does `i + j * k` mean "add `i` and `j`, then multiply the result by `k`," or does it mean "multiply `j` and `k`, then add `i`"? One solution to this problem is to add parentheses, writing either `(i + j) * k` or `i + (j * K)`. As a general rule, C allows the use of parentheses for grouping in all expressions.

What if we don't use parentheses, though? Will the compiler interpret `i + j * k` as `(i + j) * k` or `i + (j * k)`? Like many other languages, C user ***operator precedence*** rules to resolve this potential ambiguity. The arithmetic operators have the following relative precedence:

|||||
|---|---|---|---|
|Highest:|`+`|`-`|(unary)|
||`*`|`/`|`%`|
|Lowest:|`+`|`-`|(binary)|

Operators listed on the same line (such as `+` and `-`) have equal precedence.

When two or more operators appear in the same expression, we can determine how the compiler will interpret the expression by repeatedly putting parentheses around subexpressions, starting with high-precedence operators and working down to low-precedence operators. The following examples illustrate the result:

||||
|---|---|---|
|`i + j * k`|is equivalent to|`i + (j * k)`|
|`-i * -j`|is equivalent to|`(-i) * (-j)`|
|`+i + j / k`|is equivalent to|`(+i) + (j / k)`|

Operator precedence rules alone aren't enough when an expression contains two or more operators at the same level of precedence. In this situation, the ***associativity*** of the operators comes into play. An operator is said to be ***left associative*** if it groups from left to right. The binary arithmetic operators (`*`, `/`, `%`, `+`, and `-`) are all left associative, so

||||
|---|---|---|
|`i - j - k`|is equivalent to|`(i - j) - k`|
|`i * j / k`|is equivalent to|`(i * j) / k`|

An operator is ***right associative*** if it groups from right to left. The unary arithmetic operators (`+` and `-`) are both right associative, so

||||
|---|---|---|
|`- + i`|is equivalent to|`-(+i)`|

Precedence and associativity rules are important in many laguages, but especially so in C. However, C has so many operators (almost fifty!) that few programmers bother to memorize the precedence and associativity rules. Instead, they consult a table of operators when in doubt or just use plenty of parentheses.

### 4.1.2 (PROGRAM) Computing a UPC Check Digit

For a number of years, manufacturers of goods sold in U.S. and Canadian stores have put a bar code on each product. This code, known as a Universal Product Code (UPC), identifies both the manufacturer and the product. Each bar code represents a twelve-digit number, which is usually printed underneath the bars. For example, the following bar code comes from a package of Stouffer's French Bread Pepperoni Pizza:

<img src="./images/cknkCh04_barcode.jpg" style="width:200px; position: relative; left: 50%; right: 50%"/>

The digits `0  13800 15173  5` appear underneath the bar code. The first digit identifies the type of item (0 or 7 for most items, 2 for items that must  be weighed, 3 for drugs and health-related merchandise, and 5 for coupons). The first group of five digits identifies the manufacturer (13800 is the code for Nestlé USA's Frozen Food Division). The second group of five digits identifies the product (including package size). The final digit is a "check digit," whose only purpose is to help identify an error in the preceding digits. If the UPC is scanned incorrectly, the first 11 digits probably won't be consistent with the last digit, and the store's scanner will reject the entire code.

Here's one method of computing the check digit:

> Add the first, third, fifth, seventh, ninth, and eleventh digits.  
> Add the second, fourth, sixth, eighth, and tenth digits.  
> Multiply the first sum by 3 and add it to the second sum.  
> Subtract 1 from the total.  
> Compute the remainder when the adjusted total is divided by 10.  
> Subtract the remainder fom 9.

Using the Stouffer's example, we get <span class="displayInlineMath">$$ 0 + 3 + 0 + 1 + 1 + 3 = 8 $$</span> for the first sum and <span class="displayInlineMath">$$ 1 + 8 + 0 + 5 + 7 = 21 $$</span> for the second sum. Multiplying the first sum by 3 and adding the second yields 45. Subtracting 1 gives 44. The remainder upon dividing by 10 is 4. When the remainder is subtracted from 9, the result is 5. Here are a couple of other UPCs, in case you want to try your hand at computing the check digit (raiding the kitchen cabinet for the answer is *not* allowed):

Jif Creamy Peanut Butter (18 oz.): `0   51500 24128   ?`  
Ocean Spray Jellied Cranberry Sauce (8 oz.): `0   31200 01005   ?`

The answers: 8 for Jif and 6 for Ocean Spray.

Let's write a program that calculates the check digit for an arbitrary UPC. We'll ask the user to enter the first 11 digits of the UPC, then we'll display the corresponding check digit. To avoid confusion, we'll ask the user to enter the number in three parts: the single digit at the left, the first group of five digits, and the second group of five digits. Here's what a session with the program will look like:

```shell
Enter the first (single) digit: 0
Enter first group of five digits: 138000
Enter second group of five digits: 15173
Check digit: 5
```

Instead of reading each digit group as a *five*-digit number, we'll read it as five *one*-digit numbers. Reading the numbers as single digits is more convenient; also, we won't have to worry that one of the five-digit numbers is too large to store in an `int` variable. (Some older compilers limit the maximum value of an `int` variable to 32,767.) To read single digits, we'll use `scanf` with the `%1d` conversion specification, which matches a one-digit integer.


```C
/*
 * file: upc.c
 * Purpose: Computes a Universal Product Code check digit
 * Author: K. N. King
 */

#include <stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &d);
    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}
```

Note that the expression `9 - ((total - 1) % 10)` could have been written as `9 - (total - 1) % 10`, but the extra set of parentheses makes it easier to understand.

## 4.2 Assignment Operators

Once the value of an expression has been computed, we'll often need to store it in a variable for later use. C's `=` (***simple assignment***) operator is used for that purpose. For updating a value already stored in a variable, C provides an assortment of compound assignment operators.

### 4.2.1 Simple Assignment

The effect of the assignment <span class="displayInlineMath">$$ v = e $$</span> is to evaluate the expression `e` and copy its value into `v`. As the following examples show, `e` can be a constant, a variable, or a more complicated expression:

```C
i = 5;    /* i is now 5 */
j = i;    /* j is now 5 */
k = 10 * i + j;    /* k is now 55 */
```

If `v` and `e` don't have the same type, then the value of `e` is converted to the type of `v` as the assignment takes place:

```C
int i;
float f;

i = 72.99f;    /* i is now 72 */
f = 136;    /* f is now 136.0 */
```

We'll return to the topic of type conversion later.

In many programming languages, assignment is a *statement*; in C, however, assignment is an *operator*, just like `+`. In other words, the act of assignment produces a result, just as adding two numbers produces a result. The value of an assignment <span class="displayInlineMath">$$ v = e $$</span> is the value of `v` after the assignment. Thus, the value of `i = 72.99f` is 72 (not 72.99).

<div class="infoBox">

### Side effects

We don't normally expect operators to modify their operands, since operators in mathematics don't. Writing `i + j` doesn't modify either `i` or `j`; it simply computes the result of adding `i` and `j`.

Most C operators don't modify their operands, but some do. We say that these operators have ***side effects***, since they do more than just compute a value. The simple assignment operator is the first operator we've seen that has side effects; it modifies its left operand. Evaluating the expression `i = 0` produces the result 0 and--as a side effect--assigns 0 to `i`.

</div>

Since assignment is an operator, several assignments can be chained together:

```C
i = j = k = 0;
```

The `=` operator is right associative, so this assignment is equivalent to 

```C
i = (j = (k = 0));
```

The effect is to assign 0 first to `k`, then to `j`, and finally to `i`.

<div class="infoBox">

<span class="warningEmoji"></span>

Watch out for unexpected results in chained assignments as a result of type conversion:

```C
int i;
float f;

f = i = 33.3f;
```

`i` is assigned the value 33, then `f` is assigned 33.0 (not 33.3, as you might think).

</div>

In general, an assignment of the form `v = e` is allowed wherever a value of type `v` would be permitted. In the following example, the expression `j = i` copies `i` to `j`; the new value of `j` is then added to 1, producing the new value of `k`:

```C
i = 1;
k = 1 + (j = i);
printf("%d %d %d\n", i, j, k);    /*prints "1 1 2" */
```

Using the assignment operator in this fashion usually isn't a good idea. For one thing, "embedded assignments" can make programs hard to read. They can also be a source of subtle bugs, as we'll see in Section 4.4.

### 4.2.2 Lvalues

Most C operators allow their operands to be variables, constants, or expressions containing other operators. The assignment operator, however, requires an ***lvalue*** as its left operand. An lvalue (pronounced "L-value") represents an object stored in computer memory, not a constant or the result of a computation. Variables are lvalues; expressions such as `10` or `2 * i` are not. At this point, variables are the only lvalues that we know about; other kinds of lvalues will appear in later chapters.

Since the assignment operator requires an lvalue as its left operand, it's illegal to put any other kind of expression on the left side of an assignment expression:

```C
12 = i;    /*** WRONG ***/
i + j = 0;    /*** WRONG ***/
-i = j;    /*** WRONG ***/
```

The compiler will detect errors of this nature, and you'll get an error message such as "*invalid lvalue in assignment*."

### 3.2.3 Compound Assignment

Assignments that use the old value of a variable to compute its new value are common in C programs. The following statement, for example, adds 2 to the value stored in `i`:

```C
i = i + 2;
```

C's ***compound assignment*** operators allow us to shorten this statement and others like it. Using the `+=` operator, we simply write:

```C
i += 2;    /* same as i = i + 2; */
```

The `+=` operator adds the value of the right operand to the variable on the left.

There are nine other compound assignment operators, including the following:

`-=   *=   /=   %=`

(We'll cover the remaining compound assignment operators in a later chapter.) All compound assignment operators work in much the same way:

> `v += e` adds `v` to `e`, storing the result in `v`  
> `v -= e` subtracts `e` from `v`, storing the result in `v`  
> `v *= e` multiplies `v` by `e`, storing the result in `v`  
> `v /= e` divides `v` by `e`, storing the result in `v`  
> `v %= e` computes the remainder when `v` is divided by `e`, storing the result in `v`.  

<span class="QandA"></span>

Note that I've been careful not to say that `v += e` is "equivalent" to `v = v + e`. One problem is operator precedence: `i *= j + k` isn't the same as `i = i * j + k`. There are also rare cases in which `v += e` differs from `v = v + e` because `v` itself has a side effect. Similar remarks apply to the other compound assignment operators.

<div class="infoBox">

<span class="warningEmoji"></span>

When using the compound assignment operators, be carefull not to switch the two characters that make up the operator. Switching the characters may yield an expression that is acceptable to the compiler but that doesn't have the intended meaning. For example, if you meant to write `i += j` but you typed `i =+ j` instead, the program will still compile. Unfortunately, the latter expression is equivalent to `i = (+j)`, which merely copies the value of `j` into `i`.

</div>

The compound assignment operators have the same properties as the `=` operator. In particular, they're right associative, so the statement

```C
i += j += k;
```

means

```C
i += (j += k);
```



</body>
</html>