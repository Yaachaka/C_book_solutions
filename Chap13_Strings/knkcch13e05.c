/*
@@@@ PROGRAM NAME: knkcch13e05.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: 
(a) Write a function named capitalize that capitalizes all letters in its argument. The
argument will be a null-terminated string containing arbitrary characters. not just letters.
Use array subscripting to access the characters in the string. Hint: Use the toupper 
function to convert each character to upper-case.

(b) Rewrite the capitalize function, this time using pointer arithmetic to access the
characters in the string.
*/
#include<stdio.h>
#include<ctype.h>  //toupper().
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
void capitalize(char a[],int n);
void capitalize_ptr(char a[],int n);
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int n=10;
	char a1[10]="Hello!!", a2[10]="Joker!!";

	capitalize(a1,n);
	printf("(a) Using array subscripting: a1[n] = %s.\n",a1);

	capitalize_ptr(a2,n);
	printf("(b) Using pointer arithmetic: a2[n] = %s.",a2);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
void capitalize(char a[],int n)
{
	int i=0;

	while((a[i++]=toupper(a[i]))!= '\0' && i<n-1)
	;
}
//---------------------------------------------------------------------------
void capitalize_ptr(char *a,int n)
{
	char *p=a;

	while((*p++=toupper(*p))!='\0' && p-a<n-1)
	;
}
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
(a) Using array subscripting: a1[n] = HELLO!!.
(b) Using pointer arithmetic: a2[n] = JOKER!!.
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