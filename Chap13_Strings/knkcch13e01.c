/*
@@@@ PROGRAM NAME: knkcch13e01.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: The following function calls supposedly write a single new-line character, but some are
incorrect. Identify which calls don’t work and explain why.

(a) printf("%c", '\n');     (g) putchar('\n');
(b) printf("%c", "\n");     (h) putchar("\n") ;
(c) printf("%s", '\n');     (i) puts('\n');
(d) printf("%s", "\n");     (j) puts("\n") ;
(e) printf('\n');           (k) puts("") ;
(f) printf("\n");
*/
#include<stdio.h>
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	printf("(a)");
	printf("%c", '\n');  //Works. Conversion specifier looks for a character, and the value passed is character.
	printf("(b)");
	//printf("%c", "\n");  //Doesn't work. Conversion specifier looks for a character, and the value passed is string (pointer to string).
	printf("(c)");
	//printf("%s", '\n');  //Doesn't work. Conversion specifier looks for a string (pointer to string literal), and the value passed is a character (integer).
	printf("(d)");
	printf("%s", "\n");  //Works. Conversion specifier looks for a string (pointer to string literal), and the value passed is a string (pointer to string).
	printf("(e)");
	//printf('\n');  //Doesn't work. The printf( ) function expects pointer to string literal and we are passing a character (an integer). 
	printf("(f)");
	printf("\n");  //Works. The printf( ) function expects pointer to string literal and we are passing a pointer to string literal. 
    printf("(g)");
	putchar('\n');  //Works. The function expects a character and we are passing a character (integer).
    printf("(h)");
	//putchar("\n") ;  //Doesn't work. The function expects a character and we are passing a string literal.
	printf("(i)");
	//puts('\n');  //Doesn't work. The function expects a pointer to string literal, but we are passing a character.
	printf("(j)");
	puts("\n");  //Works. The function expects a pointer to a string literal and we are passing a string literal (The poointer to string literal).
	printf("(k)");
	puts("");  //Works. The function expects a pointer to a string literal and we are passing a string literal (The poointer to string literal). In this case the null characters.
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
(a)
(b)(c)(d)
(e)(f)
(g)
(h)(i)(j)

(k)

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