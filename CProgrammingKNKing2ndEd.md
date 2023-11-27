<style>
    h1
    {
    }

    body
    {
        width: 96%;
    }

    .theQuote
    {
        font-style: italic;
        font-weight: bold;
    }

    .chapterDivider
    {
        width: 90%;
        height: 8px;
        border-radius: 5px;
        background: radial-gradiant(circle, violet, indigo, blue, green, yellow, orange, red);
    }

    .infoBox
    {
        /* Inner border */
        border-width: 4px;
        border-style: ridge;
        border-color: #000;
        padding: 2px;
        background: rgb(208, 225, 225);
    }
</style>

# Title of the Book: C Programming A Modern Approach
## Edition: Second Edition (2008)
### Author: K.N.King

<i>A clear, complete, and engaging presentation of the C programming language -- now with coverage of both C89 and C99.</i>

<div class="theQuote">In computing, turning the obvious into the useful is a living definition of the word "frustration."</div>

<hr class="chapterDivider"/>

# 1 Introducing C

<div class="theQuote">When someone says "I want a programming language in which I need only say what I wish done," give him a lollipop."</div>

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


