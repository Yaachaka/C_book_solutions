/*
@@@@ PROGRAM NAME: knkcch07e04.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: If c is a variable of type char, which 
one of the following statements is illegal?
(a) i+=c; // i has type int
(b) c=2*c-1;
(c) putchar(c);
(d) printf(c);
*/
#include<stdio.h>
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	int i=75;
	char c='A';
	
	printf("i=%d   c=%c",i,c);
	
	i+=c;
	printf("\n(a) i+=c; i=%d, c=%c",i,c);// i has type int
	c=2*c-1;
	printf("\n(b) c=2*c-1; c as integer=%d, c=%c",c,c);
	printf("\n(c) putchar(c); ");putchar(c);
	//printf("\n(d) printf(c); ");printf(c);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial 1:
knkcch07e04.c:27:37: warning: incompatible integer to pointer conversion passing 'char' to
      parameter of type 'const char *'; take the address with & [-Wint-conversion]
        printf("\n(d) printf(c); ");printf(c);
                                           ^
                                           &
/data/data/com.termux/files/usr/include/stdio.h:130:24: note: passing argument to
      parameter '__fmt' here
int printf(const char* __fmt, ...) __printflike(1, 2);
                       ^
knkcch07e04.c:27:37: warning: format string is not a string literal (potentially insecure)
      [-Wformat-security]
        printf("\n(d) printf(c); ");printf(c);
                                           ^
knkcch07e04.c:27:37: note: treat the string as an argument to avoid this
        printf("\n(d) printf(c); ");printf(c);
                                           ^
                                           "%s",
2 warnings generated.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
i=75   c=A
(a) i+=c; i=140, c=A
(b) c=2*c-1; c as integer=129, c=�
(c) putchar(c); �
.....: *** [......:..: knkc] Segmentation fault

@@@@ Trial 2: On commenting option (d)
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
i=75   c=A
(a) i+=c; i=140, c=A
(b) c=2*c-1; c as integer=129, c=�
(c) putchar(c); �
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------