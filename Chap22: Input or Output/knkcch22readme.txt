Chap22: Input/Output
============================================================================
EXERCISES

--Exercise 1 (Section 22.1): knkcch22e01: Indicate whether each of the following 
files is more likely to contain text data or binary data:
(a) A file of object code produced by a C compiler
(b) A program listing produced by a C compiler
(c) An email message sent from one computer to another
(d) A file containing a graphics image

--Exercise 2 (Section 22.2): knkcch22e02: Indicate which mode string is most 
likely to be passed to fopen in each of the following situations:
(a) A database management system opens a file containing records to be updated.
(b) A mail program opens a file of saved messages so that it can add additional 
messages to the end.
(c) A graphics program opens a file containing a picture to be displayed on the 
screen.
(d) An operating system command interpreter opens a “shell script’ (or “batch 
file’) containing commands to be executed.

--Exercise 3 (Section 22.2): knkcch22e03: Find the error in the following 
program fragment and show how to fix it.
	FILE *fp;
	
	if (fp = fopen(filename, "r")) {
		read characters until end-of-file
	}
	fclose(fp);

--Exercise 4 (Section 22.3): knkcch22e04: Show how each of the following numbers 
will look if displayed by printf with %#012.5g as the conversion specification:
(a) 83.7361
(b) 29748.6607
(c) 1054932234.0
(d) 0.0000235218

--Exercise 5 (Section 22.3): knkcch22e05: Is there any difference between the 
printf conversion specifications %.4d and %04d? If so, explain what it is.

--Exercise 6 (Section 22.3): knkcch22e07: Write a call of printf that prints

	1 widget

if the widget variable(of type int) has the value 1. and

	n widgets

otherwise, where n is the value of widget. You are not allowed to use the if 
statement or any other statement; the answer must be a single call of printf.

--Exercise 7 (Section 22.3): knkcch22e07: Suppose that we call scanf as follows: 
	n = scanf("%d%f%d", &i, &x, &j);
(i, j, and n are int variables and x is a float variable.) Assuming that the 
input stream contains the characters shown, give the values of i, j, n, and x 
after the call. In addition, indicate which characters were consumed by the call. 
(a) 10●20●30□
(b) 1.0●2.0●3.0□
(c) 0.1●0.2●0.3□
(d) .1●.2●.3□

--Exercise 8 (Section 22.3): knkcch22e08: In previous chapters, we’ve used the 
scanf format string " %c" when we wanted to skip white-space characters and read 
a nonblank character. Some programmers use "%1s" instead. Are the two techniques 
equivalent? If not, what are the differences?

--Exercise 9 (Section 22.4): knkcch22e09: Which one of the following calls is 
not a valid way of reading one character from the standard input stream?
(a) getch()
(b) getchar()
(c) getc(stdin)
(d) fgetc(stdin)

--Exercise 10 (Section 22.4): knkcch22e10: The fcopy.c program has one minor 
flaw: it doesn’t check for errors as it’s writing to the destination file. 
Errors during writing are rare, but do occasionally occur (the disk might become 
full, for example). Show how to add the missing error check to the program, 
assuming that we want it to display a message and terminate immediately if an 
error occurs.

--Exercise 11 (Section 22.4): knkcch22e11: The following loop appears in the 
fcopy.c program:
	while ((ch = getc(source _fp)) != EOF)
		putc(ch, dest_fp);
Suppose that we neglected to put parentheses around ch = getc (source_fp):
	while (ch = getc(source_fp) != EOF)
		putc(ch, dest_fp);
Would the program compile without an error? If so, what would the program do 
when it’s run?

--Exercise 12 (Section 22.4): knkcch22e12: Find the error in the following 
function and show how to f1x it.
	int count_periods(const char *filename)
	{
		FILE *fp;
		int n = 0;
		if ((fp = fopen(filename, "r")) != NULL) {
			while (fgetc(fp) != EOF)
				if (fgetc(fp) == '.')
					n++ ;
			fclose (fp) ;
		}
		return n;
	}

