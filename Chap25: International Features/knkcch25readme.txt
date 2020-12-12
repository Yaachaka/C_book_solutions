Chap25: International Features
============================================================================
EXERCISES

--Exercise 1 (Section 25.1): knkcch25e01:Determine which locales are supported 
by your compiler.

--Exercise 2 (Section 25.2): knkcch25e02:The Shift-JIS encoding for kanji 
requires either one or two bytes per character. If the first byte of a character 
is between 0x81 and 0x9f or between 0xe0 and Oxef, a second byte is required. 
(Any other byte is treated as a whole character.) The second byte must be 
between 0x40 and 0x7e or between 0x80 and Oxfc. (All ranges are inclusive.) For 
eachof the following strings, give the value that the mbcheck function of 
Section 25.2 will return when passed that string as its argument, assuining that 
multibyte characters are encoded using Shift-JIS in the current locale.
(a) "\x05\x87\x80\x36\xed\xaa"
(b) "\x20\xe4\x50\x88\x3f"
(c) "\xde\xad\xbe\xef"
(d) "\x8a\x60\x92\x74\x41"

--Exercise 3 (Section 25.2): knkcch25e03:One of the useful properties of UTF-8 
is that no sequence of bytes within a multibyte character can possibly represent 
another valid multibyte character. Does the Shift-JIS encoding for kanji 
(discussed in Exercise 2) have this property?

--Exercise 4 (Section 25.2): knkcch25e04:Give a C string literal that represents 
each of the following phrases. Assume that the charactcrs à, é, é, ê, î, ô, û, 
and ü are represented by single-byte Latin-1 characters. (You'll need to look up 
the Latin-1 code points for these characters.) For example, the phrase déjà vu 
could be represented by the string "d\xe9j\xe0 vu".
(a) Côte d'Azur
(b) crème brûlée
(c) crème fraîche
(d) Fahrvergnügen
(e) tête-à-tête

--Exercise 5 (Section 25.2): knkcch25e05:Repeat Exercise 4, this time using the 
UTF-8 multibyte encoding. For example. the phrase déjà vu could be represented 
by the string "d\xc3\xa9j\xc3\xa0 vu".

--Exercise 6 (Section 25.3): knkcch25e06:Modify the following program fragment 
by replacing as many characters as possible by trigraphs.
	while ((orig char = getchar()) != EOF) {
		new_char = orig_char ^ KEY;
		if (isprint(orig_char) && isprint(new_char))
			putchar(new_char);
		else
			putchar(orig_char);
	}

--Exercise 7 (Section 25.3): knkcch25e07: (C99) Modify the program fragment in 
Exercise 6 by replacing as many tokens as possible by digraphs and macros 
defined in <iso0646.h>.

============================================================================
PROGRAMMING PROJECTS

--Project 1: knkcch25proj01: Write a program that tests whether your 
compiler’s "" (native) locale is the same as its "C" locale.

--Project 2: knkcch25proj02: Write a program that obtains the name of a locale 
from the command line and then displays the values stored in the corresponding 
lconv structure. For example, if the locale is "fi_FI" (Finland), the output of 
the program might look like this:
	decimal_point = ","
	thousands_sep = " "
	grouping = 3
	mon_decimal_point = ","
	mon thousands_sep "ou
	mon_grouping = 3
	positive_sign = ""
	negative_sign = "-"
	currency_symbol = "EUR"
	frac_digits = 2
	p_cs_precedes = 0
	n_cs_precedes = 0
	p_sep_by_space = 2
	n_sep_by_space = 2
	p_sign_posn = 1
	n_sign_posn = 1
	int_curr_symbol = "EUR "
	int_frac_digits = 2
	int_p_cs_precedes = 0
	int_n_cs_precedes = 0
	int_p_sep_by_space = 2
	int_n_sep_by_space = 2
	int_p_sign_posn = 1
	int_n_sign_posn = 1
For readability, the characters in grouping and mon_grouping should be displayed 
as decimal numbers.
============================================================================