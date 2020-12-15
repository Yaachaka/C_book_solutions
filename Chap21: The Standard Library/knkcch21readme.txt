Chap21: The Standard Library
==============================================================================
EXERCISES

-- Exercise 1 (Section 21.1): knkcch21e01: Locate where header files are kept on 
your system. Find the nonstandard headers and determine the purpose of each.

-- Exercise 2 (Section 21.1): knkcch21e02: Having located the header files on 
your system (see Exercise 1), find a standard header in which a macro hides a 
function.

-- Exercise 3 (Section 21.1): knkcch21e03: When a macro hides a function, which 
must come first in the header file: the macro definition or the function 
prototype? Justify your answer.

-- Exercise 4 (Section 21.1): knkcch21e04: Make a list of all reserved 
identifiers in the “future library directions” section of the C99 standard. 
Distinguish between identifiers that are reserved for use only when a specific
header is included versus identifiers that are reserved for use as 
external names.

-- Exercise 5 (Section 21.1): knkcch21e05: The islower function, which belongs 
to <ctype.h>, tests whether a character is a lower-case letter. Why would the 
following macro version of islower not be legal, according to the C standard? 
(You may assume that the character set is ASCII.)

#define islower(c) ((c) >= 'a' && (c) <= 'z')

-- Exercise 6 (Section 21.1): knkcch21e06: The <ctype.h> header usually defines 
most of its functions as macros as well. These macros rely on a static array 
that’s declared in <ctype.h> but defined in a separate file. A portion of a 
typical <ctype.h> header appears below. Use this sample to answer the 
following questions.

(a) Why do the names of the "bit" macros (such as _UPPER) and the _ctype array 
begin with an underscore?

(b) Explain what the _ctype array will contain. Assuming that the character set 
is ASCII, show the values of the array elements at positions 9 (the horizontal 
tab character), 32 (the space character), 65 (the letter A), and 94 (the ^ 
character). See Section 23.5 for a description of what each macro should return.

(c) What's the advantage of using an array to implement these macros?

#define _UPPER   0x01    /* upper-case letter */
#define _LOWER   0x02    /* lower-case letter */
#define _DIGIT   0x04    /* decimal digit */
#define _CONTROL 0x08    /* control character */
#define _PUNCT   0x10    /* punctuation character */
#define _SPACE   0x20    /* white-space character */
#define _HEX     0x40    /* hexadecimal digit */
#define _BLANK   0x80    /* space character */

#define isalnum(c) (_ctype[c] & (_UPPER|_LOWER|_DIGIT) )
#define isalpha(c) (_ctype[c] & (_UPPER]|_LOWER) )
#define iscntrl(c) (_ctype[c]) & _CONTROL)
#define isdigit(c) (_ctype[c] & _DIGIT)
#define isgraph(c) (_ctype[c] & (_PUNCT|_UPPER|_LOWER|_DIGIT))
#define islower(c) (_ctype[c] & _LOWER)
#define isprint(c) (_ctype[c] & (_BLANK|_PUNCT|_UPPER|_LOWER|_DIGIT))
#define ispunct(c) (_ctype[c] & _PUNCT)
#define isspace(c) (_ctype[c] & _SPACE)
#define isupper(c) (_ctype[(c] & _UPPER)
#define isxdigit(c) (_ctype[c] & (_DIGIT|_HEX))

-- Exercise 7 (Section 21.2): knkcch21e07: In which standard header would you 
expect to find each of the following?

(a) A function that determines the current day of the week
(b) A function that tests whether a character is a digit
(c) A macro that gives the largest unsigned int value
(d) A function that rounds a floating-point number to the next higher integer
(e) A macro that specifies the number of bits in a character
(f) A macro that specifies the number of significant digits ina double value
(g) A function that searches a string for a particular character
(h) A function that opens a file for reading
==============================================================================
PROGRAMMING PROJECTS

-- Project : knkcch21proj01: Write a program that declares the s structure 
(see Section 21.4) and prints the sizes and offsets of the a, b, and c members. 
(Use sizeof to find sizes; use of offsetof to find offsets.) Have the program 
print the size of the entire structure as well. From this information, determine 
whether or not the structure has any holes. If it does, describe the location 
and size of each.
==============================================================================