--Exercise 13 (Section 22.4): knkcch22e13: Write the following function:
	int line_length(const char *filename, int n);
The function should return the length of line n in the text file whose name is 
filename (assuming that the first line in the file is line 1). If the line 
doesn’t exist, the function should return 0).

--Exercise 14 (Section 22.5): knkcch22e14: (a) Write your own version of the 
fgets function. Make it behave as much like the real fgets function as possible; 
in particular, make sure that it has the proper return value. To avoid conflicts 
with the standard library, don’t name your function fgets.

(b) Write your own version of fputs, following the same rules as in part (a).

--Exercise 15 (Section 22.7): knkcch22e15: Write calls of fseek that perform the 
following file-positioning operations on a binary file whose data is arranged in 
64-byte “records.” Use fp as the file pointer in each case.
(a) Move to the beginning of record n. (Assume that the first record in the 
file is record 0.)
(b) Move to the beginning of the last record in the file.
(c) Move forward one record.
(d) Move backward two records.

--Exercise 16 (Section 22.8): knkcch22e16: Assume that str is a String that 
contains a “sales rank” immediately preceded by the # symbol (other characters 
may precede the # and/or follow the sales rank). A sales rank is a series of 
decimal digits possibly containing commas, such as the following examples:

989
24,675
1,162,620

