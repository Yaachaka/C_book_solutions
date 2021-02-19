/*
@@@@ PROGRAM NAME: knkcch10proj07.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a program that prompts the user for a number and 
then displays the number, using characters to simulate the effect of a seven-segment 
display:

	Enter a number: 491-9014
	      _         _    _
	|_|  |_|    |  |_|  | |    |  |_|
	  |   _|    |   _|  |_|    |    |
	  
Characters other than digits should be ignored. Write the program so that the maximum
number of digits is controlled by a macro named MAX_DIGITS, which has the value 10. If
the number contains more than this number of digits, the extra digits are ignored. 
Hints: Use two external arrays. One is the segments array (see Exercise 6 in Chapter 8), 
which stores data representing the correspondence between digits and segments. The other 
array, digits, will be an array of characters with 4 rows (since each segmented digit is 
four characters high) and MAX_DIGITS * 4 columns (digits are three characters wide, but 
a space is needed between digits for readability). Write your program as four functions: 
main, clear_digits_array, process_digit, and print_digits_array. Here are the prototypes 
for the latter three functions:

	void clear_digits_array (void);
	void process_digit(int digit, int position);
	void print_digits_array(void);

clear_digits_array will store blank characters into all elements of the digits
array. process_digit will store the seven-segment representation of digit into a
specified position in the digits array (positions range from 0 to MAX_DIGITS - 1).
print_digits_array will display the rows of the digits array, each on a single line,
producing output such as that shown in the example.
*/
#include<stdio.h>
//-----------------------------------------------------------------------------
#define MAX_DIGITS 10  //Maximum number of digits.

char segmented_digits[3][30]=
{
	//    0           1           2           3           4           5           6           7           8           9
	{' ','_',' ',' ',' ',' ',' ','_',' ',' ','_',' ',' ',' ',' ',' ','_',' ',' ','_',' ',' ','_',' ',' ','_',' ',' ','_',' '},
	{'|',' ','|',' ',' ','|',' ','_','|',' ','_','|','|','_','|','|','_',' ','|','_',' ',' ',' ','|','|','_','|','|','_','|'},
	{'|','_','|',' ',' ','|','|','_',' ',' ','_','|',' ',' ','|',' ','_','|','|','_','|',' ',' ','|','|','_','|',' ','_','|'}
};
//-----------------------------------------------------------------------------
void print_digits(char num_digits[], short count);
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	printf("Enter a number (Max. 10 digits): ");

	char ch, num_digits[MAX_DIGITS];
	short count=0;

	//getting number from user
	for(short i=0;i<MAX_DIGITS;i++)
	{
		scanf("%c",&ch);
		if(ch=='\n')
			break;
		if(ch>='0' && ch<='9')
			num_digits[count++]=ch;
		
	}

	//Display the number in 7-segmented digits form.
	print_digits(num_digits,count);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
void print_digits(char num_digits[], short count)
{
	for(short j=0;j<3;j++)  //3 lines (rows) needed to print a digit in segmented form.
	{
		for(short i=0;i<count;i++)  //Each digit of the number
		{
			short digit=num_digits[i]-'0';
			for(short k=digit*3;k<(digit*3+3);k++)  //3 colums needed to print a digit in segmented form. And a space between digits.
			{
				printf("%c",segmented_digits[j][k]);
			}
			printf(" ");
		}
		printf("\n");
	}
	
	
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a number (Max. 10 digits): 18/02/2021
     _   _   _   _   _   _
  | |_| | |  _|  _| | |  _|   |
  | |_| |_| |_  |_  |_| |_    |

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a number (Max. 10 digits): 01234567898888
 _       _   _       _   _   _   _   _
| |   |  _|  _| |_| |_  |_    | |_| |_|
|_|   | |_   _|   |  _| |_|   | |_|  _|

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a number (Max. 10 digits): BOND 007
 _   _   _
| | | |   |
|_| |_|   |

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial4:
@@@@ Trial5:
@@@@ Trial6:
*/
//---------------------------------------------------------------------------