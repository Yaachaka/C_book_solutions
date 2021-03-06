/*
@@@@ PROGRAM NAME: knkcch13e04.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
Modify the read_line function in each of the following ways:
(a) Have it skip white space before beginning to store input characters.
(b) Have it stop reading at the first white-space character. Hint: To determine whether or
not a character is white space, call the isspace function.
(c) Have it stop reading at the first new-line character, then store the new-line 
character in the string.
(d) Have it leave behind characters that it doesn’t have room to store.
*/
#include<stdio.h>
#include<stdbool.h>  //bool, true, false
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
int read_line(char str[],int n);
int read_line_a(char str[],int n);
int read_line_b(char str[],int n);
int read_line_c(char str[],int n);
int read_line_d(char str[],int n);
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char str[10];
	int n=10;

	printf("Original readline function: ");
	read_line(str,n);
	printf("str= %s",str);
	
	n=10;  //if we read more characters than str can store in read_line function n is becoming 0 for some reason. Therefore reinitialising.

	printf("\n(a) Modified readline function: Ignore leading spaces.\n");
	read_line_a(str,n);
	printf("str= %s",str);

	printf("\n(b) Modified readline function: Stop reading at first white space character.\n");
	read_line_b(str,n);
	printf("str= %s",str);

	printf("\n(c) Modified readline function: Stop reading at new line character and include new line character.\n");
	read_line_c(str,n);
	printf("str= %s",str);

	printf("\n(d) Modified readline function: Have it leave behind characters that it doesn’t have room to store.\n");
	read_line_d(str,n);
	printf("str= %s",str);

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
int read_line(char str[],int n)  //The original function
{
	int ch, i=0;

	while((ch=getchar()) != '\n' && ch !=EOF)
		if(i<n)
			str[i++]=ch;
	str[i]='\0';

	return i;
}
//---------------------------------------------------------------------------
int read_line_a(char str[],int n)  //Leading spaces are ignored
{
	int ch, i=0;
	bool first_non_space_char=false;

	while((ch=getchar()) != '\n' && ch !=EOF)
	{
		if(ch != ' ' && !first_non_space_char)
			first_non_space_char=true;

		if(i<n && first_non_space_char)
			str[i++]=ch;
	
	}
	str[i]='\0';

	return i;
}
//---------------------------------------------------------------------------
int read_line_b(char str[],int n)  //Stop reading at first white space character.
{
	int ch, i=0;

	while((ch=getchar()) != '\n' && ch !=EOF && ch != ' ')
		if(i<n)
			str[i++]=ch;
	str[i]='\0';

	return i;
}
//---------------------------------------------------------------------------
int read_line_c(char str[],int n)  //Stop reading at new line character and include the new line character to the string.
{
	int ch, i=0;

	while((ch=getchar()) != '\n' && ch !=EOF)
		if(i<n-2)  // '\n' at index 8 and '\0' at index 9, incase too many characters are scanned.
			str[i++]=ch;
	str[i++]='\n';
	str[i]='\0';

	return i;
}
//---------------------------------------------------------------------------
int read_line_d(char str[],int n)  //Have it leave behind characters that it doesn’t have room to store.
{
	int ch, i=0;

	while((ch=getchar()) != '\n' && ch !=EOF)
		if(i<n-1)  // '\0' at index 9 is necessary incase too many characters are scanned. 
			str[i++]=ch;
	str[i]='\0';

	return i;
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Original readline function: Hello there.
str= Hello ther
(a) Modified readline function: Ignore leading spaces.
    Joker
str= Joker
(b) Modified readline function: Stop reading at first white space character.
how are you?
str= how
(c) Modified readline function: Stop reading at new line character and include new line character.
str= are you?

(d) Modified readline function: Have it leave behind characters that it doesn’t have room to
store.
Where are you going tomorrow?
str= Where are
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial2:
@@@@ Trial3:
@@@@ Trial4:
@@@@ Trial5:
@@@@ Trial6:
@@@@ Trial7:
@@@@ Trial8:
@@@@ Trial9:
*/
//---------------------------------------------------------------------------