Write a call of sscanf that extracts the sales rank (but not the # symbol) and 
stores it in a string variable named sales_rank.
============================================================================
PROGRAMMING PROJECTS

--Project 1: knkcch22proj01: Extend the canopen.c program of Section 22.2 so 
that the user may put any number of file names on the command line:

canopen foo bar baz

The program should print a separate can be opened or can't be opened message for 
each file. Have the program terminate with status EXIT_FAILURE if one or more of 
the files can’t be opened.

--Project 2: knkcch22proj02: Write a program that converts all letters in a file 
to upper case. (Characters other than letters shouldn't be changed.) The program 
should obtain the file name from the command line and wrile its outpul to stdout.

--Project 3: knkcch22proj03: Write a program named fcat that “concatenates” any 
number of files by writing them to standard output, one after the other, with no 
break between files. For example, the following command will display the files 
f1.c, f2.c, and f3.c on the screen:

feat fl.c £2.c £3.c

fcat should issue an error message if any file can’t be opened. Hint: Since it 
has no more than one file open at a time, fcat needs only a single file pointer 
variable. Once it’s finished with a file, fcat can use the same variable when it 
opens the next file.

--Project 4: knkcch22proj04: (a) Write a program that counts the number of 
characters in a text file.

(b) Write a program that counts the number of words in a text file. (A “word” is 
any sequence of non-white-space characters.)

(c) Write a program that counts the number of lines in a text file.

Have each program obtain the file name from the command line.

--Project 5: knkcch22proj05: The xor.c program of Section 20.1 refuses to 
encrypt bytes that--in original or encrypted form--are control characters. We 
can now remove this restriction. Modify the program so that the names of the 
input and output files are command-line arguments. Open both files in binary 
mode, and remove the test that checks whether the original and encrypted 
characters are printing characters.

--Project 6: knkcch22proj06: Write a program that displays the contents of a 
file as bytes and as characters. Have the user specify the file name on the 
command line. Here’s what the output will look like when the program is used to 
display the pun.c file of Section 2.1:

	Offset              Bytes                Characters
	------   -----------------------------   ----------
	     0   23 69 6E 63 6C 75 64 65 20 3C   #include <
	    10   73 74 64 69 6F 2E 68 3E OD OA   stdio.h>..
	    20   OD OA 69 6E 74 20 6D 61 69 6E   ..int main
	    30   28 76 6F 69 64 29 OD 0A 7B OD   (void)..{.
	    40   OA 20 20 70 72 69 GE 74 66 28   .  printf(
	    50   22 54 6F 20 43 2C 20 6F 72 20   "To C, or
	    60   6E 6F 74 20 74 6F 20 43 3A 20   not to C:
	    70   74 68 61 74 20 69 73 20 74 68   that is th
	    80   65 20 71 75 65 73 74 69 6F 6E   e question
	    90   2E 5C 6E 22 29 3B OD OA 20 20   .\n");..
	   100   72 65 74 75 72 6E 20 30 3B OD   return 0;.
	   110   OA 7D                           .}

Each line shows 10 bytes from the file, as hexadecimal numbers and as characters. 
The number in the Offset column indicates the position within the file of the 
first byte on the line. Only printing characters (as determined by the isprint 
function) are displayed: other characters are shown as periods. Note that the 
appearance of a text file may vary, depending on the character set and the 
operating system. The example above assumes that pun.c is a Windows file. so OD 
and OA bytes (the ASCII carriage-return and line-feed characters) appear at the 
end of each line. Hint: Be sure to open the file in "rb" mode.

--Project 7: knkcch22proj07: Of the many techniques for compressing the contents 
of a file, one of the simplest and fastest is known as run-length encoding. This 
technique compresses a file by replacing sequences of identical bytes by a pair 
of bytes: a repetition count followed by a byte to be repeated. For example, 
suppose that the file to be compressed begins with the following sequence of 
bytes (shown in hexadecimal):
46 6F 6F 20 62 61 72 21 21 21 20 20 20 20 20
The compressed file will contain the following bytes:
01 46 02 6F 01 20 01 62 01 61 01 72 03 21 05 20
Run-length encoding works well if the original file contains many long sequences 
of identical bytes. In the worst case (a file with no repeated bytes), 
run-length encoding can actually double the length of the file.

(a) Write a program named compress_file that uses run-length encoding to 
compress a file. To run compress_file, we'd use a command of the form

compress file original-file

compress_file will write the compressed version of original-file to 
original-file.rle.

For example, the command

compress_file foo.txt

will cause compress_file to write a compressed version of foo.txt to a file 
named foo.txt.rle. Hint: The program described in Programming Project 6 could be 
useful for debugging.

(b) Write a program named uncompress_file that reverses the compression 
performed by the compress_file program. The uncompress_file command will have 
the form

uncompress_file compressed-file

compressed-file should have the extension .rle. For example, the command

	uncompress_file foo.txt.rle

will cause uncompress_file to open the file foo.txt.rle and write an 
uncompressed version of its contents to foo.txt. uncompress_file should display 
an error message if its command-line argument doesn’t end with the .rle 
extension.

--Project 8: knkcch22proj08: Modify the inventory.c program of Section 16.3 by 
adding two new operations:
• Save the database in a specified file.
• Load the database from a specified file.
Use the codes d (dump) and r (restore), respectively, to represent these 
operations. The interaction with the user should have the following appearance:
	Enter operation code: d
	Enter name of output file: inventory.dat

	Enter operation code: r
	Enter name of input file: inventory.dat
Hint: Use fwrite to write the array containing the parts to a binary file. Use 
fread to restore the array by reading it from a file.

--Project 9: knkcch22proj09: Write a program that merges two files containing 
part records stored by the inventory.c program (sce Programming Project 8). 
Assume that the records in each file are sorted by part number, and that we want 
the resulting file to be sorted as well. If both files have a part with the same 
number, combine the quantities stored in the records. (As a consistency check, 
have the program compare the part names and print an error message if they don't 
match.) Have the program obtain the names of the input files and the merged file 
from the command line.

--Project 10: knkcch22proj10: Modify the inventory2.c program of Section 17.5 by 
adding the d (dump) and r (restore) operations described in Programming Project 
8. Since the part structures aren’t stored in an array, the d operation can’t 
save them all by a single call of fwrite. Instead, it will need to visit each 
node in the linked list, writing the part number, part name, and quantity on 
hand to a file. (Don’t save the next pointer; it won't be valid once the program 
terminates.) As it reads parts from a file, the r operation will rebuild the 
list one node at a time.

--Project 11: knkcch22proj11: Write a program that reads a date from the command 
line and displays it in the following form:
	September 13, 2010
Allow the user to enter the date as either 9-13-2010 or 9/13/2010; you may 
assume that there are no spaces in the date. Print an error message if the date 
doesn’t have one of the specified forms. Hint: Use sscanf to extract the month, 
day, and year from the command-line argument.

--Project 12: knkcch22proj12: Modify Programming Project 2 from Chapter 3 so 
that the program reads a series of items from a file and displays the data in 
columns. Each line of the file will have the following form:
item, price, mm/dd/yyyy
For example, suppose that the file contains the following lines:
583,13.5,10/24/2005
3912,599.99,7/27/2008
The output of the program should have the following appearance:
 Item         Unit         Purchase
              Price        Date
 583          $  13.50     10/24/2005
 3912         $ 599.99     7/27/2008
Have the program obtain the file name from the command line.

--Project 13: knkcch22proj13: Modify Programming Project 8 from Chapter 5 so 
that the program obtains departure and arrival times from a file named 
flights.dat. Each line of the file will contain a departure time followed by an 
arrival time, with one or more spaces separating the two. Times will be 
expressed using the 24-hour clock. For example, here’s what flights.dat might 
look like if it contained the flight information listed in the original project:

8:00 10:16
9:43 11:52
11:19 13:31
12:47 15:00
14:00 16:08
15:45 17:55
19:00 21:20
21:45 23:58

--Project 14: knkcch22proj14: Modify Programming Project 15 from Chapter 8 so 
that the program prompts the user to enter the name of a file containing the 
message to be encrypted:
	Enter name of file to be encrypted: message.txt
	Enter shift amount (1-25): 3
The program then writes the encrypted message to a file with the same name but 
an added extension of .enc. In this example, the original file name is 
message.txt, so the encrypted message will be stored in a file named 
message.txt.enc. There’s no limit on the size of the file to be encrypted or on 
the length of each line in the file.

--Project 15: knkcch22proj15: Modify the justify program of Section 15.3 so 
that it reads from one text file and writes to another. Have the program obtain 
the names of both files from the command line.

--Project 16: knkcch22proj16: Modify the fcopy.c program of Section 22.4 so 
that it uses fread and fwrite to copy the file in blocks of 512 bytes. 
(The last block may contain fewer than 512 bytes, of course.)

--Project 17: knkcch22proj17: Write a program that reads a series of phone 
numbers from a file and displays them in a standard format. Each line of the 
file will contain a single phone number, but the numbers may be in a variety of 
formats. You may assume that each line contains 10 digits, possibly mixed with 
other characters (which should be ignored). For example, suppose that the file 
contains the following lines:
	404.817.6900
	(215) 686-1776
	312-746-6000
	877 275 5273
	6173434200
The output of the program should have the following appearance:
	(404) 817-6900
	(215) 686-1776
	(312) 746-6000
	(877) 275-5273
	(617) 343-4200
Have the program obtain the file name from the command line.

--Project 18: knkcch22proj18: Write a program that reads integers from a text 
file whose name is given as a command-line argument. Each line of the file may 
contain any number of integers (including none) separated by one or more spaces. 
Have the program display the largest number in the file, the smallest number, 
and the median (the number closest to the middle if the integers were sorted). 
If the file contains an even number of integers, there will be two numbers in 
the middle; the program should display their average (rounded down). You may 
assume that the file contains no more than 10,000 integers. Hint: Store the 
integers in an array and then sort the array.

--Project 19: knkcch22proj19: (a) Write a program that converts a Windows text 
file to a UNIX text file. (See Section 22.1 for a discussion of the differences 
between Windows and UNIX text files.)
(b) Write a program that converts a UNIX text file to a Windows text file.
In each case, have the program obtain the names of both files from the command 
line. Hint: Open the input file in "rb" mode and the output file in "wb" mode.
============================================================================